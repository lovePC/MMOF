#ifndef _TOOL_H_
#define _TOOL_H_
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;
/*
安卓菜单键和返回键的监听
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
*/
/*
//适配方案
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
	MIRROR_TYPE_PLANE,//平面镜
	MIRROR_TYPE_PLANE_ABSOLUTE//无法改变方向的平面镜
};
//设置为单例？
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