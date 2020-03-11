---
title: Variabili di ambiente OpenMP
ms.date: 03/20/2019
f1_keywords:
- OpenMP environment variables
- OMP_DYNAMIC
- OMP_NESTED
- OMP_NUM_THREADS
- OMP_SCHEDULE
helpviewer_keywords:
- OpenMP environment variables
- OMP_DYNAMIC OpenMP environment variable
- OMP_NESTED OpenMP environment variable
- OMP_NUM_THREADS OpenMP environment variable
- OMP_SCHEDULE OpenMP environment variable
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
ms.openlocfilehash: 838427320fcb68cedb97b36156fc18002ed962d8
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78882904"
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP

Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.

L'implementazione C++ visiva dello standard OpenMP include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e le modifiche ai valori vengono ignorate in fase di esecuzione (ad esempio, utilizzando [_putenv _wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Variabile di ambiente|Descrizione|
|--------------------|-----------|
|[OMP_SCHEDULE](#omp-schedule)|Modifica il comportamento della clausola [Schedule](openmp-clauses.md#schedule) quando `schedule(runtime)` viene specificato in una direttiva `for` o `parallel for`.|
|[OMP_NUM_THREADS](#omp-num-threads)|Imposta il numero massimo di thread nell'area parallela, a meno che non venga sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).|
|[OMP_DYNAMIC](#omp-dynamic)|Specifica se il tempo di esecuzione OpenMP può regolare il numero di thread in un'area parallela.|
|[OMP_NESTED](#omp-nested)|Specifica se il parallelismo annidato è abilitato, a meno che non sia attivato o disabilitato il parallelismo annidato con `omp_set_nested`.|

## <a name="omp-dynamic"></a>OMP_DYNAMIC

Specifica se il tempo di esecuzione OpenMP può regolare il numero di thread in un'area parallela.

```cmd
set OMP_DYNAMIC[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override della variabile di ambiente `OMP_DYNAMIC` tramite la funzione [omp_set_dynamic](openmp-functions.md#omp-set-dynamic) .

Il valore predefinito nell'implementazione visiva C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per ulteriori informazioni, vedere [4,3 OMP_DYNAMIC](../../../parallel/openmp/4-3-omp-dynamic.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la variabile di ambiente `OMP_DYNAMIC` su TRUE:

```cmd
set OMP_DYNAMIC=TRUE
```

Il comando seguente Visualizza l'impostazione corrente della variabile di ambiente `OMP_DYNAMIC`:

```cmd
set OMP_DYNAMIC
```

## <a name="omp-nested"></a>OMP_NESTED

Specifica se il parallelismo annidato è abilitato, a meno che non sia attivato o disabilitato il parallelismo annidato con `omp_set_nested`.

```cmd
set OMP_NESTED[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override della variabile di ambiente `OMP_NESTED` tramite la funzione [omp_set_nested](openmp-functions.md#omp-set-nested) .

Il valore predefinito nell'implementazione visiva C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per ulteriori informazioni, vedere [4,4 OMP_NESTED](../../../parallel/openmp/4-4-omp-nested.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la variabile di ambiente `OMP_NESTED` su TRUE:

```cmd
set OMP_NESTED=TRUE
```

Il comando seguente Visualizza l'impostazione corrente della variabile di ambiente `OMP_NESTED`:

```cmd
set OMP_NESTED
```

## <a name="omp-num-threads"></a>OMP_NUM_THREADS

Imposta il numero massimo di thread nell'area parallela, a meno che non venga sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).

```cmd
set OMP_NUM_THREADS[=num]
```

### <a name="parameters"></a>Parametri

*num*<br/>
Il numero massimo di thread desiderati nell'area parallela, fino a 64 nell'implementazione visiva C++ .

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override della variabile di ambiente `OMP_NUM_THREADS` tramite la funzione [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) oppure [num_threads](openmp-clauses.md#num-threads).

Il valore predefinito di `num` nell'implementazione visiva C++ dello standard OpenMP è il numero di processori virtuali, incluse le CPU Hyper-Threading.

Per ulteriori informazioni, vedere [4,2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la variabile di ambiente `OMP_NUM_THREADS` su `16`:

```cmd
set OMP_NUM_THREADS=16
```

Il comando seguente Visualizza l'impostazione corrente della variabile di ambiente `OMP_NUM_THREADS`:

```cmd
set OMP_NUM_THREADS
```

## <a name="omp-schedule"></a>OMP_SCHEDULE

Modifica il comportamento della clausola [Schedule](openmp-clauses.md#schedule) quando `schedule(runtime)` viene specificato in una direttiva `for` o `parallel for`.

```cmd
set OMP_SCHEDULE[=type[,size]]
```

### <a name="parameters"></a>Parametri

*size*<br/>
Opzionale Specifica le dimensioni delle iterazioni. la *dimensione* deve essere un numero intero positivo. Il valore predefinito è `1`, tranne quando il *tipo* è statico. Non valido quando il *tipo* è `runtime`.

*type*<br/>
Tipo di pianificazione, ovvero `dynamic`, `guided`, `runtime`o `static`.

### <a name="remarks"></a>Osservazioni

Il valore predefinito nell'implementazione visiva C++ dello standard OpenMP è `OMP_SCHEDULE=static,0`.

Per ulteriori informazioni, vedere [4,1 OMP_SCHEDULE](../../../parallel/openmp/4-1-omp-schedule.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la variabile di ambiente `OMP_SCHEDULE`:

```cmd
set OMP_SCHEDULE="guided,2"
```

Il comando seguente Visualizza l'impostazione corrente della variabile di ambiente `OMP_SCHEDULE`:

```cmd
set OMP_SCHEDULE
```
