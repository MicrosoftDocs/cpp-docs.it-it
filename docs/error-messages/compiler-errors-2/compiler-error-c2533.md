---
title: Errore del compilatore C2533
ms.date: 11/04/2016
f1_keywords:
- C2533
helpviewer_keywords:
- C2533
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
ms.openlocfilehash: b111448e7e9d8260a5101d05996a670013936894
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746409"
---
# <a name="compiler-error-c2533"></a>Errore del compilatore C2533

'identifier': i costruttori non possono avere un tipo restituito

Un costruttore non può avere un tipo restituito (nemmeno un tipo restituito `void`).

Questo errore si verifica di solito a causa di un punto e virgola mancante tra la fine della definizione di una classe e l'implementazione del primo costruttore. Il compilatore riconosce la classe come definizione del tipo restituito per la funzione costruttore e genera l'errore C2533.

L'esempio seguente genera l'errore C2533 e mostra come risolverlo:

```cpp
// C2533.cpp
// compile with: /c
class X {
public:
   X();
};

int X::X() {}   // C2533 - constructor return type not allowed
X::X() {}   // OK - fix by using no return type
```
