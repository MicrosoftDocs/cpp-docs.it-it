---
title: limitare | Documenti Microsoft
ms.custom: ''
ms.date: 02/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- restrict_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], restrict
- restrict __declspec keyword
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ed5f91288671eaa3dcf4700ec35dae63ffaef172
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="restrict"></a>restrict

**Sezione specifica Microsoft**

Quando applicato a una dichiarazione di funzione o una definizione che restituisce un tipo di puntatore, `restrict` indica al compilatore che la funzione restituisce un oggetto che non è *alias*, vale a dire, a cui fa riferimento altri puntatori. In questo modo il compilatore di eseguire ulteriori ottimizzazioni.

## <a name="syntax"></a>Sintassi

> **__declspec(restrict)** *pointer_return_type* *funzione*();  
  
## <a name="remarks"></a>Note

Il compilatore propaga `__declspec(restrict)`. Ad esempio, la libreria CRT `malloc` funzione dispone di un `__declspec(restrict)` decorazione e, pertanto, il compilatore presuppone che i puntatori inizializzati in posizioni di memoria da `malloc` anche non sono associata a un alias esistente in precedenza i puntatori.

Il compilatore controlla che il puntatore restituito non è effettivamente associata a un alias. È responsabilità dello sviluppatore specificare che il programma non utilizzi un alias per un puntatore contrassegnato con il modificatore `restrict __declspec`.  
  
Per una semantica simile alle variabili, vedere [Restrict](../cpp/extension-restrict.md).
 
Per l'annotazione di un altro che si applica a alias all'interno di una funzione, vedere [__declspec(noalias)](../cpp/noalias.md).
  
Per informazioni di **limitare** (parola chiave) che fa parte di C++ AMP, vedere [limitare (C++ AMP)](../cpp/restrict-cpp-amp.md).  
 
## <a name="example"></a>Esempio  

L'esempio seguente viene illustrato l'utilizzo di `__declspec(restrict)`.

Quando `__declspec(restrict)` viene applicato a una funzione che restituisce un puntatore, ciò indica al compilatore che la memoria a cui fa riferimento il valore restituito non è associato un alias. In questo esempio, i puntatori `mempool` e `memptr` sono globali, il compilatore non è possibile assicurarsi che la memoria a cui fanno riferimento non è associato un alias. Tuttavia, vengono utilizzati all'interno di `ma` e il relativo chiamante `init` in modo che la memoria che non è in caso contrario a cui fa riferimento il programma, quindi restituisce `__decslpec(restrict)` viene usato per consentire a query optimizer. È simile a come le intestazioni CRT decorano funzioni di allocazione, ad esempio `malloc` utilizzando `__declspec(restrict)` per indicare che restituiscono memoria che non può essere associata a un alias da puntatori esistenti.

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)  
[__declspec](../cpp/declspec.md)  
[__declspec(noalias)](../cpp/noalias.md)  
