---
title: Errore del compilatore C2711 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2711
dev_langs:
- C++
helpviewer_keywords:
- C2711
ms.assetid: 9df9f808-7419-4e63-abdd-e6538ff0871f
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a58a4497e007203119a376e38de82dd91030dfbc
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2711"></a>Errore del compilatore C2711
'function': questa funzione non può essere compilate come gestite, gestita tramite #pragma  
  
 Alcune istruzioni impedirà il compilatore di generare codice MSIL per la funzione contenitrice.  
  
 L'esempio seguente genera l'errore C2711:  
  
```  
// C2711.cpp  
// compile with: /clr  
// processor: x86  
using namespace System;  
value struct V {  
   static const t = 10;  
};  
  
void bar() {  
   V::t;  
   __asm int 3   // C2711 inline asm can't be compiled managed  
}  
```
