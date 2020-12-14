---
description: 'Altre informazioni su: errore del compilatore C3413'
title: Errore del compilatore C3413
ms.date: 11/04/2016
f1_keywords:
- C3413
helpviewer_keywords:
- C3413
ms.assetid: de6c9b05-c373-4bd8-8cb0-12c2cd2e5674
ms.openlocfilehash: 1b6f5ba895ce1db433fb8c8366e62ab3c0790f84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316245"
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
