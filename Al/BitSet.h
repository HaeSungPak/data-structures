#pragma once
#ifndef ___BitSet
#define ___BitSet

typedef unsigned long Bitset;

#define BitSetNull   (BitSet)0
#define BitSetBits     32
#define SetOf(no) ((BitSet)1 <<(no))

int IsMember(BitSet s, int n);

void Add(BitSet* s, int n);

void Remove(BitSet* s, int n);

int Size(Bit s);

void Print(BitSe s);

void PrintLn(BitSet s);

#endif


