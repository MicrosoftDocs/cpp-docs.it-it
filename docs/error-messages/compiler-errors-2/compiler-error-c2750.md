---
description: 'Altre informazioni su: errore del compilatore C2750'
title: Errore del compilatore C2750
ms.date: 11/04/2016
f1_keywords:
- C2750
helpviewer_keywords:
- C2750
ms.assetid: 30450034-feb5-448c-9655-b8c5f3639695
ms.openlocfilehash: 727bf085e1377de8725f6537a33917283d51d839
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174494"
---
# <a name="compiler-error-c2750"></a>Errore del compilatore C2750

' type ': non è possibile usare ' New ' nel tipo di riferimento; usare invece ' gcnew '

Per creare un'istanza di un tipo CLR, che provoca l'inserimento dell'istanza nell'heap sottoposta a Garbage Collection, è necessario utilizzare [gcnew](../../extensions/ref-new-gcnew-cpp-component-extensions.md).

L'esempio seguente genera l'C2750:

```cpp
// C2750.cpp
// compile with: /clr
ref struct Y1 {};

int main() {
   Y1 ^ x = new Y1;   // C2750

   // try the following line instead
   Y1 ^ x2 = gcnew Y1;
}
```
