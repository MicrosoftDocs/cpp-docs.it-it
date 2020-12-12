---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4138'
title: Avviso del compilatore (livello 1) C4138
ms.date: 11/04/2016
f1_keywords:
- C4138
helpviewer_keywords:
- C4138
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
ms.openlocfilehash: 68789c7300944c7435431688ff147f40cd4cadb0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278025"
---
# <a name="compiler-warning-level-1-c4138"></a>Avviso del compilatore (livello 1) C4138

trovato '*/' all'esterno di un commento

Il delimitatore di chiusura commento non è preceduto da un delimitatore di apertura commento. Il compilatore presuppone uno spazio tra l'asterisco ( <strong>\*</strong> ) e la barra (/).

## <a name="example"></a>Esempio

```cpp
// C4138a.cpp
// compile with: /W1
int */*comment*/ptr;   // C4138 Ambiguous first delimiter causes warning
int main()
{
}
```

Questo avviso può derivare dal tentativo di annidare commenti.

Per risolvere l'avviso, è possibile impostare come commento le sezioni di codice che contengono commenti, racchiudere il codice in un blocco **#if/#endif** e impostare l'espressione di controllo su zero:

```cpp
// C4138b.cpp
// compile with: /W1
#if 0
int my_variable;   /* Declaration currently not needed */
#endif
int main()
{
}
```
