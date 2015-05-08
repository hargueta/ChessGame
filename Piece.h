#ifndef PIECE_H
#define PIECE_H

// ****************************
// Class Name: Piece
//
// Description:
//
// ****************************

class Piece {
    private:
        //variables for the pieceId and character representing the piece
        int pieceId;
        char pieceIcon;

    public:
        //default constructor
        Piece();
        //overloaded constructor: takes in the piece id and character
        Piece(int pieceId, char pieceIcon);
    
        //*************************************************************
        int getPieceId()const {return pieceId;}
        //Summary: Gets the pieceId for the piece.
        //Precondition: None
        //Postcondition: Returns pieceId.
        //*************************************************************
    
        //*************************************************************
        char getPieceIcon()const {return pieceIcon;}
        //Summary: Gets the pieceIcon for the piece.
        //Precondition: None
        //Postcondition: Returns pieceIcon.
        //*************************************************************
    
        //*************************************************************
        void setPieceId(int pieceId);
        //Summary: Sets the pieceId.
        //Precondition: PieceId must be 100, 500, 300, 305, 200, or 900
        //  for the pieces.
        //Postcondition: Sets pieceId to pieceId.
        //*************************************************************
    
        //*************************************************************
        void setPieceIcon(char pieceIcon);
        //Summary: Sets the pieceIcon.
        //Precondition: PieceIcon must be character representing the
        //  the icon.
        //Postcondition: Sets pieceIcon to pieceIcon.
        //*************************************************************

};

#endif // PIECE_H
