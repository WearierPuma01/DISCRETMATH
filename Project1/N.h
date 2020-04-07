#pragma once
#include "NUM.h"
#include <string>
#include <iostream>
#include "SIZE.h"
#include "InputOutLong.h"
using namespace std;

int COM_NN_D(NUM* N1, NUM* N2);
bool NZER_N_B(NUM* N);
NUM* ADD_1N_N(NUM* N);
NUM* ADD_NN_N(NUM* N1, NUM* N2);
NUM* SUB_NN_N(NUM* N1, NUM* N2);
NUM* MUL_ND_N(NUM* N, short int a);
NUM* MUL_Nk_N(NUM* N, long int a);
NUM* MUL_NN_N(NUM* N1, NUM* N2);
NUM* SUB_NDN_N(NUM* N1, NUM* N2, short int a);
short int DIV_NN_Dk(NUM* N1, NUM* N2);