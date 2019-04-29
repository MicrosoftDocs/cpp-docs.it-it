---
title: Errore del compilatore C2034
ms.date: 11/04/2016
f1_keywords:
- C2034
helpviewer_keywords:
- C2034
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
ms.openlocfilehash: 4b4fe769f78e5f826ba08d4819019210f21f860f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400476"
---
# <a name="compiler-error-c2034"></a>Errore del compilatore C2034

'identifier': tipo di campo di bit troppo piccolo per numero di bit

Il numero di bit nella dichiarazione del campo di bit supera le dimensioni del tipo di base.

L'esempio seguente genera l'errore C2034:

```
// C2034.cpp
struct A {
   char test : 9;   // C2034, char has 8 bits
};
```

Possibile soluzione:

```
// C2034b.cpp
// compile with: /c
struct A {
   char test : 8;
};
```