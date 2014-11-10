#include "Thunder.h"

bool Thunder::init()
{
	if (!Sprite::init())
	{
		return false;
	}
	return true;
}

Thunder* Thunder::createLight(LIGHT_TYPE type,float sx,float sy,float ex,float ey)
{
	auto light=new Thunder();
	//�׵���Ҫһ����֡����
	//����ʱ��ʱӦ��ֻ��һ����_(:�١���)_
	light->initWithFile("light.png",Rect(0,0,85,256));
	light->setType(type);
	//���ű���
	light->setScaleY(std::sqrt((sx-ex)*(sx-ex)+(sy-ey)*(sy-ey))/light->getContentSize().height);
	//���޼��
	if (sy>=ey&&ex>sx)
	{
		//��������
		light->setRotation(std::atan((sy-ey)/(ex-sx))+90.0);
	}else if (sy>ey&&ex<=sx)
	{
		//��������
		light->setRotation(std::atan((sx-ex)/(sy-ey))+180.0);
	}
	else if (sy<=ey&&ex<sx)
	{
		//�ڶ�����
		light->setRotation(std::atan((ey-sy)/(sx-ex))+270.0);
	}
	else if (sy<ey&&ex>=sx)
	{
		//��һ����
		light->setRotation(std::atan((sx-ex)/(sy-ey)));
	}

	return light;
}