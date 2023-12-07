#include<iostream>
#include<unordered_set>

int main() {
    std::unordered_set<int> uset;
    uset.insert(1);
    uset.insert(2);
    uset.insert(3);
    std::cout << "Size: " << uset.size() << "\n";
    std::cout << "Is Empty? " << uset.empty() << "\n";
    std::cout << "Find 3: " << *(uset.find(3)) << "\n";
    uset.erase(2);
    for(auto it = uset.begin(); it != uset.end(); it++) {
        std::cout << *it << "\n";
    }
    return 0;
}