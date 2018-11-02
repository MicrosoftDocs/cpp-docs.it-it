---
title: Errore del compilatore C2583
ms.date: 11/04/2016
f1_keywords:
- C2583
helpviewer_keywords:
- C2583
ms.assetid: b1c952dc-872c-47e4-9fc8-4dd72bcee6f9
ms.openlocfilehash: b78b9dd69b701e1a66646234d4603973657e90c6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50597977"
---
# <a name="compiler-error-c2583"></a>Errore del compilatore C2583

'identifier': ' const/volatile' puntatore 'this' non è valido per costruttori e distruttori

Un costruttore o distruttore è dichiarato `const` o `volatile`. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2583:

```
// C2583.cpp
// compile with: /c
class A {
public:
   int i;
   A() const;   // C2583

   // try the following line instead
   // A();
};
```