---
title: Errore del compilatore C3199 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3199
dev_langs:
- C++
helpviewer_keywords:
- C3199
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ed917b3711f7f757b0a4ad89f0e6594ea1642a9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027278"
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