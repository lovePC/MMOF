#include "PlaneMirror.h"

bool PlaneMirror::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	return true;
}

PlaneMirror* PlaneMirror::createMirror(MIRROR_TYPE type,float angle)
{
	auto mirror=new PlaneMirror();
	mirror->initWithFile("glass.png");
	mirror->setType(type);
	mirror->setAngle(angle);
	return mirror;
}

