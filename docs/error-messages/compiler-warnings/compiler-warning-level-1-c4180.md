---
title: Avviso del compilatore (livello 1) C4180
ms.date: 11/04/2016
f1_keywords:
- C4180
helpviewer_keywords:
- C4180
ms.assetid: 40c91bd4-37f1-4d59-a4f3-d5ddab68239b
ms.openlocfilehash: 4a153d2ec5d2cc8850f3c27390862d3cd0e70bed
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214477"
---
# <a name="compiler-warning-level-1-c4180"></a>Avviso del compilatore (livello 1) C4180

il qualificatore applicato al tipo della funzione è privo di significato. È stato ignorato.

Un qualificatore, ad esempio **`const`** , viene applicato a un tipo di funzione definito da **`typedef`** .

## <a name="example"></a>Esempio

```cpp
// C4180.cpp
// compile with: /W1 /c
typedef int FuncType(void);

// the const qualifier cannot be applied to the
// function type FuncType
const FuncType f;   // C4180
```
