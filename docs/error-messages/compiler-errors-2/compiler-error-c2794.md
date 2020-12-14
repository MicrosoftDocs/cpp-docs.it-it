---
description: 'Altre informazioni su: errore del compilatore C2794'
title: Errore del compilatore C2794
ms.date: 11/04/2016
f1_keywords:
- C2794
helpviewer_keywords:
- C2794
ms.assetid: d508191c-9044-4c6a-9119-4bca668c0b93
ms.openlocfilehash: 68f0c20e7942a32ede42fa8d7d069164d083377a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297655"
---
# <a name="compiler-error-c2794"></a>Errore del compilatore C2794

' Function ': non è un membro di una classe di base diretta o indiretta di ' Class '

Si è provato a usare [Super](../../cpp/super.md) per chiamare una funzione membro inesistente.

L'esempio seguente genera C2794

```cpp
// C2794.cpp
struct B {
   void mf();
};

struct D : B {
   void mf() {
      __super::f();  // C2794
   }
};
```
