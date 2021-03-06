// StableFluidSolver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"StableFluidSolver.h"

void StableFluidSolver::Start(int width,int height,SolverParms* parms)
{
	solver = new Solver();
	canvas = new Canvas();
	solver->init(100,100,width,height,parms);		//对需要解算的数据进行初始化
	canvas->init(width,height,solver);					//对需要显示的窗口进行初始化
	canvas->render();											//渲染循环
}

