---
title: Estensione SIMD
ms.date: 03/20/2019
helpviewer_keywords:
- SIMD
- OpenMP in Visual C++, new features
- explicit parallelization, new features
ms.openlocfilehash: 0a7f1142a3a432628795341f4885b76a5c144990
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366458"
---
# <a name="simd-extension"></a>Estensione SIMD

Attualmente è supportato lo standard OpenMP 2.0, tuttavia Visual Studio 2019 offre anche funzionalità SIMD.

> [!NOTE]
> Per utilizzare SIMD, `-openmp:experimental` compilare con lo switch che abilita `-openmp` ulteriori funzionalità OpenMP non disponibili quando si utilizza lo switch.
>
> I `-openmp:experimental` componenti su `-openmp`base switch , ovvero tutte le funzionalità di OpenMP 2.0 sono incluse nel suo utilizzo.

Per ulteriori informazioni, vedere [Estensione SIMD per l'estensione OpenMP](https://devblogs.microsoft.com/cppblog/simd-extension-to-c-openmp-in-visual-studio/)di C' in Visual Studio .

## <a name="openmp-simd-in-visual-c"></a>SimD OpenMP in Visual C

OpenMP SIMD, introdotto nello standard OpenMP 4.0, obiettivi che fanno loop vettoriali. Utilizzando la `simd` direttiva prima di un ciclo, il compilatore può ignorare le dipendenze vettoriali, rendere il ciclo il più compatibile con il vettore possibile e rispettare l'intenzione degli utenti di avere più iterazioni del ciclo eseguite contemporaneamente.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

In Visual Cè sono disponibili pragma `#pragma vector` di `#pragma ivdep`loop simili e, tuttavia con OpenMP SIMD, il compilatore può eseguire altre azioni, ad esempio:

- Sempre consentito ignorare le dipendenze vettoriali presenti.
- `/fp:fast`è abilitato all'interno del ciclo.
- I cicli esterni e i cicli con chiamate di funzione sono vettoriali.
- I loop nidificati possono essere uniti in un unico ciclo e resi vettoriali.Nested loops can be coalesced into one loop and made vector-friendly.
- Accelerazione `#pragma omp for simd` ibrida con per consentire vettori grossolani multithreading e granularità fine.  

Per i cicli vector-friendly, il compilatore rimane invisibile all'utente a meno che non si utilizzi un'opzione di log di supporto vettoriale:For vector-friendly loops, the compiler remains silent unless you use a vector-support log switch:

```cmd
    cl -O2 -openmp:experimental -Qvec-report:2 mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(96) : info C5001: Omp simd loop vectorized
```

Per i cicli non vettoriali, il compilatore genera un messaggio:

```cmd
    cl -O2 -openmp:experimental mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
```

### <a name="clauses"></a>Clausole

La direttiva OPENMP SIMD può anche accettare le seguenti clausole per migliorare il supporto vettoriale:

|Direttiva|Descrizione|
|---|---|
|`simdlen(length)`|Specificare il numero di corsie vettoriali.|
|`safelen(length)`|Specificare la distanza di dipendenza del vettore.|
|`linear(list[ : linear-step]`)|Il mapping lineare dalla variabile di induzione del ciclo alla sottoscrizione di matrice.|
|`aligned(list[ : alignment])`|L'allineamento dei dati.|
|`private(list)`|Specificare la privatizzazione dei dati.|
|`lastprivate(list)`|Specificare la privatizzazione dei dati con il valore finale dell'ultima iterazione.|
|`reduction(reduction-identifier:list)`|Specificare operazioni di riduzione personalizzate.|
|`collapse(n)`|Nido di loop Coalescing.|

> [!NOTE]
> Le clausole SIMD non efficaci vengono analizzate e ignorate dal compilatore con un avviso.
>
> Ad esempio, l'utilizzo del codice seguente genera un avviso:
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
  
La direttiva SIMD OpenMP fornisce agli utenti un modo per dettare al compilatore un ciclo compatibile con i cicli. Annotando un ciclo con la direttiva SIMD OpenMP, gli utenti intendono avere più iterazioni del ciclo eseguite contemporaneamente.

Ad esempio, il ciclo seguente è annotato con la direttiva SIMD OpenMP. Non esiste un parallelismo perfetto tra le iterazioni del ciclo poiché esiste una dipendenza all'indietro da a[i] a [i-1], ma a causa della direttiva SIMD il compilatore è ancora autorizzato a comprimere le iterazioni consecutive della prima istruzione in un'istruzione vettoriale ed eseguirle in parallelo.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Pertanto, la seguente forma vettoriale trasformata del ciclo è **valida** perché il compilatore mantiene il comportamento sequenziale di ogni iterazione del ciclo originale. In altre `a[i]` parole, viene `a[-1]` `b[i]` eseguito `a[i]` dopo , `bar` è dopo e la chiamata a avviene per ultima.

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

Non è **legale** spostare il `*c` riferimento di memoria fuori `a[i]` dal `b[i]`ciclo se può alias con o . Inoltre, non è legale riordinare le istruzioni all'interno di un'iterazione originale se interrompe la dipendenza sequenziale. Ad esempio, il seguente ciclo trasformato non è valido:For example, the following transformed loop isn't legal:

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

[/openmp (Attiva supporto OpenMP 2.0)](../../build/reference/openmp-enable-openmp-2-0-support.md)<br/>
