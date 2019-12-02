#pragma once
#include "RemoveRedEffect.hpp"
#include "RemoveGreenEffect.hpp"
#include "RemoveBlueEffect.hpp"
#include "NegateRedEffect.hpp"

enum class ImageEffectType
{
	RemoveRed = 1,
	RemoveGreen = 2,
	RemoveBlue = 3,
	NegateRed = 4,
	//TODO: add rest below
};

class EffectFactory
{
public:
	static ImageEffect* createEffect(ImageEffectType effect_type)
	{
		switch (effect_type)
		{
		case ImageEffectType::RemoveRed:
			return new RemoveRedEffect{};
			break;
		case ImageEffectType::RemoveGreen:
			return new RemoveGreenEffect{};
			break;
		case ImageEffectType::RemoveBlue:
			return new RemoveBlueEffect{};
			break;
		case ImageEffectType::NegateRed:
			return new NegateRedEffect{};
			break;

		default: 
			break;
		}
	}
};