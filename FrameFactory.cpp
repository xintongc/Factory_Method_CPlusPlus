#include "FrameFactory.h"
#include "DashedFrame.h"
#include "DottedFrame.h"
#include "SolidFrame.h"
#include "WavyFrame.h"
//#include "WavyFrame.h"

Frame* FrameFactory::createFrame(std::string name) {
    if(name == "dotted")
        return new DottedFrame();
    if(name == "dashed")
        return new DashedFrame();
    if(name == "solid")
        return new SolidFrame();
    if(name == "wavy")
        return new WavyFrame();
    return nullptr;
}
