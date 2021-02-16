#include <iostream>

enum class SquareType {Empty, Player1, Player2}; //Player1 can be X and Player 2 can be O


class Board{
    public:
        void CreateBoard();
        void DisplayBoard();
        void PlaceMarker(int row, int col, int playerNum);

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


void Board::DisplayBoard() {
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

void Board::PlaceMarker(int row, int col, int playerNum) {
    if(playerNum == 1) {
        arr_[row][col] = SquareType::Player1;
    }
    else if(playerNum == 2) {
        arr_[row][col] = SquareType::Player2;
    }
}

int main() {
    Board b1;

    b1.CreateBoard();
    b1.DisplayBoard();
    b1.PlaceMarker(1, 1, 1);
    b1.DisplayBoard();
    b1.PlaceMarker(2, 2, 2);
    b1.DisplayBoard();

    return 0;
}