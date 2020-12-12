---
description: 'Altre informazioni su: errore del compilatore C2491'
title: Errore del compilatore C2491
ms.date: 11/04/2016
f1_keywords:
- C2491
helpviewer_keywords:
- C2491
ms.assetid: 4e5a8f81-124e-402c-a5ec-d35a89b5469e
ms.openlocfilehash: 4fd12e30672d7045aa4a7506b35b845e8cd018c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283704"
---
# <a name="compiler-error-c2491"></a>Errore del compilatore C2491

'identificatore': definizione di funzione dllimport non consentita

I dati, le funzioni e i membri dati statici possono essere dichiarati come `dllimport`, ma non definiti come `dllimport`.

Per risolvere il problema, rimuovere l'identificatore `__declspec(dllimport)` dalla definizione della funzione.

Il seguente codice di esempio genera l'errore C2491:

```cpp
// C2491.cpp
// compile with: /c
// function definition
void __declspec(dllimport) funcB() {}   // C2491

// function declaration
void __declspec(dllimport) funcB();   // OK
```
