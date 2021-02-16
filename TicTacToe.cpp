#include <iostream>

using namespace std;

enum class SquareType {Empty, Player1, Player2}; //Player1 can be X and Player 2 can be O

struct Point
{
    int row;
    int col;
};


class Board{
    public:
        void CreateBoard();
        void DisplayBoard();

        void PlaceMarker(Point coordinate, int playerNum);

        Point PlayerChoice();


    private:
        SquareType arr_[3][3];
};

void Board::CreateBoard() {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr_[i][j] = SquareType::Empty;
        }
    }
}


void Board::DisplayBoard() 
{
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr_[i][j] == SquareType::Empty){

                std::cout<<" ⚪ ";;
            } else if(arr_[i][j] == SquareType::Player1) {
                std::cout<<" ❌ ";;
            } else {
                std::cout<<" ⭕ ";;
            }
        }
        std::cout<<std::endl;
    }

    std::cout<<"---------------------------"<<std::endl;
}


void Board::PlaceMarker(Point coor, int playerNum) {
    if(playerNum == 1) {
        arr_[coor.row][coor.col] = SquareType::Player1;
    }
    else if(playerNum == 2) {
        arr_[coor.row][coor.col] = SquareType::Player2;
    }
}

Point Board::PlayerChoice()
{
    Point coor;
    cout << "Please enter col " << endl;
    cin >> coor.col;

    cout << "Please enter row " << endl;
    cin >> coor.row;

    return coor;
}

int main() {
    Board b1;
    int turn = 0;
    b1.CreateBoard();
    Point answer;
    while(turn < 9) {
        b1.DisplayBoard();
        
        if(turn % 2 == 0) {
            std::cout<<"Player Ones turn: "<<std::endl;
            answer = b1.PlayerChoice();
            b1.PlaceMarker(answer, 1);
        } else {
            std::cout<<"Player Twos turn: "<<std::endl;
            answer = b1.PlayerChoice();
            b1.PlaceMarker(answer, 2);
        }

        turn++;
    }
    return 0;
}