#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector<int> v;
    for (int i = 0; i < 20; i++)
        v.push_back(rand() % 100);
    print(v);
    //sort(v.begin(),v.end());
    print(v);
    int key = 17;
    int pos = find(v.begin(), v.end(), key) - v.begin();
    if (pos == v.size()) {
        cout << "NOT FOUND!" << endl;
    } else {
        cout << "pos=" << pos << endl;
    }
    int MaxIndex = max_element(v.begin(), v.end()) - v.begin();
    int MinIndex = min_element(v.begin(), v.end()) - v.begin();
    cout << "Max Element=" << v[MaxIndex] << "AT  pos" << MaxIndex << endl;
    cout << "Min Element=" << v[MinIndex] << "AT  pos" << MinIndex << endl;
    int key2 = 61;
    cout << count(v.begin(), v.end(), key2) << endl;
    for (int i = 0; i < 20; i++)
        v.push_back(rand() % 100);
    print(v);
    sort(v.begin(), v.end());
    print(v);
    vector<int>::iterator p = unique(v.begin(), v.end());    //sorted
    print(v);
    v.erase(p, v.end());
    print(v);
    return 0;
}
