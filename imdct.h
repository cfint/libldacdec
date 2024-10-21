#pragma once

#include "utility.h"

typedef struct {
	int Bits;
	int Size;
	DECIMAL Scale;
	DECIMAL ImdctPrevious[MAX_FRAME_SAMPLES];
	DECIMAL* Window;
	DECIMAL* SinTable;
	DECIMAL* CosTable;
} Mdct;

void InitMdct();
void RunImdct(Mdct* mdct, DECIMAL* input, DECIMAL* output);
