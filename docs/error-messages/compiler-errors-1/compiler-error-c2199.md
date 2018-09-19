---
title: Errore del compilatore C2199 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2199
dev_langs:
- C++
helpviewer_keywords:
- C2199
ms.assetid: 6a92a1b7-7906-49e6-a31f-e8bffbc7706a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 616b155ad0ca22c3eb45fd881a22ff36b5430f81
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083654"
---
# <a name="compiler-error-c2199"></a>Errore del compilatore C2199

Errore di sintassi: trovato ' identifier (' in ambito globale (si desiderava creare una dichiarazione?)

Il contesto specificato ha causato un errore di sintassi. Potrebbe esserci una sintassi di dichiarazione non corretta.

L'esempio seguente genera l'errore C2199:

```
// C2199.cpp
// compile with: /c
int j = int(1) int(1);   // C2199
int j = 1;   // OK
```