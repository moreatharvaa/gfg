int countDigits(int n){
	int m = n, d = 0, count = 0;
	while(m != 0) {
		d = m % 10;
		if(d != 0 && n % d == 0) count++;
		m = m / 10;
	}
	return count;
}
