---
title: Avviso del compilatore (livello 2) C4094
ms.date: 11/04/2016
f1_keywords:
- C4094
helpviewer_keywords:
- C4094
ms.assetid: e68929fb-3a1c-4be7-920b-d5f79f534f99
ms.openlocfilehash: c293522e5d60d0edb4cc2da289e0ece71f89329f
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052211"
---
# <a name="compiler-warning-level-2-c4094"></a>Avviso del compilatore (livello 2) C4094

' token ' senza tag non ha dichiarato alcun simbolo

Il compilatore ha rilevato una dichiarazione vuota utilizzando una struttura, un'Unione o una classe senza tag. La dichiarazione viene ignorata.

## <a name="example"></a>Esempio

```cpp
// C4094.cpp
// compile with: /W2
struct
{
};   // C4094

int main()
{
}
```

Questa condizione genera un errore in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).