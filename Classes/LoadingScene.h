#ifndef _LOADING_SCENE_H_
#define _LOADING_SCENE_H_
#include "cocos2d.h"
#include "Tool.h"
#include "StartScene.h"

USING_NS_CC;

class LoadingScene:public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(LoadingScene);
	static Scene* createScene();

	LoadingScene(){};
	~LoadingScene(){};

	int numberIfLoadedRes;//当前已经加载的数量
	int numberCount;//资源的总数
	void loadResources();
	void loadingCallBack(Texture2D* texture);

	void magicCircleLogic();
	//重力
	const float g;
	//当前速度
	void float v;
	void logic(float dt);
	Sprite* magicCircle;

	//安卓返回键监听
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
};

#endif _LOADING_SCENE_H_