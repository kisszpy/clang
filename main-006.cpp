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


int main() {

    ofstream file;
    file.open("../a.txt");
    if (file.is_open()) {
        for (int i = 0; i < 1; ++i) {
            file << "hello" << i << endl;
        }
    }
    file.close();
}
