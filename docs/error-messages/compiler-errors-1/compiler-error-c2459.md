---
description: 'Altre informazioni su: errore del compilatore C2459'
title: Errore del compilatore C2459
ms.date: 11/04/2016
f1_keywords:
- C2459
helpviewer_keywords:
- C2459
ms.assetid: 81e29f4c-5b60-40fb-9557-1cdc630d77e8
ms.openlocfilehash: 35cd97b93a7095aedc0015e2e7d9910172425263
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341867"
---
# <a name="compiler-error-c2459"></a>Errore del compilatore C2459

' Identifier ': viene definito; non è possibile aggiungere come membro anonimo

Una classe, una struttura o un'Unione viene ridefinita nel proprio ambito da un membro di un'unione anonima.

L'esempio seguente genera l'C2459:

```cpp
// C2459.cpp
// compile with: /c
class C {
   union { int C; };   // C2459
   union { int D; };
};
```
