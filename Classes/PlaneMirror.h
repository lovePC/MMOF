#ifndef _PLANE_MIRRIOR_H_
#define _PLANE_MIRRIOR_H_
#include "cocos2d.h"
#include "Mirror.h"
#include "Tool.h"
using namespace cocos2d;

class PlaneMirror:public Mirror
{
public:
	CREATE_FUNC(PlaneMirror);
	virtual bool init();
	static PlaneMirror* createMirror(MIRROR_TYPE type,float angle);
private:
};


#endif _PLANE_MIRRIOR_H_