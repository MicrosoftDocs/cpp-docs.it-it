---
title: Avviso del compilatore (livello 1) C4715
ms.date: 11/04/2016
f1_keywords:
- C4715
helpviewer_keywords:
- C4715
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
ms.openlocfilehash: 268a26f5de1bb7f757a8e7cba6d3f5e6ddff882e
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052484"
---
# <a name="compiler-warning-level-1-c4715"></a>Avviso del compilatore (livello 1) C4715

' Function ': non tutti i percorsi di controllo restituiscono un valore

La funzione specificata può potenzialmente non restituire un valore.

## <a name="example"></a>Esempio

```cpp
// C4715a.cpp
// compile with: /W1 /LD
int func1( int i )
{
   if( i )
   return 3;  // C4715 warning, nothing returned if i == 0
}
```

Per evitare questo avviso, modificare il codice in modo che tutti i percorsi assegni un valore restituito alla funzione:

```cpp
// C4715b.cpp
// compile with: /LD
int func1( int i )
{
   if( i ) return 3;
   else return 0;     // OK, always returns a value
}
```

È possibile che il codice possa contenere una chiamata a una funzione che non restituisce mai, come nell'esempio seguente:

```cpp
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

Questo codice genera anche un avviso, perché il compilatore non sa che `fatal` mai restituito. Per evitare che il codice generi un messaggio di errore, dichiarare `fatal` utilizzando [__declspec (noreturn)](../../cpp/noreturn.md).