---
title: Compilatore avviso (livello 1) C4227 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4227
dev_langs:
- C++
helpviewer_keywords:
- C4227
ms.assetid: 78f98374-c00b-4000-aefa-1b1c67b4666b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fda3a31b228f16b27f4bdefd3131a0ddcb90f5b5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060856"
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