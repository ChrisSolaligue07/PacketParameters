#include <iostream>
#include <vector>
using namespace std;

template<typename T, typename... Args>
void myPushBack(vector<T>& v, Args... args) {
    (v.push_back(args), ...);
 // (v, args);
}

int main() {
    std::vector<int> myIntVec;
	myPushBack(myIntVec, 1, 5, 1, 2, 5, 12, 34);
	for (auto v : myIntVec){
        std::cout << v << ' ';
    }
    return 0;
}