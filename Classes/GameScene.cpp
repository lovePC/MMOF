#include "GameScene.h"

Scene* GameScene::createScene()
{
	auto scene=Scene::create();
	auto layer=GameScene::create();
	scene->addChild(layer);
	return scene;
}

bool GameScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	Size size=Director::getInstance()->getWinSize();
	//android返回键的监听
	auto bListener=EventListenerKeyboard::create();
	bListener->onKeyReleased=CC_CALLBACK_2(GameScene::onKeyReleased,this);
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(bListener,this);
	
	//背景
	auto background=Sprite::create("zoulang.png");
	background->setPosition(size.width/2,size.height/2);
	this->addChild(background,0);
	//背景动画
	//初始化关卡
	/*
	根据用户保存的数据将目前关卡数载入(需要创建时传参？)
	*/
	//test
	auto msp1=MirrorFactory::createMirror(MIRROR_TYPE_PLANE,0);
	msp1->setPosition(size.width/2,size.height/2);
	this->addChild(msp1,50);

	/*
	地图编辑器（关卡编辑器？）
	*/


	return true;
}

void GameScene::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
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

bool GameScene::onTouchBegan(Touch *touch, Event *unused_event)
{
	return false;
}

void GameScene::onTouchMoved(Touch *touch, Event *unused_event)
{

}

void GameScene::onTouchEnded(Touch *touch, Event *unused_event)
{

}

void GameScene::initLevel()
{
	//Manager::getInstance()->
}