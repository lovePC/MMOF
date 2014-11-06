#include "Mirror.h"

bool Mirror::init()
{
	if (!Node::init())
	{
		return false;
	}
	return true;
}

Mirror* Mirror::createMirror(MIRROR_TYPE type,int row,int rank,float angle)
{
	Mirror* mirrorNode=Mirror::create();

	Sprite* mirrorSprite=Sprite::create("glass.png");

	mirrorNode->angle=angle;
	mirrorNode->type=type;

	mirrorNode->addChild(mirrorSprite);
	return mirrorNode;
}

