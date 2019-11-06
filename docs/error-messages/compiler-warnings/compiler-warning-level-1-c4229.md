---
title: Avviso del compilatore (livello 1) C4229
ms.date: 11/04/2016
f1_keywords:
- C4229
helpviewer_keywords:
- C4229
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
ms.openlocfilehash: 3d2372275da02a7c3bbde6c8bf044c621c5d3d09
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73624934"
---
# <a name="compiler-warning-level-1-c4229"></a>Avviso del compilatore (livello 1) C4229

utilizzato anacronismo: i modificatori sui dati vengono ignorati

L'uso di un modificatore Microsoft, ad esempio `__cdecl` in una dichiarazione di dati, è una procedura obsoleta.

## <a name="example"></a>Esempio

```cpp
// C4229.cpp
// compile with: /W1 /LD
int __cdecl counter;   // C4229 cdecl ignored
```