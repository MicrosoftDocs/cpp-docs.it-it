---
title: Errore del compilatore C2267
ms.date: 11/04/2016
f1_keywords:
- C2267
helpviewer_keywords:
- C2267
ms.assetid: ea63bebb-6208-4367-8440-39be07f9c360
ms.openlocfilehash: 0a72470feb79a226fe0f167364eeaea7dec9fd4d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87208473"
---
# <a name="compiler-error-c2267"></a>Errore del compilatore C2267

' Function ': le funzioni statiche con ambito blocco non sono valide

Viene dichiarata una funzione locale **`static`** . Le funzioni statiche devono avere un ambito globale.

L'esempio seguente genera l'C2267:

```cpp
// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
```
