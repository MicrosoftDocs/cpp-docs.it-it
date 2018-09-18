---
title: Errore del compilatore C2006 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2006
dev_langs:
- C++
helpviewer_keywords:
- C2006
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e9468be17584a54047563bace2b35f5cb4888b41
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031209"
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