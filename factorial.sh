echo "Enter a number"
read N

fact=1

for((i = 2 ; i <= N ; ++i)) {
	fact=$((fact * i))
}

echo "Factorial of $N is $fact"
