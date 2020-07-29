---
title: Avviso del compilatore (livello 1) C4190
ms.date: 11/04/2016
f1_keywords:
- C4190
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
ms.openlocfilehash: 8187926f2477a4d3f1ca3019cc8c3c71710c1dff
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233301"
---
# <a name="compiler-warning-level-1-c4190"></a>Avviso del compilatore (livello 1) C4190

' identificatore1' ha un collegamento C specificato, ma restituisce il tipo definito dall'utente ' identifier2' che non è compatibile con C

Una funzione o un puntatore a funzione ha un tipo definito dall'utente (tipo definito dall'utente, ovvero una classe, una struttura, un'enumerazione o un'Unione) come tipo restituito e `extern "C"` collegamento. Questo è valido se:

- Tutte le chiamate a questa funzione vengono eseguite da C++.

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
