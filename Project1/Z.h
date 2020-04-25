#pragma once
#include "NUM.h"
#include <string>
#include <iostream>
#include "SIZE.h"
#include "InputOutLong.h"
#include "N.h"
using namespace std;

NUM* ABS_Z_N(NUM* N1);
short int POZ_Z_D(NUM* N1);
NUM* MUL_ZM_Z(NUM* N1);
NUM* ADD_ZZ_Z(NUM* N1, NUM* N2);
NUM* SUB_ZZ_Z(NUM* N1, NUM* N2);
NUM* MUL_ZZ_Z(NUM* N1, NUM* N2);
NUM* DIV_ZZ_Z(NUM* N1, NUM* N2);
NUM* MOD_ZZ_Z(NUM* N1, NUM* N2);