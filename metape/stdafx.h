// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"


// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include "TitanEngine/Titan_stdafx.h"


// my define:
#ifdef _UNICODE
#define _tmainCRTStartup    wmainCRTStartup
#else  /* _UNICODE */
#define _tmainCRTStartup    mainCRTStartup
#endif  /* _UNICODE */
extern "C" int	_tmainCRTStartup(void);

extern "C" IMAGE_DOS_HEADER __ImageBase;



