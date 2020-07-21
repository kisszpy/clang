//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>
#include <string>

using namespace std;

struct Person {
    int age;
    char *name;
    char *nickname;
    int score;
};
struct Animal {
    string name;
} dog;
struct Car {
    string name;
    int circle;
} car = {
        "保时捷",
        4
};
union Cat {
    int age;
    char name[20];
};
enum Color {
    RED,
    BLUE,
    YELLOW
};


int main() {
    int a = 20;
    int *pa = &a;
    // 指针指向的内存地址
    cout << pa << endl;
    // 指针变量的值
    cout << *pa << endl;
    int *px = new int;
    cout << px << endl;
    cout << px + 1 << endl;
    cout << px + 2 << endl;
    cout << a << endl;
    *pa = *pa + 1;
    ++(*pa);
    cout << a << endl;
    int *array = new int[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = 20 + i;
        cout << (++(*array)) << endl;
    }
    Person *person = new Person;
    person->age = 20;
    cout << person->age << endl;
    pa = nullptr;
    delete px;
    delete pa;
    delete person;
}
