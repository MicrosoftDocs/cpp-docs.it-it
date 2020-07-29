---
title: Avviso del compilatore (livello 1) C4807
ms.date: 11/04/2016
f1_keywords:
- C4807
helpviewer_keywords:
- C4807
ms.assetid: 089c9f87-fd81-402e-9826-66a8ef1ef1fe
ms.openlocfilehash: 17a33f7c55fa2825eae1c7d8b9d8ab78e4ed5274
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225332"
---
# <a name="compiler-warning-level-1-c4807"></a>Avviso del compilatore (livello 1) C4807

'operation': combinazione non affidabile del tipo 'type' e del campo di bit signed del tipo 'type'

Questo avviso viene generato quando si confronta un campo di bit signed a un bit con una **`bool`** variabile. Poiché un campo di bit signed a un bit può contenere solo i valori-1 o 0, è pericoloso confrontarlo con **`bool`** . Non viene generato alcun avviso relativo **`bool`** alla combinazione di un campi non firmato e a un bit, perché sono identici a **`bool`** e possono avere solo 0 o 1.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4807:

```cpp
// C4807.cpp
// compile with: /W1
typedef struct bitfield {
   signed mybit : 1;
} mybitfield;

int main() {
   mybitfield bf;
   bool b = true;

   // try..
   // int b = true;

   bf.mybit = -1;
   if (b == bf.mybit) {   // C4807
      b = false;
   }
}
```
