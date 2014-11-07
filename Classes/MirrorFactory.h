#ifndef _MIRROR_FACTORY_H_
#define _MIRROR_FACTORY_H_
#include "cocos2d.h"
#include "PlaneMirror.h"
#include "Tool.h"
using namespace cocos2d;

class MirrorFactory
{
public:
	MirrorFactory(){};
	~MirrorFactory(){};
	static Mirror* createMirror(MIRROR_TYPE type,float angle);
private:
};


#endif _MIRROR_FACTORY_H_