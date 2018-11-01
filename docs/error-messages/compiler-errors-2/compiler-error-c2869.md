---
title: Errore del compilatore C2869
ms.date: 11/04/2016
f1_keywords:
- C2869
helpviewer_keywords:
- C2869
ms.assetid: 6e30c001-47f3-4101-b9f1-cc542c9fffae
ms.openlocfilehash: 38ac73484814e0089b412938ffc2776872deff3e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614448"
---
# <a name="compiler-error-c2869"></a>Errore del compilatore C2869

'name': è già stato definito da uno spazio dei nomi

È possibile riusare un nome già usato come uno spazio dei nomi.

L'esempio seguente genera l'errore C2869:

```
// C2869.cpp
// compile with: /c
namespace A { int i; };

class A {};   // C2869, A is already used
```