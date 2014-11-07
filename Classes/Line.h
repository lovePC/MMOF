#ifndef _LINE_H_
#define _LINE_H_
#include "cocos2d.h"
#include "Tool.h"
using namespace cocos2d;

class Line:public Ref
{
public:
	CREATE_FUNC(Line);
	bool init(){
		return true;
	};
	float sx,sy,ex,ey;
};


#endif _LINE_H_