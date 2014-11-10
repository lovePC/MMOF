#include "LightFactory.h"

Light* LightFactory::createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey)
{
	Light* light=NULL;

	switch (type)
	{
	case LIGHT_TYPE_NORMAL:
		light=NormalLight::createLight(LIGHT_TYPE_NORMAL,sx,sy,ex,ey);
		break;
	case LIGHT_TYPE_THUNDER:
		light=Thunder::createLight(LIGHT_TYPE_THUNDER,sx,sy,ex,ey);
		break;
	default:
		break;
	}

	return light;
}