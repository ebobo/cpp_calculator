#include <iostream>
#include "Calc.h"
 
int main(int argc, char *argv[]) {
    if ( argc != 4 ) {// argc should be 2 for correct execution  
        std::cout<<"argc[1]: "<< argv[1]<<"\n";
     }
    else {
        Calc calc;
        if(argv[1] ==std::string("p")) {
            std::cout << calc.add(atoi(argv[2]),atoi(argv[3]));
        }
        else if (argv[1] == std::string("s")){
            std::cout << calc.sub(atoi(argv[2]),atoi(argv[3]));
        }
        else if (argv[1] == std::string("m")){
            std::cout << calc.multiply(atoi(argv[2]),atoi(argv[3]));
        }  
        else {
            std::cout << calc.divide(atoi(argv[2]),atoi(argv[3]));
        }
    }
}
