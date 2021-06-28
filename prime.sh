echo "Enter a number"

read N

if [ $N -lt 2 ]
then
	echo "$N is not Prime Number"
	exit
fi

isprime=1

for((i = 2 ; $((i*i)) <= N  ; ++i)){

	if [ $((N%i)) == 0 ]
	then
		isprime=0
		break
	fi
}

if [ $isprime == 1 ] 
then 
	echo "$N is Prime Number"
else 
	echo "$N is not Prime Number"
fi

