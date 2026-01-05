#include<iostream>
using namespace std;

int main(){
int n = 5;
//inner loop
for(int i = 1; i <= n; i++){
//outer loop
for(int j = 1; j <= n; j++){
cout << i << " ";
}
cout << endl;
}
}