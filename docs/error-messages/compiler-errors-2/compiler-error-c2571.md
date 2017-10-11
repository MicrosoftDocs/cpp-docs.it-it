---
title: Errore del compilatore C2571 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2571
dev_langs:
- C++
helpviewer_keywords:
- C2571
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8bfb4f9af849efea2fa3aa8a84a57f1cfb4cd502
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

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
