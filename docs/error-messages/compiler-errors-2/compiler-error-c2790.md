---
description: 'Altre informazioni su: errore del compilatore C2790'
title: Errore del compilatore C2790
ms.date: 11/04/2016
f1_keywords:
- C2790
helpviewer_keywords:
- C2790
ms.assetid: 38d4fce1-ba00-413d-8bc1-e8aa43d7bc1f
ms.openlocfilehash: 0913b87f40e7f4ad2ecccb333e67bb0d76b4afde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297801"
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
