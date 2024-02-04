#ifndef GrShList_H
#define GrShList_H
#pragma once
#include "GrForm.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

class GrShape
{	//базовый класс фигур
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox) = 0;//Рисование
	virtual void AddPoint(unsigned int i, float X, float Y);//Добавляем точку	
	virtual GrShape* Allocate() = 0;//Выделяем память
	void AddFilled(bool f);//Заполнение фигуры
	void AddColor(int i, Color col);//Добавляем цвет
	void AddLineWidth(float w);// Устанавливаем ширину линии
	void AddTextFont(IntPtr fn);//Устанавливаем шрифт
	
	void AddText(std::string tx);//Добавляем текст	
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

class GrLine : public GrShape //Класс  линию
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();	
};

class GrRectangle : public GrShape //Класс  прямоугольник
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrQuadrat : public GrShape //Класс квадрата
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrEllipse : public GrShape //Класс эллипса
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrCircle : public GrShape //Класс круг
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
};

class GrPolygon : public GrShape //Класс многоугольник
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();
	GrPolygon();

protected:
	float* xv, * yv;	
};

class GrText : public  GrShape //Класс текст
{
public:
	virtual void GrDraw(System::Windows::Forms::PictureBox^ picbox);
	virtual GrShape* Allocate();	
};
 

class ShList // Класс-контейнер для выведенных фигур
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