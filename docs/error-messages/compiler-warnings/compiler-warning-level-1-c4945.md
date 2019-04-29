---
title: Avviso del compilatore (livello 1) C4945
ms.date: 11/04/2016
f1_keywords:
- C4945
helpviewer_keywords:
- C4945
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
ms.openlocfilehash: 62dfbaed28f1afcdedb41d83158dfe4e8e0f61b6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384166"
---
# <a name="compiler-warning-level-1-c4945"></a>Avviso del compilatore (livello 1) C4945

'symbol': non è possibile importare il simbolo da 'assembly2': come 'symbol' è già stato importato da un altro assembly «assembly1»

Un simbolo è stato importato da un assembly di riferimento, ma tale simbolo è stato già importato da un altro assembly di riferimento. Non fa riferimento a uno degli assembly o il nome del simbolo modificato in uno degli assembly.

Gli esempi seguenti generano C4945.

```
// C4945a.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

E poi

```
// C4945b.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

E poi

```
// C4945c.cpp
// compile with: /clr /LD /W1
#using "C4945a.dll"
#using "C4945b.dll"   // C4945
```