---
title: Errore del compilatore C2293
ms.date: 11/04/2016
f1_keywords:
- C2293
helpviewer_keywords:
- C2293
ms.assetid: 17e7b4e2-368b-4dd7-a01b-d82be60f8e56
ms.openlocfilehash: 8b65c4f57cf566c17defe77e5664affe3744ba9c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212774"
---
# <a name="compiler-error-c2293"></a>Errore del compilatore C2293

'identifier': non è consentito avere una variabile membro come identificatore __based

Gli identificatori per il **`__based`** modificatore devono essere puntatori non membro.

L'esempio seguente genera l'errore C2293:

```cpp
// C2293.cpp
// compile with: /c
class A {
   static int *i;
   void __based(i) *bp;   // C2293
   void *bp2;   // OK
};
```
