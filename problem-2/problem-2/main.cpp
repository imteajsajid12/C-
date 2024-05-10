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

void problem4()
{
    int a;
    int b;
    int c;
    std::cout << "Enter the 1st value :";
    std::cin>> a;   
    std::cout << "Enter the 2nd value :";
    std::cin>> b;
    std::cout << "Enter the 3rd value :";
    std::cin>> c;
    
    std:: cout << "The big value is  : ";
      
        if (a >= b && a >= c) {
            std:: cout << a ;
        }
        else if (b >= a && b >= c) {
            std:: cout << b ;
        }
        else {
            std:: cout << c ;
        }
    std:: cout << "\n";
}



int main(int argc, const char * argv[]) { //odd and even number
    // insert code here...
//    problem2();
    problem4();
    return 0;
}



