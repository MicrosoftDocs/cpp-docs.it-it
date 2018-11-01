---
title: Errore del compilatore C2383
ms.date: 11/04/2016
f1_keywords:
- C2383
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
ms.openlocfilehash: 06d4c19208bd242169e1cd07a71e8a568f46f7b1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466092"
---
# <a name="compiler-error-c2383"></a>Errore del compilatore C2383

«*simbolo*': argomenti predefiniti non sono consentiti su questo simbolo

Il compilatore C++ non supporta gli argomenti predefiniti sui puntatori a funzioni.

Questo codice è stato accettato dal compilatore Visual C++ nelle versioni precedenti a Visual Studio 2005, ma attualmente causa un errore. Per il codice che funziona in tutte le versioni di Visual C++, non assegnare un valore predefinito a un argomento di puntatore a funzione.

## <a name="example"></a>Esempio

Nell'esempio seguente genera l'errore C2383 e illustra una possibile soluzione:

```cpp
// C2383.cpp
// compile with: /c
void (*pf)(int = 0);   // C2383
void (*pf)(int);   // OK
```