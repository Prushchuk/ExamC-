#pragma once
#include <iostream>
using namespace std;
struct Task
{
	char name[50];//назва
	int priority;//пріоритет
	char opus[50];//опис
	char datatime [20] ;//дата і час (наприклад "05.12.2023 19:24:22")
};