// If this file is already included in any of the sources then do not include it
//  again. that is what below line tells to preprocessor.
#pragma once

// The name space allows you to avoid naming conflicts with global name space. like the same sum function can be declared by other library
namespace dep
{
    int sum(int a, int b);
}