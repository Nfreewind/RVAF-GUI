// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "fibonaccitool.h"

// Dispatch interfaces referenced by this interface
#include "teefont.h"
#include "fibonaccilevels.h"
#include "pen.h"


/////////////////////////////////////////////////////////////////////////////
// CFibonacciTool properties

/////////////////////////////////////////////////////////////////////////////
// CFibonacciTool operations

VARIANT CFibonacciTool::GetSeries()
{
	VARIANT result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetSeries(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long CFibonacciTool::GetDrawStyle()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetDrawStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double CFibonacciTool::GetEndX()
{
	double result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetEndX(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CFibonacciTool::GetEndY()
{
	double result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetEndY(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CFibonacciTool::GetLabelsAngle()
{
	long result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetLabelsAngle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeeFont CFibonacciTool::GetLabelsFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeFont(pDispatch);
}

CFibonacciLevels CFibonacciTool::GetLevels()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFibonacciLevels(pDispatch);
}

BOOL CFibonacciTool::GetShowLabels()
{
	BOOL result;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetShowLabels(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x133, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CFibonacciTool::GetStartX()
{
	double result;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetStartX(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x134, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CFibonacciTool::GetStartY()
{
	double result;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CFibonacciTool::SetStartY(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CPen1 CFibonacciTool::GetTrendPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}