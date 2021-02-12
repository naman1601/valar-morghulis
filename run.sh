timeout 10s bash ./runcode.sh
if [ $? -eq 124 ]; then 
    echo "TLE ke chode maa chuda"
fi