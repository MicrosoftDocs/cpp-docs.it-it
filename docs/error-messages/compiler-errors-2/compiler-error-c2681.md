---
title: Errore del compilatore C2681
ms.date: 11/04/2016
f1_keywords:
- C2681
helpviewer_keywords:
- C2681
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
ms.openlocfilehash: 8b311052d3a3525090d954c0dc8cee20e985b1b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50632696"
---
# <a name="compiler-error-c2681"></a>Errore del compilatore C2681

'type': tipo di espressione non valida per nome

Un operatore di cast ha provato a eseguire la conversione da un tipo non valido. Ad esempio, se si usa la [dynamic_cast](../../cpp/dynamic-cast-operator.md) operatore per convertire un'espressione in un tipo di puntatore, l'espressione di origine deve essere un puntatore.

L'esempio seguente genera l'errore C2681:

```
// C2681.cpp
class A { virtual void f(); };

void g(int i) {
    A* pa;
    pa = dynamic_cast<A*>(i);  // C2681
}
```