---
title: Compilatore avviso (livello 1) C4508 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4508
dev_langs:
- C++
helpviewer_keywords:
- C4508
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5abc1d81c3e94c02a63f73c84f3f5e5c7e9b0b0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038945"
---
# <a name="compiler-warning-level-1-c4508"></a>Avviso del compilatore (livello 1) C4508

'function': funzione deve restituire un valore. 'void' verrà restituito il tipo

La funzione non dispone di alcun tipo restituito specificato. In questo caso, C4430 deve inoltre essere attivata e il compilatore implementa la correzione segnalata da C4430 (valore predefinito è int).

Per risolvere questo problema, è necessario dichiarare in modo esplicito il tipo restituito delle funzioni.

L'esempio seguente genera l'errore C4508:

```
// C4508.cpp
// compile with: /W1 /c
#pragma warning (disable : 4430)
func() {}   // C4508
void func2() {}   // OK
```