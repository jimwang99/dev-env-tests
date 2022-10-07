SHELL=bash

all: gtest glog systemc

.PHONY: gtest
gtest:
	cd cc-gtest && cmake . -B build && cd build && make && make test

.PHONY: glog
glog:
	cd cc-glog && cmake . -B build && cd build && make && make run

.PHONY: systemc
systemc:
	cd cc-systemc && cmake . -B build && cd build && make && make run