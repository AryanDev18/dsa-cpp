#include <iostream>
using namespace std;

int binsearch(int arr[], int n, int key){
    int st = 0, end = n - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;   // safer mid

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    // SORTED ARRAY (mandatory)
    int arr[] = {1,1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(int);

    cout << binsearch(arr, n, 3) << endl;
    return 0;
}

