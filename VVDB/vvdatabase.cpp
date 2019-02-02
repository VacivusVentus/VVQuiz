#include "vvdatabase.hpp"

#define BASE_VER_1_0_0_0  "*VACIVUSVENTUS_BASE_START*"

VVDataBase::VVDataBase() : createbase(true)
{
}

VVDataBase::VVDataBase(wchar_t *openfilename) : createbase(false)
{
}

VVDataBase::~VVDataBase()
{
	if (createbase)
	{
	}
	else
	{
		if (file.is_open()) file.close();
	}
}