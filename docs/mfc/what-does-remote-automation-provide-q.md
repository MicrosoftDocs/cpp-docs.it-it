---
title: What Does Remote Automation Provide? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Remote Automation, DCOM
ms.assetid: 269ad218-e164-40ef-9b87-25fcc8ba21de
caps.latest.revision: 10
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
ms.openlocfilehash: 48da6339cea7c8a39d93641fa5c5a59d0a63e207
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="what-does-remote-automation-provide"></a>What Does Remote Automation Provide?
Remote Automation allows programs to invoke `IDispatch` implementations on one machine from another. It also supports other interfaces required by Automation, specifically **IEnumVARIANT** for collection support. It does not provide the ability to distribute any other COM interface (except **IUnknown**, of course) and, like regular Automation, it contains marshaling support only for those data types supported by Automation.  
  
 This set of facilities allows a program to access the methods and properties, including those that return collections or further automation objects, of an object running on an accessible network node. If the client machine is also running the appropriate software, it is possible for the server to call back to the client, again using Automation facilities (this works for 32-bit and 64-bit clients only, and is conceptually similar to events, although it does not use the same mechanism).  
  
 For an application to be operable as a Remote Automation server, it must be implemented as an executable (that is, as a "local server" rather than as an "inproc server").  
  
## <a name="see-also"></a>See Also  
 [Where Does Remote Automation Fit In](where-does-remote-automation-fit-in-q.md)   
 [History of DCOM](../mfc/history-of-dcom.md)

