#ifndef _THUNDER_H_
#define _THUNDER_H_
#include "cocos2d.h"
#include "Light.h"
#include "Tool.h"
using namespace cocos2d;

class Thunder:public Light
{
public:
	CREATE_FUNC(Thunder);
	virtual bool init();
	static Thunder* createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey);
};


#endif _THUNDER_H_