#include <iostream>
using namespace std;

int main(){
int arr[5] = {4,3,3,9,1};
int len = sizeof(arr)/sizeof(int);
int max = arr[0];
for(int i = 0; i < len-1; i++){
if(arr[i] > max){
max = arr[i];
}
}
cout << "max = " << max << endl;
return 0;
}