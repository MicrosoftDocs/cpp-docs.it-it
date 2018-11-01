---
title: Avviso del compilatore (livello 4) C4565
ms.date: 08/27/2018
f1_keywords:
- C4565
helpviewer_keywords:
- C4565
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
ms.openlocfilehash: b655dcfb456d32e45833e89e5a48926ad70d1d9e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50588682"
---
# <a name="compiler-warning-level-4-c4565"></a>Avviso del compilatore (livello 4) C4565

> «*funzione*': ridefinizione; il simbolo era dichiarato in precedenza con declspec (*modificatore*)

## <a name="remarks"></a>Note

Un simbolo è stato ridefinito o ridichiarazione e la seconda definizione o dichiarazione, diversamente dalla prima, non è un `__declspec` modificatore (*modificatore*). Si tratta di un avviso informativo. Per risolvere questo avviso, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4565:

```cpp
// C4565.cpp
// compile with: /W4 /LD
__declspec(noalias) void f();
void f();   // C4565
```