//
//  main.cpp
//  problem-2
//
//  Created by MACBOOK on 9/5/24.
//

#include <iostream>
#include <bitset>
#include <cstring>

#include <queue>
using namespace std;






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
void problem13()
{
    int decimal;
       std::cout << "Enter a decimal number: ";
       std::cin >> decimal;

       int octalNumber = 0, i = 1;
       while (decimal != 0) {
           octalNumber += (decimal % 8) * i;
           decimal /= 8;
           i *= 10;
       }

       std::cout << "octal : " << octalNumber << std::endl;
}

//sum

void problem14(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a; 
    std::cout << "Enter a  number: ";
    std::cin >> b;
    std::cout << "total value is: " << a+b<<"\n";
   
    
}
void problem15(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a; 
    std::cout << "Enter a  number: ";
    std::cin >> b;
    std::cout << "total value is: " << a-b<<"\n";
   
    
}
void problem16(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a; 
    std::cout << "Enter a  number: ";
    std::cin >> b;
    std::cout << "total value is: " << a*b<<"\n";
   
    
}
void problem17(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a; 
    std::cout << "Enter a  number: ";
    std::cin >> b;
    std::cout << "total value is: " << a/b<<"\n";
   
}

void problem18(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a; 
    std::cout << "Enter a % number: ";
    std::cin >> b;
    std::cout << "total value is: " << a/100*b<<"\n";
   
}


void problem19(){
    int a;
    int b;
    std::cout << "Enter a  number: ";
    std::cin >> a;
    std::cout << "Enter a % number: ";
    std::cin >> b;
    std::cout << "total value is: " << a/100*b<<"\n";
   
}


void problem20(){
    int arr[] = { 5, 4, 1, 6, 10, 9, 23, 2 };
    int x = 9;
    int result;
    int N = sizeof(arr) / sizeof(arr[0]);
    int i;
    for (i = 0; i < N; i++)
    {
        if (arr[i] == x){
            result =1;
        }
    }
    if (result == 1){
        
        std::  cout << "Element is present in array " ;
    }
        else{
            std::  cout << "Element is not present in array";
            
        }
    }
    




//binary scearch
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        
        int mid = l + (r - l) / 2;
  
        if (arr[mid] == x)
            return mid;
  
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        return binarySearch(arr, mid + 1, r, x);
    }
  
    return -1;
}
 void problem21() //binary scearch
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
       int x = 5;
       int n = sizeof(arr) / sizeof(arr[0]);
     
       int result = binarySearch(arr, 0, n - 1, x);
     
       if (result == -1)
          std:: cout << "Element is not present in array";
       else
           std::cout << "Element is present at index " << result;
      
 }

void problem22(){
   std:: queue<int> q;
     
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
   
    std:: queue<int> copy_queue = q;
   
    std:: cout << "Queue elements :\n";
   
     while (!copy_queue.empty()) {
        std:: cout << copy_queue.front() << " ";
   
         copy_queue.pop();
     }
   
}

void problem23()
{
    string str = "GeeksforGeeks";
    for (int i = str.length()-1; i >= 0; i--){
        cout << str[i];
    }
}
void problem25() // array itemm sum
{
    int sum =0;
    int arr[] = { 1, 23, 54, 12, 9 };
        int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "Sum: " << sum <<"\n";
}


void problem26() // piramid
{
    int n = 10;
    int k = 2 * n - 2;
     
       for (int i = 0; i < n; i++) {
     
           for (int j = 0; j < k; j++)
               cout << " ";
     
           k = k - 1;
           for (int j = 0; j <= i; j++) {
               // Printing stars
               cout << "* ";
           }
           cout << endl;
       }
}
void problem27() //down piramin
{
    int rows = 5;
      
        for (int i = rows; i >= 1; i--) {
            for (int j = rows; j > i; j--) {
                cout << " ";
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
}
void problem28() //swap data
{
    int x = 3;
      int y = 4;
    
      cout << "X : " << x << endl;
      cout << "Y : " << y << endl;
    
      x = x + y;
      y = x - y;
      x = x - y;
    
      cout << endl;
      cout << "After:" << endl;
    
      cout << "X : " << x << endl;
      cout << "Y : " << y << endl;
}

void problem29() //low value in array
{
    int arr[] = {4, 2, 7, 1, 5};

        int size = sizeof(arr) / sizeof(arr[0]);
        int min_value = arr[0];

        for (int i = 1; i < size; ++i) {
            if (arr[i] < min_value) {
                min_value = arr[i];
            }
        }
        std::cout << "The lowest value in the array is: " << min_value << std::endl;

}

void problem30() //max value in array
{
    int arr[] = {4, 2, 7, 1, 5};

        int size = sizeof(arr) / sizeof(arr[0]);
        int min_value = arr[0];

        for (int i = 1; i < size; ++i) {
            if (arr[i] > min_value) {
                min_value = arr[i];
            }
        }
        std::cout << "The lowest value in the array is: " << min_value << std::endl;

}




int main(int argc, const char * argv[]) { //odd and even number
    // insert code here...
//    problem2();
    problem30();
    return 0;
}



