//////////////////////////////////////////////////////////
/* vecmain.c*/
// main program
#include <stdio.h>
#include "veclib.h"


void print(vector vec_a) {
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]\n");
}


int main() {
	vector vecA, vecB, vecC;
	// read vectors vecA, vecB as input
	printf("Enter elements of vector A: ");
	scanf("%f %f %f %f", &vecA[0], &vecA[1], &vecA[2], &vecA[3]);
	
	printf("Enter elements of vector B: ");
	scanf("%f %f %f %f", &vecB[0], &vecB[1], &vecB[2], &vecB[3]);

	printf("Printing vector sum\n");
	add(vecA,vecB, vecC);
	
	print(vecC);
	
	printf("Printing elementwise product\n");
	eleProd(vecA, vecB, vecC);
	
	print(vecC);
	
	printf("Printing differrence of vectors\n");
	diff(vecA, vecB, vecC);
	
	print(vecC);
	
	float ans;
	ans=dotprod(vecA, vecB);
	printf("Dot product of vectors: %f\n", ans);
	
	ans=angle(vecA,vecB);
	printf("Angle between the vectors: %f\n", ans);
	
	
	
	
	
	// print and display other outputs
	// product, difference, dot product, angle

} // end main
//////////////////////////////////////////////////////////





