#include <iostream>
using namespace std;

//write if odd or even
int OddEven(int num){
if(num % 2 == 0){
cout << num << " is Even" << endl;
}
else{
cout << num << " is Odd" << endl;
}
}

int main(){
int num = 7;
OddEven(num);
return 0;

}