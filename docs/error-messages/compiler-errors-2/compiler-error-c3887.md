---
title: Errore del compilatore C3887
ms.date: 11/04/2016
f1_keywords:
- C3887
helpviewer_keywords:
- C3887
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
ms.openlocfilehash: 85434cb8daba0db82843c09e2d1bb09d98960272
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344507"
---
# <a name="compiler-error-c3887"></a>Errore del compilatore C3887

'var': l'inizializzatore per un membro dati literal deve essere un'espressione costante

Oggetto [letterale](../../extensions/literal-cpp-component-extensions.md) membro dati può essere inizializzato solo con un'espressione costante.

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