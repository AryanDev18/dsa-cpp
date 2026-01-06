#include<iostream>
using namespace std;

int main(){
//reverse of 12345

int n = 12345;

while(n > 0){
int lastdig = n % 10;
cout << lastdig;
n /= 10;
}

cout << endl;
return 0;
}