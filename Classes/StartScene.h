#ifndef _START_SCENE_H_
#define _START_SCENE_H_
#include "cocos2d.h"
#include "Tool.h"
#include "GameScene.h"

USING_NS_CC;

class StartScene:public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(StartScene);
	static Scene* createScene();

	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
};
#endif _START_SCENE_H_