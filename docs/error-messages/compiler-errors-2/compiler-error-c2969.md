---
title: Errore del compilatore C2969 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2969
dev_langs:
- C++
helpviewer_keywords:
- C2969
ms.assetid: e4ea3d66-b937-4b2c-b42a-96e03fb11579
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 796660cbefab31a58a977930537897e6c537b834
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076931"
---
# <a name="compiler-error-c2969"></a>Errore del compilatore C2969

errore di sintassi: 'symbol': previsto '}' al termine della definizione di una funzione membro

La definizione di una funzione membro del modello ha una parentesi graffa di chiusura senza corrispondenza.

L'esempio seguente genera l'errore C2969:

```
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