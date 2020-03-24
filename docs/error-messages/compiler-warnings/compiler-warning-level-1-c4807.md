---
title: Avviso del compilatore (livello 1) C4807
ms.date: 11/04/2016
f1_keywords:
- C4807
helpviewer_keywords:
- C4807
ms.assetid: 089c9f87-fd81-402e-9826-66a8ef1ef1fe
ms.openlocfilehash: 2424d076be0914a68c3227566cb851b7ab64cc0f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175038"
---
# <a name="compiler-warning-level-1-c4807"></a>Avviso del compilatore (livello 1) C4807

'operation': combinazione non affidabile del tipo 'type' e del campo di bit signed del tipo 'type'

Questo avviso viene generato quando si confronta un campo di bit signed a un bit con una variabile `bool` . Poiché un campo di bit signed a un bit può contenere solo il valore -1 o 0, è pericoloso confrontarlo con `bool`. Non viene generato alcun avviso relativo alla combinazione di campi di bit senza segno di tipo `bool` e a un bit poiché sono identici a `bool` e possono contenere solo 0 o 1.

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
