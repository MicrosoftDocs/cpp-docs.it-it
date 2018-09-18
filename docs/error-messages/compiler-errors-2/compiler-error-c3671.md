---
title: Errore del compilatore C3671 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3671
dev_langs:
- C++
helpviewer_keywords:
- C3671
ms.assetid: d684e4ae-87e2-4424-80bb-6f346652c831
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 455b9e2a6accbc98ee8bce49a35a672d9cd9c20d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017072"
---
# <a name="compiler-error-c3671"></a>Errore del compilatore C3671

'function_1': funzione non esegue l'override di 'funzione_2'

Quando si usa la sintassi di override esplicita, il compilatore genera un errore se una funzione non esegue l'override.  Visualizzare [esegue l'override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md) per altre informazioni.

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