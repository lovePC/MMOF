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
	//android���ؼ��ļ���
	auto bListener=EventListenerKeyboard::create();
	bListener->onKeyReleased=CC_CALLBACK_2(GameScene::onKeyReleased,this);
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(bListener,this);
	//����
	//��������
	//��ʼ���ؿ�
	/*
	�����û���������ݽ�Ŀǰ�ؿ�������(��Ҫ����ʱ���Σ�)
	*/

	/*
	��ͼ�༭�����ؿ��༭������
	*/


	return true;
}

void GameScene::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	if (keyCode == EventKeyboard::KeyCode::KEY_BACKSPACE)  //����
	{
		//
	}
	else if (keyCode == EventKeyboard::KeyCode::KEY_MENU) //�˵�
	{
		//
	}
}