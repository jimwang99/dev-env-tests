SHELL=bash

all: gtest glog systemc libtorch cmake bazel

.PHONY: gtest
gtest:
	cd cc-gtest && cmake . -B build && cd build && make && make test

.PHONY: glog
glog:
	cd cc-glog && cmake . -B build && cd build && make && make run

.PHONY: systemc
systemc:
	cd cc-systemc && cmake . -B build && cd build && make && make run

.PHONY: libtorch
libtorch:
	cd cc-libtorch && cmake . -B build && cd build && make && make test

.PHONY: cmake
cmake:
	cd cmake && cmake . -B build && cd build && make && make test && make run

.PHONY: bazel
bazel:
	cd bazel && bazel test ... && bazel run //demo:demo