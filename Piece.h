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
        int pieceId;
        char pieceIcon;

    public:
        Piece();
        Piece(int pieceId);
        int getPieceId()const {return pieceId;}
        char getPieceIcon()const {return pieceIcon;}
        void setPieceId(int pieceId);
        void setPieceIcon(char pieceIcon);

};

#endif // PIECE_H
