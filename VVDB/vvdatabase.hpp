#ifndef _VV_DATABASE_HPP_
#define _VV_DATABASE_HPP_
#include <fstream>
#include <vector>
class VVDataBase
{
private:
private:
	std::ifstream file;
	bool createbase;
public:
    VVDataBase();
	VVDataBase(wchar_t *openfilename);
    virtual ~VVDataBase();
};



#endif // _VV_DATABASE_HPP_