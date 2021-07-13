#include <iostream>
#include <string>
using namespace std;
class TicTacToe
{

   private:

   char table[3][3]; //2D Array of a table

   public:

   TicTacToe() {}

   //Set the Table for the beginning of the Tic Tac Toe Game

	friend void SetTable(TicTacToe &obj);   
   //Print the table as shown output as shown _|_|_

                                        //    _|_|_

                                        //    _|_|_

   
   
	friend void PrintTable(TicTacToe &obj);
	//Control Player moves

   void PlayerMove(char num, char Player)

   {

      int i = 0;

      int j = 0;

       

      bool WrongMove = true; //If true, the player has made a wrong move

      for( i = 0; i < 3; i++ )

      {

         for( j = 0; j < 3; j++ )

         { //Mark square with X or O if WrongMove is not true

            if(table[i][j] == num)

            {

               table[i][j] = Player; //Assigns the space with the X or O, depending on the table.

               WrongMove = false;

            }

         }

      }

      if(WrongMove == true) { cout << "Wrong move!\n"; }

   } //End Player Move

    

//Check the board for a winner after the move

   bool CheckWinner(char Player, bool GameOver)

   {

      for(int i = 0; i < 3; i++) //Increment i to check rows

      {

         if(table[i][0] == table[i][1] && table[i][1] == table[i][2]) GameOver = true;

      }

      for(int i = 0; i < 3; i++) //Increment i to check column

      {

         if(table[0][i] == table[1][i] && table[1][i] == table[2][i]) GameOver = true;

      }

      //Checking the Diagonals

      if(table[0][0] == table[1][1] && table[1][1] == table[2][2])

      {

         GameOver = true;

      }

      if(table[0][2] == table[1][1] && table[1][1] == table[2][0])

      {

         GameOver = true;

      }

      if(GameOver == true)

      {

         cout << "Player " << Player << " wins!\n\n";

      }

         return GameOver;

   } //End Check Winner

//Check the board to see if the match has come to a draw

   bool CheckDraw(bool GameOver)

   {

      int n = 1;

      int i = 0;

      int j = 0;

      int counter = 0;

         

      for( i = 0; i < 3; i++ )

      {

         for( j = 0; j < 3; j++ )

         {

            //Check to see if the board if full

            if(table[i][j] == '0'+n)

            {

               counter++;

            }

            n++;

         }
      }

      if( counter < 1 )

      {

         cout << "It's a draw!\n\n";

         GameOver = true;

      }

      return GameOver;

   }

};


void SetTable(TicTacToe &obj)

   {

      int n = 1;
      int i = 0;
      int j = 0;
       
      for ( i = 0; i < 3; i++ )

      {

         for ( j = 0; j < 3; j++ )

         {

            obj.table[i][j] = '0' + n; //Cast the n to a character

            n++;

         }

      }

   } //End Set Table


void PrintTable(TicTacToe &obj)

   {

      int i = 0;

      int j = 0;

       

      for ( i = 0; i < 3; i++ )

      {

         for ( j = 0; j < 3; j++ )

         {

            if ( j < 2 )

            {

               cout << obj.table[i][j] << "|";

            }

               else

               {

                  cout << obj.table[i][j] << endl;

               }

         }

      }

   } //End Print Table



int main()

{

    bool done = false, GameOver = false;

    char Player = 'O', num;

    TicTacToe myGame;

    SetTable(myGame);

    do

    {

        if( Player == 'X' )

        {

           Player = 'O';

        }

           else

           {

              Player = 'X';

           }

        PrintTable(myGame);

        cout << "Player \"" << Player << "\" turn or (q) to quit> ";

        cin >> num;

        cout << "\n";

        if(num == 'q' || num == 'Q' )

        {

           cout << "Goodbye!...\n"; break;

        }

        myGame.PlayerMove(num, Player);

        GameOver = myGame.CheckWinner(Player, GameOver);

        GameOver = myGame.CheckDraw(GameOver);

        //if game over, starting over

        if(GameOver == true)

        {   SetTable(myGame);

            GameOver = false;

        }

    } while(!done);

    system("pause");

    return 0;

}

