---
description: 'Altre informazioni su: errore del compilatore C2884'
title: Errore del compilatore C2884
ms.date: 11/04/2016
f1_keywords:
- C2884
helpviewer_keywords:
- C2884
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
ms.openlocfilehash: 008c72ba24bdea260fffc4a49145ecf67c610b15
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332332"
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
