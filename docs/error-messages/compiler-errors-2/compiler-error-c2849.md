---
title: Errore del compilatore C2849
ms.date: 11/04/2016
f1_keywords:
- C2849
helpviewer_keywords:
- C2849
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
ms.openlocfilehash: 4812c836d099e9cbb3849e48046edfdeda24ffc9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62256906"
---
# <a name="compiler-error-c2849"></a>Errore del compilatore C2849

'distruttore': un'interfaccia non può avere un distruttore

Visual C++ [interfaccia](../../cpp/interface.md) non può avere un distruttore.

L'esempio seguente genera l'errore C2849:

```
// C2849.cpp
// compile with: /c
__interface C {
   ~C();   // C2849 destructor not allowed in an interface
};
```