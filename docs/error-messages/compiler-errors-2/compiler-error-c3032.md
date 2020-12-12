---
description: 'Altre informazioni su: errore del compilatore C3032'
title: Errore del compilatore C3032
ms.date: 11/04/2016
f1_keywords:
- C3032
helpviewer_keywords:
- C3032
ms.assetid: 6a92bd8e-319f-4a99-aef4-a9021f6f9928
ms.openlocfilehash: 18bae374cd5bf475c4cd791fce45a30fc8465739
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270264"
---
# <a name="compiler-error-c3032"></a>Errore del compilatore C3032

'var': la variabile nella clausola 'clause' non può avere il tipo incompleto 'type'

I tipi passati a determinate clausole devono essere completamente visibili al compilatore.

L'esempio seguente genera l'errore C3032:

```cpp
// C3032.cpp
// compile with: /openmp /link vcomps.lib
#include "omp.h"

struct Incomplete;
extern struct Incomplete inc;

int main() {
   int i = 9;
   #pragma omp parallel private(inc)   // C3032
      ;

   #pragma omp parallel private(i)     // OK
      ;

}
```
