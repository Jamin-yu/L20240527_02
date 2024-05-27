#pragma once
#include "Shape.h"
class FCircle : public FShape
{
public:
	FCircle();
	virtual ~FCircle();

	// Inherited via FShape
	void Draw() override;
};

