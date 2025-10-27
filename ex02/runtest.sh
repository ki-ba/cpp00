#!/usr/bin/bash


logfile=log_1.tmp
mylog=log_2.tmp

cat 19920104_091532.log | awk '{ print $2 }' > $logfile
./job | awk '{print $2}' > $mylog

diff $logfile $mylog

rm $logfile $mylog

