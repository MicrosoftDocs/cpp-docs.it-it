---
description: 'Altre informazioni su: 4. Variabili di ambiente'
title: 4. Variabili di ambiente
ms.date: 01/16/2019
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
ms.openlocfilehash: 47c0d557497a387f89c13c88c414aae9eb9377ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342530"
---
# <a name="4-environment-variables"></a>4. variabili di ambiente

In questo capitolo vengono descritte le variabili di ambiente dell'API OpenMP C e C++ (o meccanismi simili specifici della piattaforma) che controllano l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere in lettere maiuscole. I valori assegnati non fanno distinzione tra maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo l'avvio del programma verranno ignorate.

Le variabili di ambiente sono le seguenti:

- [OMP_SCHEDULE](#41-omp_schedule) imposta il tipo di pianificazione della fase di esecuzione e le dimensioni del blocco.
- [OMP_NUM_THREADS](#42-omp_num_threads) imposta il numero di thread da utilizzare durante l'esecuzione.
- [OMP_DYNAMIC](#43-omp_dynamic) Abilita o Disabilita la regolazione dinamica del numero di thread.
- [OMP_NESTED](#44-omp_nested) Abilita o Disabilita il parallelismo annidato.

Gli esempi in questo capitolo dimostrano solo il modo in cui queste variabili possono essere impostate negli ambienti UNIX C shell (csh). Negli ambienti Korn Shell e DOS le azioni sono simili:

csh  
`setenv OMP_SCHEDULE "dynamic"`

ksh  
`export OMP_SCHEDULE="dynamic"`

DOS  
`set OMP_SCHEDULE="dynamic"`

## <a name="41-omp_schedule"></a><a name="41-omp_schedule"></a> 4,1 OMP_SCHEDULE

`OMP_SCHEDULE` si applica solo `for` alle `parallel for` direttive e con il tipo di pianificazione `runtime` . Il tipo di pianificazione e le dimensioni del blocco per tutti questi cicli possono essere impostati in fase di esecuzione. Impostare questa variabile di ambiente su qualsiasi tipo di pianificazione riconosciuto e su un *chunk_size* facoltativo.

Per `for` le `parallel for` direttive e con un tipo di pianificazione diverso da `runtime` , `OMP_SCHEDULE` viene ignorato. Il valore predefinito per questa variabile di ambiente è definito dall'implementazione. Se è impostato il *chunk_size* facoltativo, il valore deve essere positivo. Se *chunk_size* non è impostato, viene utilizzato il valore 1, tranne quando la pianificazione è `static` . Per una `static` pianificazione, le dimensioni predefinite del blocco sono impostate sullo spazio di iterazione del ciclo diviso per il numero di thread applicato al ciclo.

Esempio:

```csh
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

### <a name="cross-references"></a>Riferimenti incrociati

- [for](2-directives.md#241-for-construct) (direttiva)
- [parallel for](2-directives.md#251-parallel-for-construct) (direttiva)

## <a name="42-omp_num_threads"></a><a name="42-omp_num_threads"></a> 4,2 OMP_NUM_THREADS

La `OMP_NUM_THREADS` variabile di ambiente imposta il numero predefinito di thread da usare durante l'esecuzione. `OMP_NUM_THREADS` viene ignorato se tale numero viene modificato in modo esplicito chiamando la `omp_set_num_threads` routine della libreria. Viene inoltre ignorato se è presente una clausola esplicita `num_threads` in una `parallel` direttiva.

Il valore della `OMP_NUM_THREADS` variabile di ambiente deve essere un numero intero positivo. L'effetto dipende dal fatto che la regolazione dinamica del numero di thread sia abilitata. Per un set completo di regole sull'interazione tra la `OMP_NUM_THREADS` variabile di ambiente e la regolazione dinamica dei thread, vedere la [sezione 2,3](2-directives.md#23-parallel-construct).

Il numero di thread da usare è definito dall'implementazione se:

- la `OMP_NUM_THREADS` variabile di ambiente non è specificata.
- il valore specificato non è un numero intero positivo o
- il valore è maggiore del numero massimo di thread che il sistema è in grado di supportare.

Esempio:

```csh
setenv OMP_NUM_THREADS 16
```

### <a name="cross-references"></a>Riferimenti incrociati

- clausola [num_threads](2-directives.md#23-parallel-construct)
- funzione [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function)
- funzione [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function)

## <a name="43-omp_dynamic"></a><a name="43-omp_dynamic"></a> 4,3 OMP_DYNAMIC

La `OMP_DYNAMIC` variabile di ambiente Abilita o Disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. `OMP_DYNAMIC` viene ignorato quando la regolazione dinamica viene abilitata o disabilitata in modo esplicito chiamando la `omp_set_dynamic` routine della libreria. Il valore deve essere `TRUE` o `FALSE` .

Se `OMP_DYNAMIC` è impostato su `TRUE` , il numero di thread utilizzati per l'esecuzione di aree parallele può essere regolato dall'ambiente di runtime per utilizzare al meglio le risorse di sistema.  Se `OMP_DYNAMIC` è impostato su `FALSE` , la regolazione dinamica è disabilitata. La condizione predefinita è definita dall'implementazione.

Esempio:

```csh
setenv OMP_DYNAMIC TRUE
```

### <a name="cross-references"></a>Riferimenti incrociati

- [Aree parallele](2-directives.md#23-parallel-construct)
- funzione [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function)

## <a name="44-omp_nested"></a><a name="44-omp_nested"></a> 4,4 OMP_NESTED

La `OMP_NESTED` variabile di ambiente Abilita o Disabilita il parallelismo annidato, a meno che il parallelismo annidato non venga abilitato o disabilitato chiamando la `omp_set_nested` routine della libreria. Se `OMP_NESTED` è impostato su `TRUE` , il parallelismo annidato è abilitato. Se `OMP_NESTED` è impostato su `FALSE` , il parallelismo annidato è disabilitato. Il valore predefinito è `FALSE`.

Esempio:

```csh
setenv OMP_NESTED TRUE
```

### <a name="cross-reference"></a>Riferimento incrociato

- funzione [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function)
