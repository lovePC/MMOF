/*
*11-02  ħ��֮��  by  VectorPlus
*/


#ifndef _GAME_SCENE_H_
#define _GAME_SCENE_H_
#include "cocos2d.h"
#include "MirrorFactory.h"
#include "Tool.h"
#include "Light.h"
#include "Manager.h"

USING_NS_CC;

class GameScene:public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(GameScene);
	static Scene* createScene();

	GameScene(){};
	~GameScene(){};

	//��������
	virtual bool onTouchBegan(Touch *touch, Event *unused_event);
	virtual void onTouchMoved(Touch *touch, Event *unused_event);
	virtual void onTouchEnded(Touch *touch, Event *unused_event);

	//��׿���ؼ�����
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
	//

	//void checkGameWin();
	//void checkGameOver();

	//void reStart(Ref* sender);//���¿�ʼ
	//��ʼ������ʱִ��
	//void onEnterTransitionDidFinish();

private:
	//���ӹ�����
	//���߹�����
	/*
	�÷֣����ǣ��㷨
	*/
	//int star;

	//���ఴť

	//Point startPt;
	/*
	�������ƣ���tool�ж���ö�����ͣ�
	*/
	//Vector<Point> complexGesturesPoints;
	//�����Ƿ���
	//bool sound;
	//timeval tv;//��ǰʱ��
};

#endif _GAME_SCENE_H_