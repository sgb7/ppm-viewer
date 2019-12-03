#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class FlipVerticallyEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		//reverse(doc.begin(), doc.end());
		//try something with the doc's width
	}
};