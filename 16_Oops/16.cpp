// Abstraction==> જરૂરી વસ્તુ બતાવો, અંદરની detail છુપાવો.
#include <iostream>
using namespace std;

class BankAccount {
private:
    int password = 1234;  // hide
    
public:
    void showBalance() {   //show
        cout << "Balance: 5000" << endl;
    }
};

int main() {
    BankAccount b;
    b.showBalance();  // Balance: 5000
    // b.password    // no Access 
    return 0;
}