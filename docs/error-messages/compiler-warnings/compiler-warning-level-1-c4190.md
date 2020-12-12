---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4190'
title: Avviso del compilatore (livello 1) C4190
ms.date: 11/04/2016
f1_keywords:
- C4190
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
ms.openlocfilehash: ff27d5913e23fa1488816b3e2bb7284440c7577b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266585"
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
