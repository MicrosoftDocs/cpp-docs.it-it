---
title: Errore del compilatore C3887
ms.date: 11/04/2016
f1_keywords:
- C3887
helpviewer_keywords:
- C3887
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
ms.openlocfilehash: e41ea1dbe1f2bd47f9b557d502ec95bcecb1e2a2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428263"
---
# <a name="compiler-error-c3887"></a>Errore del compilatore C3887

'var': l'inizializzatore per un membro dati literal deve essere un'espressione costante

Oggetto [letterale](../../windows/literal-cpp-component-extensions.md) membro dati può essere inizializzato solo con un'espressione costante.

L'esempio seguente genera l'errore C3887:

```
// C3887.cpp
// compile with: /clr
ref struct Y1 {
   static int i = 9;
   literal
   int staticConst = i;   // C3887
};
```

Possibile soluzione:

```
// C3887b.cpp
// compile with: /clr /c
ref struct Y1 {
   literal
   int staticConst = 9;
};
```