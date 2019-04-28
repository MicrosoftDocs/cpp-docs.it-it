---
title: Avviso del compilatore (livello 1) C4401
ms.date: 11/04/2016
f1_keywords:
- C4401
helpviewer_keywords:
- C4401
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
ms.openlocfilehash: c7e6cf8a52288d895b74481678dc91fee387a6a3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280425"
---
# <a name="compiler-warning-level-1-c4401"></a>Avviso del compilatore (livello 1) C4401

'campo di bit': membro è un campo di bit

Il codice assembly inline tenta di accedere a un membro di campo di bit. Assembly inline non possono accedere i membri di campo di bit, pertanto viene usato l'ultimo limite di compressione prima del membro di campo di bit.

Per evitare questo avviso, eseguire il cast il campo di bit a un tipo appropriato prima di effettuare il riferimento nel codice assembly inline. L'esempio seguente genera l'errore C4401:

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