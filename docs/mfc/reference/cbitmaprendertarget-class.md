---
title: CBitmapRenderTarget Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::CBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::Attach
- AFXRENDERTARGET/CBitmapRenderTarget::Detach
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmap
- AFXRENDERTARGET/CBitmapRenderTarget::GetBitmapRenderTarget
- AFXRENDERTARGET/CBitmapRenderTarget::m_pBitmapRenderTarget
dev_langs:
- C++
helpviewer_keywords:
- CBitmapRenderTarget [MFC], CBitmapRenderTarget
- CBitmapRenderTarget [MFC], Attach
- CBitmapRenderTarget [MFC], Detach
- CBitmapRenderTarget [MFC], GetBitmap
- CBitmapRenderTarget [MFC], GetBitmapRenderTarget
- CBitmapRenderTarget [MFC], m_pBitmapRenderTarget
ms.assetid: c89a4437-812e-4943-acb2-b429a04cc4d2
caps.latest.revision: 16
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
ms.openlocfilehash: a03063991b663ef35047dac552b8c6fea9a1970f
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cbitmaprendertarget-class"></a>CBitmapRenderTarget Class
A wrapper for ID2D1BitmapRenderTarget.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CBitmapRenderTarget : public CRenderTarget;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::CBitmapRenderTarget](#cbitmaprendertarget)|Constructs a CBitmapRenderTarget object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|  
|[CBitmapRenderTarget::Detach](#detach)|Detaches render target interface from the object|  
|[CBitmapRenderTarget::GetBitmap](#getbitmap)|Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.|  
|[CBitmapRenderTarget::GetBitmapRenderTarget](#getbitmaprendertarget)|Returns ID2D1BitmapRenderTarget interface|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*](#operator_id2d1bitmaprendertarget_star)|Returns ID2D1BitmapRenderTarget interface|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmapRenderTarget::m_pBitmapRenderTarget](#m_pbitmaprendertarget)|A pointer to an ID2D1BitmapRenderTarget object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
 `CBitmapRenderTarget` 
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="attach"></a>  CBitmapRenderTarget::Attach  
 Attaches existing render target interface to the object  
  
```  
void Attach(ID2D1BitmapRenderTarget* pTarget);
```  
  
### <a name="parameters"></a>Parameters  
 `pTarget`  
 Existing render target interface. Cannot be NULL  
  
##  <a name="cbitmaprendertarget"></a>  CBitmapRenderTarget::CBitmapRenderTarget  
 Constructs a CBitmapRenderTarget object.  
  
```  
CBitmapRenderTarget();
```  
  
##  <a name="detach"></a>  CBitmapRenderTarget::Detach  
 Detaches render target interface from the object  
  
```  
ID2D1BitmapRenderTarget* Detach();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to detached render target interface.  
  
##  <a name="getbitmap"></a>  CBitmapRenderTarget::GetBitmap  
 Retrieves the bitmap for this render target. The returned bitmap can be used for drawing operations.  
  
```  
BOOL GetBitmap(CD2DBitmap& bitmap);
```  
  
### <a name="parameters"></a>Parameters  
 `bitmap`  
 When this method returns, contains the valid bitmap for this render target. This bitmap can be used for drawing operations.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="getbitmaprendertarget"></a>  CBitmapRenderTarget::GetBitmapRenderTarget  
 Returns ID2D1BitmapRenderTarget interface  
  
```  
ID2D1BitmapRenderTarget* GetBitmapRenderTarget();
```  
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="m_pbitmaprendertarget"></a>  CBitmapRenderTarget::m_pBitmapRenderTarget  
 A pointer to an ID2D1BitmapRenderTarget object.  
  
```  
ID2D1BitmapRenderTarget* m_pBitmapRenderTarget;  
```  
  
##  <a name="operator_id2d1bitmaprendertarget_star"></a>  CBitmapRenderTarget::operator ID2D1BitmapRenderTarget*  
 Returns ID2D1BitmapRenderTarget interface  
  
```  
operator ID2D1BitmapRenderTarget*();
```   
  
### <a name="return-value"></a>Return Value  
 Pointer to an ID2D1BitmapRenderTarget interface or NULL if object is not initialized yet.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

