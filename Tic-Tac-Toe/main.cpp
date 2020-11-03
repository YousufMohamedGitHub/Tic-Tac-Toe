//
//  main.cpp
//  Tic-Tac-Toe
//
//  Created by Yousuf Mohamed on 2020-10-12.
//  Copyright © 2020 Yousuf Mohamed. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>


char matrix[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void Draw();
void Input();
void ChangePlayer();
void WinCheck();
bool GameON = true;
bool Invalid_Input = false;

char Player = 'X';


int main() {
    while (GameON) {
    Draw();
        cout <<endl;
    Input();
        cout <<endl;
   
    }
    return 0;
        
}

void Draw() {
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << " ";
            cout << "_";
            cout << matrix[i][j] << "_";
            cout << "|";
        }
        
        cout << endl;
    }
    cout<<"*****************************************"<<endl;
}

void Input() {
    //Reset Invalid value
    Invalid_Input = false;
    if (Player == 'X'){
        cout << "Player 1:X"<< endl;
    }
    if (Player == 'O'){
        cout << "Player 2:O"<< endl;
    }
    string Chosen_field;
    cout << "Choose a number to enter into a field: "<< endl;
    cin >> Chosen_field;
    
    if (Chosen_field.length() == 1) {
    switch (Chosen_field[0]) {
        case '1':
            if (!(((matrix[0][0]) == ('X')) || ((matrix[0][0]) == ('O')))) {
            matrix[0][0] = Player;
            }
            break;
        case '2':
            if (!(((matrix[0][1]) == ('X')) || ((matrix[0][1]) == ('O')))) {
            matrix[0][1] = Player;
            }
            break;
        case '3':
            if (!(((matrix[0][2]) == ('X')) || ((matrix[0][2]) == ('O')))) {
            matrix[0][2] = Player;
            }
            break;
        case '4':
            if (!(((matrix[1][0]) == ('X')) || ((matrix[1][0]) == ('O')))) {
            matrix[1][0] = Player;
            }
            break;
        case '5':
            if (!(((matrix[1][1]) == ('X')) || ((matrix[1][1]) == ('O')))) {
            matrix[1][1] = Player;
            }
            break;
        case '6':
            if (!(((matrix[1][2]) == ('X')) || ((matrix[1][2]) == ('O')))) {
            matrix[1][2] = Player;
            }
            break;
        case '7':
            if (!(((matrix[2][0]) == ('X')) || ((matrix[2][0]) == ('O')))) {
            matrix[2][0] = Player;
            }
            break;
        case '8':
            if (!(((matrix[2][1]) == ('X')) || ((matrix[2][1]) == ('O')))) {
            matrix[2][1] = Player;
            }
            break;
        case '9':
            if (!(((matrix[2][2]) == ('X')) || ((matrix[2][2]) == ('O')))) {
            matrix[2][2] = Player;
            }
            break;
            
        default:
            cout <<"Please Enter a number between 1-9"<< endl;
            Invalid_Input = true;
            break;
    }
        WinCheck();
        ChangePlayer();
        
    }
    
    if (Chosen_field.length() != 1) {
        cout <<"Please Enter a number between 1-9"<< endl;
        Invalid_Input = true;
        
    }
    
}



void ChangePlayer() {
    if (Invalid_Input == false) {
    if (Player == 'X')  {
        Player = 'O';
    }
    else if (Player == 'O')  {
        Player = 'X';
    
    }
    }
}

void WinCheck() {
    int PlayerNumber;
    if (Player == 'X') {
        PlayerNumber = 1;
    }
    if (Player == 'O') {
        PlayerNumber = 2;
    }
    
    if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2]){
         Draw();

        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        

    else if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

       
    else if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    else if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    else if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    else if (matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    else if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]){
         Draw();
        
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    else if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]){
         Draw();
       
        cout << "Player "<<PlayerNumber<< " Wins!"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

       
    else if (matrix[0][0] != '1' && matrix[0][1] != '2' && matrix[0][2] != '3'
                    && matrix[1][0] != '4' && matrix[1][1] != '5' && matrix[1][2] != '6'
             && matrix[2][0] != '7' && matrix[2][1] != '8' && matrix[2][2] != '9') {
         Draw();
        
        cout << "It's a Draw"<<endl;
        cout<<"*****************************************"<<endl;
        GameON = false;
    }

        
    
}


