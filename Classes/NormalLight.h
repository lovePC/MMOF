#ifndef _NORMAL_LIGHT_H_
#define _NORMAL_LIGHT_H_
#include "cocos2d.h"
#include "Light.h"
#include "Tool.h"
using namespace cocos2d;

class NormalLight:public Light
{
public:
	CREATE_FUNC(NormalLight);
	virtual bool init();
	static NormalLight* createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey);
};


#endif _NORMAL_LIGHT_H_