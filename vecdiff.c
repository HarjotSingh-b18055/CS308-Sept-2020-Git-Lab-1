#include "veclib.h"

// function to calculate difference of two vectors.
void diff(vector vec_a, vector vec_b, vector vec_c) {
    for (int i = 0; i<DIM; i++) {
        vec_c[i] = vec_a[i] - vec_b[i];
    }
}

void eleProd(vector vec_a, vector vec_b, vector vec_c) {}
float dotprod(vector vec_a, vector vec_b) {return 0;}
float angle(vector vec_a, vector vec_b) {return 0;}