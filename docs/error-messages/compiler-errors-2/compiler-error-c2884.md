---
title: Errore del compilatore C2884
ms.date: 11/04/2016
f1_keywords:
- C2884
helpviewer_keywords:
- C2884
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
ms.openlocfilehash: d6014aa44dd1c2a5f1b0418a7171b239a754ec33
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220197"
---
# <a name="compiler-error-c2884"></a>Errore del compilatore C2884

' name ': introdotto dalla dichiarazione using in conflitto con la funzione locale ' Function '

Si è tentato di definire una funzione più di una volta. La prima definizione è una definizione locale. Il secondo è da uno spazio dei nomi con una **`using`** dichiarazione.

L'esempio seguente genera l'C2884:

```cpp
// C2884.cpp
namespace A {
   void z(int);
}

void f() {
   void z(int);
   using A::z;   // C2884 z is already defined
}
```
