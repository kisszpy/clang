//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>
#include <string>

using namespace std;

struct Person {
    int age;
    char name[20];
    char nickname[20];
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
    cout << dog.name << endl;
    cout << "车名：" + car.name << "\n轮胎数量：" << car.circle << endl;
    Color c = RED;
    cout << c << endl;
    int car_color = BLUE;
    cout << car_color << endl;
}
