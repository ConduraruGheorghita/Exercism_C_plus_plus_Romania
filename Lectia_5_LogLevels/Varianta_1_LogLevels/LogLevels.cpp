#include <string>

namespace log_line {
    std::string message(std::string mesaj){
        int index = mesaj.find(":") + 2;
        
        return mesaj.substr(index);
    }
    std::string log_level(std::string mesaj) {
        int index1 = mesaj.find("[") + 1;
        int index2 = mesaj.find("]") - 1;
    
        return mesaj.substr(index1 , index2);
    }

    std::string reformat (std::string mesaj){
        int index = mesaj.find(":") + 2;
        int index1 = mesaj.find("[") + 1;
        int index2 = mesaj.find("]") - 1;

        std::string mesajf = mesaj.substr(index);
        std::string level = " (" + mesaj.substr(index1 , index2) + ")";

        return mesajf + level;
    }

} // namespace log_line
