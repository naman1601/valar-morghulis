g++ usercode.cpp -o usercode
g++ correctcode.cpp -o correctcode

j=0
n=10
for((i = 1; i <= n; ++i)); do
    python3 tcgen.py > randomtc.txt
    ./correctcode < randomtc.txt > correct_output.txt
    start=$(date +%s.%N)
    ./usercode < randomtc.txt > user_output.txt
    dur=$(echo "$(date +%s.%N) - $start" | bc)
    printf "Execution time: %.3f s" $dur
    echo
    diff -i user_output.txt correct_output.txt > /dev/null || break
    echo "Passed test: "  $i
    echo "------------------------------"
    j=$((j+1))
    # echo $j
done
if [ $j != $n ] 
then 
    echo "chhi be, wrong answer"
fi 
#total runtime of 10 testcases = 1s