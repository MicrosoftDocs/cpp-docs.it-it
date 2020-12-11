---
description: 'Ulteriori informazioni su: `noalias`'
title: noalias
ms.date: 07/07/2020
f1_keywords:
- noalias_cpp
helpviewer_keywords:
- noalias __declspec keyword
- __declspec keyword [C++], noalias
ms.assetid: efafa8b0-7f39-4edc-a81e-d287ae882c9b
ms.openlocfilehash: 56306404fc79ea851835ae5913bbdb0b297ba880
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161651"
---
# `noalias`

**Specifiche di Microsoft**

**`noalias`** indica che una chiamata di funzione non modifica o fa riferimento a uno stato globale visibile e modifica solo la memoria a cui puntano *direttamente* i parametri del puntatore (riferimenti indiretti di primo livello).

Se una funzione viene annotata come **`noalias`** , Query Optimizer può presumere che all'interno della funzione siano presenti solo i parametri stessi e solo i riferimenti indiretti di primo livello dei parametri del puntatore.

L' **`noalias`** annotazione si applica solo all'interno del corpo della funzione annotata. Contrassegnare una funzione come **`__declspec(noalias)`** non influisce sull'aliasing dei puntatori restituiti dalla funzione.

Per un'altra annotazione che può influisca sull'aliasing, vedere [`__declspec(restrict)`](../cpp/restrict.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo di **`__declspec(noalias)`** .

Quando la funzione `multiply` che accede alla memoria viene annotata **`__declspec(noalias)`** , indica al compilatore che questa funzione non modifica lo stato globale ad eccezione dei puntatori presenti nel relativo elenco di parametri.

```C
// declspec_noalias.c
#include <stdio.h>
#include <stdlib.h>

#define M 800
#define N 600
#define P 700

float * mempool, * memptr;

float * ma(int size)
{
    float * retval;
    retval = memptr;
    memptr += size;
    return retval;
}

float * init(int m, int n)
{
    float * a;
    int i, j;
    int k=1;

    a = ma(m * n);
    if (!a) exit(1);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            a[i*n+j] = 0.1/k++;
    return a;
}

__declspec(noalias) void multiply(float * a, float * b, float * c)
{
    int i, j, k;

    for (j=0; j<P; j++)
        for (i=0; i<M; i++)
            for (k=0; k<N; k++)
                c[i * P + j] =
                          a[i * N + k] *
                          b[k * P + j];
}

int main()
{
    float * a, * b, * c;

    mempool = (float *) malloc(sizeof(float) * (M*N + N*P + M*P));

    if (!mempool)
    {
        puts("ERROR: Malloc returned null");
        exit(1);
    }

    memptr = mempool;
    a = init(M, N);
    b = init(N, P);
    c = init(M, P);

    multiply(a, b, c);
}
```

## <a name="see-also"></a>Vedi anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`__declspec(restrict)`](../cpp/restrict.md)
