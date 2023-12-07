#include<bits/stdc++.h>

using namespace std;

void binary_search(vector<int> &v, int x) {
    sort(v.begin(), v.end());
    int min = 0;
    int max = v.size() - 1;
    while(min <= max) {
        int p = (min + max) / 2;
        if(v[p] == x) {
            cout << "Index: " << p << "\n";
            return;
        }
        else if (v[p] < x) 
            min = p + 1;
        else if(v[p] > x)
            max = p - 1;
    }
    cout << "not found.\n";
}

int main(){

    vector<int> v = { 7, 24, 90, 17, 24, 1, 4, 65, 43, 77 };
    binary_search(v, 65);
    return 0;
}