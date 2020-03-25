---
title: Avviso del compilatore (livello 4) C4565
ms.date: 08/27/2018
f1_keywords:
- C4565
helpviewer_keywords:
- C4565
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
ms.openlocfilehash: 5eccb3c29da612a39f7fcdf4ef25dedb898c8d43
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198328"
---
# <a name="compiler-warning-level-4-c4565"></a>Avviso del compilatore (livello 4) C4565

> '*Function*': ridefinizione. il simbolo è stato dichiarato in precedenza con __declspec (*modificatore*)

## <a name="remarks"></a>Osservazioni

Un simbolo è stato ridefinito o ridichiarato e la seconda definizione o dichiarazione, a differenza della prima definizione o dichiarazione, non disponeva di un modificatore di `__declspec` (*modificatore*). Si tratta di un avviso informativo. Per correggere il problema, eliminare una delle definizioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4565:

```cpp
// C4565.cpp
// compile with: /W4 /LD
__declspec(noalias) void f();
void f();   // C4565
```
