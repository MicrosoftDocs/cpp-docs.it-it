---
title: Errore del compilatore C3199
ms.date: 11/04/2016
f1_keywords:
- C3199
helpviewer_keywords:
- C3199
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
ms.openlocfilehash: 934e980149ad893e6799b0ab119a148fc5652fdc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402788"
---
# <a name="compiler-error-c3199"></a>Errore del compilatore C3199

utilizzo non valido di pragma a virgola mobile: le eccezioni non sono supportate in modalità non precise

Il [float_control](../../preprocessor/float-control.md) pragma è stato usato per specificare un modello di eccezione a virgola mobile in un [/fp](../../build/reference/fp-specify-floating-point-behavior.md) impostazione diversa da **/fp: precise**.

L'esempio seguente genera l'errore C3199:

```
// C3199.cpp
// compile with: /fp:fast
#pragma float_control(except, on)   // C3199
```