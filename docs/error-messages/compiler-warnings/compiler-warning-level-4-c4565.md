---
title: Compilatore avviso (livello 4) C4565 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4565
dev_langs:
- C++
helpviewer_keywords:
- C4565
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c25f2f1fc16c6d45a7d1eddec8d3efe62db142f2
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211262"
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