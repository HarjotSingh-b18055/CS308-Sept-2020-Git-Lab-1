#include "veclib.h"
#include <math.h>

// function to calculate angle between two vectos in degree.
float angle(vector vec_a, vector vec_b)
{
    float Cos0 = dotprod(vec_a,vec_b)/(norm(vec_a)*norm(vec_b));
    float ang_deg = acos(Cos0);
    return ang_deg;
}
