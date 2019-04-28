---
title: Errore del compilatore C3413
ms.date: 11/04/2016
f1_keywords:
- C3413
helpviewer_keywords:
- C3413
ms.assetid: de6c9b05-c373-4bd8-8cb0-12c2cd2e5674
ms.openlocfilehash: e344d06345c0f3a79b86e9cab4e1c5dacb47e9c2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62173431"
---
# <a name="compiler-error-c3413"></a>Errore del compilatore C3413

'name': creazione esplicita di un'istanza non valida

Il compilatore ha rilevato una creazione di un'istanza esplicita con un formato non corretto.

L'esempio seguente genera l'errore C3413:

```
// C3413.cpp
template
class MyClass {};   // C3413
```

Possibile soluzione:

```
// C3413b.cpp
// compile with: /c
template <class T>
class MyClass {};

template <>
class MyClass<int> {};
```