#include <iostream>
using namespace std;

int binsearch(int arr[], int n, int key){
int st = 0, end = n-1;

while(st <= n){
int mid = (st + end)/2;
if(arr[mid] == key){
return mid;
}
else if(arr[mid] < key){
st = mid + 1;
}else{
end = mid - 1;
}
}
return -1;
}

int main(){
int arr[] = {1,2,3,2,3,1,2,1};
int n = sizeof(arr)/sizeof(int);

cout << binsearch(arr, n , 3) << endl;
return 0;
}
