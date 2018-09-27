#pragma once

#include "line_terminator_x/line_terminator_x.h"
#include "line_terminator_y/line_terminator_y.h"

class LineTerminators
{

public:
    LineTerminators();
    ~LineTerminators() = default;

public:
    LineTerminatorX& x() {return _terminator_x; }
    LineTerminatorY& y() {return _terminator_y; }


private:
    LineTerminatorX _terminator_x;
    LineTerminatorY _terminator_y;
};
