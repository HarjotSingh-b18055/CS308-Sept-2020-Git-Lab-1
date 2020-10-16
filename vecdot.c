/* vecdot.c */
/* Auther: github.com/ShikhaSuman8601 */

// function to calculate the dot product of two vectors

#include "veclib.h"

float dotprod(vector vec_a, vector vec_b)
{
	float ans=0.0;
	for (int i=0; i<DIM; i++){
		ans = ans + (vec_a[i]*vec_b[i]);
	}
	return ans;
}