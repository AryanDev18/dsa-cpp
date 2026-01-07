#include <iostream>
using namespace std;

int main(){
int arr[5] = {7, 5 , 2 , 1 , 3};
int len = sizeof(arr)/ sizeof(int);

for(int i = 0; i < len-1; i++){
cout << arr[i] << " ";
}
cout << endl;
return 0;
}