//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <array>
#include <fstream>

typedef int myint;
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

void sample();


int msum(int *array,int len) {
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += array[i];
    }
    return sum;
}
int main() {
    sample();
    int array[] = {1,2,3};
//    int *pa = &array[0];
    int sum = msum(array,3);
    cout << array << endl;
    cout << &array[0] << endl;
    cout << sum << endl;
}

void sample() {
    cout << "sample" << endl;
}

