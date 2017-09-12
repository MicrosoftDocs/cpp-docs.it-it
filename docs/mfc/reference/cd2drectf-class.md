---
title: CD2DRectF Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DRectF
- AFXRENDERTARGET/CD2DRectF
- AFXRENDERTARGET/CD2DRectF::CD2DRectF
- AFXRENDERTARGET/CD2DRectF::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DRectF [MFC], CD2DRectF
- CD2DRectF [MFC], IsNull
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
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
ms.openlocfilehash: fade68a235bc93ff8dccce1d68c3b7d354a26c39
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2drectf-class"></a>CD2DRectF Class
A wrapper for `D2D1_RECT_F`.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DRectF : public D2D1_RECT_F;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::CD2DRectF](#cd2drectf)|Overloaded. Constructs a `CD2DRectF` object from `D2D1_RECT_F` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::IsNull](#isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRectF::operator CRect](#operator_crect)|Converts `CD2DRectF` to `CRect` object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_RECT_F`  
  
 `CD2DRectF`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2drectf"></a>  CD2DRectF::CD2DRectF  
 Constructs a CD2DRectF object from CRect object.  
  
```  
CD2DRectF(const CRect& rect);  
CD2DRectF(const D2D1_RECT_F& rect);  
  CD2DRectF(const D2D1_RECT_F* rect);

 
CD2DRectF(
    FLOAT fLeft = 0.,  
    FLOAT fTop = 0.,  
    FLOAT fRight = 0.,  
    FLOAT fBottom = 0.);
```  
  
### <a name="parameters"></a>Parameters  
 `rect`  
 source rectangle  
  
 `fLeft`  
 source left coordinate  
  
 `fTop`  
 source top coordinate  
  
 `fRight`  
 source right coordinate  
  
 `fBottom`  
 source bottom coordinate  
  
##  <a name="isnull"></a>  CD2DRectF::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if rectangle's top, left, bottom, and right values are all equal to 0; otherwise FALSE.  
  
##  <a name="operator_crect"></a>  CD2DRectF::operator CRect  
 Converts CD2DRectF to CRect object.  
  
```  
operator CRect();
```   
  
### <a name="return-value"></a>Return Value  
 Current value of D2D rectangle.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

