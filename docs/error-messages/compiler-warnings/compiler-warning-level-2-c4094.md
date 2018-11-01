---
title: Compilatore avviso (livello 2) C4094
ms.date: 11/04/2016
f1_keywords:
- C4094
helpviewer_keywords:
- C4094
ms.assetid: e68929fb-3a1c-4be7-920b-d5f79f534f99
ms.openlocfilehash: 73805afc897d14c6d2cc87490dfa0769a8de5193
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488400"
---
# <a name="compiler-warning-level-2-c4094"></a>Compilatore avviso (livello 2) C4094

non contrassegnato 'token' non dichiara alcun simbolo

Il compilatore ha rilevato una dichiarazione vuota con un tag di struttura, unione o classe. La dichiarazione viene ignorata.

## <a name="example"></a>Esempio

```
// C4094.cpp
// compile with: /W2
struct
{
};   // C4094

int main()
{
}
```

Questa condizione genera un errore in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).