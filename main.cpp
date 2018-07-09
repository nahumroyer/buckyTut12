#include <iostream>
#include <string>
using namespace std;

class NahumsClass{
public:

    // Constructor - automatically called with every object
    NahumsClass(string z){
        cout << "the constructor will print this automagically" << endl;
        setName(z);
    }

    void coolSaying(){
        cout << "The answer to everything is 42" << endl;
    }

    // Since we don't have direct access to the variable name, we need
    // a function to set name.
    void setName(string x){
        name = x;
    }

    // Since we don't have direct access to the variable name, we need
    // a function to "get" / access name.
    string getName(){
        return name;
    }

private:
    string name;
};
int main() {
    // from tut12
    NahumsClass nahums_object("lucky bastard");
    cout << "Hello, World!" << endl;
    nahums_object.coolSaying();

    // from tut 14
    cout << nahums_object.getName() << endl;

    // from tut 13
    nahums_object.setName("Sire Bucky Wallace");
    cout << nahums_object.getName() << endl;

    // from tut 14
    NahumsClass nahums_object2("mcPheeson 2");
    cout << nahums_object2.getName() << endl;

    return 0;
}