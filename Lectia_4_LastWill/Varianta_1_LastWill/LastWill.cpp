// Enter your code below the lines of the families' information

// Secret knowledge of the Zhang family:
namespace zhang {
    int bank_number_part(int secret_modifier) {
        int zhang_part{8'541};
        return (zhang_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 512;}
    }
    namespace blue {
        int code_fragment() {return 677;}
    }
}

// Secret knowledge of the Khan family:
namespace khan {
    int bank_number_part(int secret_modifier) {
        int khan_part{4'142};
        return (khan_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 148;}
    }
    namespace blue {
        int code_fragment() {return 875;}
    }
}

// Secret knowledge of the Garcia family:
namespace garcia {
    int bank_number_part(int secret_modifier) {
        int garcia_part{4'023};
        return (garcia_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 118;}
    }
    namespace blue {
        int code_fragment() {return 923;}
    }
}

// Enter your code below

namespace estate_executor {
    int assemble_account_number(int secret_modifier) {
        int zhang_part = zhang::bank_number_part(secret_modifier);
        int khan_part = khan::bank_number_part(secret_modifier);
        int garcia_part = garcia::bank_number_part(secret_modifier);
        
        int assembled_account_number = zhang_part + khan_part + garcia_part;
        
        return assembled_account_number;
    }
    int assemble_code() {
        int zhang_blue = zhang::blue::code_fragment();
        int zhang_red = zhang::red::code_fragment();
        
        int khan_blue = khan::blue::code_fragment();
        int khan_red = khan::red::code_fragment();
        
        int garcia_blue = garcia::blue::code_fragment();
        int garcia_red = garcia::red::code_fragment();
        
        int blue_sum = zhang_blue + khan_blue + garcia_blue;
        int red_sum = zhang_red + khan_red + garcia_red;
        
        int assembled_code = blue_sum * red_sum;
        
        return assembled_code;
    }
}
