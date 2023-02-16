// This program implements the game of Tic-Tac-Toe where you can play against the computer.
#include <iostream>
using namespace std;

const int SIZE =3;

void display_table (char board[SIZE][SIZE]) ;
void clear_table (char board[SIZE][SIZE]) ;
bool check_table_full (char board[SIZE][SIZE]) ; 
bool check_legal_option(char board[SIZE][SIZE], int row, int col) ;
void generate_player2_move (char board[SIZE][SIZE]) ;
int check_three_in_a_row (char board[SIZE][SIZE]) ;
bool check_end_of_game (char board[SIZE][SIZE]) ;
void get_player1_move (char board[SIZE][SIZE]) ;
void print_winner (char board[SIZE][SIZE]) ;

int main(){
    //Declare the tic-tac-toe board
 char board[SIZE][SIZE];
 //The row and column of the move for either player 1 or 2
 int row, col;
 //Clear the table
 clear_table(board);
 //Display the table
 display_table(board);
 do
 {
 //Have player 1 enter their move
 get_player1_move(board);
 //Generate player 2 move
 generate_player2_move(board);
 //Do this while the game hasn't ended
 }while(check_end_of_game(board) == false);
 //After the game is over, print who won
 print_winner(board);
 return 0;
}
void clear_table (char board[SIZE][SIZE]) ;
char board[SIZE][SIZE] = {_}
cout << board[SIZE][SIZE] ;

void display_table (char board[SIZE][SIZE]) ;
cout << "The current state of the game is: " << endl;

