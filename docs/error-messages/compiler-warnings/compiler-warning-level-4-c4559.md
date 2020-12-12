---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4559'
title: Avviso del compilatore (livello 4) C4559
ms.date: 08/27/2018
f1_keywords:
- C4559
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
ms.openlocfilehash: 64a8da1a7719d515cc9ddb7b5b6c3e54309ef6cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206630"
---
# <a name="compiler-warning-level-4-c4559"></a>Avviso del compilatore (livello 4) C4559

> '*Function*': ridefinizione. la funzione ottiene __declspec (*modificatore*)

## <a name="remarks"></a>Commenti

Una funzione è stata ridefinita o ridichiarata e la seconda definizione o dichiarazione ha aggiunto un **`__declspec`** modificatore (*modificatore*). Si tratta di un avviso informativo. Per correggere il problema, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4559:

```cpp
// C4559.cpp
// compile with: /W4 /LD
void f();
__declspec(noalias) void f();   // C4559
```
