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
	magicCircle->setScale(0.3f);
	magicCircle->setRotation(-90.0f);
	//逐渐加快速度然后再减慢停住到此时正好一周a=2s/t2不对
	//
	v=1.0f;
	
	this->addChild(magicCircle,1);
	//进度条？我需要吗

	this->numberOfLoadedRes=1;
	this->numberCount=1;

	loadResources();
	this->schedule(schedule_selector(LoadingScene::logic));
	this->schedule(schedule_selector(LoadingScene::magicCircleLogic),0.1f);

	return true;
}

void LoadingScene::loadResources()
{
	//SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Play.plist");
	numberOfLoadedRes++;

//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
//	Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));
	//Director::getInstance()->getTextureCache()->addImageAsync("playbg.png", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));

}

void LoadingScene::loadingCallBack(Texture2D* texture)
{
	numberOfLoadedRes++;
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

void LoadingScene::magicCircleLogic(float dt)
{
	static float t=0.1f;
	float rotateion=magicCircle->getRotation()+90.0f;
	float a=std::sin(CC_DEGREES_TO_RADIANS(rotateion))*g;

	v=v+a*t;
	magicCircle->runAction(RotateBy::create(0.1f,v));
}

void LoadingScene::logic(float dt)
{
	float percent=(float)numberOfLoadedRes/(float)numberCount;
	//进度条
	//loading->setPercent(percent);
	if (numberOfLoadedRes==numberCount)
	{
	//	Director::getInstance()->replaceScene(StartScene::createScene());
	}
}
