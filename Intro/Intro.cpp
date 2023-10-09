// Intro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


string updateArray(string* array1, int size) {
    for (int i = 1; i <= 100; i++) {
        i++;
        if (i % 7 == 0) {
            array1[i] = "Fizz";
            if (i % 11 == 0)
                array1[i] = "FizzBuzz";
        }
        else if (i % 11 == 0)
            array1[i] = "Buzz";
        else
            array1[i] = i;
    }
    return array1[size];
}

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << ", ";
    }
    cout << endl;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << "Fizz";
            if (i % 5 == 0)
                cout << "Buzz";
        }
        else if (i % 5 == 0)
            cout << "Buzz";
        else
            cout << i;
        cout << ", ";
    }
    const int size = 100;
    string array1[size] = {};
    updateArray(array1, size);
    for (int i = 1; i <= 100; i++) {
        cout << endl << array1[i] << ", ";
    }
}


/*
int main()
{
    string YourName;
    string Message;
    size_t pos1;
    size_t pos2;
    int size1 = 0;
    int size2 = 0;
    cout << "Enter your name!\n";
    cin >> YourName;
    Message = "Hello, " + YourName + ". Welcome to ECE 17 Discussion!\n";
    cout << Message;
    Message = Message.replace(0, 5, "Bye");
    cout << Message << endl;
    pos1 = Message.find(YourName);
    pos2 = Message.find("Welcome");
    size1 = sizeof(YourName);
    size2 = sizeof("Welcome");
    Message = Message.substr(0, pos1 + size1) + Message.substr(pos2 + size2);
    cout << Message;
}
*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
