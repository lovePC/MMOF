#include "AppDelegate.h"
#include "GameScene.h"
#include "LogoScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLView::create("The Flower of Magical Moon");
        director->setOpenGLView(glview);

		glview->setFrameSize(640,400);
    }
	//ÊÊÅä·½°¸
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
	

    // turn on display FPS
    director->setDisplayStats(false);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
    //auto scene = GameScene::createScene();
	auto scene = LogoScene::createScene();

    // run
    director->runWithScene(scene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
