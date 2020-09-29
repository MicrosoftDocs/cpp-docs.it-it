---
title: Errore del compilatore C2530
ms.date: 11/04/2016
f1_keywords:
- C2530
helpviewer_keywords:
- C2530
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
ms.openlocfilehash: 4eca5579f6bf132452a813d8dd99193df5f76b92
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500538"
---
# <a name="compiler-error-c2530"></a>Errore del compilatore C2530

' Identifier ': i riferimenti devono essere inizializzati

È necessario inizializzare un riferimento quando è stato dichiarato, a meno che non sia già stato dichiarato:

- Con la parola chiave [extern](../../cpp/extern-cpp.md).

- Come membro di una classe, di una struttura o di un'Unione (e viene inizializzata nel costruttore).

- Come parametro in una dichiarazione o definizione di funzione.

- Come tipo restituito di una funzione.

L'esempio seguente genera l'C2530:

```cpp
// C2530.cpp
int main() {
   int i = 0;
   int &j;   // C2530
   int &k = i;   // OK
}
```
