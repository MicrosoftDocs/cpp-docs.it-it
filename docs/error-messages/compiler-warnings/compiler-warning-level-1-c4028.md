---
title: Avviso del compilatore (livello 1) C4028
ms.date: 11/04/2016
f1_keywords:
- C4028
helpviewer_keywords:
- C4028
ms.assetid: c3e8b70b-e870-416c-a285-bba5f71dbfc6
ms.openlocfilehash: ed46620605a8d5d60acee2db37c5cfc1348b5f4c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164469"
---
# <a name="compiler-warning-level-1-c4028"></a>Avviso del compilatore (livello 1) C4028

il parametro formale ' Number ' è diverso dalla dichiarazione

Il tipo del parametro formale non accetta il parametro corrispondente nella dichiarazione. Viene utilizzato il tipo nella dichiarazione originale.

Questo avviso è valido solo per il codice sorgente C.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4028.

```c
// C4028.c
// compile with: /W1 /Za
void f(int , ...);
void f(int i, int j) {}   // C4028

void g(int , int);
void g(int i, int j) {}   // OK

int main() {}
```
