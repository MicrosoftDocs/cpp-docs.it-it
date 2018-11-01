---
title: Errore del compilatore C2548
ms.date: 11/04/2016
f1_keywords:
- C2548
helpviewer_keywords:
- C2548
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
ms.openlocfilehash: 2c680d86a0ea69d67f9e53a481f2f096f4cc7878
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50659594"
---
# <a name="compiler-error-c2548"></a>Errore del compilatore C2548

'member': manca un parametro predefinito per il parametro parameter

Elenco di parametri predefinito manca un parametro. Se si specifica un parametro predefinito in un punto qualsiasi in un elenco di parametri, è necessario definire i parametri predefiniti per tutti i parametri successivi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2548:

```
// C2548.cpp
// compile with: /c
void func( int = 1, int, int = 3);  // C2548

// OK
void func2( int, int, int = 3);
void func3( int, int = 2, int = 3);
```