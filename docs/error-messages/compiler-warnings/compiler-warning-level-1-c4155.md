---
title: Avviso del compilatore (livello 1) C4155
ms.date: 11/04/2016
f1_keywords:
- C4155
helpviewer_keywords:
- C4155
ms.assetid: ba233353-09e3-4195-8127-13a27ddd8d70
ms.openlocfilehash: 3e455ad67c9a36cfa4b52711ce60ce46ef6afac2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80176208"
---
# <a name="compiler-warning-level-1-c4155"></a>Avviso del compilatore (livello 1) C4155

eliminazione di un'espressione di matrice senza utilizzare 'delete' nella forma usata per le matrici

Per eliminare una matrice deve essere usata la forma per le matrici di **delete** . Questo avviso si verifica solo con la compatibilità ANSI (/Za).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4155:

```cpp
// C4155.cpp
// compile with: /Za /W1
#include <stdio.h>

int main(void)
{
    int (*array)[ 10 ] = new int[ 5 ] [ 10 ];
    array[0][0] = 8;

    printf_s("%d\n", array[0][0]);

   delete array;   // C4155
    // try the following line instead
    // delete [] array;   // C4155
}
```
