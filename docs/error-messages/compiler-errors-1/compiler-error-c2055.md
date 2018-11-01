---
title: Errore del compilatore C2055
ms.date: 11/04/2016
f1_keywords:
- C2055
helpviewer_keywords:
- C2055
ms.assetid: 6cec79cc-6bec-443f-9897-fbf5452718c7
ms.openlocfilehash: 3c198168b4445e619148e5611621fa3ddba95d6b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50597275"
---
# <a name="compiler-error-c2055"></a>Errore del compilatore C2055

previsto elenco di parametri formali, non un elenco di tipi

Una definizione di funzione contiene un elenco di tipo di parametro anziché un elenco di parametri formali. ANSI C richiede i parametri formali chiamarsi a meno che non siano void o i puntini di sospensione (`...`).

L'esempio seguente genera l'errore C2055:

```
// C2055.c
// compile with: /c
void func(int, char) {}  // C2055
void func (int i, char c) {}   // OK
```