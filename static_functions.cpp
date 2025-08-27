#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // static data member
public:
    Counter() { count++; }

    // static function
    static void showCount() {
        cout << "Objects created: " << count << endl;
    }
};

// define static variable outside the class
//int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // calling static function without object
    Counter::showCount();  

    return 0;
}
