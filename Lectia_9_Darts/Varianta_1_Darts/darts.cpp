#include "darts.h"
#include <cmath>

namespace darts {
    int range (double value){
            if (value <= 1)
                return 10;
            if (value > 1 && value <= 5)
                return 5;
            if (value > 5 && value <= 10)
                return 1; 
            if (value > 10)
                return 0; 
        return 0;
    }
    int score (double x, double y){
        if (x == 0 && y == 0)
            return 10;
        else if (x != 0 && y != 0){
            double diagonal = std::sqrt(std::pow(x,2) + std::pow(y,2));
            return range(diagonal);
        }
        else if (x == 0 || y == 0){
            double right = std::abs(x)+std::abs(y);
            return range(right);
            
        } 
        return 0;
    }
} // namespace darts
