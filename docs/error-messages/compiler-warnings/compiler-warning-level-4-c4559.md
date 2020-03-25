---
title: Avviso del compilatore (livello 4) C4559
ms.date: 08/27/2018
f1_keywords:
- C4559
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
ms.openlocfilehash: 0788824dd4180476d81d9682f99fb95883b8c4f0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198341"
---
# <a name="compiler-warning-level-4-c4559"></a>Avviso del compilatore (livello 4) C4559

> '*Function*': ridefinizione. la funzione ottiene __declspec (*modificatore*)

## <a name="remarks"></a>Osservazioni

Una funzione è stata ridefinita o ridichiarata e la seconda definizione o dichiarazione ha aggiunto un modificatore di **__declspec** (*modificatore*). Si tratta di un avviso informativo. Per correggere il problema, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```
