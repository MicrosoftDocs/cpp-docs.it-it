---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4715'
title: Avviso del compilatore (livello 1) C4715
ms.date: 11/04/2016
f1_keywords:
- C4715
helpviewer_keywords:
- C4715
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
ms.openlocfilehash: 41682beae6e32ba397f3c9dae43d57a182b09b65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249100"
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

Questo codice genera anche un avviso, perché il compilatore non sa che non `fatal` restituisce mai. Per evitare che il codice generi un messaggio di errore, dichiarare `fatal` utilizzando [__declspec (noreturn)](../../cpp/noreturn.md).
