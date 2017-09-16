---
title: CDataPathProperty Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDataPathProperty
- AFXCTL/CDataPathProperty
- AFXCTL/CDataPathProperty::CDataPathProperty
- AFXCTL/CDataPathProperty::GetControl
- AFXCTL/CDataPathProperty::GetPath
- AFXCTL/CDataPathProperty::Open
- AFXCTL/CDataPathProperty::ResetData
- AFXCTL/CDataPathProperty::SetControl
- AFXCTL/CDataPathProperty::SetPath
dev_langs:
- C++
helpviewer_keywords:
- CDataPathProperty [MFC], CDataPathProperty
- CDataPathProperty [MFC], GetControl
- CDataPathProperty [MFC], GetPath
- CDataPathProperty [MFC], Open
- CDataPathProperty [MFC], ResetData
- CDataPathProperty [MFC], SetControl
- CDataPathProperty [MFC], SetPath
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
caps.latest.revision: 24
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 0c93eec0c2f8c33c7cc56a1e4e8a67996c56d6b4
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cdatapathproperty-class"></a>CDataPathProperty Class
Implements an OLE control property that can be loaded asynchronously.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CDataPathProperty : public CAsyncMonikerFile  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDataPathProperty::CDataPathProperty](#cdatapathproperty)|Constructs a `CDataPathProperty` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDataPathProperty::GetControl](#getcontrol)|Retrieves the asynchronous OLE control associated with the `CDataPathProperty` object.|  
|[CDataPathProperty::GetPath](#getpath)|Retrieves the pathname of the property.|  
|[CDataPathProperty::Open](#open)|Initiates loading of the asynchronous property for the associated ActiveX (OLE) control.|  
|[CDataPathProperty::ResetData](#resetdata)|Calls `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed.|  
|[CDataPathProperty::SetControl](#setcontrol)|Sets the asynchronous ActiveX (OLE) control associated with the property.|  
|[CDataPathProperty::SetPath](#setpath)|Sets the pathname of the property.|  
  
## <a name="remarks"></a>Remarks  
 Asynchronous properties are loaded after synchronous initiation.  
  
 The class `CDataPathProperty` is derived from **CAysncMonikerFile**. To implement asynchronous properties in your OLE controls, derive a class from `CDataPathProperty`, and override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).  
  
 For more information about how to use asynchronous monikers and ActiveX controls in Internet applications, see the following articles:  
  
- [Internet First Steps: ActiveX Controls](../../mfc/activex-controls-on-the-internet.md)  
  
- [Internet First Steps: Asynchronous Monikers](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 [CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)  
  
 `CDataPathProperty`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxctl.h  
  
##  <a name="cdatapathproperty"></a>  CDataPathProperty::CDataPathProperty  
 Constructs a `CDataPathProperty` object.  
  
```  
CDataPathProperty(COleControl* pControl = NULL);  
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `pControl`  
 A pointer to the OLE control object to be associated with this `CDataPathProperty` object.  
  
 `lpszPath`  
 The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
### <a name="remarks"></a>Remarks  
 The `COleControl` object pointed to by `pControl` is used by **Open** and retrieved by derived classes. If `pControl` is **NULL**, the control used with **Open** should be set with `SetControl`. If `lpszPath` is **NULL**, you can pass in the path through **Open** or set it with `SetPath`.  
  
##  <a name="getcontrol"></a>  CDataPathProperty::GetControl  
 Call this member function to retrieve the `COleControl` object associated with the `CDataPathProperty` object.  
  
```  
COleControl* GetControl();
```  
  
### <a name="return-value"></a>Return Value  
 Returns a pointer to the OLE control associated with the `CDataPathProperty` object. **NULL** if not control is associated.  
  
##  <a name="getpath"></a>  CDataPathProperty::GetPath  
 Call this member function to retrieve the path, set when the `CDataPathProperty` object was constructed, or specified in **Open**, or specified in a previous call to the `SetPath` member function.  
  
```  
CString GetPath() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Returns the pathname to the property itself. Can be empty if no path has been specified.  
  
##  <a name="open"></a>  CDataPathProperty::Open  
 Call this member function to initiate loading of the asynchronous property for the associated control.  
  
```  
virtual BOOL Open(
    COleControl* pControl,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    COleControl* pControl,
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    CFileException* pError = NULL);  
  
virtual BOOL Open(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `pControl`  
 A pointer to the OLE control object to be associated with this `CDataPathProperty` object.  
  
 `pError`  
 A pointer to a file exception. In the event of an error, will be set to the cause.  
  
 `lpszPath`  
 The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if successful; otherwise 0.  
  
### <a name="remarks"></a>Remarks  
 The function attempts to obtain the `IBindHost` interface from the control.  
  
 Before calling **Open** without a path, the value for the property's path must be set. This can be done when the object is constructed, or by calling the `SetPath` member function.  
  
 Before calling **Open** without a control, an ActiveX control (formerly known as an OLE control) can be associated with the object. This can be done when the object is constructed, or by calling `SetControl`.  
  
 All overloads of [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#open) are also available from `CDataPathProperty`.  
  
##  <a name="resetdata"></a>  CDataPathProperty::ResetData  
 Call this function to get `CAsyncMonikerFile::OnDataAvailable` to notify the container that the control properties have changed, and all the information loaded asynchronously is no longer useful.  
  
```  
virtual void ResetData();
```  
  
### <a name="remarks"></a>Remarks  
 Opening should be restarted. Derived classes can override this function for different defaults.  
  
##  <a name="setcontrol"></a>  CDataPathProperty::SetControl  
 Call this member function to associate an asynchronous OLE control with the `CDataPathProperty` object.  
  
```  
void SetControl(COleControl* pControl);
```  
  
### <a name="parameters"></a>Parameters  
 `pControl`  
 A pointer to the asynchronous OLE control to be associated with the property.  
  
##  <a name="setpath"></a>  CDataPathProperty::SetPath  
 Call this member function to set the pathname of the property.  
  
```  
void SetPath(LPCTSTR lpszPath);
```  
  
### <a name="parameters"></a>Parameters  
 `lpszPath`  
 A path, which may be absolute or relative, to the property being loaded asynchronously. `CDataPathProperty` uses URLs, not filenames. If you want a `CDataPathProperty` object for a file, prepend `file://` to the path.  
  
## <a name="see-also"></a>See Also  
 [MFC Sample Image](../../visual-cpp-samples.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)

