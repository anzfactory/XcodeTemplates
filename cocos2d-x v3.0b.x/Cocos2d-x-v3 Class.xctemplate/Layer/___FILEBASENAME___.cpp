//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;
using namespace std;

___FILEBASENAME___::___FILEBASENAME___()
{
    
}

___FILEBASENAME___::~___FILEBASENAME___()
{
    
}

Scene* ___FILEBASENAME___::scene()
{
    auto scene = CCScene::create();
	auto layer = ___FILEBASENAME___::create();
    scene->addChild(layer);
    return scene;
}

bool ___FILEBASENAME___::init()
{
    if (! ___VARIABLE_cocos2DXv3Subclass:identifier___::init()) {
        return false;
    }
    
    return true;
}
