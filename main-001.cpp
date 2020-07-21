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
//    cout << "hello,world" << endl;
//    int a ;
//    // 接受用户输入
//    cin >> a;
    thread t(say);
    t.join();
    wchar_t a = L'P';
    cout << a << endl;
    size_t x = 100;
    cout << x << endl;
    bool result = true;
    cout << result << endl;
    const size_t month = 12;
    cout << month << endl;
    int d = {20};
    cout << d << endl;
    int tx = {1.2};
    cout << tx << endl;
    size_t num = 180000;
    cout << num << endl;

}
