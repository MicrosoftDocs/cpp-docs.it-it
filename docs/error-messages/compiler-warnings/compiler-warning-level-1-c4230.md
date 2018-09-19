---
title: Compilatore avviso (livello 1) C4230 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4230
dev_langs:
- C++
helpviewer_keywords:
- C4230
ms.assetid: a4be8729-74b6-44df-a5ea-e3f45aad0f8f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fb091b6cffe0bc049e7501fb006b1c84d9e0f6d2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112486"
---
# <a name="compiler-warning-level-1-c4230"></a>Avviso del compilatore (livello 1) C4230

utilizzato anacronismo: modificatori e qualificatori frammisti. Qualificatori ignorati

Utilizzo di un qualificatore prima un modificatore di Microsoft, ad esempio `__cdecl` è una procedura obsoleta.

## <a name="example"></a>Esempio

```
// C4230.cpp
// compile with: /W1 /LD
int __cdecl const function1();   // C4230 const ignored
```