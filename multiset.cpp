// multiset me duplicate value copy hota hai but set me aisa nahi hota hai
// multiset priority queue ke jagah use kr skte hai , it is easy to use
// yaha pe multiple value allowed hai

#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s) {
    for(auto value: s) {
        cout << value << endl;
    }
}

int main() {
    multiset<string> s;
    s.insert("abc");
    s.insert("pqu");
    s.insert("jkl");
    s.insert("abc");
    //for deletion 
    //this delete according to iterator
    auto it = s.find("abc");
    if(it != s.end()) {
        s.erase(it);
    }
    //this erase all that values
    // s.erase("abc");
    print(s);
}