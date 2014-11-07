/*
*11-02  魔月之花  by  VectorPlus
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

	//触摸监听
	virtual bool onTouchBegan(Touch *touch, Event *unused_event);
	virtual void onTouchMoved(Touch *touch, Event *unused_event);
	virtual void onTouchEnded(Touch *touch, Event *unused_event);

	//安卓返回键监听
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
	//

	//void checkGameWin();
	//void checkGameOver();

	//void reStart(Ref* sender);//重新开始
	//初始化界面时执行
	//void onEnterTransitionDidFinish();

private:
	//镜子管理器
	//光线管理器
	/*
	得分（星星）算法
	*/
	//int star;

	//各类按钮

	//Point startPt;
	/*
	复杂手势（在tool中定义枚举类型）
	*/
	//Vector<Point> complexGesturesPoints;
	//声音是否开启
	//bool sound;
	//timeval tv;//当前时间
};

#endif _GAME_SCENE_H_