#include <stdio.h>
#include <stdlib.h>

int* findDiagonalOrder( int** mat, int matSize, int* matColSize, int* returnSize ) {
	if ( matSize == 0 ) {
		*returnSize = 0;
		return NULL;
	}
	if ( matColSize[0] == 0 ) {
		*returnSize = 0;
		return NULL;
	}
    
	*returnSize = matColSize[0] * matSize;
	int *out = ( int * )malloc( sizeof( int ) * *returnSize );
	const int max_y = matSize;
	const int max_x = matColSize[0];
	
	int ri = 0;
	int x = 0;
	int y = 0;
	int dr = 0;

	for ( int di = 0; di < *returnSize; di++ ) {
		out[ri++] = mat[y][x];

		if ( dr % 2 == 0 ) {
			if ( y == 0 && x == max_x - 1 ) {
				dr++;
				y++;
			} else if ( y == 0 ) {
				dr++;
				x++;
			} else if ( x == max_x - 1 ) {
				dr++;
				y++;
			} else {
				x++;
				y--;
			}
		} else {
			if ( y == max_y - 1 && x == 0 ) {
				dr++;
				x++;
			} else if ( y == max_y - 1 ) {
				dr++;
				x++;
			} else if ( x == 0 ) {
				dr++;
				y++;
			} else {
				x--;
				y++;
			}
		}
	}

	return out;
}
