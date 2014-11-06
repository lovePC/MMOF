#include "GameScene.h"

Scene* GameScene::createScene()
{
	auto scene=Scene::create();
	auto layer=GameScene::create();
	scene->addChild(scene);
	return scene;
}

bool GameScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	//android返回键的监听
	auto bListener=EventListenerKeyboard::create();
	bListener->onKeyReleased=CC_CALLBACK_2(GameScene::onKeyReleased,this);
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(bListener,this);
	//背景
	//背景动画
	//初始化关卡
	/*
	根据用户保存的数据将目前关卡数载入(需要创建时传参？)
	*/

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