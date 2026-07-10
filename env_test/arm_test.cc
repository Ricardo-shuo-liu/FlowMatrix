#include <armadillo>
#include <iostream>

int  main(){
    using namespace arma;

    arma::fmat demo1 = 
        "1,2,3;"
        "4,5,6;"
        "7,8,9;";
    
    arma::fmat demo2 = demo1;

    std::cout << demo2 * demo1 << std::endl;

    return 0;
}