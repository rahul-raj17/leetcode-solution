// using unordered map
#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s; //o(n)
        cin >> s;
        m[s]++;
    }

    int querry;
    cin >> querry;
    while(querry--) {
        string s;
        cin >> s;
        cout << m[s] << " " << endl;
    }

    // for(auto pr: m) {
    //     cout << pr.first << " " << pr.second << endl;
    // }
}