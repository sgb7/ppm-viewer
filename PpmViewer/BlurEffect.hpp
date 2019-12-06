#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class BlurEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		int row_avg;
		int column_avg;
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				if (p.red == true)
				{
					// You know what? Let's put this one on hold
				}
			}
		}

	}
};