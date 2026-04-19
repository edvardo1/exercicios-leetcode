int mySqrt(int x) {
	double a = x;
	double guess = 1;

	for (int i = 0; i < 30; i++) {
		// f(x)  = x * x - a
		// f'(x) = 2x
		guess = guess - (guess * guess - a) / (2 * guess);
	}

	return guess;
}
