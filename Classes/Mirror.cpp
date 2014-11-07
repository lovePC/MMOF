#include "Mirror.h"

bool Mirror::init()
{
	if (!Node::init())
	{
		return false;
	}
	return true;
}

Mirror* Mirror::createMirror(MIRROR_TYPE type,float angle)
{
	Mirror* mirror=NULL;
	return mirror;
}

