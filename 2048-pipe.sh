#!/bin/bash

mkfifo fifo;
./2048-io < fifo | $1 > fifo;
rm fifo
echo " DONE ";

