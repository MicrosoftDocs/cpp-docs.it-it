---
description: 'Altre informazioni su: errore del compilatore C2894'
title: Errore del compilatore C2894
ms.date: 11/04/2016
f1_keywords:
- C2894
helpviewer_keywords:
- C2894
ms.assetid: 4e250579-2b59-4993-a6f4-49273e7ecf06
ms.openlocfilehash: dcb5f04cd7cd1ad9d2e6f0d645cabd512ed91c42
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270920"
---
# <a name="compiler-error-c2894"></a>Errore del compilatore C2894

Impossibile dichiarare i modelli con collegamento ' c'

Questo errore può essere causato da un modello definito all'interno di un `extern "C"` blocco.

L'esempio seguente genera l'C2894:

```cpp
// C2894.cpp
extern "C" {
   template<class T> class stack {};   // C2894 fail

   template<class T> void f(const T &aT) {}   // C2894
}
```

L'esempio seguente genera l'C2894:

```cpp
// C2894b.cpp
// compile with: /c
extern "C" template<class T> void f(const T &aT) {}   // C2894

template<class T> void f2(const T &aT) {}   // OK
```
