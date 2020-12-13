---
description: 'Altre informazioni su: estensione SIMD'
title: Estensione SIMD
ms.date: 03/20/2019
helpviewer_keywords:
- SIMD
- OpenMP in Visual C++, new features
- explicit parallelization, new features
ms.openlocfilehash: 58a3f29002c4e517a2019454dfe741dfb5352a3e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342426"
---
# <a name="simd-extension"></a>Estensione SIMD

Visual C++ attualmente supporta lo standard OpenMP 2,0, tuttavia Visual Studio 2019 offre ora anche la funzionalità SIMD.

> [!NOTE]
> Per usare SIMD, compilare con l' `-openmp:experimental` opzione che Abilita funzionalità OpenMP aggiuntive non disponibili quando si usa l' `-openmp` opzione.
>
> L' `-openmp:experimental` opzione sussume `-openmp` , che significa che tutte le funzionalità OpenMP 2,0 sono incluse nell'uso.

Per altre informazioni, vedere [SIMD Extension to C++ OpenMP in Visual Studio](https://devblogs.microsoft.com/cppblog/simd-extension-to-c-openmp-in-visual-studio/).

## <a name="openmp-simd-in-visual-c"></a>SIMD OpenMP in Visual C++

OpenMP SIMD, introdotto nello standard OpenMP 4,0, ha come obiettivo la creazione di cicli semplici da Vector. Usando la `simd` direttiva prima di un ciclo, il compilatore può ignorare le dipendenze dei vettori, rendere il ciclo il più semplice possibile per il vettore e rispettare l'intenzione degli utenti di eseguire simultaneamente più iterazioni del ciclo.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Visual C++ fornisce pragma di ciclo non OpenMP simili come `#pragma vector` e `#pragma ivdep` , tuttavia con OpenMP SIMD, il compilatore può eseguire altre operazioni, ad esempio:

- È sempre consentito ignorare le dipendenze di vettori presenti.
- `/fp:fast` è abilitato all'interno del ciclo.
- I cicli e i cicli esterni con chiamate di funzione sono semplici da Vector.
- I cicli annidati possono essere Uniti in un unico ciclo e possono essere resi semplici da vettori.
- Accelerazione ibrida con `#pragma omp for simd` per abilitare il multithreading con granularità grossolana e i vettori con granularità fine.  

Per i cicli semplici da Vector, il compilatore rimane invisibile a meno che non si usi un'opzione di log di supporto vettoriale:

```cmd
    cl -O2 -openmp:experimental -Qvec-report:2 mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(96) : info C5001: Omp simd loop vectorized
```

Per i cicli non semplici da Vector, il compilatore genera ogni messaggio:

```cmd
    cl -O2 -openmp:experimental mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
```

### <a name="clauses"></a>Clausole

La direttiva SIMD OpenMP può anche adottare le clausole seguenti per migliorare il supporto vettoriale:

|Direttiva|Description|
|---|---|
|`simdlen(length)`|Specificare il numero di corsie vettoriali.|
|`safelen(length)`|Specificare la distanza di dipendenza del vettore.|
|`linear(list[ : linear-step]`)|Mapping lineare dalla variabile di induzione del ciclo alla sottoscrizione di matrici.|
|`aligned(list[ : alignment])`|Allineamento dei dati.|
|`private(list)`|Specificare la privatizzazione dei dati.|
|`lastprivate(list)`|Specificare la privatizzazione dei dati con valore finale dall'ultima iterazione.|
|`reduction(reduction-identifier:list)`|Specificare operazioni di riduzione personalizzate.|
|`collapse(n)`|Annidamento del ciclo di Unione.|

> [!NOTE]
> Le clausole SIMD non valide vengono analizzate e ignorate dal compilatore con un avviso.
>
> Ad esempio, l'uso del codice seguente genera un avviso:
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
  
La direttiva SIMD OpenMP fornisce agli utenti un modo per determinare i cicli di utilizzo del compilatore. Annotando un ciclo con la direttiva OpenMP SIMD, gli utenti intendono eseguire contemporaneamente più iterazioni del ciclo.

Ad esempio, il ciclo seguente viene annotato con la direttiva OpenMP SIMD. Non esiste un parallelismo perfetto tra le iterazioni del ciclo perché esiste una dipendenza all'indietro da [i] a [i-1], ma a causa della direttiva SIMD il compilatore è ancora autorizzato a comprimere iterazioni consecutive della prima istruzione in un'istruzione vettoriale ed eseguirle in parallelo.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Pertanto, il seguente formato vettoriale trasformato del ciclo è **valido** perché il compilatore mantiene il comportamento sequenziale di ogni iterazione del ciclo originale. In altre parole, `a[i]` viene eseguito dopo `a[-1]` , `b[i]` è dopo `a[i]` e la chiamata a si `bar` verifica per ultima.

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

Non è **consentito** spostare il riferimento alla memoria `*c` fuori dal ciclo se è possibile alias con `a[i]` o `b[i]` . Non è inoltre consentito riordinare le istruzioni all'interno di un'iterazione originale se si interrompe la dipendenza sequenziale. Il ciclo trasformato seguente, ad esempio, non è valido:

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

## <a name="see-also"></a>Vedi anche

[/OpenMP (Abilita il supporto OpenMP 2,0)](../../build/reference/openmp-enable-openmp-2-0-support.md)<br/>
