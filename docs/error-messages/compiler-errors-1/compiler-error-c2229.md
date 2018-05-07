---
title: Errore del compilatore C2229 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2229
dev_langs:
- C++
helpviewer_keywords:
- C2229
ms.assetid: 933c7cf2-a463-4e74-b0b4-59dedad987fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c61708e7e67db39f85b1ff782e8945facc2b9568
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2229"></a>Errore del compilatore C2229
tipo 'identifier' ha una matrice di dimensioni zero non valida  
  
 Un membro di un campo di bit o di struttura contiene una matrice di dimensioni zero non è l'ultimo membro.  
  
 Poiché è una matrice di dimensioni zero come ultimo membro della struttura, è necessario specificare le dimensioni quando si assegna lo struct.  
  
 Se la matrice di dimensioni zero non è l'ultimo membro della struttura, il compilatore non è possibile calcolare l'offset per i campi rimanenti.  
  
 L'esempio seguente genera l'errore C2229:  
  
```  
// C2229.cpp  
struct S {  
   int a[0];  // C2229  zero-sized array  
   int b[1];  
};  
  
struct S2 {  
   int a;  
   int b[0];  
};  
  
int main() {  
   // allocate 7 elements for b field  
   S2* s2 = (S2*)new int[sizeof(S2) + 7*sizeof(int)];  
   s2->b[6] = 100;  
}  
```