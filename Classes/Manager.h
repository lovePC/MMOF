#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "cocos2d.h"
#include "MirrorManager.h"
#include "Tool.h"
#include "Line.h"
#include "Light.h"

USING_NS_CC;
//单例
//用于存放路径，镜子和光
class Manager
{
public:
	static Manager* getInstance();
	static void Manager::freeInstance(void);
private:
	static Manager* m_manager;
	Manager();
	bool init();

	Vector<Mirror*>& getMirror(){return mirrorVector;};
	Vector<Light*>& getLight(){return lightVector;};
	Vector<Line*>& geLine(){return lineVector;};
public:
	Vector<Line*> lineVector;
	Vector<Light*> lightVector;
	Vector<Mirror*> mirrorVector;
};

#endif _MANAGER_H_