---
title: Avviso del compilatore (livello 1) C4227
ms.date: 11/04/2016
f1_keywords:
- C4227
helpviewer_keywords:
- C4227
ms.assetid: 78f98374-c00b-4000-aefa-1b1c67b4666b
ms.openlocfilehash: a93b7f225149f9b557ad6238376ffd1bafec82d3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207538"
---
# <a name="compiler-warning-level-1-c4227"></a>Avviso del compilatore (livello 1) C4227

utilizzato anacronismo: i qualificatori di riferimento vengono ignorati

Con i qualificatori, ad esempio `const` o `volatile` con riferimenti C++ è una procedura obsoleta.

## <a name="example"></a>Esempio

```
// C4227.cpp
// compile with: /W1 /c
int j = 0;
int &const i = j;   // C4227
```