//
//  stroke.h
//  CSCI580_RenderEngine
//
//  Created by Tan Tian Xiang on 15/4/14.
//  Copyright (c) 2015年 tantianx. All rights reserved.
//

#ifndef __CSCI580_RenderEngine__stroke__
#define __CSCI580_RenderEngine__stroke__

#include <stdio.h>
#include "disp.h"

#define STROKE_WAVE_LIMIT 4
#define THICKNESS_VARY_LIMIT 1

#define STOKE_DIRECTION_X 99
#define STOKE_DIRECTION_Y 100

void drawEdge(GzDisplay *display, Edge edge, int thickness = 1);
void drawPoint(GzDisplay *display, int triangleId, int x, int y, int wave, int thickness, int direction, int depth);
void drawEndPoint(GzDisplay *display, int triangleId, int x, int y, int thickness, int depth);
void getStrokeWave(int length, int wave[]);           // Generate the random wave for a stroke.
void getStrokeThickness(int length, int thick, int thickness[]); // Generate the random thickness of a stroke.
void getWaveAndThickness(int length, int thick, int thickness[], int wave[]);
void getWaveAndThickness(int length, int thick, int thickness[], int wave[], int waveLimit);

#endif /* defined(__CSCI580_RenderEngine__stroke__) */
