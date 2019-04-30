---
title: Errore del compilatore C2379
ms.date: 11/04/2016
f1_keywords:
- C2379
helpviewer_keywords:
- C2379
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
ms.openlocfilehash: 1b3256efb6c0ff8236ba80a9ac681780f34fa8dd
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345641"
---
# <a name="compiler-error-c2379"></a>Errore del compilatore C2379

numero di parametri formali ha un tipo diverso quando promosso

Il tipo del parametro specificato non è compatibile, le promozioni di predefinite, con il tipo in una dichiarazione precedente. Si tratta di un errore in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e un avviso con le estensioni Microsoft (**/Ze**).

L'esempio seguente genera l'errore C2379:

```
// C2379.c
// compile with: /Za
void func();
void func(char);   // C2379, char promotes to int
```