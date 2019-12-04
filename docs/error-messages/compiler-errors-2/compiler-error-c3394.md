---
title: Errore del compilatore C3394
ms.date: 11/04/2016
f1_keywords:
- C3394
helpviewer_keywords:
- C3394
ms.assetid: 4e025d79-27ba-43c8-b0d9-839ecef98126
ms.openlocfilehash: 7745258f1e1c17d2d88dbac88086ae9410b81605
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757527"
---
# <a name="compiler-error-c3394"></a>Errore del compilatore C3394

errore di sintassi nella clausola constraint: trovato 'identifier', previsto un tipo

Un vincolo non è stato creato nel formato corretto.  Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3394:

```cpp
// C3394.cpp
// compile with: /clr /c
ref class MyClass {};
ref class R {
   generic<typename T>
   where T : static   // C3394
   // try the following line instead
   // where T : MyClass
   void f() {}
};
```
