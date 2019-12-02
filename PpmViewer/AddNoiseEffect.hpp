#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
#include <random>
class AddNoiseEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				// Maybe play around with this later, when everything is finished
				Pixel& p = doc[i][j];
				random_device dev;
				mt19937 rng(dev());
				uniform_int_distribution<mt19937::result_type> dist(10, -10);
				int random_number = dist(rng);
				if ((p.red + random_number) > 255)
				{
					p.red = 255;
				}
				else if ((p.red + random_number) < 0)
				{
					p.red = 0;
				}
				else
				{
					p.red = p.red + random_number;
				}

				if ((p.green + random_number) > 255)
				{
					p.green = 255;
				}
				else if ((p.green + random_number) < 0)
				{
					p.green = 0;
				}
				else
				{
					p.green = p.green + random_number;
				}
				
				if ((p.blue + random_number) > 255)
				{
					p.blue = 255;
				}
				else if ((p.blue + random_number) < 0)
				{
					p.blue = 0;
				}
				else
				{
					p.blue = p.blue + random_number;
				}
			}
		}
	}
};
