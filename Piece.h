#ifndef PIECE_H
#define PIECE_H

// ****************************
// Class Name:
//
// Description:
//
// ****************************

class Piece {
    private:
        const int pieceId;

    public:
        Piece();
        Piece(int pieceId);
        int getPieceId()const {return pieceId;}
        void movePawn();
        void moveKing();
        void moveQueen();

};

#endif // PIECE_H
