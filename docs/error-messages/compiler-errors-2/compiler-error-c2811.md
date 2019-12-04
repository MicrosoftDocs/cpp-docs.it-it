---
title: Errore del compilatore C2811
ms.date: 11/04/2016
f1_keywords:
- C2811
helpviewer_keywords:
- C2811
ms.assetid: 6a44b18e-44c1-49d8-9b99-e0545b9a6e7d
ms.openlocfilehash: 95d6385cea95f22bbb9bbb9197dace22bd1a3adf
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755252"
---
# <a name="compiler-error-c2811"></a>Errore del compilatore C2811

' tipo1': non è possibile ereditare da' tipo2', una classe di riferimento può ereditare solo da una classe di riferimento o una classe di interfaccia

Si è provato a usare una classe non gestita come classe di base per una classe gestita.

L'esempio seguente genera l'C2811:

```cpp
// C2811.cpp
// compile with: /clr /c
struct S{};
ref struct T {};
ref class C : public S {};   // C2811
ref class D : public T {};   // OK
```
