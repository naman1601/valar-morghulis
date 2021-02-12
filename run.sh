g++ correctcode.cpp -o correctcode
g++ usercode.cpp -o usercode
timeout 10s bash ./runcode.sh
if [ $? -eq 124 ]; then 
    echo "TLE on latest testcase. You can see the latest testcase in the testcase.txt file"
fi