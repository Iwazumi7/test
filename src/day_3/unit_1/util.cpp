// #include <cmath>
#include "util.h"


bool isCross(int r_1, int xy_1[], int r_2, int xy_2[])
{
    double diffe = 0;
    diffe = (xy_1[0]-xy_2[0])*(xy_1[0]-xy_2[0])+(xy_1[1]-xy_2[1])*(xy_1[1]-xy_2[1]);
    if((r_1+r_2)*(r_1+r_2) < diffe)
    {
        return false;
    }
    return true;
}
