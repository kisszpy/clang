//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>
#include <string>

using namespace std;

struct Person{
    int age;
    char name[20];
    char nickname[20];
    int score;
};
void say() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    cout << "execute result sum = " << sum << endl;
}

int main() {
    string name;
    cin >> name;
    cout << name << endl;
    char nickname[3];
    cin >> nickname;
    cout << nickname << endl;
//    string vx;
//    cin.get();
//    cout << vx;
    string info = name + nickname;
    cout << "info is " + info << endl;
    string e1 = "abc";
    string e2 = "abc";
    string e3 = ("abc");
    // string e4;
    cout << (e1 == e2) << (e2 == e3) << endl;
    cout << e3.size() << endl;
    Person p = {
        2,
        "inck",
        "fs",
        20
    };
    cout << p.name << p.nickname << p.age << endl;
}
