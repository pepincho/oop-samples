﻿#pragma once

#include "Figure.h"

class Circle : 
	public Figure
{
private:
	double Radius;

public:
	Circle();
	virtual ~Circle();

	virtual double Area() const;
	virtual void Print() const;
	virtual void Input();
};

