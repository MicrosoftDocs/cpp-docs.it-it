---
title: Compilatore avviso (livello 3) C4159
ms.date: 11/04/2016
f1_keywords:
- C4159
helpviewer_keywords:
- C4159
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
ms.openlocfilehash: e898af8f109ed23bd1784df7b39c174bbed675f2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552282"
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