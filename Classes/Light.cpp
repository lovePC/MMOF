#include "Light.h"

bool Light::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	return true;
}

Light* Light::createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey)
{
	Light* light=NULL;
	return light;
}

void Light::logic(){}

