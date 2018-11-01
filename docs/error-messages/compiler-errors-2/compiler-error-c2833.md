---
title: Errore del compilatore C2833
ms.date: 11/04/2016
f1_keywords:
- C2833
helpviewer_keywords:
- C2833
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
ms.openlocfilehash: dad6a64f145c3d49d3b43044ea76a11d35827943
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50460541"
---
# <a name="compiler-error-c2833"></a>Errore del compilatore C2833

'operator operator' non è un tipo o un operatore riconosciuta

La parola `operator` deve essere seguita da un operatore che si desidera eseguire l'override o un tipo da convertire.

Per un elenco degli operatori che è possibile definire in un tipo gestito, vedere [operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).

L'esempio seguente genera l'errore C2833:

```
// C2833.cpp
// compile with: /c
class A {};

void operator ::* ();   // C2833
void operator :: ();   // OK
```