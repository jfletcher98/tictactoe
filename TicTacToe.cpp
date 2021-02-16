#include <iostream>

using namespace std;

enum class SquareType {Empty, Player1, Player2}; //Player1 can be X and Player 2 can be O

void CreateBoard()
{
    SquareType arr_[3][3];
}

void DisplayBoard(SquareType arr_[3][3])
{
    int dim = 3;
 
    for (int y = 0; y < dim; y++)
    {
        for (int x = 0; x < dim; x++)      // print col nums and spacers
        {
            arr_[y][x] = SquareType::Player1;
        }
    }

    for (int y = 0; y < dim; y++)
    {
        for (int x = 0; x < dim; x++)      // print col nums and spacers
        {
            if (arr_[y][x] == SquareType::Player1)
            {
                cout << 'O';
            }

            else if (arr_[y][x] == SquareType::Player2)
            {
                cout << 'X';
            }

            if (arr_[y][x] == SquareType::Empty)
            {
                cout << '  ';
            }


            if (x < dim - 1)
            {
                cout << " | ";
            }
        }

        cout << endl;
        if (y < dim - 1)
        {
            cout << "----------" << endl;
        }

    }
}

int main() 
{


    SquareType arr_[3][3];
    DisplayBoard(arr_);

       
    return 0;
}