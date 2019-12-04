---
title: Errore del compilatore C3413
ms.date: 11/04/2016
f1_keywords:
- C3413
helpviewer_keywords:
- C3413
ms.assetid: de6c9b05-c373-4bd8-8cb0-12c2cd2e5674
ms.openlocfilehash: 3065478cfff51f2463d4efba7f5a7dafc482fa65
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743016"
---
# <a name="compiler-error-c3413"></a>Errore del compilatore C3413

'name': creazione esplicita di un'istanza non valida

Il compilatore ha rilevato una creazione di un'istanza esplicita con un formato non corretto.

L'esempio seguente genera l'errore C3413:

```cpp
// C3413.cpp
template
class MyClass {};   // C3413
```

Possibile soluzione:

```cpp
// C3413b.cpp
// compile with: /c
template <class T>
class MyClass {};

template <>
class MyClass<int> {};
```
