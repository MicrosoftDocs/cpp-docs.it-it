---
title: CD2DPointF Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DPointF
- AFXRENDERTARGET/CD2DPointF
- AFXRENDERTARGET/CD2DPointF::CD2DPointF
dev_langs:
- C++
helpviewer_keywords:
- CD2DPointF [MFC], CD2DPointF
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
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
ms.openlocfilehash: 63adc1f9ff0786ca074a3275eff0ff8b9f68c77b
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dpointf-class"></a>CD2DPointF Class
A wrapper for `D2D1_POINT_2F`.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DPointF : public D2D1_POINT_2F;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Overloaded. Constructs a `CD2DPointF` object from `D2D1_POINT_2F` object.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DPointF::operator CPoint](#operator_cpoint)|Converts `CD2DPointF` to `CPoint` object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_POINT_2F`  
  
 `CD2DPointF`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dpointf"></a>  CD2DPointF::CD2DPointF  
 Constructs a CD2DPointF object from CPoint object.  
  
```  
CD2DPointF(const CPoint& pt);    
CD2DPointF(const D2D1_POINT_2F& pt);    
CD2DPointF(const D2D1_POINT_2F* pt); 
CD2DPointF(FLOAT fX = 0., FLOAT fY = 0.);
```  
  
### <a name="parameters"></a>Parameters  
 `pt`  
 source point  
  
 `fX`  
 source X  
  
 `fY`  
 source Y  
  
##  <a name="operator_cpoint"></a>  CD2DPointF::operator CPoint  
 Converts CD2DPointF to CPoint object.  
  
```  
operator CPoint();
```   
  
### <a name="return-value"></a>Return Value  
 Current value of D2D point.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

