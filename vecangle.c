#include "veclib.h"
#include <math.h>

// function to calculate angle between two vectos in radians.
float angle(vector vec_a, vector vec_b)
{
    float Cos0 = max(min(vecprod(vec_a,vec_b)/(norm(vec_a)*norm(vec_b)),1,-1));
    float ang_Rad = real(acos(CosTheta));
    return ang_Rad;
}
