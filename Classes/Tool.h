#ifndef _TOOL_H_
#define _TOOL_H_
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;
/*
��׿�˵����ͷ��ؼ��ļ���
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
*/
/*
//���䷽��
Size frameSize=glview->getFrameSize();
Size winSize=Size(640,320);

float widthRate=frameSize.width/winSize.width;
float heightRate=frameSize.height/winSize.height;

if (widthRate>heightRate)
{
glview->setDesignResolutionSize(winSize.width,
winSize.height*heightRate/widthRate,ResolutionPolicy::NO_BORDER);
}else
{
glview->setDesignResolutionSize(winSize.width*widthRate/heightRate,
winSize.height,ResolutionPolicy::NO_BORDER);
}
*/
enum MIRROR_TYPE
{
	MIRROR_TYPE_PLANE,//ƽ�澵
	MIRROR_TYPE_PLANE_ABSOLUTE//�޷��ı䷽���ƽ�澵
};
//����Ϊ������
class Tool
{
public:
	Tool();
	~Tool(){};
	Size size;
	Size getSize() const { return size; }
	void setSize(Size val) { size = val; }
};


#endif _TOOL_H_