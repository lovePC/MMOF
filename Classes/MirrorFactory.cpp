#include "MirrorFactory.h"

Mirror* MirrorFactory::createMirror(MIRROR_TYPE type,float angle)
{
	Mirror* mirror=NULL;

	switch (type)
	{
	case MIRROR_TYPE_PLANE:
		mirror=PlaneMirror::createMirror(MIRROR_TYPE_PLANE,angle);
		break;
	case MIRROR_TYPE_PLANE_ABSOLUTE:

		break;
	default:
		break;
	}

	return mirror;
}