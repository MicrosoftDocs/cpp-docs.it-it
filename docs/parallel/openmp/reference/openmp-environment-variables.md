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
ms.openlocfilehash: bee9b0fbdf147ee962ff92d0b3b9ff57d4209f84
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363879"
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP

Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.

L'implementazione di Visual C, dello standard OpenMP include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e le modifiche ai relativi valori vengono ignorate in fase di esecuzione (ad esempio, utilizzando [_putenv, _wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Variabile di ambiente|Descrizione|
|--------------------|-----------|
|[OMP_SCHEDULE](#omp-schedule)|Modifica il comportamento della [schedule](openmp-clauses.md#schedule) clausola `schedule(runtime)` schedule quando `for` viene `parallel for` specificato in una direttiva o .|
|[OMP_NUM_THREADS](#omp-num-threads)|Imposta il numero massimo di thread nell'area parallela, a meno che non venga eseguito l'override di [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).|
|[OMP_DYNAMIC](#omp-dynamic)|Specifica se il runtime OpenMP può regolare il numero di thread in un'area parallela.|
|[OMP_NESTED](#omp-nested)|Specifica se il parallelismo annidato è abilitato, a meno `omp_set_nested`che il parallelismo annidato non sia abilitato o disabilitato con .|

## <a name="omp_dynamic"></a><a name="omp-dynamic"></a>OMP_DYNAMIC

Specifica se il runtime OpenMP può regolare il numero di thread in un'area parallela.

```cmd
set OMP_DYNAMIC[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

La `OMP_DYNAMIC` variabile di ambiente può essere sottoposta a override dalla funzione [omp_set_dynamic.](openmp-functions.md#omp-set-dynamic)

Il valore predefinito nell'implementazione dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per ulteriori informazioni, vedere [4.3 OMP_DYNAMIC](../../../parallel/openmp/4-3-omp-dynamic.md).

### <a name="example"></a>Esempio

Il comando seguente `OMP_DYNAMIC` imposta la variabile di ambiente su TRUE:

```cmd
set OMP_DYNAMIC=TRUE
```

Il comando seguente visualizza l'impostazione corrente della `OMP_DYNAMIC` variabile di ambiente:

```cmd
set OMP_DYNAMIC
```

## <a name="omp_nested"></a><a name="omp-nested"></a>OMP_NESTED

Specifica se il parallelismo annidato è abilitato, a meno `omp_set_nested`che il parallelismo annidato non sia abilitato o disabilitato con .

```cmd
set OMP_NESTED[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

La `OMP_NESTED` variabile di ambiente può essere sottoposta a override dalla funzione [omp_set_nested.](openmp-functions.md#omp-set-nested)

Il valore predefinito nell'implementazione dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per ulteriori informazioni, vedere [4.4 OMP_NESTED](../../../parallel/openmp/4-4-omp-nested.md).

### <a name="example"></a>Esempio

Il comando seguente `OMP_NESTED` imposta la variabile di ambiente su TRUE:

```cmd
set OMP_NESTED=TRUE
```

Il comando seguente visualizza l'impostazione corrente della `OMP_NESTED` variabile di ambiente:

```cmd
set OMP_NESTED
```

## <a name="omp_num_threads"></a><a name="omp-num-threads"></a>OMP_NUM_THREADS

Imposta il numero massimo di thread nell'area parallela, a meno che non venga eseguito l'override di [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).

```cmd
set OMP_NUM_THREADS[=num]
```

### <a name="parameters"></a>Parametri

*num*<br/>
Il numero massimo di thread desiderato nell'area parallela, fino a 64 nell'implementazione di Visual C.

### <a name="remarks"></a>Osservazioni

La `OMP_NUM_THREADS` variabile di ambiente può essere sottoposta a override dalla funzione [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o da [num_threads](openmp-clauses.md#num-threads).

Il valore `num` predefinito di nell'implementazione di Visual C, dello standard OpenMP, è il numero di processori virtuali, incluse le CPU di hyperthreading.

Per ulteriori informazioni, vedere [4.2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).

### <a name="example"></a>Esempio

Il comando seguente `OMP_NUM_THREADS` imposta `16`la variabile di ambiente su :

```cmd
set OMP_NUM_THREADS=16
```

Il comando seguente visualizza l'impostazione corrente della `OMP_NUM_THREADS` variabile di ambiente:

```cmd
set OMP_NUM_THREADS
```

## <a name="omp_schedule"></a><a name="omp-schedule"></a>OMP_SCHEDULE

Modifica il comportamento della [schedule](openmp-clauses.md#schedule) clausola `schedule(runtime)` schedule quando `for` viene `parallel for` specificato in una direttiva o .

```cmd
set OMP_SCHEDULE[=type[,size]]
```

### <a name="parameters"></a>Parametri

*Dimensione*<br/>
(Facoltativo) Specifica la dimensione delle iterazioni. *size* deve essere un numero intero positivo. Il valore `1`predefinito è , tranne quando *type* è static. Non valido quando `runtime`il *tipo* è .

*type*<br/>
Tipo di pianificazione, `dynamic`, `guided` `runtime`, `static`o .

### <a name="remarks"></a>Osservazioni

Il valore predefinito nell'implementazione dello standard OpenMP è `OMP_SCHEDULE=static,0`.

Per ulteriori informazioni, vedere [4.1 OMP_SCHEDULE](../../../parallel/openmp/4-1-omp-schedule.md).

### <a name="example"></a>Esempio

Il comando seguente `OMP_SCHEDULE` imposta la variabile di ambiente:

```cmd
set OMP_SCHEDULE="guided,2"
```

Il comando seguente visualizza l'impostazione corrente della `OMP_SCHEDULE` variabile di ambiente:

```cmd
set OMP_SCHEDULE
```
