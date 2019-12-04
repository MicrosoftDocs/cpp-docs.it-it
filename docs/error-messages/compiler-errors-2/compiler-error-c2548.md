---
title: Errore del compilatore C2548
ms.date: 11/04/2016
f1_keywords:
- C2548
helpviewer_keywords:
- C2548
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
ms.openlocfilehash: f89208314c1d2e8ddb5100da72aa600a411b4608
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756799"
---
# <a name="compiler-error-c2548"></a>Errore del compilatore C2548

' Class:: Member ': parametro predefinito mancante per il parametro Parameter

Manca un parametro nell'elenco di parametri predefinito. Se si specifica un parametro predefinito in un punto qualsiasi di un elenco di parametri, è necessario definire i parametri predefiniti per tutti i parametri successivi.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2548:

```cpp
// C2548.cpp
// compile with: /c
void func( int = 1, int, int = 3);  // C2548

// OK
void func2( int, int, int = 3);
void func3( int, int = 2, int = 3);
```
