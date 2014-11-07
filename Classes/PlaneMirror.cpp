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
	mirror->canTouchAble=true;
	return mirror;
}

void PlaneMirror::turn(bool isclockwise)
{
	if (isclockwise)
	{
		this->setAngle(this->getAngle()-90);
		this->runAction(
			Sequence::create(
				CallFunc::create(CC_CALLBACK_0(PlaneMirror::changeTouchble,this)),
				RotateTo::create(0.3f,90),
				CallFunc::create(CC_CALLBACK_0(PlaneMirror::changeTouchble,this)),
			NULL));
	}else
	{
		this->setAngle(this->getAngle()+90);
		this->runAction(
			Sequence::create(
				CallFunc::create(CC_CALLBACK_0(PlaneMirror::changeTouchble,this)),
				RotateTo::create(0.3f,-90),
				CallFunc::create(CC_CALLBACK_0(PlaneMirror::changeTouchble,this)),
			NULL));
	}
}

