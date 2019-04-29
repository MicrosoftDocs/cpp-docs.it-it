---
title: Avviso del compilatore (livello 4) C4709
ms.date: 11/04/2016
f1_keywords:
- C4709
helpviewer_keywords:
- C4709
ms.assetid: 8abfdd45-8c70-4c27-b0fb-ca0c3f0fccf9
ms.openlocfilehash: acc74f55a423f1cd18d385cd4dfbec7dfa01c422
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395209"
---
# <a name="compiler-warning-level-4-c4709"></a>Avviso del compilatore (livello 4) C4709

operatore virgola all'interno di espressione di indice di matrice

Quando si verifica una virgola in un'espressione di indice di matrice, il compilatore Usa il valore dopo l'ultimo punto e virgola.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4709:

```
// C4709.cpp
// compile with: /W4
#include <stdio.h>

int main()
{
    int arr[2][2];
    arr[0][0] = 10;
    arr[0][1] = 11;

    // Prints 10, not 11
    printf_s("\n%d",arr[0][1,0]);   // C4709
}
```