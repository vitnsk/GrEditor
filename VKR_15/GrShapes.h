#ifndef GrShList_H
#define GrShList_H
#pragma once
#include "GrForm.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

class GrShape
{	//������� ����� �����
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox) = 0;//���������
	virtual void AddPoint(unsigned int i, float X, float Y);//��������� �����	
	virtual GrShape* Allocate() = 0;//�������� ������
	void AddFilled(bool f);//���������� ������
	void AddColor(int i, Color col);//��������� ����
	void AddLineWidth(float w);// ������������� ������ �����
	void AddTextFont(IntPtr fn);//������������� �����
	
	void AddText(std::string tx);//��������� �����	
	void AddNum(unsigned int n);
	void AddNumR(unsigned int rn);	
	
	GrShape();
	~GrShape(); 	
protected:
	int color1, color2;
	bool filled;
	float* x, * y;
	float lineWidth;
	int num;
	int rnum;
	std::string textPt;	
	IntPtr textFnt;
};

class GrLine : public GrShape //�����  �����
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();	
};

class GrRectangle : public GrShape //�����  �������������
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrQuadrat : public GrShape //����� ��������
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrEllipse : public GrShape //����� �������
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrCircle : public GrShape //����� ����
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrPolygon : public GrShape //����� �������������
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
	GrPolygon();

protected:
	float* xv, * yv;	
};

class GrText : public  GrShape //����� �����
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();	
};
 

class ShList // �����-��������� ��� ���������� �����
{
public:	
	ShList();	
	ShList* AddSh(GrShape* s);
	ShList* DelEndSh();
	ShList* DelStartSh();
	ShList* DelSelSh();	
	ShList* Inc();
	ShList* Dec();
	void UnSelSh(float w, Color col);
	void AddZoomPoint(float xz, float yz);
	void AddZoomR(unsigned int rn);
	void SelSh(float w, Color col);
	void Redraw(System::Windows::Forms::PictureBox^ picbox);	
	
protected:
	GrShape* Sh;
	ShList* next, * prev;
};




#endif 