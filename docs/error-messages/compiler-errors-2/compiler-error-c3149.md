---
title: Errore del compilatore C3149
ms.date: 11/04/2016
f1_keywords:
- C3149
helpviewer_keywords:
- C3149
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
ms.openlocfilehash: 263eb03b7a9f45458f8d8b586adc6f1cfc5805be
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74745980"
---
# <a name="compiler-error-c3149"></a>Errore del compilatore C3149

' type ': non è possibile usare questo tipo qui senza un'Char ' di primo livello

Una dichiarazione non è stata specificata correttamente.

Ad esempio, è possibile che sia stato definito un tipo CLR in ambito globale e che sia stata tentata la creazione di una variabile del tipo come parte della definizione. Poiché le variabili globali dei tipi CLR non sono consentite, il compilatore genererà C3149.

Per correggere l'errore, dichiarare le variabili dei tipi CLR all'interno di una funzione o di una definizione di tipo.

L'esempio seguente genera l'C3149:

```cpp
// C3149.cpp
// compile with: /clr
using namespace System;
int main() {
   // declare an array of value types
   array< Int32 ^> IntArray;   // C3149
   array< Int32>^ IntArray2;   // OK
}
```

L'esempio seguente genera l'C3149:

```cpp
// C3149b.cpp
// compile with: /clr /c
delegate int MyDelegate(const int, int);
void Test1(MyDelegate m) {}   // C3149
void Test2(MyDelegate ^ m) {}   // OK
```
