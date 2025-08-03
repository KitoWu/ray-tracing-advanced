#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <memory>
#include <limits>
#include <vector>

using std::shared_ptr;
using std::make_shared;

const double pi = 3.1415926535897932385;
const double infinity = std::numeric_limits<double>::infinity();

inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}

#include "interval.h"
#include "ray.h"
#include "vec3.h"
#include "color.h"

#endif