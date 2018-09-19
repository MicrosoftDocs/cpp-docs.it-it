---
title: Errore del compilatore C2286 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2286
dev_langs:
- C++
helpviewer_keywords:
- C2286
ms.assetid: 078e0201-35cc-42e2-8dbc-6f8cf557b098
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2e4c3b8a71b29d0d1db5f3bc1eac642122844c22
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089131"
---
# <a name="compiler-error-c2286"></a>Errore del compilatore C2286

i puntatori ai membri della rappresentazione di 'identifier' è già impostato su "ereditarietà" - dichiarazione ignorata.

Due diverse rappresentazioni di puntatore-a-membri esistono per la classe.

Per altre informazioni, vedere [parole chiave di ereditarietà](../../cpp/inheritance-keywords.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2286:

```
// C2286.cpp
// compile with: /c
class __single_inheritance X;
class __multiple_inheritance X;   // C2286
class  __multiple_inheritance Y;   // OK
```