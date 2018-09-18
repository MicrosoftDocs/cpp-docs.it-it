---
title: Errore del compilatore C2581 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2581
dev_langs:
- C++
helpviewer_keywords:
- C2581
ms.assetid: 24a4e4c1-24d3-4e42-b760-7dcaf9740b16
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0763db5d6284942ff3f8104eaabf705305f86e1f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018666"
---
# <a name="compiler-error-c2581"></a>Errore del compilatore C2581

'type': statico ' operator =' non è valida (funzione)

L'assegnazione (`=`) operatore viene dichiarato in modo errato come `static`. Gli operatori di assegnazione non possono essere `static`. Per altre informazioni, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2581.

```
// C2581.cpp
// compile with: /clr /c
ref struct Y {
   static Y ^ operator = (Y^ me, int i);   // C2581
   Y^ operator =(int i);   // OK
};
```