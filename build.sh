#!/bin/bash

#script to automatically build the exe file of particular project
path="/home/ubuntu/dev/"
origin="https://github.com/lohiteshk/DevopsPractice.git"
pa=`echo $origin | awk -F "/" '{print $NF}' | awk -F "." '{print $1}'`
cd $path
if [ -d $pa ];then
	cd $pa
	git pull $origin
else
	git clone $origin
	cd $pa
fi
make clean
make

