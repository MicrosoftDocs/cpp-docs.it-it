---
title: Compilatore avviso (livello 3) C4159 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4159
dev_langs:
- C++
helpviewer_keywords:
- C4159
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43e3d63ad1d482222c4ffa7aa7435d0e660f3985
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43223318"
---
# <a name="compiler-warning-level-3-c4159"></a>Compilatore avviso (livello 3) C4159

> #<a name="pragma-pragmapop--has-popped-previously-pushed-identifier-identifier"></a>pragma pragma(pop,...): ha estratto l'identificatore '*identificatore*'

## <a name="remarks"></a>Note

Il codice sorgente contiene un' **push** istruzione con un identificatore per un pragma seguito da un **pop** istruzione senza un identificatore. Di conseguenza, *identifier* viene estratto e durante i successivi usi di *identificatore* può causare comportamenti imprevisti.

## <a name="example"></a>Esempio

Per evitare questo avviso, assegnare un identificatore **pop** (istruzione). Ad esempio:

```cpp
// C4159.cpp
// compile with: /W3
#pragma pack(push, f)
#pragma pack(pop)   // C4159

// using the identifier resolves the warning
// #pragma pack(pop, f)

int main()
{
}
```