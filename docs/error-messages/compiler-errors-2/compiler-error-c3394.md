---
title: Errore del compilatore C3394
ms.date: 11/04/2016
f1_keywords:
- C3394
helpviewer_keywords:
- C3394
ms.assetid: 4e025d79-27ba-43c8-b0d9-839ecef98126
ms.openlocfilehash: 826084d375c69ca289a858a29a12ae16874c1fbd
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781458"
---
# <a name="compiler-error-c3394"></a>Errore del compilatore C3394

errore di sintassi nella clausola constraint: trovato 'identifier', previsto un tipo

Un vincolo non è stato creato nel formato corretto.  Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3394:

```
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