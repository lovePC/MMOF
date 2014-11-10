#include "LoadingScene.h"

Scene* LoadingScene::createScene()
{
	auto scene=Scene::create();
	auto layer=LoadingScene::create();
	scene->addChild(layer);
	return scene;
}

bool LoadingScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	Size size=Director::getInstance()->getWinSize();

	auto backGround=Sprite::create("dull.jpg");
	backGround->setPosition(size.width/2,size.height/2);
	this->addChild(backGround,0);

	magicCircle=Sprite::create("mofazhen.png");
	magicCircle->setPosition(size.width/2,size.height/2);
	//逐渐加快速度然后再减慢停住到此时正好一周a=2s/t2不对
	//
	magicCircle->runAction(RepeatForever::create());
	this->addChild(magicCircle,1);

	

	loadResources();

	return true;
}

void LoadingScene::loadingCallBack(Texture2D* texture)
{
	numberIfLoadedRes++;
}

void LoadingScene::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	if (keyCode == EventKeyboard::KeyCode::KEY_BACKSPACE)  //返回
	{
		//
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_MENU) //菜单
	{
		//
	}
}

void LoadingScene::magicCircleLogic()
{
	static float t=0.1f;
	float rotateion=magicCircle->getRotation();
	float a=std::sin(rotateion)*g;
	v+=a*t;
}

void LoadingScene::logic(float dt)
{
	float percent=(float)numberIfLoadedRes/(float)numberCount;
	//进度条
	//loading->setPercent(percent);
	if (numberIfLoadedRes==numberCount)
	{
		Director::getInstance()->replaceScene(StartScene::createScene());
	}
}
