---
title: Errore del compilatore C2491 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2491
dev_langs:
- C++
helpviewer_keywords:
- C2491
ms.assetid: 4e5a8f81-124e-402c-a5ec-d35a89b5469e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40e6adfc369cd79f4c08c9099f5bc7db2b2281d8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110991"
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