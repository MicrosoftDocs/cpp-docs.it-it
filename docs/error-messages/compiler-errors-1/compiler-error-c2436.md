---
description: 'Altre informazioni su: errore del compilatore C2436'
title: Errore del compilatore C2436
ms.date: 11/04/2016
f1_keywords:
- C2436
helpviewer_keywords:
- C2436
ms.assetid: ca4cc813-bc1d-4c0a-9a2c-3a5fe673d084
ms.openlocfilehash: 3858146d48006c1129f6dca1992e229603b70a79
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189912"
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
