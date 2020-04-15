---
title: 4. Variabili di ambiente
ms.date: 01/16/2019
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
ms.openlocfilehash: e93c59654c17ed6dbfb7483ac2dce716ce24b52a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370258"
---
# <a name="4-environment-variables"></a>4. Variabili di ambiente

In questo capitolo vengono descritte le variabili di ambiente dell'API OpenMP C e C. (o meccanismi simili specifici della piattaforma) che controllano l'esecuzione di codice parallelo.  I nomi delle variabili di ambiente devono essere in maiuscolo. I valori assegnati non fanno distinzione tra maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo l'avvio del programma vengono ignorate.

Le variabili di ambiente sono le seguenti:

- [OMP_SCHEDULE](#41-omp_schedule) imposta il tipo di pianificazione in fase di esecuzione e la dimensione del blocco.
- [OMP_NUM_THREADS](#42-omp_num_threads) imposta il numero di thread da utilizzare durante l'esecuzione.
- [OMP_DYNAMIC](#43-omp_dynamic) abilita o disabilita la regolazione dinamica del numero di thread.
- [OMP_NESTED](#44-omp_nested) abilita o disabilita il parallelismo annidato.

Gli esempi in questo capitolo illustrano solo come queste variabili potrebbero essere impostate in ambienti di shell Unix C (csh). Negli ambienti Korn shell e DOS, le azioni sono simili:

Csh:  
`setenv OMP_SCHEDULE "dynamic"`

Ksh:  
`export OMP_SCHEDULE="dynamic"`

Dos:  
`set OMP_SCHEDULE="dynamic"`

## <a name="41-omp_schedule"></a><a name="41-omp_schedule"></a>4.1 OMP_SCHEDULE

`OMP_SCHEDULE`si applica `for` `parallel for` solo a e direttive con il tipo `runtime`di pianificazione . Il tipo di pianificazione e la dimensione del blocco per tutti questi cicli possono essere impostati in fase di esecuzione. Impostare questa variabile di ambiente su qualsiasi tipo di pianificazione riconosciuto e su un *chunk_size*facoltativo.

Le `for` `parallel for` direttive for e that `runtime`have `OMP_SCHEDULE` a schedule type other than , vengono ignorate. Il valore predefinito per questa variabile di ambiente è definito dall'implementazione. Se è impostato il *chunk_size* facoltativo, il valore deve essere positivo. Se *non chunk_size* è impostato, viene utilizzato il valore `static`1, tranne quando la pianificazione è . Per `static` una pianificazione, la dimensione predefinita del blocco viene impostata sullo spazio di iterazione del ciclo diviso per il numero di thread applicati al ciclo.

Esempio:

```csh
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

### <a name="cross-references"></a>Riferimenti incrociati

- [per](2-directives.md#241-for-construct) la direttiva
- [parallelo per](2-directives.md#251-parallel-for-construct) la direttiva

## <a name="42-omp_num_threads"></a><a name="42-omp_num_threads"></a>4.2 OMP_NUM_THREADS

La `OMP_NUM_THREADS` variabile di ambiente imposta il numero predefinito di thread da utilizzare durante l'esecuzione. `OMP_NUM_THREADS`viene ignorato se tale numero `omp_set_num_threads` viene modificato in modo esplicito chiamando la routine della libreria. Viene inoltre ignorato se è `num_threads` presente una `parallel` clausola esplicita in una direttiva.

Il valore `OMP_NUM_THREADS` della variabile di ambiente deve essere un numero intero positivo. Il suo effetto dipende dall'abilitazione della regolazione dinamica del numero di thread. Per un insieme completo di regole `OMP_NUM_THREADS` sull'interazione tra la variabile di ambiente e la regolazione dinamica dei thread, vedere la [sezione 2.3.](2-directives.md#23-parallel-construct)

Il numero di thread da utilizzare è definito dall'implementazione se:The number of threads to use is implementation-defined if:

- la `OMP_NUM_THREADS` variabile di ambiente non è specificata,
- il valore specificato non è un numero intero positivo, o
- il valore è maggiore del numero massimo di thread che il sistema può supportare.

Esempio:

```csh
setenv OMP_NUM_THREADS 16
```

### <a name="cross-references"></a>Riferimenti incrociati

- [clausola num_threads](2-directives.md#23-parallel-construct)
- [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function) funzione
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) (funzione)

## <a name="43-omp_dynamic"></a><a name="43-omp_dynamic"></a>4.3 OMP_DYNAMIC

La `OMP_DYNAMIC` variabile di ambiente abilita o disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. `OMP_DYNAMIC`viene ignorato quando la regolazione dinamica `omp_set_dynamic` viene abilitata o disabilitata in modo esplicito chiamando la routine della libreria. Il suo `TRUE` valore `FALSE`deve essere o .

Se `OMP_DYNAMIC` è `TRUE`impostato su , il numero di thread utilizzati per l'esecuzione di aree parallele può essere regolato dall'ambiente di runtime per utilizzare al meglio le risorse di sistema.  Se `OMP_DYNAMIC` è `FALSE`impostato su , la regolazione dinamica è disabilitata. La condizione predefinita è definita dall'implementazione.

Esempio:

```csh
setenv OMP_DYNAMIC TRUE
```

### <a name="cross-references"></a>Riferimenti incrociati

- [Regioni parallele](2-directives.md#23-parallel-construct)
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) (funzione)

## <a name="44-omp_nested"></a><a name="44-omp_nested"></a>4.4 OMP_NESTED

La `OMP_NESTED` variabile di ambiente abilita o disabilita il parallelismo annidato, `omp_set_nested` a meno che il parallelismo annidato non sia abilitato o disabilitato chiamando la routine della libreria. Se `OMP_NESTED` è `TRUE`impostato su , il parallelismo nidificato è abilitato. Se `OMP_NESTED` è `FALSE`impostato su , il parallelismo annidato è disabilitato. Il valore predefinito è `FALSE`.

Esempio:

```csh
setenv OMP_NESTED TRUE
```

### <a name="cross-reference"></a>Riferimento incrociato

- [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) (funzione)
