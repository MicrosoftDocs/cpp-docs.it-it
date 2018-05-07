---
title: Compilatore avviso (livello 1) C4401 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4401
dev_langs:
- C++
helpviewer_keywords:
- C4401
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f8b8a7a2bced261bbff09422c3dfa6454061f636
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4401"></a>Avviso del compilatore (livello 1) C4401
'campo di bit': membro è un campo di bit  
  
 Il codice assembly inline tenta di accedere a un membro di campo di bit. Assembly inline non possono accedere i membri di campo di bit, all'ultimo limite di compressione prima del membro di campo di bit viene utilizzato.  
  
 Per evitare questo avviso, eseguire il cast il campo di bit a un tipo appropriato prima di creare il riferimento nel codice assembly inline. L'esempio seguente genera l'errore C4401:  
  
```  
// C4401.cpp  
// compile with: /W1  
// processor: x86  
typedef struct bitfield {  
   signed bit : 1;  
} mybitfield;  
  
int main() {  
   mybitfield bf;  
   bf.bit = 0;  
   __asm {  
      mov bf.bit,0;   // C4401  
   }  
  
   /* use the following __asm block to resolve the warning  
   int i = (int)bf.bit;  
   __asm {  
      mov i,0;  
   }  
   */  
}  
```