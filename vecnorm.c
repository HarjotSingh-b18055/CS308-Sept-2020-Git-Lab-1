#include "veclib.h"
#include <math.h>

// function to calculate norm of a vector.
float norm(vector vec_a) {
    float magnitude = 0;
    for (int i = 0; i<DIM; i++) {
        magnitude = magnitude + vec_a[i]*vec_a[i];
    }
    float mag = sqrt(magnitude);
    return mag;
}