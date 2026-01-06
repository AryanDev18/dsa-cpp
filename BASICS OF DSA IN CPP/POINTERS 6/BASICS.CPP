#include <iostream>
using namespace std;

int main() {

    cout << "===== BASIC POINTER CONCEPTS IN C++ =====\n\n";

    // --------------------------------------------------
    // 1. NORMAL VARIABLE
    // --------------------------------------------------
    int a = 10;
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl << endl;

    // --------------------------------------------------
    // 2. POINTER DECLARATION & INITIALIZATION
    // --------------------------------------------------
    int* p = &a;   // pointer p stores address of a

    cout << "Pointer p stores address of a: " << p << endl;
    cout << "Value pointed by p (*p): " << *p << endl << endl;

    // --------------------------------------------------
    // 3. MODIFY VALUE USING POINTER
    // --------------------------------------------------
    *p = 20;   // changing value of a using pointer
    cout << "After *p = 20" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value via pointer (*p): " << *p << endl << endl;

    // --------------------------------------------------
    // 4. POINTER TO POINTER
    // --------------------------------------------------
    int** pp = &p;

    cout << "Address stored in p: " << p << endl;
    cout << "Address stored in pp: " << pp << endl;
    cout << "Value using **pp: " << **pp << endl << endl;

    // --------------------------------------------------
    // 5. NULL POINTER
    // --------------------------------------------------
    int* np = NULL;
    cout << "Null pointer value: " << np << endl << endl;

    // --------------------------------------------------
    // 6. POINTER ARITHMETIC
    // --------------------------------------------------
    int arr[3] = {10, 20, 30};
    int* ap = arr;

    cout << "Array pointer arithmetic:\n";
    cout << "*ap: " << *ap << endl;
    cout << "*(ap+1): " << *(ap + 1) << endl;
    cout << "*(ap+2): " << *(ap + 2) << endl << endl;

    // --------------------------------------------------
    // 7. POINTER AND ARRAY RELATION
    // --------------------------------------------------
    cout << "arr[0]: " << arr[0] << endl;
    cout << "*(arr): " << *(arr) << endl << endl;

    // --------------------------------------------------
    // 8. POINTER WITH CHAR
    // --------------------------------------------------
    char ch = 'A';
    char* cp = &ch;

    cout << "Character: " << ch << endl;
    cout << "Character via pointer: " << *cp << endl << endl;

    // --------------------------------------------------
    // 9. CONSTANT POINTER
    // --------------------------------------------------
    int b = 50;
    int* const constPtr = &b;  // pointer is constant

    *constPtr = 60; // allowed
    cout << "Constant pointer value: " << *constPtr << endl << endl;

    // --------------------------------------------------
    // 10. POINTER TO CONSTANT
    // --------------------------------------------------
    const int c = 100;
    const int* pc = &c;

    cout << "Pointer to constant value: " << *pc << endl << endl;

    // --------------------------------------------------
    // 11. VOID POINTER
    // --------------------------------------------------
    int x = 99;
    void* vp = &x;

    cout << "Void pointer needs type casting: "
         << *(int*)vp << endl << endl;

    // --------------------------------------------------
    // 12. DYNAMIC MEMORY (NEW & DELETE)
    // --------------------------------------------------
    int* dyn = new int;
    *dyn = 500;

    cout << "Dynamic value: " << *dyn << endl;
    delete dyn;   // free memory
    dyn = NULL;

    cout << "\n===== END OF POINTER BASICS =====\n";

    return 0;
}
