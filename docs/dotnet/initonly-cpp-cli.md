---
title: initonly (C++/CLI)
ms.date: 11/04/2016
f1_keywords:
- initonly_cpp
- initonly
helpviewer_keywords:
- initonly attribute [C++]
ms.assetid: f745d7fa-dc08-46f1-9b97-0977be58a008
ms.openlocfilehash: cdfc278225ce4ab418dfaaf41fb413d088ad77df
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58766574"
---
# <a name="initonly-ccli"></a>initonly (C++/CLI)

**initonly** è una parola chiave sensibile al contesto che indica tale assegnazione di variabile può verificarsi solo come parte della dichiarazione o in un costruttore statico nella stessa classe.

Nell'esempio riportato di seguito viene illustrato come usare `initionly`:

```
// mcpp_initonly.cpp
// compile with: /clr /c
ref struct Y1 {
   initonly
   static int staticConst1;

   initonly
   static int staticConst2 = 0;

   static Y1() {
      staticConst1 = 0;
   }
};
```

## <a name="see-also"></a>Vedere anche

[Classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md)
