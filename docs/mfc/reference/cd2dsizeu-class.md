---
title: CD2DSizeU Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::CD2DSizeU
- AFXRENDERTARGET/CD2DSizeU::IsNull
dev_langs:
- C++
helpviewer_keywords:
- CD2DSizeU [MFC], CD2DSizeU
- CD2DSizeU [MFC], IsNull
ms.assetid: 6e679ba8-2112-43c3-8275-70b660856f02
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
ms.openlocfilehash: 7e1154fb1de34355574ec0ac41a799286cdbc23d
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dsizeu-class"></a>CD2DSizeU Class
A wrapper for D2D1_SIZE_U.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DSizeU : public D2D1_SIZE_U;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu)|Overloaded. Constructs a `CD2DSizeU` object from `D2D1_SIZE_U` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::IsNull](#isnull)|Returns a `boolean` value that indicates whether an expression contains no valid data ( `null`).|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeU::operator CSize](#operator_csize)|Converts `CD2DSizeU` to `CSize` object.|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_SIZE_U`  
  
 [CD2DSizeU](../../mfc/reference/cd2dsizeu-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dsizeu"></a>  CD2DSizeU::CD2DSizeU  
 Constructs a CD2DSizeU object from CSize object.  
  
```  
CD2DSizeU(const CSize& size);  
CD2DSizeU(const D2D1_SIZE_U& size);  
  CD2DSizeU(const D2D1_SIZE_U* size);

 
CD2DSizeU(
    UINT32 cx = 0,  
    UINT32 cy = 0);
```  
  
### <a name="parameters"></a>Parameters  
 `size`  
 source size  
  
 `cx`  
 source width  
  
 `cy`  
 source height  
  
##  <a name="isnull"></a>  CD2DSizeU::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if width and height are empty; otherwise FALSE.  
  
##  <a name="operator_csize"></a>  CD2DSizeU::operator CSize  
 Converts CD2DSizeU to CSize object.  
  
```  
operator CSize();
```   
  
### <a name="return-value"></a>Return Value  
 Current value of D2D size.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

