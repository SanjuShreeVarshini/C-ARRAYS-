#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int numbers[5] = {0};  //first we have to initialize it to zero
    srand(time(0));

    int treasureIndex = rand () % 5;
    numbers[treasureIndex] = 1;

    cout<< "Welcome to treasure hunt game! \n";
    cout<<"There are 5 positions.one has a hidden number\n";

    int guess,attempts =0;
    while(true){
        cout<<"guess the index( 0 to 4):";
        cin>>guess;
        attempts++;
        if (guess <0||guess > 4){
            cout<<"Invalid index.guess between 0 & 4\n";
            continue;
        }
        if(numbers[guess] == 1){
            cout<<"Congratulations! You found the treasure" << attempts << "attempts\n";
            break;
        }
        else{
        cout<<"Wrong Spot.Try again";
        }

        }

    }

    
