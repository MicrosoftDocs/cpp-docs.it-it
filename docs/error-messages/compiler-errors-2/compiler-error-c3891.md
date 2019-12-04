---
title: Errore del compilatore C3891
ms.date: 11/04/2016
f1_keywords:
- C3891
helpviewer_keywords:
- C3891
ms.assetid: 6e1a9458-97f5-4580-bc0f-aa97a1bfd20d
ms.openlocfilehash: 4b5ef8b837033a149455c040f748f479aa3f424d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74736399"
---
# <a name="compiler-error-c3891"></a>Errore del compilatore C3891

' var ': Impossibile utilizzare un membro dati literal come l-value

Una variabile [letterale](../../extensions/literal-cpp-component-extensions.md) è const e il relativo valore non può essere modificato dopo l'inizializzazione nella dichiarazione.

L'esempio seguente genera l'C3891:

```cpp
// C3891.cpp
// compile with: /clr
ref struct Y1 {
   literal int staticConst = 9;
};

int main() {
   Y1::staticConst = 0;   // C3891
}
```
