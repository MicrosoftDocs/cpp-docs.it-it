---
title: CD2DBrushProperties Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties::CD2DBrushProperties
- AFXRENDERTARGET/CD2DBrushProperties::CommonInit
dev_langs:
- C++
helpviewer_keywords:
- CD2DBrushProperties [MFC], CD2DBrushProperties
- CD2DBrushProperties [MFC], CommonInit
ms.assetid: c77d717f-0a16-4d74-b2ce-0ae1766ed6f9
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
ms.openlocfilehash: 2245ea67dee7e292a2bff4a279ded14d11e90cfc
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cd2dbrushproperties-class"></a>CD2DBrushProperties Class
A wrapper for `D2D1_BRUSH_PROPERTIES`.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CD2DBrushProperties : public D2D1_BRUSH_PROPERTIES;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrushProperties::CD2DBrushProperties](#cd2dbrushproperties)|Overloaded. Creates a `CD2D_BRUSH_PROPERTIES` structure|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrushProperties::CommonInit](#commoninit)|Initializes the object|  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `D2D1_BRUSH_PROPERTIES`  
  
 `CD2DBrushProperties`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dbrushproperties"></a>  CD2DBrushProperties::CD2DBrushProperties  
 Creates a CD2D_BRUSH_PROPERTIES structure  
  
```  
CD2DBrushProperties();  
CD2DBrushProperties(FLOAT _opacity);

 
CD2DBrushProperties(
    D2D1_MATRIX_3X2_F _transform,  
    FLOAT _opacity = 1.);
```  
  
### <a name="parameters"></a>Parameters  
 `_opacity`  
 The base opacity of the brush. The default value is 1.0.  
  
 `_transform`  
 The transformation to apply to the brush  
  
##  <a name="commoninit"></a>  CD2DBrushProperties::CommonInit  
 Initializes the object  
  
```  
void CommonInit();
```  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

