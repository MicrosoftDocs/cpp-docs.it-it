---
title: Compilatore avviso (livello 1) C4715 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4715
dev_langs:
- C++
helpviewer_keywords:
- C4715
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b3de829992bfa650280768a2fcd761feaeaece0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061370"
---
# <a name="compiler-warning-level-1-c4715"></a>Avviso del compilatore (livello 1) C4715

'function': non tutti i percorsi di controllo restituiscono un valore

La funzione specificata potenzialmente non può restituire un valore.

## <a name="example"></a>Esempio

```
// C4715a.cpp
// compile with: /W1 /LD
int func1( int i )
{
   if( i )
   return 3;  // C4715 warning, nothing returned if i == 0
}
```

Per evitare questo avviso, modificare il codice in modo che tutti i percorsi di assegnino un valore restituito della funzione:

```
// C4715b.cpp
// compile with: /LD
int func1( int i )
{
   if( i ) return 3;
   else return 0;     // OK, always returns a value
}
```

È possibile che il codice può contenere una chiamata a una funzione che non restituisce mai, come nell'esempio seguente:

```
// C4715c.cpp
// compile with: /W1 /LD
void fatal()
{
}
int glue()
{
   if(0)
      return 1;
   else if(0)
      return 0;
   else
      fatal();   // C4715
}
```

Questo codice genera anche un avviso, perché il compilatore non sa che `fatal` non restituisce alcun risultato. Per evitare che questo codice genera un messaggio di errore, dichiarare `fatal` usando [__declspec(noreturn)](../../cpp/noreturn.md).