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
	Size size=Director::getInstance()->getWinSize();
	//android���ؼ��ļ���
	auto bListener=EventListenerKeyboard::create();
	bListener->onKeyReleased=CC_CALLBACK_2(GameScene::onKeyReleased,this);
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(bListener,this);
	//����
	auto background=Sprite::create("zoulang.png");
	background->setPosition(size.width/2,size.height/2);
	this->addChild(background,0);
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