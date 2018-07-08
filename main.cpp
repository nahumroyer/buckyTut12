#include <iostream>
using namespace std;

class NahumsClass{
public:
    void coolSaying(){
        cout << "The answer to eveything is 42" << endl;
    }
};
int main() {
    NahumsClass nahums_object;
    cout << "Hello, World!" << endl;
    nahums_object.coolSaying();
    return 0;
}