---
description: 'Altre informazioni su: errore del compilatore C2460'
title: Errore del compilatore C2460
ms.date: 11/04/2016
f1_keywords:
- C2460
helpviewer_keywords:
- C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
ms.openlocfilehash: 6a6b521b356d4005906e97b085271369f2624c46
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341854"
---
# <a name="compiler-error-c2460"></a>Errore del compilatore C2460

' identificatore1': USA ' identifier2', che è in corso di definizione

Una classe o una struttura ( `identifier2` ) è dichiarata come membro di se stesso ( `identifier1` ). Non sono consentite definizioni ricorsive di classi e strutture.

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
