
// ( 2 player rock , paper , scissors game )

#include <iostream>
using namespace std;

class game{

public:
string player1 ;
string player2 ;

    void instruction(){
        cout<<endl<<"------------- WElCOME TO ROCK, PAPER, SCISSORS GAME -------------"<<endl<<endl;
        cout<<"----[ RULES ]----"<<endl;
        cout<<"1. ROCK beats SCISSORS"<<endl;
        cout<<"2. PAPER beats ROCK"<<endl;
        cout<<"3. SCISSORS beats PAPER"<<endl<<endl<<"-----------------------------------------------------------------"<<endl<<endl;
        cout<<"PLAYER 1 & PLAYER 2 "<<endl<<endl;
        cout<<"----------------- 1 time game running -----------------"<<endl<<endl;        
        
    }

    void choose(){

        cout<<"CHOOSE : rock , paper , scissors"<<endl;
        cout<<"PLAYER 1 = ";
        cin>>player1;
        
        cout<<endl<<"CHOOSE : rock , paper , scissors"<<endl;
        cout<<"PLAYER 2 = ";
        cin>>player2;
    }

    void condition(){
//draw condition        
        if(player1 == "rock" && player2 == "rock" ||
           player1 == "paper" && player2 == "paper" ||
           player1 == "scissors" && player2 == "scissors" ){

            cout<<endl<<"----- DRAW -----"<<endl;

        }
//draw condition        
//error condition
        if(player1 == "rock" && player2 == "paper" ||
           player1 == "rock" && player2 == "scissors" ||
           player1 == "paper" && player2 == "scissors" ||
           player1 == "paper" && player2 == "rock" ||
           player1 == "scissors" && player2 == "paper" ||
           player1 == "scissors" && player2 == "rock" 
           ){
        }
        else{
           cout<<endl<<"----- Please enter correct words ! -----"<<endl;
        }
  
//error condition
//winning condition
        if(player1 == "rock" && player2 == "paper"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "scissors" && player2 == "rock"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "paper" && player2 == "scissors"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "rock" && player2 == "scissors"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }
        else if(player1 == "paper" && player2 == "rock"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }
        else if(player1 == "scissors" && player2 == "paper"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }   
    }
//winning condition    

};

int main() {
 
 game obj1, obj2;
 obj1.instruction();
 obj1.choose();
 obj1.condition();


}