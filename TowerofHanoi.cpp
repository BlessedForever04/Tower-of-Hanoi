#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>
// here <cstdlib> and <ctime> libraries are included for generating random number

using namespace std;

// These stack creation are global so that these can be directly accessed and changed within any function (Same for variable 'numtiles')
    stack <int> stack1;
    stack <int> stack2;
    stack <int> stack3;
    int numtiles;

// Forward declaration are used to maintain the scope.
void generatestacks(); // This function generates stack with given number of tiles (random structure);
void game(); // Main game function where other functions are called. just to keep main funcion cleaner
void displaystack(); // This function displays all the 3 stacks in game format (TowerofHanoe);
void moveinformer(); // Just some instructions it displays
void movecasesfor1(); // Move cases after selecting 1st column's disc
void movecasesfor2(); // Move cases after selecting 2nd column's disc
void movecasesfor3(); // Move cases after selecting 3rd column's disc
void transfer(stack<int> &fromstack, stack<int> &tostack, int x); // This function transfers disc from one column to another

void displaystack(){
    system("cls");
    cout<<"Welcome to the game 'Tower of Hanoi', arrange tiles in decreasing order from top to botton to win the game."<<endl;
    cout<<"Rules - "<<endl;
    cout<<"1. Moves where tiles larger than the bottom tile, are invalid."<<endl;
    cout<<"2. Only one tile can be moved at a time."<<endl;
    cout<<"3. Only topmost tile can be transfered from one tower to the other."<<endl;
    cout<<endl;
    cout<<"First select tower number to move tile from other tower."<<endl;
    cout<<"Then select another tower number to where the tile is supposed to be moved."<<endl;

// This temporary stacks are created in order to print them by popping elements
    stack <int> tempstack1 = stack1;
    stack <int> tempstack2 = stack2;
    stack <int> tempstack3 = stack3;
    cout<<endl;
    
    for(int i = numtiles+1; i>1; i--){
            if(i == tempstack1.size()){
                cout<<"  "<<tempstack1.top()<<"    ";
                tempstack1.pop();
            }
            else{
                cout<<"  |    ";
            }
            if(i == tempstack2.size()){
                cout<<tempstack2.top()<<"    ";
                tempstack2.pop();
            }
            else{
                cout<<"|    ";
            }
            if(i == tempstack3.size()){
                cout<<tempstack3.top()<<endl;
                tempstack3.pop();
            }
            else{
                cout<<"|"<<endl;
            }
    }
    cout<<"-----------------"<<endl;
    cout<<endl;
}

//main game function, just maintains other functions and starts game
void game(){
    //game's initial state is displayed
    displaystack();
    cout<<"Select Tower-"<<endl;
    cout<<"Tower 1   Tower 2   Tower 3"<<endl;
    cout<<": ";
    int Move;
    cin >> Move;

    switch (Move){
        case 1:
        movecasesfor1(); break;
        case 2:
        movecasesfor2(); break;
        case 3:
        movecasesfor3(); break;
        default:
        cout<<"Invalid move, select proper tower"<<endl;
        cout<<endl;
        game();
    }
}

//Just some text
void moveinformer(){
    cout<<"Transfer tile to.."<<endl;
    cout<<"Tower 1   Tower 2   Tower 3"<<endl;
}

// Transfer function to transfer disc from one stack to the other
void transfer(stack <int> &fromstack, stack <int> &tostack){

    if(fromstack.top() == 10){
        cout<<endl<<"This Tower is empty, go with different tower."<<endl;
        game();
    }

    if(fromstack.top() <= tostack.top()){
        tostack.push(fromstack.top());
        fromstack.pop();
        if(tostack.size()==numtiles+1){
            displaystack();

            cout<<"----------------------------------"<<endl;
            cout<<"|   Congratulations, you've won   |"<<endl;
            cout<<"----------------------------------"<<endl;
        }
        else{
            game();
        }
    }
    else{
        cout<<endl;
        cout<<"Invalid move!"<<endl;
        cout<<"Enter valid move - ";
        cout<<endl;
        game();
    }
}

//movecasesfor1 is function which deals with the tile movements of tower 1
void movecasesfor1(){
    moveinformer();
    cout<<": ";
    int m2;
    cin>>m2;
        switch(m2){
            case 1:
            transfer(stack1, stack1); break;
            case 2:
            transfer(stack1, stack2); break;
            case 3:
            transfer(stack1, stack3); break;
            default:
            cout<<"Select proper tower"<<endl;
            cout<<endl;
            movecasesfor1();
        }
}

//movecasesfor1 is function which deals with the tile movements of tower 2
void movecasesfor2(){
    moveinformer();
    cout<<": ";
    int m2;
    cin>>m2;
        switch(m2){
            case 1:
            transfer(stack2, stack1); break;
            case 2:
            transfer(stack2, stack2); break;
            case 3:
            transfer(stack2, stack3); break;
            default:
            cout<<"Select proper tower"<<endl;
            cout<<endl;
            movecasesfor2();
        }
}
//movecasesfor1 is function which deals with the tile movements of tower 3
void movecasesfor3(){
    moveinformer();
    cout<<": ";
    int m2;
    cin>>m2;
        switch(m2){
            case 1:
            transfer(stack3, stack1); break;
            case 2:
            transfer(stack3, stack2); break;
            case 3:
            transfer(stack3, stack3); break;
            default:
            cout<<"Select proper tower"<<endl;
            cout<<endl;
            movecasesfor3();
        }
}
// This is the function which creates our tile format in 3 towers by using the random number generated
void generatestacks(){
    srand(time(0));
    cout<<"Enter number of tiles you want - (Range upto 9)"<<endl;
    cout<<": ";
    cin>>numtiles;
    if(numtiles >9){
        cout<<"This game is designed to be played on tiles upto 10, but remember this code is playable upto 2,14,74,83,647 tiles, but only if i want xD"<<endl;
        generatestacks();
    }
// here I've pushed one element in each stack which is greater than the max tile number, here the biggest tile is shown as 'numtiles' which also refers as number of tiles.
// This three elements in each tower acts as base of the tower which makes sure that stack is not empty so that we can perform various functions on stack
    stack1.push(numtiles+1);
    stack2.push(numtiles+1);
    stack3.push(numtiles+1);

    int towernumber;
    int arraycorrect[numtiles];
// Here the for loop and its whole part pushes random tiles in random tower, here the tower number is decided randomly by using the random number generated
    for(int i = 0; i<numtiles; i++){
        arraycorrect[i] = i+1;
        towernumber = (rand() % 3) + 1;

        switch(towernumber){
            case 1:
            stack1.push(arraycorrect[i]); break;
            case 2:
            stack2.push(arraycorrect[i]); break;
            case 3:
            stack3.push(arraycorrect[i]); break;
        }
    }
    cout<<endl;
}

//clean main function looks gorgeous!
int main(){
    generatestacks();
    game();
}
//Thanks for reading my code ;)
//Feel free to use it and pull up with something more amazing.