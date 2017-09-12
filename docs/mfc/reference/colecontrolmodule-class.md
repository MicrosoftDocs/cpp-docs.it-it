---
title: COleControlModule Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- OleControlModule
dev_langs:
- C++
helpviewer_keywords:
- OLE control modules [MFC]
- MFC ActiveX controls [MFC], OLE control modules
- COleControlModule class [MFC]
- control modules [MFC]
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
caps.latest.revision: 23
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
ms.openlocfilehash: b90d95781f579a8f8f93d76684b52d67b95a2223
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="colecontrolmodule-class"></a>COleControlModule Class
The base class from which you derive an OLE control module object.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COleControlModule : public CWinApp  
```  
  
## <a name="remarks"></a>Remarks  
 This class provides member functions for initializing your control module. Each OLE control module that uses the Microsoft Foundation classes can only contain one object derived from `COleControlModule`. This object is constructed when other C++ global objects are constructed. Declare your derived `COleControlModule` object at the global level.  
  
 For more information on using the `COleControlModule` class, see the [CWinApp](../../mfc/reference/cwinapp-class.md) class and the article [ActiveX Controls](../../mfc/mfc-activex-controls.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 `COleControlModule`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxctl.h  
  
## <a name="see-also"></a>See Also  
 [MFC Sample TESTHELP](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)




