---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4565'
title: Avviso del compilatore (livello 4) C4565
ms.date: 08/27/2018
f1_keywords:
- C4565
helpviewer_keywords:
- C4565
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
ms.openlocfilehash: bdcf36234ef5a7d8f371d8d25d31b9cb3a36590d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255145"
---
# <a name="compiler-warning-level-4-c4565"></a>Avviso del compilatore (livello 4) C4565

> '*Function*': ridefinizione. il simbolo è stato dichiarato in precedenza con __declspec (*modificatore*)

## <a name="remarks"></a>Commenti

Un simbolo è stato ridefinito o ridichiarato e la seconda definizione o dichiarazione, a differenza della prima definizione o dichiarazione, non disponeva di un **`__declspec`** modificatore (*modificatore*). Si tratta di un avviso informativo. Per correggere il problema, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4565:

```cpp
// C4565.cpp
// compile with: /W4 /LD
__declspec(noalias) void f();
void f();   // C4565
```
