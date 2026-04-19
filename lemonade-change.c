bool lemonadeChange( int* bills, int billsSize ) {
	int bills_5 = 0;
	int bills_10 = 0;

	for ( int i = 0; i < billsSize; i++ ) {
		if ( bills[i] == 5 ) {
			bills_5++;
		} else if ( bills[i] == 10 ) {
			bills_10++;
		}

		int give_back = bills[i] - 5;
		if ( give_back == 5 ) {
			if (bills_5 > 0) {
				bills_5--;
			} else {
				return false;
			}
		} else if ( give_back == 15 ) {
			if ( bills_5 > 0 && bills_10 > 0 ) {
				bills_5--;
				bills_10--;
			} else if ( bills_5 >= 3 ) {
				bills_5 -= 3;
			} else {
				return false;
			}
		}
	}
	return true;
}
