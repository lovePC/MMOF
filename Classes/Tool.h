#ifndef _TOOL_H_
#define _TOOL_H_
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;

enum MIRROR_TYPE
{
	MIRROR_TYPE_PLANE,//平面镜
	MIRROR_TYPE_PLANE_ABSOLUTE//无法改变方向的平面镜
};

class Tool
{
public:
	Tool();
	~Tool(){};
	Size size;

};


#endif _TOOL_H_