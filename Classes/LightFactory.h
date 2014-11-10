#ifndef _LIGHT_FACTORY_H_
#define _LIGHT_FACTORY_H_
#include "cocos2d.h"
#include "NormalLight.h"
#include "Tool.h"
#include "Thunder.h"
using namespace cocos2d;

class LightFactory
{
public:
	LightFactory(){};
	~LightFactory(){};
	static Light* createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey);
private:
};


#endif _LIGHT_FACTORY_H_