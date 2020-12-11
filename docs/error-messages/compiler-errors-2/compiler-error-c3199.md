---
description: 'Altre informazioni su: errore del compilatore C3199'
title: Errore del compilatore C3199
ms.date: 11/04/2016
f1_keywords:
- C3199
helpviewer_keywords:
- C3199
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
ms.openlocfilehash: 598d21edbddc91d39edb9623dc59537d3e27bdf3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155475"
---
# <a name="compiler-error-c3199"></a>Errore del compilatore C3199

uso non valido di pragma a virgola mobile: le eccezioni non sono supportate in modalità non precisa

Il pragma [float_control](../../preprocessor/float-control.md) è stato utilizzato per specificare il modello di eccezione a virgola mobile in un'impostazione [/FP](../../build/reference/fp-specify-floating-point-behavior.md) diversa da **/FP: precise**.

L'esempio seguente genera l'C3199:

```cpp
// C3199.cpp
// compile with: /fp:fast
#pragma float_control(except, on)   // C3199
```
