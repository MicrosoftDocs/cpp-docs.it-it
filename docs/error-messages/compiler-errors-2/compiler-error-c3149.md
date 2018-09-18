---
title: Errore del compilatore C3149 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3149
dev_langs:
- C++
helpviewer_keywords:
- C3149
ms.assetid: cf6e2616-2f06-46da-8a8a-d449cb481c51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a522bfd3ba236661f206d8d4e4b550179c06b3f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46033121"
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
