---
description: 'Altre informazioni su: errore del compilatore C3671'
title: Errore del compilatore C3671
ms.date: 11/04/2016
f1_keywords:
- C3671
helpviewer_keywords:
- C3671
ms.assetid: d684e4ae-87e2-4424-80bb-6f346652c831
ms.openlocfilehash: a8fba0ccec84789b7fe5e45cd72b18abc3fe63b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228872"
---
# <a name="compiler-error-c3671"></a>Errore del compilatore C3671

' function_1': la funzione non esegue l'override di ' function_2'

Quando si usa la sintassi di override esplicita, il compilatore genera un errore se non viene eseguito l'override di una funzione.  Per ulteriori informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3671.

```cpp
// C3671.cpp
// compile with: /clr /c
ref struct S {
   virtual void f();
};

ref struct S1 : S {
   virtual void f(int) new sealed = S::f;   // C3671
   virtual void f() new sealed = S::f;
};
```
