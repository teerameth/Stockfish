#include <iostream>
#include "movegen.h"
#include "position.h"

using namespace std;

int main ()
{
    Stockfish::Position::init;
    Stockfish::MoveList<Legal>();
    //Stockfish::ExtMove movelist[] = Stockfish::MoveList(pos);

    //cout << Stockfish::Position::legal;
}
