---
description: 'Altre informazioni su: errore del compilatore C2798'
title: Errore del compilatore C2798
ms.date: 11/04/2016
f1_keywords:
- C2798
helpviewer_keywords:
- C2798
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
ms.openlocfilehash: d3a78eaf09797d658c64b5659dcd0e05191fab1c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297590"
---
# <a name="compiler-error-c2798"></a>Errore del compilatore C2798

' Super:: Member ' è ambiguo

Più strutture ereditate contengono il membro a cui si fa riferimento con [Super](../../cpp/super.md). Per correggere l'errore, effettuare una delle operazioni seguenti:

- Rimuovere B1 o B2 dall'elenco di ereditarietà di D.

- Modifica del nome del membro dati in B1 o B2.

L'esempio seguente genera l'C2798:

```cpp
// C2798.cpp
struct B1 {
   int i;
};

struct B2 {
   int i;
};

struct D : B1, B2 {
   void g() {
      __super::i = 4; // C2798
   }
};
```
