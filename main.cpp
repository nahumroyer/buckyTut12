#include <iostream>
#include <string>
using namespace std;

class NahumsClass{
public: 

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
    NahumsClass nahums_object;
    cout << "Hello, World!" << endl;
    nahums_object.coolSaying();

    // from tut 13
    nahums_object.setName("Sire Bucky Wallace");
    cout << nahums_object.getName() << endl;

    return 0;
}