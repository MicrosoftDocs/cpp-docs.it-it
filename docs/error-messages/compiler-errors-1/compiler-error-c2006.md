---
title: Errore del compilatore C2006
ms.date: 11/04/2016
f1_keywords:
- C2006
helpviewer_keywords:
- C2006
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
ms.openlocfilehash: c23f17483925f25468214165fb459db577e576fc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62209010"
---
# <a name="compiler-error-c2006"></a>Errore del compilatore C2006

'directive' previsto un nome file. trovato 'token'

Le direttive, ad esempio [#include](../../preprocessor/hash-include-directive-c-cpp.md) oppure [#import](../../preprocessor/hash-import-directive-cpp.md) richiedono un nome di file. Per correggere l'errore, verificare *token* è un nome file valido. Inoltre, inserire il nome del file in virgolette doppie o parentesi quadre.

L'esempio seguente genera l'errore C2006:

```
// C2006.cpp
#include stdio.h   // C2006
```

Possibile soluzione:

```
// C2006b.cpp
// compile with: /c
#include <stdio.h>
```