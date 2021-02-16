#include <iostream>

enum class SquareType {Empty, Player1, Player2}; //Player1 can be X and Player 2 can be O


class Board{
    public:
        void CreateBoard();
        void DisplayBoard();

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
                std::cout<<"⚪ ";;
            } else if(arr_[i][j] == SquareType::Player1) {
                std::cout<<"X ";;
            } else {
                std::cout<<"O ";;
            }
        }
        std::cout<<std::endl;
    }
}

int main() {
    Board b1;
    b1.CreateBoard();
    b1.DisplayBoard();
    return 0;
}