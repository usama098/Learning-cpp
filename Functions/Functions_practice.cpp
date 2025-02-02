/*
Following file has practice problems on functions in cpp
*/

#include <iostream>


// Function to calculate the sum of two numbers
// Function to calculate factorial of a number using recrusion
// Function that takes in an array and its size and return a max element in the array

int sum( int a, int b){
    return a + b;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int max(int array[], int size){
    int max = array[0];
    for(int i = 1; i < size; i++){
        if(array[i]> max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int a = 10;
    int b = 20;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout << "Sum of " << a << " and " << b << " is " << sum(a, b) << std::endl;
    std::cout << "Factorial of " << a << " is " << factorial(a) << std::endl;
    std::cout << "Max element in the array is " << max(array, size) << std::endl;
    return 0;
}