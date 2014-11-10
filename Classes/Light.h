#ifndef _LIGHT_H_
#define _LIGHT_H_
#include "cocos2d.h"
#include "Tool.h"
using namespace cocos2d;

class Light:public Sprite
{
public:
	virtual bool init();
	static Light* createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey);

	//�Ҽ��ع���װ�ֶβ����ð���
	LIGHT_TYPE getType()const{ return type;};
	void setType(LIGHT_TYPE vel) { type = vel;};
	void logic();
private:
	LIGHT_TYPE type;
};


#endif _LIGHT_H_