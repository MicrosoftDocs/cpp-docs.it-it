---
title: Errore del compilatore C2533
ms.date: 11/04/2016
f1_keywords:
- C2533
helpviewer_keywords:
- C2533
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
ms.openlocfilehash: 00cb13d1999b00dfcaa5a2bc7bfb3b8eb16af5f2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386980"
---
# <a name="compiler-error-c2533"></a>Errore del compilatore C2533

'identifier': i costruttori non possono avere un tipo restituito

Un costruttore non può avere un tipo restituito (nemmeno un tipo restituito `void`).

Questo errore si verifica di solito a causa di un punto e virgola mancante tra la fine della definizione di una classe e l'implementazione del primo costruttore. Il compilatore riconosce la classe come definizione del tipo restituito per la funzione costruttore e genera l'errore C2533.

L'esempio seguente genera l'errore C2533 e mostra come risolverlo:

```
// C2533.cpp
// compile with: /c
class X {
public:
   X();
};

int X::X() {}   // C2533 - constructor return type not allowed
X::X() {}   // OK - fix by using no return type
```