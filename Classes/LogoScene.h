#ifndef _LOGO_SCENE_H_
#define _LOGO_SCENE_H_
#include "cocos2d.h"
#include "Tool.h"
#include "LoadingScene.h"

USING_NS_CC;

class LogoScene:public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(LogoScene);
	static Scene* createScene();

	LogoScene(){};
	~LogoScene(){};

	//°²×¿·µ»Ø¼ü¼àÌý
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
};

#endif _LOGO_SCENE_H_