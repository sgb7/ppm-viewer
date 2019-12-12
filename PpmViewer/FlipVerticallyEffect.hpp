#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class FlipVerticallyEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		//reverse(doc.begin(), doc.end());
		//Okay so this doesn't work. Tried some other stuff and none of it worked out either.
	}
};