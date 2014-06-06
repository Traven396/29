#!/bin/bash

mkfifo fifo;
$1 < fifo | $2 > fifo;
rm fifo
echo " DONE ";

