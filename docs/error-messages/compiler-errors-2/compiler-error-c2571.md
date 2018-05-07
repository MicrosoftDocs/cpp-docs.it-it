---
title: Errore del compilatore C2571 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2571
dev_langs:
- C++
helpviewer_keywords:
- C2571
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 96dea582cf5d1211d57eac94a7f70458a51542ae
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2571"></a>Errore del compilatore C2571
'function': funzione virtuale non consentita nell'unione 'union'  
  
 Con una funzione virtuale viene dichiarata un'unione. È possibile dichiarare una funzione virtuale solo in una classe o struttura.  Soluzioni possibili:  
  
1.  Modificare l'unione in una classe o struttura.  
  
2.  Rendere la funzione non virtuale.  
  
 L'esempio seguente genera l'errore C2571:  
  
```  
// C2571.cpp  
// compile with: /c  
union A {  
   virtual void func1();   // C2571  
   void func2();   // OK  
};  
```