echo "Enter a number:"
read N
t1=0
t2=1
for((i = 1 ; i <= N ; ++i)) {
	echo $t1
	t3=$((t1+t2))
	t1=$t2
	t2=$t3
}

echo "---End---"
