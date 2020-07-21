//
// Created by kisszpy on 7/19/20.
//
#include <iostream>
#include <thread>

using namespace std;


void say() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    cout << "execute result sum = " << sum << endl;
}

int main() {

    int array[20];
    cout << array[0] << endl;
    for (int i = 0; i < 20; ++i) {
        array[i] = 100 + i;
        cout << array[i] << endl;
    }
    // 数组的初始化
    int nums[3] = {1, 3, 5};
    cout << nums[2] << endl;
    int temp[5] = {1, 3};
    cout << temp[4] << endl;
    cout << temp[1] << endl;
    int uids[1000] = {2};
    cout << uids[122] << endl;
    cout << uids[0] << endl;
    string names[] = {"java", "sql"};
    cout << names[1] << endl;

    char dog[3] = {'d', 'o', 'g'};

    cout << "hello \t" "java" << endl;
    cout << strlen("love") << endl;
    cout << dog << endl;

}
