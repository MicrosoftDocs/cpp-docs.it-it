---
title: Errore del compilatore C2436
ms.date: 11/04/2016
f1_keywords:
- C2436
helpviewer_keywords:
- C2436
ms.assetid: ca4cc813-bc1d-4c0a-9a2c-3a5fe673d084
ms.openlocfilehash: 2fd910f18e8d863c6894a7fe99449d5ba213bf61
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744381"
---
# <a name="compiler-error-c2436"></a>Errore del compilatore C2436

' Identifier ': funzione membro o classe annidata nell'elenco di inizializzatori del costruttore

Impossibile inizializzare le funzioni membro o le classi locali nell'elenco di inizializzatori del costruttore.

L'esempio seguente genera l'C2436:

```cpp
// C2436.cpp
struct S{
   int f();
   struct Inner{
      int i;
   };
   S():f(10), Inner(0){}   // C2436
};
```
