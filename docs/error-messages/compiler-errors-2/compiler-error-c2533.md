---
description: 'Altre informazioni su: errore del compilatore C2533'
title: Errore del compilatore C2533
ms.date: 11/04/2016
f1_keywords:
- C2533
helpviewer_keywords:
- C2533
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
ms.openlocfilehash: 46f9a18d80bcf75d916a6cf5387dc7145f1f1629
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258122"
---
# <a name="compiler-error-c2533"></a>Errore del compilatore C2533

'identifier': i costruttori non possono avere un tipo restituito

Un costruttore non può avere un tipo restituito, non anche un **`void`** tipo restituito.

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
