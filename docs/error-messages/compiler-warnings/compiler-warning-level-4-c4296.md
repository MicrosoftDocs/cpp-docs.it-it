---
title: Compilatore avviso (livello 4) C4296 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4296
dev_langs:
- C++
helpviewer_keywords:
- C4296
ms.assetid: 9d99aafe-f6bd-4ee0-b8d0-98ce5712274d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a687c885a3388e01b2089aca1b399d0559803128
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045620"
---
# <a name="compiler-warning-level-4-c4296"></a>Avviso del compilatore (livello 4) C4296

'operator': l'espressione è sempre false

Una variabile senza segno è stata usata in un'operazione di confronto con zero.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4296:

```
// C4296.cpp
// compile with: /W4
#pragma warning(default : 4296)
int main()
{
   unsigned int u = 9;
   if (u < 0)    // C4296
      u++;
   if (u >= 0)   // C4296
      u++;
}
```