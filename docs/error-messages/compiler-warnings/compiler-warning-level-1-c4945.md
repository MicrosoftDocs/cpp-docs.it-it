---
title: Avviso del compilatore (livello 1) C4945
ms.date: 11/04/2016
f1_keywords:
- C4945
helpviewer_keywords:
- C4945
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
ms.openlocfilehash: 15a78877dbe70a7f95674092984546219e6a1c78
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199125"
---
# <a name="compiler-warning-level-1-c4945"></a>Avviso del compilatore (livello 1) C4945

' symbol ': non è possibile importare il simbolo da' assembly2': perché' symbol ' è già stato importato da un altro assembly ' assembly1'

Un simbolo è stato importato da un assembly a cui si fa riferimento, ma il simbolo è già stato importato da un altro assembly di riferimento Non fare riferimento a uno degli assembly o ottenere il nome del simbolo modificato in uno degli assembly.

Gli esempi seguenti generano C4945.

```csharp
// C4945a.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

E poi

```csharp
// C4945b.cs
// compile with: /target:library
// C# source code to create a dll
public class ClassA {
   public int i;
}
```

E poi

```cpp
// C4945c.cpp
// compile with: /clr /LD /W1
#using "C4945a.dll"
#using "C4945b.dll"   // C4945
```
