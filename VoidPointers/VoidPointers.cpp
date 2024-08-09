
#include <iostream>
#include <string>
using namespace std;

void printNum(int* num_ptr) {
    cout << *num_ptr << endl;
}

void printLetter(char* char_ptr) {
    cout << *char_ptr << endl;
}

void print(void* ptr,char type) {
    switch (type)
    {
    case 'i':
        cout << *((int*)ptr) << endl;
        break;
    case 'c':
        cout << *((char*)ptr) << endl;
        break;
    case 'b':
        cout << *((bool*)ptr) << endl;
        break;

    default:
        break;
    }
}

int main()
{
    int num = 5;
    //printNum(&num);

    char letter = 'a';
    //printLetter(&letter);

    bool boolean = true;

    print(&num, 'i');
    print(&letter,'c');
    print(&boolean, 'b');




}

