#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
    int grid[2][3] ={0};
    srand(time(0));

    int row = rand() % 2;
    int col = rand() % 3;
    grid[row] [col] = 1;
    int attempts =1;
    row,col,attempts = 0;
    
    while(true){
    cout<<"Welcome to the mine game!";
    cout<<"\n enter the row(0 to 1)";
    cin>>row;
    cout<<"enter the column( 0 to 2)";
    cin>>col;
    attempts++;

    if(row<0||row>1||col<0||col>2){
        cout<<"Invalid input";
        continue;
    }
     if(grid[row][col] ==1){
        cout<<"Boom...You r found the mine\n" << attempts << "tries!\n";
        break;
     }else{
        cout<<"Safe! Keep trying!\n";
     }
    }
    

}