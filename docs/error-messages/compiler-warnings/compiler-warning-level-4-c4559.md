---
title: Avviso del compilatore (livello 4) C4559
ms.date: 08/27/2018
f1_keywords:
- C4559
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
ms.openlocfilehash: 66e782c2fbb9c39c6a189de496cd0dcb4f1f4991
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218078"
---
# <a name="compiler-warning-level-4-c4559"></a>Avviso del compilatore (livello 4) C4559

> '*Function*': ridefinizione. la funzione ottiene __declspec (*modificatore*)

## <a name="remarks"></a>Osservazioni

Una funzione è stata ridefinita o ridichiarata e la seconda definizione o dichiarazione ha aggiunto un **`__declspec`** modificatore (*modificatore*). Si tratta di un avviso informativo. Per correggere il problema, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```
