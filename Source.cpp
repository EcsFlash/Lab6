#include <iostream>
#include "Set.h"
#include <vector>
using namespace std;
#include <windows.h> 

void printLogo() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 9);
    cout << " _____      _   " << endl;
    cout << "/  ___|    | |  " << endl;
    cout << "\\ `--.  ___| |_ " << endl;
    cout << " `--. \\/ _ \\ __|" << endl;
    cout << "/ \__/ /  __/ |_ " << endl;
    cout << "\\____/ \\___|\\__|" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void pause() {
    bool flag = true;
    int way;
    do {
        cout << "Enter 0 to go back" << endl;
        cin >> way;
        switch (way) {
        case 0:
            flag = false;
            break;
        default:
            break;
        }
    } while (flag);
}

void method1(Set& set) {
    cout << "Enter element to add" << endl;
    int el;
    cin >> el;
    set.add(el);
}
void method2(Set& set) {
    cout << "Enter element to remove" << endl;
    int el;
    cin >> el;
    set.remove(el);
   
}
void method3(Set& set) {
   cout << "AND OPERATION" << endl;
   int len;
   int* a = new int[0];
   //float X, Y, Z;
   int way = 0;
   
   cout << "How do you want to create second Set?" << endl;
   cout << "1. Enter it len and content" << endl;
   cout << "2. Start automatically with empty set" << endl;
   cout << "Enter 1 or 2" << endl;
   cin >> way;
   system("cls");
   printLogo();
   cout << "AND OPERATION" << endl;
   bool flag = false;
   while (!flag) {
       switch (way)
       {
       case 1:
           cout << "Enter len, than content by space" << endl;
           //cin >> X >> Y >> Z;
           cin >> len;
           a = new int[len];
           for (int i = 0; i < len; i++) {
               cin >> a[i];
           }
           flag = true;
           break;
       case 2:
           flag = true;
           break;
       default:
           cout << "Try again later" << endl;
           int o = 1;
           while (o != 0) {
               cout << "Enter 0 if you want to Escape from the Set" << endl;
               cin >> o;
           }
           return;
           break;
       }
   }
   //Vector3D vector = Vector3D();
   Set set2;
   switch (way)
   {
   case 1:
       //vector = Vector3D(X, Y, Z);
       set2 = Set(a, len);
       break;
   case 2:
       break;
   default:
       break;
   }
   cout << set.And(set2);
   pause();
}
void method4(Set& set) {
    cout << "OR OPERATION" << endl;
    int len;
    int* a = new int[0];
    //float X, Y, Z;
    int way = 0;

    cout << "How do you want to create second Set?" << endl;
    cout << "1. Enter it len and content" << endl;
    cout << "2. Start automatically with empty set" << endl;
    cout << "Enter 1 or 2" << endl;
    cin >> way;
    system("cls");
    printLogo();
    cout << "OR OPERATION" << endl;
    bool flag = false;
    while (!flag) {
        switch (way)
        {
        case 1:
            cout << "Enter len, than content by space" << endl;
            //cin >> X >> Y >> Z;
            cin >> len;
            a = new int[len];
            for (int i = 0; i < len; i++) {
                cin >> a[i];
            }
            flag = true;
            break;
        case 2:
            flag = true;
            break;
        default:
            cout << "Try again later" << endl;
            int o = 1;
            while (o != 0) {
                cout << "Enter 0 if you want to Escape from the Set" << endl;
                cin >> o;
            }
            return;
            break;
        }
    }
    //Vector3D vector = Vector3D();
    Set<int> set2;
    switch (way)
    {
    case 1:
        //vector = Vector3D(X, Y, Z);
        set2 = Set<int>(a, len);
        break;
    case 2:
        break;
    default:
        break;
    }
    cout << set.Or(set2);
    pause();
}
void method5(Set& set) {
    cout << "COMPARE OPERATION" << endl;
    int len;
    int* a = new int[0];
    //float X, Y, Z;
    int way = 0;

    cout << "How do you want to create second Set?" << endl;
    cout << "1. Enter it len and content" << endl;
    cout << "2. Start automatically with empty set" << endl;
    cout << "Enter 1 or 2" << endl;
    cin >> way;
    system("cls");
    printLogo();
    cout << "COMPARE OPERATION" << endl;
    bool flag = false;
    while (!flag) {
        switch (way)
        {
        case 1:
            cout << "Enter len, than content by space" << endl;
            //cin >> X >> Y >> Z;
            cin >> len;
            a = new int[len];
            for (int i = 0; i < len; i++) {
                cin >> a[i];
            }
            flag = true;
            break;
        case 2:
            flag = true;
            break;
        default:
            cout << "Try again later" << endl;
            int o = 1;
            while (o != 0) {
                cout << "Enter 0 if you want to Escape from the Set" << endl;
                cin >> o;
            }
            return;
            break;
        }
    }
    //Vector3D vector = Vector3D();
    Set<int> set2;
    switch (way)
    {
    case 1:
        //vector = Vector3D(X, Y, Z);
        set2 = Set<int>(a, len);
        break;
    case 2:
        break;
    default:
        break;
    }
    if (set == set2) {
        cout << "They are equal" << endl;
    }
    else {
        cout << "They are not equal" << endl;
    }
    pause();
}



void showMenu() {
    cout << "Select a method to execute:" << endl;
    cout << "1. Add to set" << endl;
    cout << "2. Remove from set" << endl;
    cout << "3. And with another set" << endl;
    cout << "4. Or with another set" << endl;
    cout << "5. Compare two sets" << endl;
    cout << "0. Exit" << endl;
}


int main() {
    printLogo();
    int len;
    int* a = nullptr;
    int way = 0;
    cout << "Let's start!" << endl;
    cout << "How do you want to create Set?" << endl;
    cout << "1. Enter it len and content" << endl;
    cout << "2. Start automatically with empty set" << endl;
    cout << "Enter 1 or 2" << endl;
    cin >> way;
    system("cls");
    printLogo();
    bool flag = false;
    while (!flag) {
        switch (way)
        {
        case 1:
            cout << "Enter len, than content by space" << endl;
            //cin >> X >> Y >> Z;
            cin >> len;
            a = new int[len];
            for (int i = 0; i < len; i++) {
                cin >> a[i];
            }
            flag = true;
            break;
        case 2:
            flag = true;
            break;
        default:
            cout << "Try again later" << endl;
            int o = 1;
            while (o != 0) {
                cout << "Enter 0 if you want to Escape from the Set" << endl;
                cin >> o;
            }
            return 0;
            break;
        }
    }
    ////Vector3D vector = Vector3D();
    Set<int> set;
    switch (way)
    {
    case 1:
        //vector = Vector3D(X, Y, Z);
        //cout << len << endl;
        set = Set<int>(a, len);
        break;
    case 2:
        break;
    default:
        break;
    }

    system("cls");
    int choice = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do {
        system("cls");
        printLogo();
        cout << "Current set:" << '\t';
        SetConsoleTextAttribute(hConsole, 12);
        cout << set << endl;
        SetConsoleTextAttribute(hConsole, 15);
        showMenu();

        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to add" << endl;
            int el;
            cin >> el;
            set.add(el);
            break;
        case 2:
            cout << "Enter element to remove" << endl;
            int el;
            cin >> el;
            set.remove(el);
            break;
        case 3:
            cout << "AND OPERATION" << endl;
            int len;
            int* a = new int[0];
            //float X, Y, Z;
            int way = 0;

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way;
            system("cls");
            printLogo();
            cout << "AND OPERATION" << endl;
            bool flag = false;
            while (!flag) {
                switch (way)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag = true;
                    break;
                case 2:
                    flag = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    return;
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            Set set2;
            switch (way)
            {
            case 1:
                //vector = Vector3D(X, Y, Z);
                set2 = Set(a, len);
                break;
            case 2:
                break;
            default:
                break;
            }
            cout << set.And(set2);
            pause();
            break;
        case 4:
            cout << "OR OPERATION" << endl;
            int len;
            int* a = new int[0];
            //float X, Y, Z;
            int way = 0;

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way;
            system("cls");
            printLogo();
            cout << "OR OPERATION" << endl;
            bool flag = false;
            while (!flag) {
                switch (way)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag = true;
                    break;
                case 2:
                    flag = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    return;
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            Set<int> set2;
            switch (way)
            {
            case 1:
                //vector = Vector3D(X, Y, Z);
                set2 = Set<int>(a, len);
                break;
            case 2:
                break;
            default:
                break;
            }
            cout << set.Or(set2);
            pause();
            break;
        case 5:
            cout << "COMPARE OPERATION" << endl;
            int len;
            int* a = new int[0];
            //float X, Y, Z;
            int way = 0;

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way;
            system("cls");
            printLogo();
            cout << "COMPARE OPERATION" << endl;
            bool flag = false;
            while (!flag) {
                switch (way)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag = true;
                    break;
                case 2:
                    flag = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    return;
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            Set<int> set2;
            switch (way)
            {
            case 1:
                //vector = Vector3D(X, Y, Z);
                set2 = Set<int>(a, len);
                break;
            case 2:
                break;
            default:
                break;
            }
            if (set == set2) {
                cout << "They are equal" << endl;
            }
            else {
                cout << "They are not equal" << endl;
            }
            pause();
            break;
        case 6:
            cout << set << endl;
            break;
        case 0:
            cout << "Leaving the programm." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);

}


