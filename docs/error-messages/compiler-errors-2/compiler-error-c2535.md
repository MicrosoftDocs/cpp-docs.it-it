---
title: Errore del compilatore C2535
ms.date: 11/04/2016
f1_keywords:
- C2535
helpviewer_keywords:
- C2535
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
ms.openlocfilehash: f5cecd847837214f6392bead624e5377cef4833f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758645"
---
# <a name="compiler-error-c2535"></a>Errore del compilatore C2535

' Identifier ': funzione membro già definita o dichiarata

Questo errore può essere causato dall'uso dello stesso elenco di parametri formali in più di una definizione o dichiarazione di una funzione in overload.

Se si ottiene C2535 a causa della funzione Dispose, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) per ulteriori informazioni.

L'esempio seguente genera l'C2535:

```cpp
// C2535.cpp
// compile with: /c
class C {
public:
   void func();   // forward declaration
   void func() {}   // C2535
};
```
