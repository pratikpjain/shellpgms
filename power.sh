echo "Enter the Number:"
read N

echo "Enter the Power:"
read P
ans=1
for((i=1 ; i <= P ; ++i)) {
	ans=$((ans*N))
}

echo "$N^$P = $ans"
echo "end"
