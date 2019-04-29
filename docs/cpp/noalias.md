---
title: noalias
ms.date: 02/09/2018
f1_keywords:
- noalias_cpp
helpviewer_keywords:
- noalias __declspec keyword
- __declspec keyword [C++], noalias
ms.assetid: efafa8b0-7f39-4edc-a81e-d287ae882c9b
ms.openlocfilehash: 2eceffd10f97615859918991320ceebf577d094c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62377439"
---
# <a name="noalias"></a>noalias

**Sezione specifica Microsoft**

**noalias** significa che una chiamata di funzione non modifica o fanno riferimento allo stato complessivo visibile e modifica solo la memoria puntata *direttamente* i parametri del puntatore (riferimenti indiretti di primo livello).

Se una funzione è annotata come **noalias**, query optimizer può presupporre che, oltre ai parametri stessi, i riferimenti indiretti di primo livello solo dei parametri del puntatore sono cui viene fatto riferimento o modificati all'interno della funzione. Lo stato complessivo visibile è il set di tutti i dati non definiti o a cui non si fa riferimento al di fuori dell'ambito di compilazione e il cui indirizzo non viene rilevato. L'ambito di compilazione è tutti i file di origine ([/LTCG (generazione di codice in fase di collegamento)](../build/reference/ltcg-link-time-code-generation.md) compilazioni) o un singolo file di origine (non -**/LTCG** compilazione).

Il **noalias** annotazione si applica solo all'interno del corpo della funzione con annotazione. Contrassegnare una funzione come **__declspec(noalias)** influisce l'aliasing dei puntatori restituiti dalla funzione.

Per un'altra annotazione che può influire sull'aliasing, vedere [__declspec(restrict)](../cpp/restrict.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra l'uso della **__declspec(noalias)**.

Quando la funzione `multiply` che gli accessi alla memoria viene annotata **__declspec(noalias)**, indica al compilatore che questa funzione non modifichi lo stato complessivo salvo tramite i puntatori del relativo elenco di parametri.

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

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[__declspec(restrict)](../cpp/restrict.md)
