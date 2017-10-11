---
title: Errore del compilatore C2032 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2032
dev_langs:
- C++
helpviewer_keywords:
- C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 81bbe4c9e5242f68a5e0e304858c13c9274c1743
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2032"></a>Errore del compilatore C2032
'identifier': funzione non può essere membro di struct/unione '  
  
 Nella struttura o unione è una funzione membro, che è consentita in C++, ma non in C. Per risolvere l'errore, compilare un programma C++ o rimuovere la funzione membro.  
  
 L'esempio seguente genera l'errore C2032:  
  
```  
// C2032.c  
struct z {  
   int i;  
   void func();   // C2032  
};  
```  
  
 Possibile soluzione:  
  
```  
// C2032b.c  
// compile with: /c  
struct z {  
   int i;  
};  
```
