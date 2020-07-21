//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <array>

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
    vector<int> nums(20);
    for (int j = 0; j < nums.size(); ++j) {
        nums[j] = 100 + j;
    }
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    array<int,20> array = {1,3,5,7};
    for(vector<int>::iterator iterator = nums.begin(); iterator!=nums.end();iterator++) {
        cout<< "value is : \t" << *iterator << endl;
    }

}
