// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;

/////////////////////////////////////////////////////////////////////////////
// CPointSeries wrapper class

class CPointSeries : public COleDispatchDriver
{
public:
	CPointSeries() {}		// Calls COleDispatchDriver default constructor
	CPointSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPointSeries(const CPointSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL GetFastPoint();
	void SetFastPoint(BOOL bNewValue);
	long GetTreatNulls();
	void SetTreatNulls(long nNewValue);
};
