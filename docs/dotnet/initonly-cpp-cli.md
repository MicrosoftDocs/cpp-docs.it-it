---
title: initonly (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- initonly_cpp
- initonly
dev_langs: C++
helpviewer_keywords: initonly attribute [C++]
ms.assetid: f745d7fa-dc08-46f1-9b97-0977be58a008
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a238453c7879cab29f0fa058b654841f0c4786cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="initonly-ccli"></a>initonly (C++/CLI)
**initonly** è una parola chiave sensibile al contesto che indica che un'assegnazione di variabile può verificarsi solo come parte della dichiarazione o in un costruttore statico nella stessa classe.  
  
 Nell'esempio riportato di seguito viene illustrato come usare `initionly`:  
  
```  
// mcpp_initonly.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   initonly  
   static int staticConst1;  
  
   initonly  
   static int staticConst2 = 0;  
  
   static Y1() {  
      staticConst1 = 0;  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)