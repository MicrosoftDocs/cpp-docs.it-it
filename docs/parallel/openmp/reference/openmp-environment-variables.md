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
ms.openlocfilehash: 73fb11db14df22e5df95fdec556ccdfc16a935e5
ms.sourcegitcommit: 14b292596bc9b9b883a9c58cd3e366b282a1f7b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "60124967"
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP

Fornisce collegamenti alle variabili di ambiente usate nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e modifiche sui rispettivi valori vengono ignorate in fase di esecuzione (ad esempio, usando [putenv, wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Variabile di ambiente|Descrizione|
|--------------------|-----------|
|[OMP_SCHEDULE](#omp-schedule)|Modifica il comportamento del [pianificazione](openmp-clauses.md#schedule) clausola quando `schedule(runtime)` viene specificato un `for` o `parallel for` direttiva.|
|[OMP_NUM_THREADS](#omp-num-threads)|Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) oppure [num_threads](openmp-clauses.md#num-threads).|
|[OMP_DYNAMIC](#omp-dynamic)|Specifica se il tempo di esecuzione di OpenMP può regolare il numero di thread in un'area parallela.|
|[OMP_NESTED](#omp-nested)|Specifica se è abilitato il parallelismo annidato, a meno che non è abilitato o disabilitato con parallelismo annidato `omp_set_nested`.|

## <a name="omp-dynamic"></a>OMP_DYNAMIC

Specifica se il tempo di esecuzione di OpenMP può regolare il numero di thread in un'area parallela.

```
set OMP_DYNAMIC[=TRUE | =FALSE]
```

### <a name="remarks"></a>Note

Il `OMP_DYNAMIC` variabile di ambiente può eseguire l'override di [omp_set_dynamic](openmp-functions.md#omp-set-dynamic) (funzione).

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per altre informazioni, vedere [OMP_DYNAMIC 4.3](../../../parallel/openmp/4-3-omp-dynamic.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_DYNAMIC` variabile di ambiente su TRUE:

```
set OMP_DYNAMIC=TRUE
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_DYNAMIC` variabile di ambiente:

```
set OMP_DYNAMIC
```

## <a name="omp-nested"></a>OMP_NESTED

Specifica se è abilitato il parallelismo annidato, a meno che non è abilitato o disabilitato con parallelismo annidato `omp_set_nested`.

```
set OMP_NESTED[=TRUE | =FALSE]
```

### <a name="remarks"></a>Note

Il `OMP_NESTED` variabile di ambiente può eseguire l'override di [omp_set_nested](openmp-functions.md#omp-set-nested) (funzione).

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per altre informazioni, vedere [4.4 OMP_NESTED](../../../parallel/openmp/4-4-omp-nested.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_NESTED` variabile di ambiente su TRUE:

```
set OMP_NESTED=TRUE
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_NESTED` variabile di ambiente:

```
set OMP_NESTED
```

## <a name="omp-num-threads"></a>OMP_NUM_THREADS

Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) oppure [num_threads](openmp-clauses.md#num-threads).

```
set OMP_NUM_THREADS[=num]
```

### <a name="parameters"></a>Parametri

*num*<br/>
Il numero massimo di thread desiderata nell'area parallela, un massimo di 64 nell'implementazione di Visual C++.

### <a name="remarks"></a>Note

Il `OMP_NUM_THREADS` variabile di ambiente può eseguire l'override di [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) (funzione) o tramite [num_threads](openmp-clauses.md#num-threads).

Il valore predefinito di `num` in Visual C++ implementazione dello standard OpenMP è il numero di processori virtuali, tra cui CPU hyperthreading.

Per altre informazioni, vedere [4.2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_NUM_THREADS` variabile di ambiente `16`:

```
set OMP_NUM_THREADS=16
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_NUM_THREADS` variabile di ambiente:

```
set OMP_NUM_THREADS
```

## <a name="omp-schedule"></a>OMP_SCHEDULE

Modifica il comportamento del [pianificazione](openmp-clauses.md#schedule) clausola quando `schedule(runtime)` viene specificato un `for` o `parallel for` direttiva.

```
set OMP_SCHEDULE[=type[,size]]
```

### <a name="parameters"></a>Parametri

*size*<br/>
(Facoltativo) Specifica le dimensioni di iterazioni. *dimensioni* deve essere un numero intero positivo. Il valore predefinito è `1`, tranne quando l'opzione *tipo* è statico. Non è valida quando *tipo* è `runtime`.

*type*<br/>
Il tipo di pianificazione, ovvero `dynamic`, `guided`, `runtime`, o `static`.

### <a name="remarks"></a>Note

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_SCHEDULE=static,0`.

Per altre informazioni, vedere [OMP_SCHEDULE 4.1](../../../parallel/openmp/4-1-omp-schedule.md).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_SCHEDULE` variabile di ambiente:

```
set OMP_SCHEDULE="guided,2"
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_SCHEDULE` variabile di ambiente:

```
set OMP_SCHEDULE
```
