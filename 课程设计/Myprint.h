#ifndef MYPRINT_H
#define MYPRINT_H
#include <string>

class Myprint {
public:
    int ScoreBoard[16][16]={0};
    int chessboard[16][16] = {0};
    int flag = -1;
    const int step = 30;

    void printboard();

    void printchess();

    void printmouse();

    void printact();

    bool chessjudge(int x,int y,int chessboard[16][16]);

    void printend();

    void printstart();

    void Attack(int x,int y,int flag,int Vmboard[16][16],int ScoreBoard[16][16]);

    int AllScore(Node_Tree *p);

    Node_Tree* createroot();

    Node_Tree* createleaf(Node_Tree *p);

    Node_Tree* Minimax(Node_Tree* p);

    void PrintScore(Node_Tree *p);

    Node_Tree* createlist(Node_Tree *p);

    void Robot();

    int ScoreGet(int empty,int count,int block,int roable);

};
    struct Node_Tree{
        int flag,cnt,score=1,depth,result=0,number=0,Alpha=-100000000,Beta=+100000000;
        int Board_[16][16];
        struct Node_Tree* son[100];
        COORD site[100];
        Node_Tree *Last;
    };
    
    COORD currentPos = {-3, -3};
    COORD waitPos;
    std::string atk[4]={""};
   


#endif //MYPRINT_H
