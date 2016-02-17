#include <iostream>

using namespace std;

int main()
{
    //1. the simple way to printout "Hellow World"
    //cout << "Hello world!" << endl;
    /*2. NOW, let we modify it. make the "Hellow World" printed out in to 4x6 dimension.
         it means the "Hello Word" printed out 4x in columns and 6x in rows. see the example in 2 * 3 dimensions
         ----------------------
         Hello Word! Hello Word!
         Hello Word! Hello Word!
         Hello Word! Hello Word!
         -----------------------

    */
    int numOfColumns=4;
    int numOfRows=6;
    int spaceColumns=17;

    for(int i=0;i<numOfRows;i++){
        for(int j=0;j<numOfColumns;j++){
            cout<<"Hello World!";
        }
        cout<<endl;
    }

    return 0;
}
