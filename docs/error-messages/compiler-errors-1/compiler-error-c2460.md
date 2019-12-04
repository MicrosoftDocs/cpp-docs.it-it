---
title: Errore del compilatore C2460
ms.date: 11/04/2016
f1_keywords:
- C2460
helpviewer_keywords:
- C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
ms.openlocfilehash: a7d20a7658a75a492e19b9e81acaa3b6fce5cae7
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743939"
---
# <a name="compiler-error-c2460"></a>Errore del compilatore C2460

' identificatore1': USA ' identifier2', che è in corso di definizione

Una classe o una struttura (`identifier2`) è dichiarata come membro di se stessa (`identifier1`). Non sono consentite definizioni ricorsive di classi e strutture.

L'esempio seguente genera l'C2460:

```cpp
// C2460.cpp
class C {
   C aC;    // C2460
};
```

Usare invece un riferimento al puntatore nella classe.

```cpp
// C2460.cpp
class C {
   C * aC;    // OK
};
```
