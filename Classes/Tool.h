#ifndef _TOOL_H_
#define _TOOL_H_
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;

enum MIRROR_TYPE
{
	MIRROR_TYPE_PLANE,//ƽ�澵
	MIRROR_TYPE_PLANE_ABSOLUTE//�޷��ı䷽���ƽ�澵
};

class Tool
{
public:
	Tool();
	~Tool(){};
	Size size;

};


#endif _TOOL_H_