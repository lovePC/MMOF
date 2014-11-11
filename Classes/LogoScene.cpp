#include "LogoScene.h"

Scene* LogoScene::createScene()
{
	auto scene=Scene::create();
	auto layer=LogoScene::create();
	scene->addChild(layer);
	return scene;
}

bool LogoScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	Size size=Director::getInstance()->getWinSize();

	//auto backGround=LayerColor::create(Color4B(255,255,255,255),size.width,size.height);
	//backGround->setPosition(size.width/2,size.height/2);
	//this->addChild(backGround,0);

	auto Logo=Sprite::create("logo.png");
	Logo->setPosition(size.width/2,size.height/2);
	Logo->setOpacity(0);
	Logo->runAction(
		Sequence::create(
			DelayTime::create(0.5f),
			FadeTo::create(1.6f,255),
			DelayTime::create(1.5f),
			FadeTo::create(1.3f,0),
			CallFunc::create([](){
				Director::getInstance()->replaceScene(LoadingScene::createScene());
	}),
		NULL)
		);
	this->addChild(Logo,1);

	return true;
}
void LogoScene::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	if (keyCode == EventKeyboard::KeyCode::KEY_BACKSPACE)  //·µ»Ø
	{
		//
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_MENU) //²Ëµ¥
	{
		//
	}
}
