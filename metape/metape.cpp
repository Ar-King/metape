// metape.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include "peasm/peasm.h"
#include "Tools.h"

int _tmain(int argc, _TCHAR* argv[])
{
	MessageBox(0, 0, 0, 0);
	return 0;

	CPeAssembly *pInfectMe = new CPeAssembly();
	const std::wstring temp(argv[0]);
	pInfectMe->Load((char*)_w2a(temp).c_str());
	return 0;
}




