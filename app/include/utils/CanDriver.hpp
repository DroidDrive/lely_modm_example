#pragma once

#include <modm/board.hpp>

#include <iomanip>
#include <ios>

class CanDriver {
public:
    CanDriver(uint8_t id) {
        id_ = id;
        MODM_LOG_INFO << "Initializing Can" << (uint32_t)id << " ..." << modm::endl;
        // Initialize Can
        Can1::connect<GpioD1::Tx, GpioD0::Rx>(Gpio::InputType::PullUp);
        Can1::initialize<Board::SystemClock, 125_kbps>(9);
        MODM_LOG_INFO << "Setting up Filter for Can ..." << modm::endl;
        // Receive every message
        CanFilter::setFilter(0, CanFilter::FIFO0, CanFilter::StandardIdentifier(0), CanFilter::StandardFilterMask(0));
    }

    bool hasReceived() { return Can1::isMessageAvailable(); }

    bool write(const uint16_t id, const uint8_t* data, const uint32_t size) {
        bool success = false;

        if (size <= 8) {
            modm::can::Message msg(id, size);
            msg.setExtended(false);
            std::memcpy(&msg.data[0], &data[0], size);
            while (!Can1::isReadyToSend()) {
                /// ...
            }
            Can1::sendMessage(msg);
            // displayMessage(msg);
            success = true;
        }
        return success;
    }

    bool read(modm::can::Message& msg) {
        bool status = false;
        if (!hasReceived()) {
            return false;
        }
        if (Can1::getMessage(msg)) {
            candump(msg);
            status = true;
        }
        return status;
    }

    void candump(const modm::can::Message& msg_) {
        MODM_LOG_INFO << "-> can" << (int32_t)id_ << " ";
        std::stringstream ss;
        ss << std::hex << static_cast<int>(msg_.getIdentifier());
        std::string tmp = ss.str() + "#";
        unsigned int id_length = log(msg_.getIdentifier()) / log(16) + 1;
        if (msg_.getIdentifier() == 0u) {
            MODM_LOG_INFO << "000#";
        } else {
            for (unsigned i = id_length; i < 3; ++i) {
                MODM_LOG_INFO << " ";
            }
            for (unsigned i = tmp.length() - id_length - 1; i < tmp.length(); ++i) {
                MODM_LOG_INFO << tmp[i];
            }
        }
        for (unsigned int i = 0; i < msg_.getLength(); ++i) {
            MODM_LOG_INFO << modm::hex << msg_.data[i] << modm::ascii << " ";
        }
        MODM_LOG_INFO << modm::endl;
    }

    uint8_t getId() { return id_; }

private:
public:
private:
    uint8_t id_;
};
