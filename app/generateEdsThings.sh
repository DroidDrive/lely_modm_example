#!/bin/bash

### using the tools compiled and install with lely canopen stack
### https://gitlab.com/lely_industries/lely-core

### convert eds file into static c 
dcf2dev $PWD/eds/cpp-slave.eds MySlave1 > $PWD/eds/eds-slave.hpp

### generate master eds file from configuration .yaml file (containing simple slave decriptions)
#dcfgen -r $PWD/eds/master-eds.yaml -d $PWD/eds/

### use generated master eds file by converting it into static c 
dcf2dev $PWD/eds/master.dcf MyMaster > $PWD/eds/eds-master.hpp