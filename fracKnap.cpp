#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int val, wt;
};


bool cmp(Item a, Item b) {
    double r1 = (double)a.val / a.wt;
    double r2 = (double)b.val / b.wt;
    return r1 > r2;

}
int main() {
    int n;
    cin >> n;

    vector<Item> items(n);

    for(int i = 0; i < n; i++) cin >> items[i].val;
    for(int i = 0; i < n; i++) cin >> items[i].wt;

    int cap;
    cin >> cap;

    sort(items.begin(), items.end(), cmp);

    double profit = 0.0;

    for(int i = 0; i < n; i++) {
        if(cap >= items[i].wt) {
            profit += items[i].val;
            cap -= items[i].wt;
        } else {
            profit += ((double)items[i].val / items[i].wt) * cap;
            break;
        }
    }

    cout << profit << endl;

    return 0;
}