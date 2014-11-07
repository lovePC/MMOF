#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "cocos2d.h"
#include "MirrorManager.h"
#include "Tool.h"
#include "Line.h"
#include "Light.h"

USING_NS_CC;
//����
//���ڴ��·�������Ӻ͹�
class Manager
{
public:
	static Manager* getInstance();
	static void Manager::freeInstance(void);
private:
	static Manager* m_manager;
	Manager();
	bool init();
public:
	Vector<Line*> lineVector;
	//Vector<light*> lightVector;
	Vector<Mirror*> mirrorVector;
};

#endif _MANAGER_H_