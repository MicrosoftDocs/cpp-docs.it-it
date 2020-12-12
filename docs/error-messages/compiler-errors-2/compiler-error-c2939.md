---
description: 'Altre informazioni su: errore del compilatore C2939'
title: Errore del compilatore C2939
ms.date: 11/04/2016
f1_keywords:
- C2939
helpviewer_keywords:
- C2939
ms.assetid: 455b050b-f2dc-4b5b-bd6a-e1f81d3d1644
ms.openlocfilehash: 465d2d9535a1c8f393e21b4ef48707f8e5fab89b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323025"
---
# <a name="compiler-error-c2939"></a>Errore del compilatore C2939

'class': id-classe-tipo ridefinito come variabile dati locale

Non è possibile usare una classe generica o modello come variabile dati locale.

Questo errore può verificarsi quando le parentesi graffe non corrispondono.

L'esempio seguente genera l'errore C2939:

```cpp
// C2939.cpp
template<class T>
struct TC { };
int main() {
   int TC<int>;   // C2939
   int TC;   // OK
}
```

L'errore C2939 può verificarsi anche quando si usano i generics:

```cpp
// C2939b.cpp
// compile with: /clr
generic<class T>
ref struct GC { };

int main() {
   int GC<int>;   // C2939
   int GC;   // OK
}
```
