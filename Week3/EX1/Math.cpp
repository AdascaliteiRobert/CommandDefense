#include "Math.h"
#include <stdarg.h> // PEntru va_start
#include <string.h> // Pentru strcpy
#include <stdlib.h> // Pentru malloc

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

double Math::Add(double x, double y)
{
	return x + y;
}

double Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

double Math::Mul(double x, double y)
{
	return x * y;
}

double Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	int x, s = 0;
	va_list vl;  
	va_start(vl, count); 
	for (int i = 0; i < count; i++)
	{
		x = va_arg(vl, int); // Citirea unui param. de tip int din fct.
		s += x;
		// se trece la urmatorul parametru
	}
	return s;
}

char* Math::Add(const char* sir1, const char* sir2)
{
	if (sir1 == nullptr || sir2 == nullptr)
		return nullptr; // !HW CONDITION!: If one of the strings is nullptr, this function will return nullptr
	int SizeToRealloc;
	SizeToRealloc = strlen(sir1) + strlen(sir2) + 1; // Calculara memoriei care trebuie alocata pentru returnarea concatenarii (se adauga 1 din cauza caracterului final)
	char* Concat = nullptr; // nu e neaparat sa-l initializam

		Concat = (char*)malloc(SizeToRealloc); 
		memset(Concat, 0, SizeToRealloc); 
		if (Concat != nullptr)
		{
			memcpy(Concat, sir1, strlen(sir1)); // copiem sir1 in Concat
			memcpy(Concat + strlen(sir1), sir2, strlen(sir2)); // copiem sir2 in Concat

		}
	
	return Concat;
}
