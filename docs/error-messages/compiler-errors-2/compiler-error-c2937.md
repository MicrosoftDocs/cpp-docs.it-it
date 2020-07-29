---
title: Errore del compilatore C2937
ms.date: 11/04/2016
f1_keywords:
- C2937
helpviewer_keywords:
- C2937
ms.assetid: 95671ca3-79f7-4b56-a5f2-a92296da1629
ms.openlocfilehash: 615b4fbb639249179d34f0d92b4891aadc0ff3a8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233405"
---
# <a name="compiler-error-c2937"></a>Errore del compilatore C2937

'class': type-class-id ridefinito come typedef globale

Non è possibile usare una classe generica o modello come globale **`typedef`** .

L'esempio seguente genera l'errore C2937:

```cpp
// C2937.cpp
// compile with: /c
template<class T>
struct TC { };
typedef int TC<int>;   // C2937
typedef TC<int> c;   // OK
```

C2937 può verificarsi anche quando si usano i generics:

```cpp
// C2937b.cpp
// compile with: /clr
generic<class T>
ref struct GC { };
typedef int GC<int>;   // C2937
typedef GC<int> xx;   // OK
```
