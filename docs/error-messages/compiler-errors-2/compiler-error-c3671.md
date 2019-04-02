---
title: Errore del compilatore C3671
ms.date: 11/04/2016
f1_keywords:
- C3671
helpviewer_keywords:
- C3671
ms.assetid: d684e4ae-87e2-4424-80bb-6f346652c831
ms.openlocfilehash: c4534b11f3aedf638f69337fb6a7af778e086bb4
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58778988"
---
# <a name="compiler-error-c3671"></a>Errore del compilatore C3671

'function_1': funzione non esegue l'override di 'funzione_2'

Quando si usa la sintassi di override esplicita, il compilatore genera un errore se una funzione non esegue l'override.  Visualizzare [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3671.

```
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