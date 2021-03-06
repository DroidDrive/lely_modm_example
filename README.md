# lely_modm_example

<img src="https://user-images.githubusercontent.com/6985609/133220871-b83f21aa-8871-44ed-a615-c897ecef0851.png" alt="Ducktrain Logo" width="30%" >

This example shows the use of the lely-core stack with modm on two stm32f439zi nucleo boards. We have used two nucleo boards connected via two can transeivers [MIKROE-4107](https://eu.mouser.com/ProductDetail/Mikroe/MIKROE-4107?qs=%2Fha2pyFaduiZroYiT5BLElmT4dekK9lYJj%2Flu22Q8nxQqCQ%252Bc6jHiQ%3D%3D)

### How to use it

* git submodule update --init --recursive
* cd app && lbuild build && scons
* #scons program

### What does it do?

The Example does the following things

* Master
  * create transport channel, timers and relevant executor for master
  * initializes master using the static device description (which comes from the eds description files and the lely `dfcgen` tool) containing the master / slave SDO / PDO configuration
  * reset the master
  * go into polling loop which forwards can messages from the modm driver to lely and from the lely executor loop to the modm can driver
    * boot up the slave & configure some sdo's
    * Send a pdo (0x4000) contaning a counter, receive back a pdo (0x4001) and increment that received value, just to send it back out at (0x4000) (repeat)
  * let the slave transition through cia402 states until `CiA402::State::OperationEnabled` is reached
* Slave
  * create transport channel, timers and relevant executor for slave
  * reset the slave
  * 
  * go into polling loop which forwards can messages from the modm driver to lely and from the lely executor loop to the modm can driver
    * wait for NMT boot up sequence
    * receive a pdo (0x4000), just to send it back out at (0x4001) (repeat)
  * handle `CiA402::ControlWord` commands (by always`CiA402::StatusWord` contaoinig the current slave state) , by applying them to the slave state machine (we will just transit forwards) until `CiA402::State::OperationEnabled` is reached

### Some hints

* To switch between master & Slave implementation, change `#define CANOPEN_MASTER 1` to `#define CANOPEN_MASTER 0` and flash the code on another board.
* The CiA402 implementation can be disregarded (removed) without problems, it is only here to showcase the application of higher level profiles
  * you can void out the profile policy here:
    * `lely_modm::SlaveDriver<ElmoMotorDriver302UserAdapter, ElmoMotorDriver402UserAdapter> driver(exec, master, 2);` 
  * to look like this:
    * `lely_modm::SlaveDriver<ElmoMotorDriver302UserAdapter, void> driver(exec, master, 2);`


![131042549-1348c1a7-1c86-4d14-a0bb-347317bd669f](https://user-images.githubusercontent.com/6985609/133076375-705a2ee6-3b6d-411f-b0fa-c9ab77ff8996.jpeg)

![131042249-5d68439d-05cb-44b3-9502-657f8e983fc5](https://user-images.githubusercontent.com/6985609/133076409-aac5feb3-2af3-4d74-b3d7-39adf907acc8.gif)


