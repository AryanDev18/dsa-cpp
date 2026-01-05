#include<iostream>
using namespace std;

int main(){
int income;
cin >> income;

int tax;


if(income < 500000){
    tax = 0;
    cout << tax << endl;
}else if(income <= 500000 && income > 1000000){
    tax = income * 0.2;
    cout << tax << endl;
}
else{
    tax = income * 0.3;
    cout << tax << endl;
}
}