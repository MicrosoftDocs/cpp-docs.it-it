---
title: CD2DSizeF Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::CD2DSizeF
- AFXRENDERTARGET/CD2DSizeF::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DSizeF [MFC], CD2DSizeF
- CD2DSizeF [MFC], IsNull
ms.assetid: f486a1e1-997d-4286-8cb9-26369dc82055
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
ms.openlocfilehash: 6515cf90ab6a1236d2a3f7c30610c0baa1c23864
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dsizef-class"></a>CD2DSizeF Class
A wrapper for D2D1_SIZE_F.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DSizeF : public D2D1_SIZE_F;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::CD2DSizeF](#cd2dsizef)|Overloaded. Constructs a `CD2DSizeF` object from `D2D1_SIZE_F` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::IsNull](#isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::operator CSize](#operator_csize)|Converts `CD2DSizeF` to `CSize` object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_SIZE_F`  
  
 [CD2DSizeF](../../mfc/reference/cd2dsizef-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dsizef"></a>  CD2DSizeF::CD2DSizeF  
 Constructs a CD2DSizeF object from CSize object.  
  
```  
CD2DSizeF(const CSize& size);  
CD2DSizeF(const D2D1_SIZE_F& size);  
  CD2DSizeF(const D2D1_SIZE_F* size);

 
CD2DSizeF(
    FLOAT cx = 0.,  
    FLOAT cy = 0.);
```  
  
### <a name="parameters"></a>Parameters  
 `size`  
 source size  
  
 `cx`  
 source width  
  
 `cy`  
 source height  
  
##  <a name="isnull"></a>  CD2DSizeF::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if width and height are empty; otherwise FALSE.  
  
##  <a name="operator_csize"></a>  CD2DSizeF::operator CSize  
 Converts CD2DSizeF to CSize object.  
  
```  
operator CSize();
```   
  
### <a name="return-value"></a>Return Value  
 Current value of D2D size.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

