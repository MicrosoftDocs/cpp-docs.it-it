---
title: Errore del compilatore C3181
ms.date: 11/04/2016
f1_keywords:
- C3181
helpviewer_keywords:
- C3181
ms.assetid: 5d450f8b-6cef-4452-a0c4-2076e967451d
ms.openlocfilehash: e30ed7016ca3a4d4948a08c5c09268e52c9a407d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761673"
---
# <a name="compiler-error-c3181"></a>Errore del compilatore C3181

' type ': operando non valido per l'operatore

Parametro non valido passato all'operatore [typeid](../../extensions/typeid-cpp-component-extensions.md) . Il parametro deve essere un tipo gestito.

Si noti che il compilatore usa gli alias per i tipi nativi che vengono mappati ai tipi nel Common Language Runtime.

L'esempio seguente genera l'C3181:

```cpp
// C3181a.cpp
// compile with: /clr
using namespace System;

int main() {
   Type ^pType1 = interior_ptr<int>::typeid;   // C3181
   Type ^pType2 = int::typeid;   // OK
}
```
