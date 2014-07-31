#include "ImageViewTest.h"

ImageViewTest::ImageViewTest()
{

}

ImageViewTest::~ImageViewTest()
{

}

void ImageViewTest::viewDidLoad()
{
	size = this->getView()->getBounds().size;
	
	CALabel* ordinaryImage = CALabel::createWithCenter(CCRect(size.width*0.5, size.height*0.1, size.width*0.4, 50 * CROSSAPP_ADPTATION_RATIO));
	ordinaryImage->setText("Ordinary image");
	ordinaryImage->setFontSize(30 * CROSSAPP_ADPTATION_RATIO);
	ordinaryImage->setColor(ccc4(51,204,255,255));
	ordinaryImage->setTextAlignment(CATextAlignmentCenter);
	ordinaryImage->setVerticalTextAlignmet(CAVerticalTextAlignmentCenter);
	this->getView()->addSubview(ordinaryImage);

	CAImageView* firstImage = CAImageView::createWithImage(CAImage::create("source_material/btn_rounded3D_normal.png"));
	firstImage->setCenterOrigin(CCPoint(size.width*0.2, size.height*0.2));
	this->getView()->addSubview(firstImage);

	CAImageView* secondImage = CAImageView::createWithImage(CAImage::create("source_material/btn_rounded3D_selected.png"));
	secondImage->setCenterOrigin(CCPoint(size.width*0.5, size.height*0.2));
	this->getView()->addSubview(secondImage);

	CAImageView* thirdImage = CAImageView::createWithImage(CAImage::create("source_material/slider_indicator.png"));
	thirdImage->setCenterOrigin(CCPoint(size.width*0.8, size.height*0.2));
	this->getView()->addSubview(thirdImage);

	CALabel* scale9Image = CALabel::createWithCenter(CCRect(size.width*0.5, size.height*0.4, size.width*0.4, 50*CROSSAPP_ADPTATION_RATIO));
	scale9Image->setText("Scale9Image");
	scale9Image->setFontSize(30 * CROSSAPP_ADPTATION_RATIO);
	scale9Image->setColor(ccc4(51, 204, 255, 255));
	scale9Image->setTextAlignment(CATextAlignmentCenter);
	scale9Image->setVerticalTextAlignmet(CAVerticalTextAlignmentCenter);
	this->getView()->addSubview(scale9Image);

	CAScale9ImageView* firstScale9Image = CAScale9ImageView::createWithImage(CAImage::create("source_material/btn_rounded3D_normal.png"));
	firstScale9Image->setCenter(CCRect(size.width*0.5, size.height*0.5, size.width*0.4, size.height*0.1));
	this->getView()->addSubview(firstScale9Image);

	CAScale9ImageView* secondScale9Image = CAScale9ImageView::createWithImage(CAImage::create("source_material/btn_rounded3D_selected.png"));
	secondScale9Image->setCenter(CCRect(size.width*0.5, size.height*0.65, size.width*0.4, size.height*0.1));
	this->getView()->addSubview(secondScale9Image);

	CAScale9ImageView* thirdScale9Image = CAScale9ImageView::createWithImage(CAImage::create("source_material/slider_indicator.png"));
	thirdScale9Image->setCenter(CCRect(size.width*0.5, size.height*0.8, size.width*0.4, size.height*0.1));
	this->getView()->addSubview(thirdScale9Image);
}

void ImageViewTest::viewDidUnload()
{

}