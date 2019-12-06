#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class PixelateEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		int distance = 3;
		Pixel origin;
		for (int i = 0; i < doc.getHeight(); i+distance)
		{
			for (int j = 0; j < doc.getWidth(); j+distance)
			{
				Pixel& p = doc[i][j];
				
			}
		}
	}
};