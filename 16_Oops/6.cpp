// Mode of Inheritance ==>Mode of Inheritance એ નક્કી કરે છે કે Base class ના members, Derived class માં આવ્યા પછી કેટલી accessibility (પહોંચ) ધરાવે છે. ત્રણ modes છે: public, protected, private.

// Public Inheritance:==> જ્યારે : public લખો ત્યારે Base class ના public members, Derived class માં પણ public રહે છે અને protected members, protected રહે છે. Private members ક્યારેય access નથી થતા.
// Protected Inheritance:==>જ્યારે : protected લખો ત્યારે Base class ના public અને protected બંને members, Derived class માં protected બની જાય છે.
//Private Inheritance:==>જ્યારે : private લખો ત્યારે Base class ના public અને protected બંને members, Derived class માં private બની જાય છે - એટલે બહારથી કોઈ access ન કરી શકે.

// BaseClassMember   PublicInheritance   ProtectedInheritance  PrivateInheritance  
// public                public            protected              private
// protected             protected         protected             private
// private               Not accessible    Not accessible        Not accessible

#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;       // public member
protected:
    int prot = 20;      // protected member
private:
    int priv = 30;      // private member - ક્યારેય inherit નહીં થાય
};

//  PUBLIC Inheritance (સૌથી વધુ વપરાય)
class PublicChild : public Base {
public:
    void show() {
        cout << "pub = " << pub << endl;    //  public રહ્યું
        cout << "prot = " << prot << endl;  // protected રહ્યું
        // cout << priv;   Error - access નહીં
    }
};

//  PROTECTED Inheritance
class ProtectedChild : protected Base {
public:
    void show() {
        cout << "pub = " << pub << endl;    //  protected બની ગયું
        cout << "prot = " << prot << endl;  // protected રહ્યું
        // cout << priv;   Error
    }
};

//  PRIVATE Inheritance
class PrivateChild : private Base {
public:
    void show() {
        cout << "pub = " << pub << endl;    // private બની ગયું
        cout << "prot = " << prot << endl;  //  private બની ગયું
        // cout << priv;   Error
    }
};

int main() {
    PublicChild pc;
    pc.pub = 100;   // બહારથી access થાય (public છે)
    pc.show();
    
    ProtectedChild ptc;
    // ptc.pub = 100;  Error - protected છે, બહારથી નહીં
    ptc.show();
    
    PrivateChild pvc;
    // pvc.pub = 100;  Error - private છે
    pvc.show();
    
    return 0;
}