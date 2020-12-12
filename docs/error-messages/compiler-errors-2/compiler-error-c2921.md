---
description: 'Altre informazioni su: errore del compilatore C2921'
title: Errore del compilatore C2921
ms.date: 11/04/2016
f1_keywords:
- C2921
helpviewer_keywords:
- C2921
ms.assetid: 323642a0-bfc4-4942-9f41-c3adf5c54296
ms.openlocfilehash: 95c47b1446973db77e4567dce0d4af8adf321672
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270303"
---
# <a name="compiler-error-c2921"></a>Errore del compilatore C2921

ridefinizione: 'class': modello di classe o generico in corso di nuova dichiarazione come 'type'

Un generico o un modello di classe dispone di più dichiarazioni che non sono equivalenti. Per correggere l'errore, usare un nome diverso per ogni tipo o rimuovere la ridefinizione del nome del tipo.

L'esempio seguente genera l'errore C2921:

```cpp
// C2921.cpp
// compile with: /c
template <class T> struct TC2 {};
typedef int TC2;   // C2921
// try the following line instead
// typedef struct TC2<int> x;   // OK - declare a template instance
```

C2921 può verificarsi anche quando si usano i generics.

```cpp
// C2921b.cpp
// compile with: /clr /c
generic <class T> ref struct GC2 {};
typedef int GC2;   // C2921
// try the following line instead
// typedef ref struct GC2<int> x;
```
