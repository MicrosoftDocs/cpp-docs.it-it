---
title: Compilatore Warning (level 1) C4190
ms.date: 11/04/2016
f1_keywords:
- C4190
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
ms.openlocfilehash: 05984594a57878aad8037861a15ac9284ff65192
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50521229"
---
# <a name="compiler-warning-level-1-c4190"></a>Compilatore Warning (level 1) C4190

'identifier1' ha specificato un collegamento C, ma restituisce tipi definiti dall'utente 'identifier2' che è incompatibile con C

Una funzione o un puntatore a funzione dispone di un tipo definito dall'utente (tipo definito dall'utente, ovvero una classe, struttura, enum o unione) come tipo restituito e `extern` collegamento "C". Tale operazione è valida se:

- Tutte le chiamate a questa funzione si verificano da C++.

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