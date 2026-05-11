#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    cin.ignore();

    vector<string> chunks(n);
    vector<string> queries(m);

    unordered_map<string, int> hash;

    for (int i = 0; i < n; i++) {
        getline(cin, chunks[i]);
    }

    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    string str = "";

    for (auto ch : chunks) {
        str += ch + " ";
    }

    // Remove hyphens
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            str.erase(i, 1);
            i--;
        }
    }


    stringstream ss(str);

    string word;

    while (ss >> word) {
        hash[word]++;
    }

    for (auto q : queries) {
        cout << q << " -> " << hash[q] << endl;
    }

    return 0;
}