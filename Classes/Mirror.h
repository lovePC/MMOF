#ifndef _MIRRIOR_H_
#define _MIRRIOR_H_
#include "cocos2d.h"
#include "Tool.h"
using namespace cocos2d;

class Mirror:public Node
{
public:
	CREATE_FUNC(Mirror);
	virtual bool init();
	static Mirror* createMirror(MIRROR_TYPE type,int row,int rank,float angle);

	//右键重构封装字段不好用啊。
	float getAngle()const{ return angle;};
	void setAngle(float vel) { angle = vel;};
	MIRROR_TYPE getType()const{ return type;};
	void setType(MIRROR_TYPE vel) { type = vel;};

private:
	float angle;
	MIRROR_TYPE type;
};


#endif _MIRRIOR_H_