#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class NegateGreenEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				p.green = 255 - p.green; //THIS IS NOT RIGHT, JUST EXPERIMENTING
				doc[i][j] = p;
			}
		}
	}
};