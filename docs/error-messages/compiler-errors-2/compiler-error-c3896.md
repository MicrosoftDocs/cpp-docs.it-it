---
title: Errore del compilatore C3896
ms.date: 11/04/2016
f1_keywords:
- C3896
helpviewer_keywords:
- C3896
ms.assetid: eb8be0f6-5b4e-4d71-8285-8a2a94f8ba29
ms.openlocfilehash: f15cd73465f4210ed5e5e34bebe2122c0b88f722
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74749269"
---
# <a name="compiler-error-c3896"></a>Errore del compilatore C3896

' member ': inizializzatore non corretto: questo membro dati literal può essere inizializzato solo con ' nullptr '

Un membro dati [literal](../../extensions/literal-cpp-component-extensions.md) è stato inizializzato in modo errato.  Per ulteriori informazioni, vedere [nullptr](../../extensions/nullptr-cpp-component-extensions.md) .

L'esempio seguente genera l'C3896:

```cpp
// C3896.cpp
// compile with: /clr /c
ref class R{};

value class V {
   literal R ^ r = "test";   // C3896
   literal R ^ r2 = nullptr;   // OK
};
```
