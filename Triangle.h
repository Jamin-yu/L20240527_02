#pragma once
#include "Shape.h"
class FTriangle : public FShape
{
public:
	FTriangle();
	virtual ~FTriangle();

	//Inherited via FShape
	virtual void Draw() override;
};

