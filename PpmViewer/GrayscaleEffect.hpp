#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class GrayscaleEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				int avg_value = (p.red + p.green + p.blue) / 3;
				p.red = avg_value;
				p.green = avg_value;
				p.blue = avg_value;
			}
		}
	}
};