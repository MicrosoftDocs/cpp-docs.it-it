---
title: Errore del compilatore C3283 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3283
dev_langs:
- C++
helpviewer_keywords:
- C3283
ms.assetid: c51d912c-cde3-4928-904e-26734c8954ce
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 94b1028f19cd5ca8b490e3247d0f55cff36bb19a
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3283"></a>Errore del compilatore C3283
'type': un'interfaccia non può avere un costruttore di istanza  
  
 Un' [interfaccia](../../windows/interface-class-cpp-component-extensions.md) CLR non può avere un costruttore di istanze.  È consentito un costruttore statico.  
  
 L'esempio seguente genera l'errore C3283:  
  
```  
// C3283.cpp  
// compile with: /clr  
interface class I {  
   I();   // C3283  
};  
```  
  
 Possibile soluzione:  
  
```  
// C3283b.cpp  
// compile with: /clr /c  
interface class I {  
   static I(){}  
};  
```
