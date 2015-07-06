#!/bin/sh

CFLAGS=-fPIC cmake -DCMAKE_INSTALL_PREFIX:PATH=${prefix:-$HOME/$DESTIMG} . && make clean && make
