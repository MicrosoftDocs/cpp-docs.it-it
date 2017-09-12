---
title: OLE Automation Classes | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- Automation, classes
- Automation classes [MFC], OLE classes
- OLE Automation [MFC], classes
- Automation classes [MFC]
- OLE Automation [MFC]
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
caps.latest.revision: 9
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
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 2344c8cc3e9a4f09c7d39c0c0e728077fb29b118
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ole-automation-classes"></a>OLE Automation Classes
These classes support automation clients (applications that control other applications). Automation servers (applications that can be controlled by other applications) are supported through [dispatch maps](../mfc/reference/dispatch-maps.md).  
  
 [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)  
 Used to call automation servers from your automation client. When adding a class, this class is used to create type-safe classes for automation servers that provide a type library.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 An exception resulting from an error during OLE automation. Automation exceptions are thrown by automation servers and caught by automation clients.  
  
## <a name="see-also"></a>See Also  
 [Class Overview](../mfc/class-library-overview.md)


