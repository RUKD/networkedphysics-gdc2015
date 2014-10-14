#ifndef STONE_DEMO_H
#define STONE_DEMO_H

#ifdef CLIENT

#include "Demo.h"

class StoneDemo : public Demo
{
public:

    StoneDemo();

    ~StoneDemo();

    virtual bool Initialize() override;

    virtual void Update() override;

    virtual void Render() override;

    virtual bool KeyEvent( int key, int scancode, int action, int mods ) override;

    virtual bool CharEvent( unsigned int code ) override;
};

#endif // #ifdef CLIENT

#endif // #ifndef STONE_DEMO_H
