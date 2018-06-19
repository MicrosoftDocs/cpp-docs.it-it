---
title: Compilatore avviso (livello 1) C4731 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4731
dev_langs:
- C++
helpviewer_keywords:
- C4731
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31bdf972ef3791760469251dc4d0bf19627bded2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283881"
---
# <a name="compiler-warning-level-1-c4731"></a>Avviso del compilatore (livello 1) C4731
'pointer': frame registro dei puntatori 'Registra' modificato da codice assembly inline  
  
 Un registro dei puntatori frame è stato modificato. È necessario salvare e ripristinare il registro nella inline assembly blocco o frame di variabile (locale o un parametro, a seconda del registro modificato) oppure il codice potrebbe non funzionare correttamente.  
  
 L'esempio seguente genera l'errore C4731:  
  
```  
// C4731.cpp  
// compile with: /W1 /LD  
// processor: x86  
// C4731 expected  
void bad(int p) {  
   __asm  
   {  
      mov ebp, 1  
   }  
  
   if (p == 1)  
   {  
      // ...  
   }  
}  
```  
  
 EBP è il puntatore ai frame (FPO non è consentito) e viene modificato. Quando `p` è successiva a cui fa riferimento, fa riferimento relativo a `EBP`. Ma `EBP` è stato sovrascritto dal codice, in modo che il programma non verrà eseguita correttamente e può anche avere esito negativo.