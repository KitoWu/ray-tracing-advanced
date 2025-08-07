#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <limits>
#include <vector>
#include <random>

using std::shared_ptr;
using std::make_shared;

const double pi = 3.1415926535897932385;
const double infinity = std::numeric_limits<double>::infinity();

inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}

inline double random_double(){
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max){
    return min + (max - min) * random_double();
}

inline int random_int(int min, int max){
    return int(random_double(min, max + 1));
}
#include "interval.h"
#include "ray.h"
#include "vec3.h"
#include "color.h"

#endif