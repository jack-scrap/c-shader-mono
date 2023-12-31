#ifndef SHADER_H
#define SHADER_H

#include "math.h"

int solid();

int even(Coord st);

int rect(Coord st, Coord loc, Coord dim);

int sq(Coord st, Coord loc, unsigned int ln);

int hStripe(unsigned int y, unsigned int thick);

int vStripe(unsigned int x, unsigned int thick);

int checker(Coord st, unsigned int ln);

int diagStripe(Coord st, unsigned int thick);

int dotMatrix(Coord st, unsigned int stride);

int border(Coord st, Coord loc, Coord dim, unsigned int thick);

int hBar(Coord st, unsigned int x, unsigned int thick);

int vBar(Coord st, unsigned int y, unsigned int thick);

int se(Coord st);

int tri(Coord st, unsigned int ln);

int sine(Coord st, int freq, float amp);

int fizzBuzz(Coord st);

int grid(Coord st, unsigned int stride);

int el(Coord st, unsigned int idx);

// Bitwise
int op_or(Coord st);

int op_and(Coord st);

int op_xor(Coord st);

#endif
