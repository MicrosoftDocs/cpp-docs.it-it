---
title: Avviso del compilatore (livello 1) C4508
ms.date: 11/04/2016
f1_keywords:
- C4508
helpviewer_keywords:
- C4508
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
ms.openlocfilehash: c96db3d4bd1124c96b22363531b7739d0757b613
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50624016"
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