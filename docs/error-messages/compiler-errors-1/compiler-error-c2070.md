---
title: Errore del compilatore C2070
ms.date: 11/04/2016
f1_keywords:
- C2070
helpviewer_keywords:
- C2070
ms.assetid: 4c8dea63-1227-4aba-be26-2462537f86fb
ms.openlocfilehash: 221b42e6425c84f4e34c99872fc0e51716e2db1b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208902"
---
# <a name="compiler-error-c2070"></a>Errore del compilatore C2070

'type': operando di sizeof non valido

Il [sizeof](../../cpp/sizeof-operator.md) operatore richiede un'espressione o digitare un nome.

L'esempio seguente genera l'errore C2070:

```
// C2070.cpp
void func() {}
int main() {
   int a;
   a = sizeof(func);   // C2070
}
```

Possibile soluzione:

```
// C2070b.cpp
void func() {}
int main() {
   int a;
   a = sizeof(a);
}
```