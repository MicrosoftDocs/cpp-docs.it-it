---
title: Avviso del compilatore (livello 1) C4229
ms.date: 11/04/2016
f1_keywords:
- C4229
helpviewer_keywords:
- C4229
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
ms.openlocfilehash: 05d11a02d3aea8748a2955dff77a0af750ee0275
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575539"
---
# <a name="compiler-warning-level-1-c4229"></a>Avviso del compilatore (livello 1) C4229

utilizzato anacronismo: i modificatori di dati vengono ignorati

Usando un modificatore di Microsoft, ad esempio `__cdecl` sui dati di un dichiarazione è una procedura obsoleta.

## <a name="example"></a>Esempio

```
// C4229.cpp
// compile with: /W1 /LD
int __cdecl counter;   // C4229 cdecl ignored
```