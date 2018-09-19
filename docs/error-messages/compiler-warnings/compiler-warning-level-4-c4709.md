---
title: Compilatore avviso (livello 4) C4709 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4709
dev_langs:
- C++
helpviewer_keywords:
- C4709
ms.assetid: 8abfdd45-8c70-4c27-b0fb-ca0c3f0fccf9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df12a377c3d365eaf274e58f9d573753aa1f0a57
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078985"
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