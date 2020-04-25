#pragma once
#include "NUM.h"
#include "N.h"
#include "Z.h"
#include <iostream>
using namespace std;
int size(NUM* N);
NUM* end_num(NUM* N);
NUM* COPY(NUM* N);
void delNUM(NUM* N);
bool ifnopozBIG(NUM* N1, NUM* N2);