//
//  main.cpp
//  classwoek
//
//  Created by MACBOOK on 8/5/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    std::cout << "Enter the number:";
    std::cin>> number;
        if (number >= 0) {
            std::cout << number << " is a positive number." ;
            std::cout << number << " \n" ;
        }
        else {
              std:: cout << number << " is a negative number." ;
            std::cout << " \n" ;
           }
    return 0;
}
