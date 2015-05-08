#include "Board.h"
#include <iostream>

using namespace std;


void Board::setup()
{
    int i, j;

    for (i = 0; i < 8; i++)
        {
          for (j = 0; j < 8; j++)
          {
            cout << startup[i][j]; //setup starting position

          }

        }
}

