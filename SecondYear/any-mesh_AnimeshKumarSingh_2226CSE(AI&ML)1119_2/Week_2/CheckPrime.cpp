bool isPrime(int n)
{
	// Write your code here.
	if(n == 1 or n == 0)
		return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
