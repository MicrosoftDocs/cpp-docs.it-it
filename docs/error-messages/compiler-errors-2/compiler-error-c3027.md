---
title: Errore del compilatore C3027 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3027
dev_langs:
- C++
helpviewer_keywords:
- C3027
ms.assetid: 6562a5c2-2f28-4b36-91ca-2a64c0f0501a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b408d4d93bb672a5a5cad2f0179d25268e3af03
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053167"
---
# <a name="compiler-error-c3027"></a>Errore del compilatore C3027

'clause': prevista espressione aritmetica o del puntatore

A una clausola che richiede un'espressione aritmetica o del puntatore è stato passato un altro tipo di espressione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3027:

```
// C3027.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

struct MyStruct
{
    int x;
} m_MyStruct;

int main()
{
    int i;

    puts("Test with class MyStruct:\n");
    #pragma omp parallel for if(m_MyStruct)   // C3027
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);

    puts("Test with int:\n");
    #pragma omp parallel for if(9)   // OK
    for (i = 1; i <= 2; ++i)
        printf_s("Hello World - thread %d - iteration %d\n",
                 omp_get_thread_num(), i);
}
```