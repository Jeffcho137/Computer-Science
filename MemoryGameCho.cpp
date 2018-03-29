#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void createBoard(int board[][4]);
/*
Input - board (must be empty)
Processing
1. seed random number generator
2. for each number (1-8)
    Generate row (0-3)
    Generate column (0-3)
    while (
    if (board at row,column !=0)
Output - board (filled)
*/
void displayBoard(bool shadow[][4]);
/*
Input - shadow board
Processing
1. Print out shadow board to display to player.
2. Assign boolean value to each '0'.
Output - board (filled with 0s)
*/
void drawBoard(int r1, int r2, int c1, int c2, bool shadow[][4], int board[][4]);
/*
Input - user inputted values for the two rows and columns in addition to filled board and filled shadow board.
Processing
1. Get values from user
2. Reveal values from the board
3. Display the board value on to shadow board
Output - Display shadow board with selected value from user
*/
int main()
/*
Input - 2 rows and columns to play the game.
Processing
1. Create the board
2. Display the empty board to user to play
3. Get input from user.
4. Check if the two inputs match to the board, and continue to play the game by displaying the updated shadow after each turn.
5. Check if all cards have been flipped.
Output - The board and its updated forms. The finished game and whether user wishes to play again.
*/

{
    bool shadow[4][4];
    bool ending = false;
    int r1, c1, r2, c2, board[4][4];
    char response = 'y';
    do
    {
        createBoard(board);
        displayBoard(shadow);
        do
        {
            do
            {
                cout<<"Please insert the first card row and column separating them by the return key.\n";
                cin>>r1;
                cin >>c1;
                if(shadow[r1-1][c1-1] == true) // check if the card is flipped.
                {
                    cout << "This card is already flipped! Select another card.";
                }
                else if((r1==r2)&&(c1==c2))
                {
                    cout << "You can't select same card twice!";
                    cout << endl;
                    continue;
                }
            }while(shadow[r1-1][c1-1]!= false);
            do
            {
                cout<<"Please insert the second card row and column separated by the return key.\n";
                cin>>r2;
                cin>>c2;
                if(shadow[r2-1][c2-1] == true) // check if the card is flipped.
                {
                    cout << "This card is already flipped! Select another card.";
                }
                if((r1==r2)&&(c1==c2))
                {
                    cout << "You can't select same card twice!";
                    cout << endl;
                    continue;
                }
            }while(shadow[r2-1][c2-1]!= false);
            r1--;
            c1--;
            r2--;
            c2--;
            drawBoard(r1,r2,c1,c2,shadow,board);
            if (board[r1][c1]==board[r2][c2])
            {
                cout << "Cards Matched!"<<endl;

                shadow[r1][c1] = true;
                shadow[r2][c2] = true;
            }
            cin.get();
            cin.get();

            for (int r=0; r<4; r++)
            {
                cout<<r+1<<" | ";
                for (int c=0; c<4; c++)
                {
                    if (shadow[r][c] == true)
                    {
                        cout<<board[r][c]<<" ";
                    }
                    else
                    {
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
            ending = true;
            for (int r=0; r<4; r++) // check all card status, they all should be true/flipped to end the game.
            {
                for (int c=0; c<4; c++)
                {
                    if(shadow[r][c]==false)
                    {
                      ending = false;
                      break;
                    }
                }
                if(ending == false)
                {
                    break;
                }
            }
        }while(ending != true);
        cout << "You win!!!"<<endl;
        cout << "Play Again? (y for Yes/n for No) : ";
        response = cin.get();
    }while(response == 'y' || response == 'Y');
    cin.get();
    return 0;
}
void createBoard(int board[][4])
{
   int index[16]={1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};
    for (int s=0; s<=20; s++)
    {
        for (int x=0; x<16; x++)
        {
            srand((unsigned)time(NULL));
            int i=rand()%15+1;
            int shad=index[x];
            index[x]=index[i];
            index[i]=shad;
        }
    }
    int p=0;
    for (int r=0; r<4; r++)
        {
            for (int c=0; c<4; c++)
            {
                board[r][c]=index[p];
                cout<<board[r][c];
                p=p+1;
            }
            cout<<endl;
        }
}
void displayBoard(bool shadow[][4])
{
    cout<<"    1 2 3 4\n";
    cout<<"  ";
    for (int counting=0; counting<=8; counting++)
    {
        cout<<"-";
    }
    cout<<endl;
    for (int r=0; r<4; r++)
    {
        cout<<r+1<<" | ";
        for (int c=0; c<4; c++)
        {
            cout<<"0 ";
            shadow[r][c] = false;
        }
        cout<<endl;
        }
    cout<<endl;
}
void drawBoard(int r1, int r2, int c1, int c2, bool shadow[][4], int board[][4])
{
    cout<<"    1 2 3 4\n";
            cout<<"  ";
            for (int z=0; z<=8; z++)
            {
                cout<<"-";
            }
            cout<<endl;
            for (int r=0; r<4; r++)
            {
                cout<<r+1<<" | ";
                for (int c=0; c<4; c++)
                {
                    if ((r==r1)&&(c==c1))
                    {
                        cout<<board[r][c]<<" ";
                    }
                    else if((r==r2)&&(c==c2))
                    {
                        cout<<board[r][c]<<" ";
                    }
                    else if (shadow[r][c] == true)
                    {
                        cout<<board[r][c]<<" ";
                    }
                    else
                    {
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
}
