#!/bin/bash
sudo apt-get update && \
sudo apt-get upgrade && \
sudo apt-get install build-essential software-properties-common -y && \
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y && \
sudo apt-get update && \
sudo snap install code --classic && \
sudo snap install notepad_plus_plus -y && \
sudo apt-get install gcc-snapshot -y && \
sudo apt-get install git -y && \
sudo apt-get update && \
sudo apt-get install gcc-12 g++-12 -y && \
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 60 --slave /usr/bin/g++ g++ /usr/bin/g++-12 && \
sudo apt-get install gcc-11 g++-11 -y && \
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 60 --slave /usr/bin/g++ g++ /usr/bin/g++-11;
