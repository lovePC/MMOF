#include "NormalLight.h"

bool NormalLight::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	return true;
}

NormalLight* NormalLight::createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey)
{
	auto light=new NormalLight();
	light->initWithFile("light.png",Rect(0,0,85,256));
	light->setType(type);
	//缩放比例
	light->setScaleY(std::sqrt((sx-ex)*(sx-ex)+(sy-ey)*(sy-ey))/light->getContentSize().height);
	//象限检测
	if (sy>=ey&&ex>sx)
	{
		//第四象限
		light->setRotation(std::atan((sy-ey)/(ex-sx))+90.0);
	}else if (sy>ey&&ex<=sx)
	{
		//第三象限
		light->setRotation(std::atan((sx-ex)/(sy-ey))+180.0);
	}
	else if (sy<=ey&&ex<sx)
	{
		//第二象限
		light->setRotation(std::atan((ey-sy)/(sx-ex))+270.0);
	}
	else if (sy<ey&&ex>=sx)
	{
		//第一象限
		light->setRotation(std::atan((sx-ex)/(sy-ey)));
	}

	

	return light;
}