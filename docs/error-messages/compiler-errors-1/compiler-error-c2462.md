---
title: Errore del compilatore C2462
ms.date: 11/04/2016
f1_keywords:
- C2462
helpviewer_keywords:
- C2462
ms.assetid: a8601bf8-f5ce-41de-9117-e2632bd4996b
ms.openlocfilehash: 0b342f8b878c48a77336fab4921cf4a668e248ab
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368292"
---
# <a name="compiler-error-c2462"></a>Errore del compilatore C2462

'identifier': non è possibile definire un tipo in un'espressione' new'

Non è possibile definire un tipo di campo dell'operando di `new` operatore. Inserire la definizione del tipo in un'istruzione separata.

L'esempio seguente genera l'errore C2462:

```
// C2462.cpp
int main() {
   new struct S { int i; };   // C2462
}
```