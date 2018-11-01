---
title: Errore del compilatore C3113
ms.date: 11/04/2016
f1_keywords:
- C3113
helpviewer_keywords:
- C3113
ms.assetid: 3afdc668-b29e-474e-9ea3-aa027d42db7c
ms.openlocfilehash: b8edd31db87587887d9e96522802ee9091caab91
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659160"
---
# <a name="compiler-error-c3113"></a>Errore del compilatore C3113

un 'structure' non può essere un modello o generico

Si è tentato di rendere un modello di classe o una classe generica all'esterno di un'interfaccia o un'enumerazione.

L'esempio seguente genera l'errore C3113:

```
// C3113.cpp
// compile with: /c
template <class T>
enum E {};   // C3113
// try the following line instead
// class MyClass{};
```