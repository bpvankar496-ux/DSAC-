//map in c++
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // 🔹 Insert
    m[101] = "rahul";
    m[110] = "neha";
    m[131] = "amit";

    cout << "After insertion:\n";
    for (auto p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    //  Size
    cout << "\nSize of map: " << m.size() << endl;

    //  Access
    cout << "\nValue at key 110: " << m[110] << endl;

    //  Find
    cout << "\nFinding key 101:\n";
    if (m.find(101) != m.end()) {
        cout << "Key 101 found, value = " << m[101] << endl;
    } else {
        cout << "Not found\n";
    }

    //  Erase
    cout << "\nDeleting key 110...\n";
    m.erase(110);

    cout << "After deletion:\n";
    for (auto p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    //  Count (check existence)
    cout << "\nCheck key 131 exists or not:\n";
    if (m.count(131)) {
        cout << "Yes exists\n";
    } else {
        cout << "Does not exist\n";
    }

    //  Empty
    cout << "\nIs map empty? ";
    if (m.empty()) cout << "Yes\n";
    else cout << "No\n";

    //  Clear
    cout << "\nClearing map...\n";
    m.clear();

    cout << "Size after clear: " << m.size() << endl;

    return 0;
}