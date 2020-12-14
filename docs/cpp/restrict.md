---
description: 'Altre informazioni su: limita'
title: restrict
ms.date: 02/09/2018
f1_keywords:
- restrict_cpp
helpviewer_keywords:
- __declspec keyword [C++], restrict
- restrict __declspec keyword
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
ms.openlocfilehash: e2900e46d3b8e452661800c1c511418f936a5b0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223711"
---
# <a name="restrict"></a>restrict

**Specifico di Microsoft**

Quando viene applicato a una dichiarazione di funzione o a una definizione che restituisce un tipo di puntatore, **`restrict`** indica al compilatore che la funzione restituisce un oggetto a cui non è associato un *alias*, a cui fanno riferimento altri puntatori. Ciò consente al compilatore di eseguire ottimizzazioni aggiuntive.

## <a name="syntax"></a>Sintassi

> **`__declspec(restrict)`** *funzione* pointer_return_type ();

## <a name="remarks"></a>Commenti

Il compilatore viene propagato **`__declspec(restrict)`** . La funzione CRT, ad esempio, `malloc` ha un **`__declspec(restrict)`** effetto e pertanto il compilatore presuppone che i puntatori inizializzati per le posizioni di memoria da `malloc` non siano anche alias da puntatori già esistenti.

Il compilatore non verifica che il puntatore restituito non sia effettivamente associato a un alias. È responsabilità dello sviluppatore assicurarsi che il programma non alias un puntatore contrassegnato con il modificatore **restrict __declspec** .

Per una semantica simile sulle variabili, vedere [__restrict](../cpp/extension-restrict.md).

Per un'altra annotazione valida per l'aliasing all'interno di una funzione, vedere [__declspec (noalias)](../cpp/noalias.md).

Per informazioni sulla **`restrict`** parola chiave che fa parte di C++ amp, vedere [restrict (C++ amp)](../cpp/restrict-cpp-amp.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo di **`__declspec(restrict)`** .

Quando **`__declspec(restrict)`** viene applicato a una funzione che restituisce un puntatore, indica al compilatore che la memoria a cui punta il valore restituito non è associato a un alias. In questo esempio, i puntatori `mempool` e `memptr` sono globali, quindi il compilatore non può assicurarsi che la memoria a cui fa riferimento non disponga di un alias. Tuttavia, vengono utilizzati all'interno di `ma` e il relativo chiamante `init` in modo che restituisca memoria a cui non viene altrimenti fatto riferimento dal programma, pertanto **__decslpec (restrict)** viene utilizzato per semplificare l'ottimizzazione. Questo metodo è simile al modo in cui le intestazioni CRT decorano le funzioni di allocazione, ad esempio `malloc` usando **`__declspec(restrict)`** per indicare che restituiscono sempre memoria che non può essere impostata come alias da puntatori esistenti.

```C
// declspec_restrict.c
// Compile with: cl /W4 declspec_restrict.c
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
            a[i*n+j] = 0.1f/k++;
    return a;
}

void multiply(float * a, float * b, float * c)
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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[__declspec](../cpp/declspec.md)<br/>
[__declspec (noalias)](../cpp/noalias.md)
