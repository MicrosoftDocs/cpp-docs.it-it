---
description: 'Altre informazioni su: errore del compilatore C2006'
title: Errore del compilatore C2006
ms.date: 11/04/2016
f1_keywords:
- C2006
helpviewer_keywords:
- C2006
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
ms.openlocfilehash: 5747f5417db60bd3c1f7bc1420c257552a9b42c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298513"
---
# <a name="compiler-error-c2006"></a>Errore del compilatore C2006

' Directive ' ha previsto un nome file. trovato ' token '

Le direttive, ad esempio [#include](../../preprocessor/hash-include-directive-c-cpp.md) o [#import](../../preprocessor/hash-import-directive-cpp.md) richiedono un nome file. Per risolvere l'errore, verificare che il *token* sia un nome di file valido. Inoltre, inserire il nome del file tra virgolette doppie o parentesi angolari.

L'esempio seguente genera l'C2006:

```cpp
// C2006.cpp
#include stdio.h   // C2006
```

Possibile soluzione:

```cpp
// C2006b.cpp
// compile with: /c
#include <stdio.h>
```
