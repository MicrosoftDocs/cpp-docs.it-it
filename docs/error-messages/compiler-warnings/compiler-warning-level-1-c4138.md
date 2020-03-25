---
title: Avviso del compilatore (livello 1) C4138
ms.date: 11/04/2016
f1_keywords:
- C4138
helpviewer_keywords:
- C4138
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
ms.openlocfilehash: e1f28f5afb1879229ff0d408cb576312966e1c81
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200109"
---
# <a name="compiler-warning-level-1-c4138"></a>Avviso del compilatore (livello 1) C4138

trovato '*/' all'esterno di un commento

Il delimitatore di chiusura commento non è preceduto da un delimitatore di apertura commento. Il compilatore prevede la presenza di uno spazio tra l'asterisco (<strong>\*</strong>) e la barra (/).

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
