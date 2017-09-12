---
title: Type Library Access | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
caps.latest.revision: 14
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
ms.openlocfilehash: c531cfd358a6f049754b55a5bc8902ad5a37d975
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="type-library-access"></a>Type Library Access
Type libraries expose the interfaces of an OLE control to other OLE-aware applications. Each OLE control must have a type library if one or more interfaces are to be exposed.  
  
 The following macros allow an OLE control to provide access to its own type library:  
  
### <a name="type-library-access"></a>Type Library Access  
  
|||  
|-|-|  
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Declares a `GetTypeLib` member function of an OLE control (must be used in the class declaration).|  
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implements a `GetTypeLib` member function of an OLE control (must be used in the class implementation).|  
  
##  <a name="declare_oletypelib"></a>  DECLARE_OLETYPELIB  
 Declares the `GetTypeLib` member function of your control class.  
  
```   
DECLARE_OLETYPELIB(class_name)   
```  
  
### <a name="parameters"></a>Parameters  
 *class_name*  
 The name of the control class related to the type library.  
  
### <a name="remarks"></a>Remarks  
 Use this macro in the control class header file.  

### <a name="requirements"></a>Requirements  
 **Header:** afxdisp.h  

##  <a name="implement_oletypelib"></a>  IMPLEMENT_OLETYPELIB  
 Implements the control's `GetTypeLib` member function.  
  
```   
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)   
```  
  
### <a name="parameters"></a>Parameters  
 *class_name*  
 The name of the control class related to the type library.  
  
 *tlid*  
 The ID number of the type library.  
  
 `wVerMajor`  
 The type library major version number.  
  
 `wVerMinor`  
 The type library minor version number.  
  
### <a name="remarks"></a>Remarks  
 This macro must appear in the implementation file for any control class that uses the `DECLARE_OLETYPELIB` macro.  

### <a name="requirements"></a>Requirements  
 **Header:** afxdisp.h  
   
## <a name="see-also"></a>See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)

