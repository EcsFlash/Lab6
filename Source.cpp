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



void showMenu() {
    cout << "Select a method to execute:" << endl;
    cout << "1. Add to set" << endl;
    cout << "2. Remove from set" << endl;
    cout << "3. And with another set" << endl;
    cout << "4. Or with another set" << endl;
    cout << "5. Compare two sets" << endl;
    cout << "6. Without set" << endl;
    cout << "7. is subset of another set?" << endl;
    cout << "0. Exit" << endl;
}


int main() {
    printLogo();
    int len;
    int* a = nullptr;
    int way = 0;
    bool flag2;
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
    Set<int> set2;
    int way2 = 0;
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
    int el;
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
            
            cin >> el;
            set.add(el);
            break;
        case 2:
            cout << "Enter element to remove" << endl;
            
            cin >> el;
            set.remove(el);
            break;
        case 3:
            cout << "AND OPERATION" << endl;
            //a = new int[0];
            //float X, Y, Z;

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way2;
            system("cls");
            printLogo();
            cout << "AND OPERATION" << endl;
            flag2 = false;
            while (!flag2) {
                switch (way2)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag2 = true;
                    break;
                case 2:
                    flag2 = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            
            switch (way2)
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
            set = set.Intersection(set2);
            //pause();
            break;
        case 4:
            cout << "OR OPERATION" << endl;
            //a = new int[0];
            //float X, Y, Z;
            

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way2;
            system("cls");
            printLogo();
            cout << "OR OPERATION" << endl;
            flag2 = false;
            while (!flag2) {
                switch (way2)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag2 = true;
                    break;
                case 2:
                    flag2 = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            switch (way2)
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
            set = set.Union(set2);
            //pause();
            break;
        case 5:
            cout << "COMPARE OPERATION" << endl;
            //a = new int[0];
            //float X, Y, Z;

            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way2;
            system("cls");
            printLogo();
            cout << "COMPARE OPERATION" << endl;
            flag2 = false;
            while (!flag2) {
                switch (way2)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag2 = true;
                    break;
                case 2:
                    flag2 = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            switch (way2)
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
            cout << "WITHOUT OPERATION" << endl;
            //a = new int[0];
            //float X, Y, Z;


            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way2;
            system("cls");
            printLogo();
            cout << "WITHOUT OPERATION" << endl;
            flag2 = false;
            while (!flag2) {
                switch (way2)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag2 = true;
                    break;
                case 2:
                    flag2 = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            switch (way2)
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
            set = set.Without(set2);
            //pause();
            break;
        case 7:
            cout << "is subset os other set?" << endl;
            //a = new int[0];
            //float X, Y, Z;


            cout << "How do you want to create second Set?" << endl;
            cout << "1. Enter it len and content" << endl;
            cout << "2. Start automatically with empty set" << endl;
            cout << "Enter 1 or 2" << endl;
            cin >> way2;
            system("cls");
            printLogo();
            cout << "is subset os other set?" << endl;
            flag2 = false;
            while (!flag2) {
                switch (way2)
                {
                case 1:
                    cout << "Enter len, than content by space" << endl;
                    //cin >> X >> Y >> Z;
                    cin >> len;
                    a = new int[len];
                    for (int i = 0; i < len; i++) {
                        cin >> a[i];
                    }
                    flag2 = true;
                    break;
                case 2:
                    flag2 = true;
                    break;
                default:
                    cout << "Try again later" << endl;
                    int o = 1;
                    while (o != 0) {
                        cout << "Enter 0 if you want to Escape from the Set" << endl;
                        cin >> o;
                    }
                    break;
                }
            }
            //Vector3D vector = Vector3D();
            switch (way2)
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
            cout << boolalpha << set.isSubsetOf(set2) << endl;
            pause();
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


