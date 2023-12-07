#include<vector>
#include<iostream>

using namespace std;

int main() {
    // initialize a vector
    vector<int> v;

    // adds an element to the end of the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // returns the first element of the vector
    cout << v.front() << "\n";

    // returns the last element of the vector
    cout << v.back() << "\n";

    // removes the last element of the vector
    v.pop_back();

    // if the vector is empty and false
    cout << v.empty() << "\n";

    // the number of elements in the vector
    cout << v.size() << "\n";

    // changes the size of the vector, adding or removing elements
    // v.resize(10);
    v.resize(10, 5);
    cout << v.size() << "\n";

    // begin() returns an iterator pointing to the first element of the vector
    // end() returns an iterator pointing to the element past the last element of the vector
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        // printing all value of vector
        cout << *it << " ";
    }
    cout << "\n";

    // removes all elements from the vector
    v.clear();

    return 0;
}