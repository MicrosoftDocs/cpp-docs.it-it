---
title: Compilatore avviso (livello 4) C4559 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4559
dev_langs:
- C++
helpviewer_keywords:
- C4559
ms.assetid: ed542f60-454d-45cb-85da-987ede61b1ab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d5743b33f62aa954c3765b729ab5c0297b20e32
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195576"
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