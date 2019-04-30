---
title: Errore del compilatore C3149
ms.date: 11/04/2016
f1_keywords:
- C3149
helpviewer_keywords:
- C3149
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
ms.openlocfilehash: 8238dcec821256dad8101cd7ad59b2d85882c218
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345517"
---
# <a name="compiler-error-c3149"></a>Errore del compilatore C3149

'type': non è possibile usare questo tipo senza un livello superiore 'char'

Una dichiarazione non è stata specificata correttamente.

È possibile, ad esempio, avere definito un tipo CLR in ambito globale e ha provato a creare una variabile di tipo come parte della definizione. Poiché le variabili globali di tipi CLR non sono consentite, il compilatore genererà C3149.

Per risolvere questo errore, dichiarare le variabili dei tipi CLR all'interno di una definizione di funzione o tipo.

L'esempio seguente genera l'errore C3149:

```
// C3149.cpp
// compile with: /clr
using namespace System;
int main() {
   // declare an array of value types
   array< Int32 ^> IntArray;   // C3149
   array< Int32>^ IntArray2;   // OK
}
```

L'esempio seguente genera l'errore C3149:

```
// C3149b.cpp
// compile with: /clr /c
delegate int MyDelegate(const int, int);
void Test1(MyDelegate m) {}   // C3149
void Test2(MyDelegate ^ m) {}   // OK
```
