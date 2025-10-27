#!/usr/bin/bash


logfile=log_1.tmp
mylog=log_2.tmp

cat 19920104_091532.log | awk '{ print $2 }' > $logfile
./job | awk '{print $2}' > $mylog

diff $logfile $mylog
ok=`diff $logfile $mylog | wc -l`
if [ $ok -eq 0 ]; then
	echo "ok, no diff in log"
else
	echo "ERROR : $ok differences found in log"
fi

rm $logfile $mylog

