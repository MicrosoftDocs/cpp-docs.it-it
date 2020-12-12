---
description: 'Altre informazioni su: errore del compilatore C3887'
title: Errore del compilatore C3887
ms.date: 11/04/2016
f1_keywords:
- C3887
helpviewer_keywords:
- C3887
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
ms.openlocfilehash: 8c80a1ff54f56e111934ebc370fee28f011bd37b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274346"
---
# <a name="compiler-error-c3887"></a>Errore del compilatore C3887

' var ': l'inizializzatore per un membro dati literal deve essere un'espressione costante

Un membro dati [literal](../../extensions/literal-cpp-component-extensions.md) può essere inizializzato solo con un'espressione costante.

L'esempio seguente genera l'C3887:

```cpp
// C3887.cpp
// compile with: /clr
ref struct Y1 {
   static int i = 9;
   literal
   int staticConst = i;   // C3887
};
```

Possibile soluzione:

```cpp
// C3887b.cpp
// compile with: /clr /c
ref struct Y1 {
   literal
   int staticConst = 9;
};
```
