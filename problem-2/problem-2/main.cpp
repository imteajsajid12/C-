//
//  main.cpp
//  problem-2
//
//  Created by MACBOOK on 9/5/24.
//

#include <iostream>
#include <cstring>







void problem2(){
    int number;
    std::cout << "Enter the number :";
    std::cin >> number;

    
    if (number % 2 ==0) {
        std::cout << number << "is even number \n";
    }
    else{
        std::cout << number << "is odd number \n";
    }
    
}

void problem3(){  // lanth of input text;
    std::string value;
    int lanth=0;
    std::cout << "Enter the value :";
    std::cin >> value;
    int i;
    
    for (int i=0; value[i]; i++) {
   
        lanth= i +1;
    }
//    while (value[i])
//           i++;
//
//    std:: cout<< "The length of the string is: " << i<<std::endl;
    
    std:: cout<< "The length of the string is: " << lanth<<std::endl;
    
    
    
}



int main(int argc, const char * argv[]) { //odd and even number
    // insert code here...
//    problem2();
    problem3();
    return 0;
}



