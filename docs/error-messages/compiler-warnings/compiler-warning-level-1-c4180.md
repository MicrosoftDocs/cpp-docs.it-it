---
title: Avviso del compilatore (livello 1) C4180
ms.date: 11/04/2016
f1_keywords:
- C4180
helpviewer_keywords:
- C4180
ms.assetid: 40c91bd4-37f1-4d59-a4f3-d5ddab68239b
ms.openlocfilehash: 8ed09edae5a9577773c573337b6e646a49599862
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391699"
---
# <a name="compiler-warning-level-1-c4180"></a>Avviso del compilatore (livello 1) C4180

il qualificatore applicato al tipo della funzione è privo di significato. È stato ignorato.

Un qualificatore, ad esempio **const**, è applicato a un tipo di funzione definito da `typedef`.

## <a name="example"></a>Esempio

```
// C4180.cpp
// compile with: /W1 /c
typedef int FuncType(void);

// the const qualifier cannot be applied to the
// function type FuncType
const FuncType f;   // C4180
```