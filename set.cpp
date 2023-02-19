#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
    for(auto value: s) {
        cout << value << " " << endl;
    }
    //// for(auto it = s.begin(); it != s.end(); ++it) {
    ////     cout << *it << endl;
    //// }
}
int main() {
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("pqr");
    s.insert("uvw");
    auto it = s.find("abcd");
    // if(it != s.end()) {
    //     cout << *it << " " << endl;
    // }
    s.erase("abc");
    print(s);
}