#!/bin/sh

cmake -DCMAKE_INSTALL_PREFIX:PATH=${prefix:-$HOME/$DESTIMG} . && make
