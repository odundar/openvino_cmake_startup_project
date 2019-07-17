#!/bin/bash

# Copy System Wide Environment Configuration Files 

echo 'Copying intel-openvino.conf file to /etc/ld.so.conf.d/'  
cp intel-openvino.conf /etc/ld.so.conf.d/

echo 'Copying intel-openvino.sh file to /etc/profile.d/'
cp intel-openvino.sh /etc/profile.d