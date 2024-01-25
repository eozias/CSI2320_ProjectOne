#include <iostream>
using namespace std;

int main() {
    //variable declarations
    int diamondSize;
    int height;

    //Get diamond size from user and verify that input is valid
    cout << "Please enter the desired size of the diamond: ";
    cin >> diamondSize;
    while(diamondSize < 1){
        cout << "That input is invalid. Please reenter the desired size of the diamond: ";
        cin >> diamondSize;
    }

    //Start creating the diamond
    height = (2 * diamondSize) + 1;
    for(int i = 0; i < height; i++){
        //create the top half of the diamond
        if(i <= diamondSize){
            for(int j = 0; j < (diamondSize - i); j++){
                cout << " ";
            }
            for(int k = 0; k < ((2 * i) + 1); k++){
                cout << "*";
            }
        }

            //create the bottom half of the diamond
        else if(i <= (2 * diamondSize)){
            for(int j = 0; j < (i - diamondSize); j++){
                cout << " ";
            }
            for(int k = 0; k < ((4 * diamondSize) - (2 * i) + 1); k++){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}