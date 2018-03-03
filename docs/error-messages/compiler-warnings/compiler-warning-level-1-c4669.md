---
title: Compilatore avviso (livello 1) C4669 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4669
dev_langs:
- C++
helpviewer_keywords:
- C4669
ms.assetid: 97730679-e3dc-44d4-b2a8-aa65badc17f2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8d31e2dc077ed1b86c1e246683736ceb1f827b7c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4669"></a>Avviso del compilatore (livello 1) C4669
'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito o WinRT  
  
 Un cast contiene un tipo Windows Runtime o gestito. Il compilatore completa il cast eseguendo una copia bit per bit di un puntatore all'altro, ma non fornisce altri controlli. Per risolvere il problema, non eseguire il cast di classi contenenti membri gestiti o tipi Windows Runtime.  
  
 L'esempio seguente genera l'errore C4669 e mostra come risolverlo:  
  
```  
// C4669.cpp  
// compile with: /clr /W1  
ref struct A {  
   int i;  
   Object ^ pObj;   // remove the managed member to fix the warning  
};  
  
ref struct B {  
   int j;  
};  
  
int main() {  
   A ^ a = gcnew A;  
   B ^ b = reinterpret_cast<B ^>(a);   // C4669  
}  
```