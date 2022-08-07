#include <iostream>
#include <vector>

int main() {
    std::vector<int> cVec(3, -1); // cVec(size, val)
    
    for(int i = 0; i < 3; i++)
        cVec[i] = (i + 1) * 10;
    cVec.resize(3);
    cVec.resize(3, 110); // resize cVec and add 110
    for(int i = 0; i < 3; i++)
        cVec.push_back((i + 1) * 20); // push a value on the last position of cVec
    for(int i = 0; i < cVec.size(); i++)
        std::cout << cVec[i] << " ";
    // for (int x : cVec)
    //     std::cout << x << " ";
    return 0;
}