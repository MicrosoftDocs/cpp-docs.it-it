---
description: 'Altre informazioni su: errore del compilatore C2548'
title: Errore del compilatore C2548
ms.date: 11/04/2016
f1_keywords:
- C2548
helpviewer_keywords:
- C2548
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
ms.openlocfilehash: cf7686191199ec1d0b5c515138f15f2fbf85efa8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204108"
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
