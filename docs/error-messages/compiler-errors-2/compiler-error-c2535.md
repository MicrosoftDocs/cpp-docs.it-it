---
description: 'Altre informazioni su: errore del compilatore C2535'
title: Errore del compilatore C2535
ms.date: 11/04/2016
f1_keywords:
- C2535
helpviewer_keywords:
- C2535
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
ms.openlocfilehash: 149ddabcde7364513379701c55d4801fd403206b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258083"
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
