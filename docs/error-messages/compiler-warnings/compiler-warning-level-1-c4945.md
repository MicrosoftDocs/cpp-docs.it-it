---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4945'
title: Avviso del compilatore (livello 1) C4945
ms.date: 11/04/2016
f1_keywords:
- C4945
helpviewer_keywords:
- C4945
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
ms.openlocfilehash: df05b0882b672f22428e9ddef0b195043cca7d2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327988"
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
