---
description: 'Altre informazioni su: errore del compilatore C2256'
title: Errore del compilatore C2256
ms.date: 11/04/2016
f1_keywords:
- C2256
helpviewer_keywords:
- C2256
ms.assetid: 171fa2bc-8c72-49cd-afe5-d723b7acd3c5
ms.openlocfilehash: a0dfc7601a09a47c24128ca5f999780d9fdf3e48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134758"
---
# <a name="compiler-error-c2256"></a>Errore del compilatore C2256

uso non valido dell'identificatore friend su' Function '

Non è possibile specificare un distruttore o un costruttore come [Friend](../../cpp/friend-cpp.md).

L'esempio seguente genera l'C2256:

```cpp
// C2256.cpp
// compile with: /c
class C {
public:
   friend ~C();   // C2256
   ~C();   // OK
};
```
