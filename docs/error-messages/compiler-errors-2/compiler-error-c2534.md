---
title: Errore del compilatore C2534
ms.date: 11/04/2016
f1_keywords:
- C2534
helpviewer_keywords:
- C2534
ms.assetid: 481f9f54-5b51-4aa0-8eea-218f10807705
ms.openlocfilehash: e684804ea31b16f31c82e244cb4f9a6aaf2d08c3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50638256"
---
# <a name="compiler-error-c2534"></a>Errore del compilatore C2534

'identifier': costruttore non può restituire un valore

Un costruttore non può restituire un valore o di un tipo restituito (nemmeno un `void` tipo restituito).

Questo errore può essere risolto rimuovendo il `return` istruzione dalla definizione del costruttore.

L'esempio seguente genera l'errore C2534:

```
// C2534.cpp
class A {
public:
   int i;
   A() { return i; }   // C2534
};
```