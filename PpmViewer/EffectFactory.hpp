#pragma once
#include "RemoveRedEffect.hpp"
#include "RemoveGreenEffect.hpp"
#include "RemoveBlueEffect.hpp"
#include "NegateRedEffect.hpp"
#include "NegateGreenEffect.hpp"
#include "NegateBlueEffect.hpp"
#include "GrayscaleEffect.hpp"
#include "AddNoiseEffect.hpp"
#include "HighContrastEffect.hpp"
#include "FlipHorizontallyEffect.hpp"
#include "FlipVerticallyEffect.hpp"

enum class ImageEffectType
{
	RemoveRed = 1,
	RemoveGreen = 2,
	RemoveBlue = 3,
	NegateRed = 4,
	NegateGreen = 5,
	NegateBlue = 6,
	Grayscale = 7,
	AddNoise = 8,
	HighContrast = 9,
	FlipHorizontally = 10,
	FlipVertically = 11,
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
		case ImageEffectType::NegateGreen:
			return new NegateGreenEffect{};
			break;
		case ImageEffectType::NegateBlue:
			return new NegateBlueEffect{};
			break;
		case ImageEffectType::Grayscale:
			return new GrayscaleEffect{};
			break;
		case ImageEffectType::AddNoise:
			return new AddNoiseEffect{};
			break;
		case ImageEffectType::HighContrast:
			return new HighContrastEffect{};
			break;
		case ImageEffectType::FlipHorizontally:
			return new FlipHorizontallyEffect{};
			break;
		case ImageEffectType::FlipVertically:
			return new FlipVerticallyEffect{};
			break;

		default: 
			break;
		}
	}
};