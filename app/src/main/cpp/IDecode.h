//
// Created by yanxi on 2019/9/1.
//

#ifndef MANCHESTERUNITEDPLAYER_IDECODE_H
#define MANCHESTERUNITEDPLAYER_IDECODE_H


#include "XParameter.h"
#include "IObserver.h"

class IDecode: public IObserver {
public:
    //打开解码器
    virtual bool Open(XParameter xParameter) = 0;
};


#endif //MANCHESTERUNITEDPLAYER_IDECODE_H
