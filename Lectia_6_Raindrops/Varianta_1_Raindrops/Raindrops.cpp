#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert (int nr){
        std::string result {""};
        
        if (nr % 3 == 0)
            result = result + "Pling";
        if (nr % 5 == 0)
            result = result + "Plang";
        if (nr % 7 == 0)
            result = result + "Plong";

        if (result == "")
            result = std::to_string(nr);
        
       return result; 
    } // afisare
}  // namespace raindrops
