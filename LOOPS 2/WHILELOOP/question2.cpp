#include<iostream>
using namespace std;

int main(){
int n = 10925;
int sum = 0;
int i = 0;

while(n > 0){
int last_digit = n % 10;
sum += last_digit;
n = n / 10;
i++;

}
cout << sum << endl;
return 0;
}