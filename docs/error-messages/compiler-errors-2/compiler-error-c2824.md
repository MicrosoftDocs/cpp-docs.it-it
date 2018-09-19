---
title: Errore del compilatore C2824 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2824
dev_langs:
- C++
helpviewer_keywords:
- C2824
ms.assetid: 5bd865f7-e0af-404e-80fe-e2b798b44a59
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 310156e82f69622a5c4a2315e204ccaa146e2c00
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077412"
---
# <a name="compiler-error-c2824"></a>Errore del compilatore C2824

tipo restituito per 'operator new' deve essere ' void *'

Con non basati su puntatori, esegue l'overload dell'operatore `new` deve restituire `void *`.

L'esempio seguente genera l'errore C2824:

```
// C2824.cpp
// compile with: /c
class   A {
   A* operator new(size_t i, char *m);   // C2824
   // try the following line instead
   // void* operator new(size_t i, char *m);
};
```