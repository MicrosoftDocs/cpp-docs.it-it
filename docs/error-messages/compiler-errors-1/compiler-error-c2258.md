---
title: Errore del compilatore C2258
ms.date: 11/04/2016
f1_keywords:
- C2258
helpviewer_keywords:
- C2258
ms.assetid: 105eaa87-befb-4ecb-9a3f-e09e14d2f5bf
ms.openlocfilehash: 99936026929bbaad321abfaa106df41b99c5d19d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587798"
---
# <a name="compiler-error-c2258"></a>Errore del compilatore C2258

sintassi pure non valida. Deve essere '= 0'.

Una funzione virtuale pura è stata dichiarata con una sintassi non corretta.

L'esempio seguente genera l'errore C2258:

```
// C2258.cpp
// compile with: /c
class A {
public:
   void virtual func1() = 1; // C2258
   void virtual func2() = 0;   // OK
};
```