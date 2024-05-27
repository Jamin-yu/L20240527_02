#pragma once
#include "Shape.h"
#include "Rectangle.h"

class FRectangle : public FShape
{
public:
	FRectangle();
	virtual ~FRectangle();

	// Inherited via FShape
	void Draw() override;
};

