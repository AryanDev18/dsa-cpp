#include <iostream>
using namespace std;

int sum(int a, int b){
   int sum = a + b;
   return sum;
}

int diff(int a, int b){
    int diff = a - b;
    return diff;
}

int main(){
   int a = 5;
   int b = 3;

   cout << "Sum: " << sum(a , b) << endl;
    cout << "Difference: " << diff(a , b) << endl;
    return 0;
}