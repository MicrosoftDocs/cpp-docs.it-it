---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4709'
title: Avviso del compilatore (livello 4) C4709
ms.date: 11/04/2016
f1_keywords:
- C4709
helpviewer_keywords:
- C4709
ms.assetid: 8abfdd45-8c70-4c27-b0fb-ca0c3f0fccf9
ms.openlocfilehash: 3138b8d95fd05cac113166ee9de9e7979f08223d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136227"
---
# <a name="compiler-warning-level-4-c4709"></a>Avviso del compilatore (livello 4) C4709

operatore virgola all'interno dell'espressione dell'indice della matrice

Quando si verifica una virgola in un'espressione di indice di matrice, il compilatore usa il valore dopo l'ultima virgola.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4709:

```cpp
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
