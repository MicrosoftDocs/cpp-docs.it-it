---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4155'
title: Avviso del compilatore (livello 1) C4155
ms.date: 11/04/2016
f1_keywords:
- C4155
helpviewer_keywords:
- C4155
ms.assetid: ba233353-09e3-4195-8127-13a27ddd8d70
ms.openlocfilehash: 04ea5ae01799fcda17c3591cf4dbc14daf4236ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267300"
---
# <a name="compiler-warning-level-1-c4155"></a>Avviso del compilatore (livello 1) C4155

eliminazione di un'espressione di matrice senza utilizzare 'delete' nella forma usata per le matrici

**`delete`** Per eliminare una matrice, è necessario utilizzare il formato della matrice di. Questo avviso si verifica solo con la compatibilità ANSI (/Za).

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
