#ifndef _MIRRIOR_H_
#define _MIRRIOR_H_
#include "cocos2d.h"
#include "Tool.h"
using namespace cocos2d;

class Mirror:public Sprite
{
public:
	virtual bool init();
	//static Mirror* createMirror(MIRROR_TYPE type,int row,int rank,float angle);
	static Mirror* createMirror(MIRROR_TYPE type,float angle);

	//右键重构封装字段不好用啊。
	float getAngle()const{ return angle;};
	void setAngle(float vel) { angle = vel;};
	MIRROR_TYPE getType()const{ return type;};
	void setType(MIRROR_TYPE vel) { type = vel;};
	void changeTouchble();

	bool canTouchAble;

private:
	float angle;
	MIRROR_TYPE type;
	//Point point;
};


#endif _MIRRIOR_H_