---
title: Avviso del compilatore (livello 4) C4559
ms.date: 08/27/2018
f1_keywords:
- C4559
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
ms.openlocfilehash: afb4fb493c7c3e34ca691720a30d74517b0ab5b7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62220876"
---
# <a name="compiler-warning-level-4-c4559"></a>Avviso del compilatore (livello 4) C4559

> «*funzione*': ridefinizione; declspec guadagni la funzione (*modificatore*)

## <a name="remarks"></a>Note

È stata ridefinita o ridichiarazione di una funzione e la seconda definizione o dichiarazione aggiunta un' **declspec** modificatore (*modificatore*). Si tratta di un avviso informativo. Per risolvere questo avviso, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```