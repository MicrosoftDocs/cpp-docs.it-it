---
title: Avviso del compilatore (livello 1) C4401
ms.date: 11/04/2016
f1_keywords:
- C4401
helpviewer_keywords:
- C4401
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
ms.openlocfilehash: fe08509a05eed00f7e7d492e723e873d05e451ad
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80162660"
---
# <a name="compiler-warning-level-1-c4401"></a>Avviso del compilatore (livello 1) C4401

' bit ': il membro è un campo di bit

Il codice assembly inline tenta di accedere a un membro del campo di bit. L'assembly inline non può accedere ai membri del campo di bit, quindi viene usato l'ultimo limite di compressione prima del membro del campo di bit.

Per evitare questo avviso, eseguire il cast del campo di bit a un tipo appropriato prima di creare il riferimento nel codice assembly inline. L'esempio seguente genera l'C4401:

```cpp
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
