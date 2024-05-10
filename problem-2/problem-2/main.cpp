//
//  main.cpp
//  problem-2
//
//  Created by MACBOOK on 9/5/24.
//

#include <iostream>
#include <bitset>
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



void problem5()  // check is Alphabet or not
{
    
    char value;
    std::cout << "Enter the value :";
    std::cin>> value;
    if (isalpha(value)) {
        std:: cout << value <<"is Alphabet" ;
    }
    else{
        std:: cout << value <<" is not Alphabet" ;
    }
    std:: cout << "\n";

    
}

void problem6() //leep yeear or not
{
    int year;
    std::cout << "Enter the year :";
    std::cin>> year;
    if( year % 400 ==0 or year % 4==0){
       std:: cout << "Leap Year";
        
    }
    else {
        std:: cout << "not Leap Year";
    }
    std:: cout << "\n";
}

// array

void problem7(){ // array value print
    int numbers[] = {7, 5, 6, 12, 35};

    for (int i = 0; i < 5; i++) {
        std:: cout << i << " index value  is  "<< numbers[i] <<"\n";
    }
    
}
void problem8(){ // value of array
    int size=0;
    int numbers[] = {7, 5, 6, 12, 35};
    for (int i : numbers) {
        size ++;
    }
    std:: cout  << " array size  is  "<< size <<"\n";
    
}

void problem9(){ // input to add data to array
    int size ;
    int lanth=0;
    int data;
    std::cout << "Enter the size of array :";
    std::cin>> size;
    

    int myArray[] = {};
    
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter the value:";
        std::cin>> data;
           myArray[i] = data;
       }
    
    for (int i = 0; i < size; ++i) {
        std::cout << "array value is:"<< myArray[i] <<"\n";
       }
    
    
    
    for (int i : myArray) {
        size ++;
        std:: cout  << " array data  is  "<<myArray[lanth++]  <<"\n";
        
    }
    std:: cout  << " array size  is  "<< size <<"\n";
    
}

void problem10(){ //sorting array
    
    
    int size;
      
     std:: cout<<"Enter the size of array: ";std:: cin>>size;
      
      int a[size];
      
     
    for(int i=0; i<size; i++){// add value to array
        std:: cout<< i + 1 <<"\n Enter the elements: " ;
        std::cin>>a[i];
    }
    
    for(int i=0; i<size; i++) // swap value
    {
        for(int j=i+1; j<size; j++) {
            if(a[i]>a[j])
                   {
                       int temp = a[i];
                       a[i] = a[j];
                       a[j] = temp;
                   }
               }
        
    }
    
    std:: cout<<  "\n sorting  array is: " ;
    
    for(int i=0; i<size; i++) // swap
    {
        std:: cout<< a[i] <<",  " ;
    }
    
}


void problem11(){ //sorting array
    
    
    int size;
      
     std:: cout<<"Enter the size of array: ";std:: cin>>size;
      
      int a[size];
      
     
    for(int i=0; i<size; i++){// add value to array
        std:: cout<< i + 1 <<"\n Enter the elements: " ;
        std::cin>>a[i];
    }
    
    for(int i=0; i<size; i++) // swap value
    {
        for(int j=i+1; j<size; j++) {
            if(a[i]<a[j])
                   {
                       int temp = a[i];
                       a[i] = a[j];
                       a[j] = temp;
                   }
               }
        
    }
    
    std:: cout<<  "\n sorting  array is: " ;
    
    for(int i=0; i<size; i++) // swap
    {
        std:: cout<< a[i] <<",  " ;
    }
    
}
void problem12() 
{
    int decimal = 7;
    
    std::bitset<32> binary(decimal);

    std::cout << "Binary equivalent: " << binary << std::endl;
}







int main(int argc, const char * argv[]) { //odd and even number
    // insert code here...
//    problem2();
    problem12();
    return 0;
}



