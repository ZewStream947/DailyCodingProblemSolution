#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    int numsSize, target, number;

    cin >> numsSize >> target;

    unordered_map<int, int> save;

    for (int index = 0; index < numsSize; ++index) {
        cin >> number;

        if (save.count(target - number) > 0) {
            cout << "[" << save[target - number] << ", " << index << "]";
            return 0;
        } else save[number] = index;
    } 

    return 0;
}