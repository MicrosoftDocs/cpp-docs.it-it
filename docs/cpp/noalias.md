---
title: noalias | Microsoft Docs
ms.custom: 
ms.date: 02/09/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- noalias_cpp
dev_langs:
- C++
helpviewer_keywords:
- noalias __declspec keyword
- __declspec keyword [C++], noalias
ms.assetid: efafa8b0-7f39-4edc-a81e-d287ae882c9b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6fd57b10aba4298ff7facd725ab3ce1934ccf1ab
ms.sourcegitcommit: f3c398b1c7dbf36ab71b5ca89d365b1913afa307
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2018
---
# <a name="noalias"></a>noalias

**Sezione specifica Microsoft**

`noalias`di conseguenza, una chiamata di funzione non modificare o fare riferimento allo stato complessivo visibile e modifica solo la memoria a cui puntata *direttamente* i parametri del puntatore (riferimenti indiretti di primo livello).

Se una funzione è annotata come `noalias`, l'utilità di ottimizzazione può supporre che, oltre ai parametri stessi, viene fatto riferimento solo ai riferimenti indiretti di primo livello dei parametri del puntatore o questi vengono modificati nella funzione. Lo stato complessivo visibile è il set di tutti i dati non definiti o a cui non si fa riferimento al di fuori dell'ambito di compilazione e il cui indirizzo non viene rilevato. L'ambito di compilazione è tutti i file di origine ([/LTCG (generazione di codice in fase di collegamento)](../build/reference/ltcg-link-time-code-generation.md) compilazioni) o un singolo file di origine (non -**/LTCG** compilazione).

Il `noalias` annotazione si applica solo all'interno del corpo della funzione con annotazioni. Contrassegnare una funzione come `__declspec(noalias)` non influisce sull'aliasing di puntatori restituiti dalla funzione.

Per l'annotazione di un altro che può influire sull'alias, vedere [__declspec(restrict)](../cpp/restrict.md).

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato l'utilizzo di `__declspec(noalias)`.

Quando la funzione `multiply` che accede a memoria sia annotata `__declspec(noalias)`, indica al compilatore che questa funzione non modifica lo stato complessivo salvo tramite i puntatori del relativo elenco di parametri.

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

[__declspec](../cpp/declspec.md)  
[Parole chiave](../cpp/keywords-cpp.md)  
[__declspec(restrict)](../cpp/restrict.md)  
