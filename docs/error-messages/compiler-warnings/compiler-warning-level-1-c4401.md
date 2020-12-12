---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4401'
title: Avviso del compilatore (livello 1) C4401
ms.date: 11/04/2016
f1_keywords:
- C4401
helpviewer_keywords:
- C4401
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
ms.openlocfilehash: c6314b64ef9a675f8838cc7c3f4c89c2d6063231
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212740"
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
