#pragma once
#include "Defines.h"

class Scaner
{

private:
	Type_mod text; // �������� �����
	int uk;		   // ��������� ������� ������� � �������� ������

public:
	void PutUK(int uk);				// ���������� ��������� ������� ������� � �������� ������
	int GetUK();					// �������� ��������� ������� ������� � �������� ������
	void PrintError(const char* error, const char* text);	// ����� ������
	int UseScaner(Type_lex lex);								// ������ ������ �������
	void GetData(const char* filename);							// ��������� ���������� �� �����
	Scaner(const char* filename);
	~Scaner() {}

};

