---
title: Errore del compilatore C3182 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3182
dev_langs:
- C++
helpviewer_keywords:
- C3182
ms.assetid: f3681266-308e-4990-a979-8eef8920e186
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 7af33bd1854525bebd5d0cb423558d6077366431
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3182"></a>Errore del compilatore C3182
'class': una dichiarazione di accesso o di dichiarazione using di membro non valida all'interno di un oggetto gestito o WinRTtype  
  
 Oggetto [utilizzando](../../cpp/using-declaration.md) dichiarazione non è valida all'interno di tutti i formati di classi gestite.  
  
 L'esempio seguente genera l'errore C3182 e mostra come risolverlo.  
  
```  
// C3182a.cpp  
// compile with: /clr /c  
ref struct B {  
   void mf(int) {  
   }  
};  
  
ref struct D : B {  
   using B::mf;   // C3182, delete to resolve  
   void mf(char) {  
   }  
};  
```  

