---
title: noalias | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
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
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: cb8d3425b08984f31954df3a7cf7771e85301a5b
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="noalias"></a>noalias

**Sezione specifica Microsoft**

`noalias`di conseguenza, una chiamata di funzione non modificare o fare riferimento allo stato complessivo visibile e modifica solo la memoria a cui puntata *direttamente* i parametri del puntatore (riferimenti indiretti di primo livello).

Se una funzione è annotata come `noalias`, l'utilità di ottimizzazione può supporre che, oltre ai parametri stessi, viene fatto riferimento solo ai riferimenti indiretti di primo livello dei parametri del puntatore o questi vengono modificati nella funzione. Lo stato complessivo visibile è il set di tutti i dati non definiti o a cui non si fa riferimento al di fuori dell'ambito di compilazione e il cui indirizzo non viene rilevato. L'ambito di compilazione è tutti i file di origine ([/LTCG (generazione di codice in fase di collegamento)](../build/reference/ltcg-link-time-code-generation.md) compilazioni) o un singolo file di origine (non -**/LTCG** compilazione).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'uso di `__declspec(restrict)` e `__declspec(noalias)`. In genere, la memoria restituita da `malloc` è `restrict` perché le intestazioni CRT sono decorate in modo appropriato.

Tuttavia, in questo esempio, i puntatori `mempool` e `memptr` sono globali in modo il compilatore non abbia certezza che la memoria non è soggetta ad aliasing. Decorando le funzioni che restituiscono puntatori con `__declspec(restrict)` indica al compilatore che alla memoria a cui fa riferimento il valore restituito non viene applicato l'aliasing.

Decorando la funzione nell'esempio che accede alla memoria con `__declspec(noalias)` indica al compilatore che questa funzione non interferisce con lo stato complessivo salvo tramite i puntatori del relativo elenco di parametri.

```C
// declspec_noalias.c
#include <stdio.h>
#include <stdlib.h>

#define M 800
#define N 600
#define P 700

float * mempool, * memptr;

__declspec(restrict) float * ma(int size)
{
    float * retval;
    retval = memptr;
    memptr += size;
    return retval;
}

__declspec(restrict) float * init(int m, int n)
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
