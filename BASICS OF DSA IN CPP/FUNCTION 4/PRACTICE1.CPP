#include <iostream>
using namespace std;

//print product of 2 numbers
int product(int a, int b){
int product = a * b;
return product;
}

int main(){
int a = 5;
int b = 3;

cout << "product:" << product(a, b) << endl;
return 0;   
}