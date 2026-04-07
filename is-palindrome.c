// https://leetcode.com/problems/palindrome-number/

bool isPalindrome(int x) {
	int digits = 1;
	int x2 = x;
	int hipow = 1;

	if (x < 0) {
		return false;
	}

	while ( x2 > 9 ) {
		x2 /= 10;
		hipow *= 10;
		digits++;
	}
	digits /= 2;

	int lox = x;
	int hix = x;
	while ( digits-- >= 1 ) {
		if ( hix / hipow != lox % 10 ) {
			return false;
		}
		hix %= hipow;
		hipow /= 10;
		lox /= 10;
	}
	
	return true;
}
