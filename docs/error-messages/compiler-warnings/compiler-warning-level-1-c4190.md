---
title: Avviso del compilatore (livello 1) C4190
ms.date: 11/04/2016
f1_keywords:
- C4190
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
ms.openlocfilehash: 6d110aa70a470382e274546e95599804fa3bc7d6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199875"
---
# <a name="compiler-warning-level-1-c4190"></a>Avviso del compilatore (livello 1) C4190

' identificatore1' ha un collegamento C specificato, ma restituisce il tipo definito dall'utente ' identifier2' che non è compatibile con C

Una funzione o un puntatore a funzione ha un tipo definito dall'utente (tipo definito dall'utente, ovvero una classe, una struttura, un'enumerazione o un'Unione) come tipo restituito e `extern` collegamento "C". Questo è valido se:

- Tutte le chiamate a questa funzione si C++verificano da.

- La definizione della funzione è in C++.

## <a name="example"></a>Esempio

```cpp
// C4190.cpp
// compile with: /W1 /LD
struct X
{
   int i;
   X ();
   virtual ~X ();
};

extern "C" X func ();   // C4190
```
