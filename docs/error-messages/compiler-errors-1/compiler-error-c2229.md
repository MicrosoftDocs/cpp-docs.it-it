---
title: Errore del compilatore C2229 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2229
dev_langs: C++
helpviewer_keywords: C2229
ms.assetid: 933c7cf2-a463-4e74-b0b4-59dedad987fb
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c54e3affb39cb396df1caaafe6450d5c6ac80f6e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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