//
//  main.cpp
//  problem-2
//
//  Created by MACBOOK on 9/5/24.
//

#include <iostream>

int main(int argc, const char * argv[]) { //odd and even number
    // insert code here...
    int number;
    std::cout << "Enter the number :";
    std::cin >> number;

    
    if (number % 2 ==0) {
        std::cout << number << "is even number \n";
    }
    else{
        std::cout << number << "is odd number \n";
    }
    return 0;
}
