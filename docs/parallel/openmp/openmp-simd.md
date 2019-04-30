---
title: Estensioni SIMD
ms.date: 03/20/2019
helpviewer_keywords:
- SIMD
- OpenMP in Visual C++, new features
- explicit parallelization, new features
ms.openlocfilehash: 52402aa553c6d68d3073aba26ecac7b784522ee9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62363271"
---
# <a name="simd-extension"></a>Estensioni SIMD

Visual C++ supporta attualmente lo standard di OpenMP 2.0, tuttavia 2019 di Visual Studio offre ora anche funzionalità SIMD.

> [!NOTE]
> Per usare SIMD, eseguire la compilazione con il `-openmp:experimental` opzione che abilita funzionalità aggiuntive di OpenMP non è disponibile quando si utilizza il `-openmp` passare.
>
> Il `-openmp:experimental` commutatore capitali `-openmp`, vale a dire tutte le funzionalità di OpenMP 2.0 sono incluse nel relativo uso.

Per altre informazioni, vedere [estensioni SIMD per C++ in Visual Studio OpenMP](https://devblogs.microsoft.com/cppblog/simd-extension-to-c-openmp-in-visual-studio/).

## <a name="openmp-simd-in-visual-c"></a>SIMD OpenMP nell'oggetto visivoC++

SIMD OpenMP, introdotto in 4.0 OpenMP standard, destinazioni di rendere i cicli di facile integrazione con vettore. Tramite il `simd` direttiva prima di un ciclo, il compilatore può ignorare le dipendenze del vettore, apportare il ciclo come vettore di facile integrazione con minor e rispettano intenzione degli utenti di avere più iterazioni del ciclo eseguite contemporaneamente.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Visual C++ include come direttive pragma di ciclo simile non OpenMP `#pragma vector` e `#pragma ivdep`, ma con SIMD OpenMP, il compilatore può eseguire altre operazioni, ad esempio:

- Sempre consentito ignorare le dipendenze del vettore presente.
- `/fp:fast` è abilitato all'interno del ciclo.
- I cicli esterni e i cicli con le chiamate di funzione sono adatti vettore.
- Cicli annidati possono essere uniti in un ciclo e reso facile integrazione con vettore.
- Accelerazione ibrida con `#pragma omp for simd` abilitare con granularità grossolana vettori multithread e con granularità fine.  

Per i cicli di facile integrazione con vettore, il compilatore rimane invisibile all'utente se non si usa un'opzione di log di vettori di supporto:

```cmd
    cl -O2 -openmp:experimental -Qvec-report:2 mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(96) : info C5001: Omp simd loop vectorized
```

Per i cicli non vettore-brevi, il compilatore genera ognuna un messaggio:

```cmd
    cl -O2 -openmp:experimental mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
```

### <a name="clauses"></a>Clausole

La direttiva OpenMP SIMD può anche usare le clausole seguenti per migliorare il supporto di vettore:

|Direttiva|Descrizione|
|---|---|
|`simdlen(length)`|Specificare il numero di corsie di vettore.|
|`safelen(length)`|Specificare la distanza di dipendenza di vettore.|
|`linear(list[ : linear-step]`)|Il mapping lineare dalla variabile di induzione del ciclo alla sottoscrizione di matrice.|
|`aligned(list[ : alignment])`|L'allineamento dei dati.|
|`private(list)`|Specificare privatizzazione dati.|
|`lastprivate(list)`|Specificare privatizzazione dati con valore finale dall'ultima iterazione.|
|`reduction(reduction-identifier:list)`|Specificare le operazioni di riduzione personalizzato.|
|`collapse(n)`|Annidamento di ciclo coalescing.|

> [!NOTE]
> Le clausole SIMD non efficace vengono analizzate e ignorate dal compilatore con un avviso.
>
> Ad esempio, usare i seguenti problemi di codice un messaggio di avviso:
>
> ```c
>    #pragma omp simd simdlen(8)
>    for (i = 0; i < count; i++)
>    {
>        a[i] = a[i-1] + 1;
>        b[i] = *c + 1;
>        bar(i);
>    }
> ```
>
> ```Output
>    warning C4849: OpenMP 'simdlen' clause ignored in 'simd' directive
> ```

### <a name="example"></a>Esempio
  
La direttiva OpenMP SIMD offre agli utenti un modo per determinare il compilatore apportare cicli vettore adatto. Annotando un ciclo con la direttiva OpenMP SIMD, gli utenti intendono disporre di più iterazioni del ciclo eseguite contemporaneamente.

Ad esempio, il ciclo seguente è annotato con la direttiva OpenMP SIMD. Non è disponibile parallelismo perfetto tra le iterazioni del ciclo, poiché è presente una dipendenza con le versioni precedenti da un [i] a [i-1], ma a causa della direttiva SIMD che il compilatore è comunque consentito pack iterazioni consecutive della prima istruzione in una singola istruzione vettore ed eseguire li in parallelo.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Pertanto, è il seguente formato vettore trasformato del ciclo **legali** poiché il compilatore mantiene il comportamento di ogni iterazione del ciclo originale sequenza. In altre parole, `a[i]` viene eseguito dopo `a[-1]`, `b[i]` dopo `a[i]` e la chiamata a `bar` viene eseguito per ultimo.

```c
    for (i = 0; i < count; i+=4)
    {
        a[i:i+3] = a[i-1:i+2] + 1;
        b[i:i+3] = *c + 1;
        bar(i);
        bar(i+1);
        bar(i+2);
        bar(i+3);
    }
```

Dispone **non validi** spostare il riferimento alla memoria `*c` all'esterno del ciclo se è possibile che sia alias con `a[i]` o `b[i]`. Inoltre non è consentito riordinare le istruzioni all'interno di un'iterazione originale se interrompe la dipendenza sequenza. Ad esempio, il ciclo seguente trasformato non è valido:

```c
    c = b;
    t = *c;
    for (i = 0; i < count; i+=4)
    {
        a[i:i+3] = a[i-1:i+2] + 1;
        bar(i);            // illegal to reorder if bar[i] depends on b[i]
        b[i:i+3] = t + 1;  // illegal to move *c out of the loop
        bar(i+1);
        bar(i+2);
        bar(i+3);
    }
```

## <a name="see-also"></a>Vedere anche

[/openmp (abilita supporto OpenMP 2.0)](../../build/reference/openmp-enable-openmp-2-0-support.md)<br/>
