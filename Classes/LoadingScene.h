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

	int numberIfLoadedRes;//��ǰ�Ѿ����ص�����
	int numberCount;//��Դ������
	void loadResources();
	void loadingCallBack(Texture2D* texture);

	void magicCircleLogic();
	//����
	const float g;
	//��ǰ�ٶ�
	void float v;
	void logic(float dt);
	Sprite* magicCircle;

	//��׿���ؼ�����
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
};

#endif _LOADING_SCENE_H_