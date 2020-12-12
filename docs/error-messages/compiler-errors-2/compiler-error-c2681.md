---
description: 'Altre informazioni su: errore del compilatore C2681'
title: Errore del compilatore C2681
ms.date: 11/04/2016
f1_keywords:
- C2681
helpviewer_keywords:
- C2681
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
ms.openlocfilehash: 3b002e6260787e60377d726bcceb6db41fce532a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267781"
---
# <a name="compiler-error-c2681"></a>Errore del compilatore C2681

' type ': tipo di espressione non valido per il nome

Un operatore di cast ha tentato di eseguire la conversione da un tipo non valido. Se ad esempio si usa l'operatore [dynamic_cast](../../cpp/dynamic-cast-operator.md) per convertire un'espressione in un tipo di puntatore, l'espressione di origine deve essere un puntatore.

L'esempio seguente genera l'C2681:

```cpp
// C2681.cpp
class A { virtual void f(); };

void g(int i) {
    A* pa;
    pa = dynamic_cast<A*>(i);  // C2681
}
```
