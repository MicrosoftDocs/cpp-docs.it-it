---
title: Compilatore avviso (livello 1) C4532 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4532
dev_langs:
- C++
helpviewer_keywords:
- C4532
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e37d36f565cc63c7cef9954a78e14ed60d676996
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4532"></a>Avviso del compilatore (livello 1) C4532
'continue': salto dal blocco finally/finally un comportamento indefinito durante la gestione della terminazione  
  
 Il compilatore ha rilevato una delle parole chiave seguenti:  
  
-   [continue](../../cpp/continue-statement-cpp.md)  
  
-   [break](../../cpp/break-statement-cpp.md)  
  
-   [goto](../../cpp/goto-statement-cpp.md)  
  
 provoca l'uscita da un [finally](../../cpp/try-finally-statement.md) o [infine](../../dotnet/finally.md) blocco terminazione anomala.  
  
 Se si verifica un'eccezione, mentre lo stack viene rimossa durante l'esecuzione dei gestori di terminazione (il `__finally` o blocchi), e il codice passa da un `__finally` bloccare prima il `__finally` termina in blocco, il comportamento è indefinito. Controllo non può restituire per il codice di rimozione, in modo l'eccezione potrebbe non essere gestita correttamente.  
  
 Se è necessario uscire da un **finally** blocco, verificare prima della terminazione anomala.  
  
 L'esempio seguente genera l'avviso C4532. è sufficiente impostare come commento le istruzioni di spostamento per risolvere gli avvisi.  
  
```  
// C4532.cpp  
// compile with: /W1  
// C4532 expected  
int main() {  
   int i;  
   for (i = 0; i < 10; i++) {  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         continue;  
      }  
  
      __try {  
      } __finally {  
         // Delete the following line to resolve.  
         break;  
      }  
   }  
}  
```