---
title: CHwndRenderTarget Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::CHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::Attach
- AFXRENDERTARGET/CHwndRenderTarget::CheckWindowState
- AFXRENDERTARGET/CHwndRenderTarget::Create
- AFXRENDERTARGET/CHwndRenderTarget::Detach
- AFXRENDERTARGET/CHwndRenderTarget::GetHwnd
- AFXRENDERTARGET/CHwndRenderTarget::GetHwndRenderTarget
- AFXRENDERTARGET/CHwndRenderTarget::ReCreate
- AFXRENDERTARGET/CHwndRenderTarget::Resize
- AFXRENDERTARGET/CHwndRenderTarget::m_pHwndRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CHwndRenderTarget [MFC], CHwndRenderTarget
- CHwndRenderTarget [MFC], Attach
- CHwndRenderTarget [MFC], CheckWindowState
- CHwndRenderTarget [MFC], Create
- CHwndRenderTarget [MFC], Detach
- CHwndRenderTarget [MFC], GetHwnd
- CHwndRenderTarget [MFC], GetHwndRenderTarget
- CHwndRenderTarget [MFC], ReCreate
- CHwndRenderTarget [MFC], Resize
- CHwndRenderTarget [MFC], m_pHwndRenderTarget
ms.assetid: aa65b69f-7202-46ea-af81-ef325da0b840
caps.latest.revision: 17
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
ms.openlocfilehash: 7758d32bbf6fb0ba7d1402cd0890d7eb8cf3d741
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="chwndrendertarget-class"></a>CHwndRenderTarget Class
A wrapper for ID2D1HwndRenderTarget.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CHwndRenderTarget : public CRenderTarget;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHwndRenderTarget::CHwndRenderTarget](#chwndrendertarget)|Constructs a CHwndRenderTarget object from HWND.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHwndRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|  
|[CHwndRenderTarget::CheckWindowState](#checkwindowstate)|Indicates whether the HWND associated with this render target is occluded.|  
|[CHwndRenderTarget::Create](#create)|Creates a render target associated with the window|  
|[CHwndRenderTarget::Detach](#detach)|Detaches render target interface from the object|  
|[CHwndRenderTarget::GetHwnd](#gethwnd)|Returns the HWND associated with this render target.|  
|[CHwndRenderTarget::GetHwndRenderTarget](#gethwndrendertarget)|Returns ID2D1HwndRenderTarget interface.|  
|[CHwndRenderTarget::ReCreate](#recreate)|Re-creates a render target associated with the window|  
|[CHwndRenderTarget::Resize](#resize)|Changes the size of the render target to the specified pixel size|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CHwndRenderTarget::operator ID2D1HwndRenderTarget*](#operator_id2d1hwndrendertarget_star)|Returns ID2D1HwndRenderTarget interface.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CHwndRenderTarget::m_pHwndRenderTarget](#m_phwndrendertarget)|A pointer to an ID2D1HwndRenderTarget object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 [CHwndRenderTarget](../../mfc/reference/chwndrendertarget-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="attach"></a>  CHwndRenderTarget::Attach  
 Attaches existing render target interface to the object  
  
```  
void Attach(ID2D1HwndRenderTarget* pTarget);
```  
  
### <a name="parameters"></a>Parameters  
 `pTarget`  
 Existing render target interface. Cannot be NULL  
  
##  <a name="checkwindowstate"></a>  CHwndRenderTarget::CheckWindowState  
 Indicates whether the HWND associated with this render target is occluded.  
  
```  
D2D1_WINDOW_STATE CheckWindowState() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A value that indicates whether the HWND associated with this render target is occluded.  
  
##  <a name="chwndrendertarget"></a>  CHwndRenderTarget::CHwndRenderTarget  
 Constructs a CHwndRenderTarget object from HWND.  
  
```  
CHwndRenderTarget(HWND hwnd = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `hwnd`  
 The HWND associated with this render target  
  
##  <a name="create"></a>  CHwndRenderTarget::Create  
 Creates a render target associated with the window  
  
```  
BOOL Create(HWND hWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `hWnd`  
 The HWND associated with this render target  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE  
  
##  <a name="detach"></a>  CHwndRenderTarget::Detach  
 Detaches render target interface from the object  
  
```  
ID2D1HwndRenderTarget* Detach();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to detached render target interface.  
  
##  <a name="gethwnd"></a>  CHwndRenderTarget::GetHwnd  
 Returns the HWND associated with this render target.  
  
```  
HWND GetHwnd() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The HWND associated with this render target.  
  
##  <a name="gethwndrendertarget"></a>  CHwndRenderTarget::GetHwndRenderTarget  
 Returns ID2D1HwndRenderTarget interface.  
  
```  
ID2D1HwndRenderTarget* GetHwndRenderTarget();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1HwndRenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="m_phwndrendertarget"></a>  CHwndRenderTarget::m_pHwndRenderTarget  
 A pointer to an ID2D1HwndRenderTarget object.  
  
```  
ID2D1HwndRenderTarget* m_pHwndRenderTarget;  
```  
  
##  <a name="operator_id2d1hwndrendertarget_star"></a>  CHwndRenderTarget::operator ID2D1HwndRenderTarget*  
 Returns ID2D1HwndRenderTarget interface.  
  
```  
operator ID2D1HwndRenderTarget*();
```   
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1HwndRenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="recreate"></a>  CHwndRenderTarget::ReCreate  
 Re-creates a render target associated with the window  
  
```  
BOOL ReCreate(HWND hWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `hWnd`  
 The HWND associated with this render target  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="resize"></a>  CHwndRenderTarget::Resize  
 Changes the size of the render target to the specified pixel size  
  
```  
BOOL Resize(const CD2DSizeU& size);
```  
  
### <a name="parameters"></a>Parameters  
 `size`  
 The new size of the render target in device pixels  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

