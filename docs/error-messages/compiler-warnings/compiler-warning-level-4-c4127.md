---
title: Compilatore avviso (livello 4) C4127 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4127
dev_langs:
- C++
helpviewer_keywords:
- C4127
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c98b2eb42cfc66c27faf74c3d6e46e981851a0a9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293647"
---
# <a name="compiler-warning-level-4-c4127"></a>Avviso del compilatore (livello 4) C4127
espressione condizionale costante  
  
 L'espressione di controllo di un'istruzione `if` o di un ciclo `while` restituisce una costante. A causa delle loro utilizzo idiomatica comune, costanti semplici, ad esempio 1 o `true` non attivano l'avviso, a meno che non sono il risultato di un'operazione in un'espressione. Se l'espressione di controllo di un `while` ciclo è una costante perché il ciclo viene interrotto al centro, provare a sostituire il `while` ciclo con un `for` ciclo. È possibile omettere l'inizializzazione, il test di terminazione e incremento del ciclo di un `for` ciclo, generando un ciclo infinito, come `while(1)`, e si può uscire dal ciclo dal corpo del `for` istruzione.  
  
 L'esempio seguente mostra due modi C4127 viene generato e viene illustrato come utilizzare un ciclo evitare l'avviso:  
  
```  
// C4127.cpp  
// compile with: /W4  
#include <stdio.h>  
int main() {  
   if (1 == 1) {}   // C4127  
   while (42) { break; }   // C4127  
  
   // OK  
   for ( ; ; ) {  
      printf("test\n");  
      break;  
   }  
}  
```