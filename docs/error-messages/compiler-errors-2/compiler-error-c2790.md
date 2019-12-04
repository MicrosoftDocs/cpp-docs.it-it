---
title: Errore del compilatore C2790
ms.date: 11/04/2016
f1_keywords:
- C2790
helpviewer_keywords:
- C2790
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
ms.openlocfilehash: c63fe7bb3686692818337e890de7fe4c80a18158
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74739558"
---
# <a name="compiler-error-c2790"></a>Errore del compilatore C2790

' Super ': questa parola chiave può essere usata solo all'interno del corpo della funzione membro della classe

Questo messaggio di errore viene visualizzato se l'utente tenta di usare la parola chiave [Super](../../cpp/super.md) all'esterno del contesto di una funzione membro.

L'esempio seguente genera l'C2790:

```cpp
// C2790.cpp
void f() {
   __super::g();   // C2790
}
```
