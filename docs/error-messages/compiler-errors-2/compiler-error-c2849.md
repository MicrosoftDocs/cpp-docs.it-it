---
description: 'Altre informazioni su: errore del compilatore C2849'
title: Errore del compilatore C2849
ms.date: 11/04/2016
f1_keywords:
- C2849
helpviewer_keywords:
- C2849
ms.assetid: e28f6b3e-e0e7-4f92-b006-ebaa81d368e6
ms.openlocfilehash: 890d8e9d257e1efc20058f0e2f47ccf04ea3217b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260189"
---
# <a name="compiler-error-c2849"></a>Errore del compilatore C2849

' distruttore ': un'interfaccia non può avere un distruttore

Un' [interfaccia](../../cpp/interface.md) Visual C++ non può avere un distruttore.

L'esempio seguente genera l'C2849:

```cpp
// C2849.cpp
// compile with: /c
__interface C {
   ~C();   // C2849 destructor not allowed in an interface
};
```
