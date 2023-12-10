#!/bin/bash

python3 setup2.py install
cp ./build/lib.macosx-10.9-universal2-cpython-311/reverse.cpython-311-darwin.so ../..
rm -fr reverse.egg-info
rm -fr dist
python3 test.py

