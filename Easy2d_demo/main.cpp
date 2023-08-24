/**
* @CopyRight: Copyright © 2023-2023 Irelia97 All rights reserved.
* @Author: Irelia97
* @Date: 2023-08-24
* @LastEditors: Irelia97
* @LastEditTime: 2023-08-24
* @Description: easy2d demo main funtion
*/
#include <iostream>
#include <easy2d/easy2d.h>
using namespace easy2d;

int main()
{
    // 初始化游戏
    if (Game::init("Easy2D_demo by snowdance", 1080, 960)) {
        auto scene = gcnew Scene;                   // 创建一个场景
        SceneManager::enter(scene);                 // 进入该场景

        Window::setCursor(Window::Cursor::Wait);

        auto text = gcnew Text("Hello Easy2D!");    // 创建一个文本
        text->setAnchor(0.5, 0.5);                  // 设置文本中心点
        text->setPos(Window::getSize() / 2);        // 文本位置居中
        scene->addChild(text);                      // 将这个文本添加到场景中

        Game::start();                              // 开始游戏
    }
    Game::destroy();
    return 0;
}
