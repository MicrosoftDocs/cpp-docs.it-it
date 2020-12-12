---
description: 'Altre informazioni su: errore del compilatore C2969'
title: Errore del compilatore C2969
ms.date: 11/04/2016
f1_keywords:
- C2969
helpviewer_keywords:
- C2969
ms.assetid: e4ea3d66-b937-4b2c-b42a-96e03fb11579
ms.openlocfilehash: d0b52e6033338adc249cc9c7181cbb5dc25f7f8b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210400"
---
# <a name="compiler-error-c2969"></a>Errore del compilatore C2969

errore di sintassi: 'symbol': previsto '}' al termine della definizione di una funzione membro

La definizione di una funzione membro del modello ha una parentesi graffa di chiusura senza corrispondenza.

L'esempio seguente genera l'errore C2969:

```cpp
// C2969.cpp
// compile with: /c
class A {
   int i;
public:
   A(int i) {}
};

A anA(1);

class B {
   A a;
   B() : a(anA);   // C2969
   // try the following line instead
   // B() : a(anA) {}
};
```
