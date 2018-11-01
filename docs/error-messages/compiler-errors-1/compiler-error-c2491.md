---
title: Errore del compilatore C2491
ms.date: 11/04/2016
f1_keywords:
- C2491
helpviewer_keywords:
- C2491
ms.assetid: 4e5a8f81-124e-402c-a5ec-d35a89b5469e
ms.openlocfilehash: 3b48bebde6d7baedea73ed181cd4ea33adc44a69
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563124"
---
# <a name="compiler-error-c2491"></a>Errore del compilatore C2491

'identificatore': definizione di funzione dllimport non consentita

I dati, le funzioni e i membri dati statici possono essere dichiarati come `dllimport`, ma non definiti come `dllimport`.

Per risolvere il problema, rimuovere l'identificatore `__declspec(dllimport)` dalla definizione della funzione.

Il seguente codice di esempio genera l'errore C2491:

```
// C2491.cpp
// compile with: /c
// function definition
void __declspec(dllimport) funcB() {}   // C2491

// function declaration
void __declspec(dllimport) funcB();   // OK
```