/* veclib.h */


#define DIM 4
// vector type
typedef float vector[DIM]; 

// functions
// print vector
void print(vector vec_a);
// vector addition
void add(vector vec_a, vector vec_b, vector vec_c);
// elementwise product
void eleProd(vector vec_a, vector vec_b, vector vec_c);
// difference of two vectors
void diff(vector vec_a, vector vec_b, vector vec_c);
// dot product
float dotprod(vector vec_a, vector vec_b);
// angle between vectors
float angle(vector vec_a, vector vec_b);
