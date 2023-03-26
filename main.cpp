//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static int minMovesToMakePalindrome(string s) { // static to not to create object in class Solution
        vector <char> lets;
        for (auto i: s) { // add elements from string to vector
            lets.push_back(i);
        }
        int res = 0;
        while (!lets.empty()){ // while vector not empty
            for (int i = 0; i < lets.size(); i++){
                if (lets[lets.size() - 1] == lets[i]) {
                    if (lets.size() - 1 != i){ // if the last element is not the only one
                        res = res + i;
                        lets.erase(lets.begin() + i); // delete i-element
                        lets.pop_back(); // delete last element
                        break;
                    }
                    else {
                        res = res + i / 2;
                        lets.pop_back();
                        break;
                    }
                }
            }
            return res;
        }
    }
};

int main() {

    cout << Solution::minMovesToMakePalindrome("letelt") << endl;

    return 0;
}
