#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"This", "is", "a", "vector", "string"};
    /*cout << "I am a sequence of characters"; return 0;*/
    for(const string& word: msg) {
        cout << word << " ";
    }
    cout << endl;

}