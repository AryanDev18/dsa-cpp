#include<iostream>
using namespace std;

int main(){
int a, b;
char op;

cout << "enter a is ";
cin >> a;
cout << "enter b is ";
cin >> b;
cout << "enter operator is ";
cin >> op;
if(op == '+'){
    cout << a + b << endl;

}else if(op == '-'){
    cout << a - b << endl;
}else if(op == '*'){
    cout << a * b << endl;
}else if(op == '/'){
    if(b != 0){
        cout << a / b << endl;
    }else{
        cout << "Error: Division by zero" << endl;
    }
}else{
    cout << "Invalid operator" << endl;
}
}