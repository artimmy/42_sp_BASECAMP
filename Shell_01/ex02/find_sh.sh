#!/bin/sh   
find . -type f -name '*.sh' | sed -e 's/\.sh//' -e 's/^.*\///'