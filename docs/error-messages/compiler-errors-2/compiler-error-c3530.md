---
title: Errore del compilatore C3530 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3530
dev_langs:
- C++
helpviewer_keywords:
- C3530
ms.assetid: 21be81ce-b699-4c74-81bc-80a0c34d2d5a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5866e2ea44b84f3afeb0cef8423abc28f8e056ab
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46094793"
---
# <a name="compiler-error-c3530"></a>Errore del compilatore C3530

'auto' non può essere combinato con qualsiasi altro identificatore di tipo

Un identificatore di tipo viene usato con il `auto` (parola chiave).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Non usare un identificatore di tipo in una dichiarazione di variabile che utilizza il `auto` (parola chiave).

## <a name="example"></a>Esempio

Nell'esempio seguente genera C3530 perché variabile `x` viene dichiarato con entrambe le `auto` parola chiave e il tipo `int`, e poiché nell'esempio viene compilato con **/Zc: Auto**.

```
// C3530.cpp
// Compile with /Zc:auto
int main()
{
   auto int x;   // C3530
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)