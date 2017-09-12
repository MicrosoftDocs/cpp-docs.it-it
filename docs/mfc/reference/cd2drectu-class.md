---
title: CD2DRectU Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DRectU
- AFXRENDERTARGET/CD2DRectU
- AFXRENDERTARGET/CD2DRectU::CD2DRectU
- AFXRENDERTARGET/CD2DRectU::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectU [MFC], CD2DRectU
- CD2DRectU [MFC], IsNull
ms.assetid: a62f17d1-011d-4867-8f51-fd7e7c00561d
caps.latest.revision: 18
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
ms.openlocfilehash: f5e7cf6c071fa4b4cdef655551b6442d85e1c350
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2drectu-class"></a>CD2DRectU Class
A wrapper for `D2D1_RECT_U`.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DRectU : public D2D1_RECT_U;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectU::CD2DRectU](#cd2drectu)|Overloaded. Constructs a `CD2DRectU` object from `D2D1_RECT_U` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectU::IsNull](#isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectU::operator CRect](#operator_crect)|Converts `CD2DRectU` to `CRect` object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_RECT_U`  
  
 `CD2DRectU`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2drectu"></a>  CD2DRectU::CD2DRectU  
 Constructs a CD2DRectU object from CRect object.  
  
```  
CD2DRectU(const CRect& rect);  
CD2DRectU(const D2D1_RECT_U& rect);  
  CD2DRectU(const D2D1_RECT_U* rect);

 
CD2DRectU(
    UINT32 uLeft = 0,  
    UINT32 uTop = 0,  
    UINT32 uRight = 0,  
    UINT32 uBottom = 0);
```  
  
### <a name="parameters"></a>Parameters  
 `rect`  
 source rectangle  
  
 `uLeft`  
 source left coordinate  
  
 `uTop`  
 source top coordinate  
  
 `uRight`  
 source right coordinate  
  
 `uBottom`  
 source bottom coordinate  
  
##  <a name="isnull"></a>  CD2DRectU::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if rectangle's top, left, bottom, and right values are all equal to 0; otherwise FALSE.  
  
##  <a name="operator_crect"></a>  CD2DRectU::operator CRect  
 Converts CD2DRectU to CRect object.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Return Value  
 Current value of D2D rectangle.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

