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
ms.openlocfilehash: 3f9117c531bdf0c5a0c94e0b18a055591f431036
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91503746"
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP

Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.

L'implementazione Visual C++ dello standard OpenMP include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e le modifiche ai valori vengono ignorate in fase di esecuzione (ad esempio, utilizzando [_putenv _wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Variabile di ambiente|Descrizione|
|--------------------|-----------|
|[OMP_SCHEDULE](#omp-schedule)|Modifica il comportamento della clausola [Schedule](openmp-clauses.md#schedule) quando `schedule(runtime)` viene specificato in una `for` direttiva o `parallel for` .|
|[OMP_NUM_THREADS](#omp-num-threads)|Imposta il numero massimo di thread nell'area parallela, a meno che non venga sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).|
|[OMP_DYNAMIC](#omp-dynamic)|Specifica se il tempo di esecuzione OpenMP può regolare il numero di thread in un'area parallela.|
|[OMP_NESTED](#omp-nested)|Specifica se il parallelismo annidato è abilitato, a meno che il parallelismo annidato non sia abilitato o disabilitato con `omp_set_nested` .|

## <a name="omp_dynamic"></a><a name="omp-dynamic"></a> OMP_DYNAMIC

Specifica se il tempo di esecuzione OpenMP può regolare il numero di thread in un'area parallela.

```cmd
set OMP_DYNAMIC[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

La `OMP_DYNAMIC` variabile di ambiente può essere sottoposta a override dalla funzione [omp_set_dynamic](openmp-functions.md#omp-set-dynamic) .

Il valore predefinito nell'implementazione Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE` .

Per ulteriori informazioni, vedere [4,3 OMP_DYNAMIC](../4-environment-variables.md#43-omp_dynamic).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_DYNAMIC` variabile di ambiente su true:

```cmd
set OMP_DYNAMIC=TRUE
```

Il comando seguente Visualizza l'impostazione corrente della `OMP_DYNAMIC` variabile di ambiente:

```cmd
set OMP_DYNAMIC
```

## <a name="omp_nested"></a><a name="omp-nested"></a> OMP_NESTED

Specifica se il parallelismo annidato è abilitato, a meno che il parallelismo annidato non sia abilitato o disabilitato con `omp_set_nested` .

```cmd
set OMP_NESTED[=TRUE | =FALSE]
```

### <a name="remarks"></a>Osservazioni

La `OMP_NESTED` variabile di ambiente può essere sottoposta a override dalla funzione [omp_set_nested](openmp-functions.md#omp-set-nested) .

Il valore predefinito nell'implementazione Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE` .

Per ulteriori informazioni, vedere [4,4 OMP_NESTED](../4-environment-variables.md#44-omp_nested).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_NESTED` variabile di ambiente su true:

```cmd
set OMP_NESTED=TRUE
```

Il comando seguente Visualizza l'impostazione corrente della `OMP_NESTED` variabile di ambiente:

```cmd
set OMP_NESTED
```

## <a name="omp_num_threads"></a><a name="omp-num-threads"></a> OMP_NUM_THREADS

Imposta il numero massimo di thread nell'area parallela, a meno che non venga sottoposto a override da [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).

```cmd
set OMP_NUM_THREADS[=num]
```

### <a name="parameters"></a>Parametri

*num*<br/>
Numero massimo di thread desiderati nell'area parallela, fino a 64 nell'implementazione del Visual C++.

### <a name="remarks"></a>Osservazioni

`OMP_NUM_THREADS`È possibile eseguire l'override della variabile di ambiente tramite la funzione [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) o [num_threads](openmp-clauses.md#num-threads).

Il valore predefinito di `num` nell'implementazione Visual C++ dello standard OpenMP è il numero di processori virtuali, incluse le CPU Hyper-Threading.

Per ulteriori informazioni, vedere [4,2 OMP_NUM_THREADS](../4-environment-variables.md#42-omp_num_threads).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_NUM_THREADS` variabile di ambiente su `16` :

```cmd
set OMP_NUM_THREADS=16
```

Il comando seguente Visualizza l'impostazione corrente della `OMP_NUM_THREADS` variabile di ambiente:

```cmd
set OMP_NUM_THREADS
```

## <a name="omp_schedule"></a><a name="omp-schedule"></a> OMP_SCHEDULE

Modifica il comportamento della clausola [Schedule](openmp-clauses.md#schedule) quando `schedule(runtime)` viene specificato in una `for` direttiva o `parallel for` .

```cmd
set OMP_SCHEDULE[=type[,size]]
```

### <a name="parameters"></a>Parametri

*size*<br/>
Opzionale Specifica le dimensioni delle iterazioni. la *dimensione* deve essere un numero intero positivo. Il valore predefinito è `1` , tranne quando il *tipo* è statico. Non valido quando il *tipo* è `runtime` .

*type*<br/>
Tipo di pianificazione, ovvero,, `dynamic` `guided` `runtime` o `static` .

### <a name="remarks"></a>Osservazioni

Il valore predefinito nell'implementazione Visual C++ dello standard OpenMP è `OMP_SCHEDULE=static,0` .

Per ulteriori informazioni, vedere [4,1 OMP_SCHEDULE](../4-environment-variables.md#41-omp_schedule).

### <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_SCHEDULE` variabile di ambiente:

```cmd
set OMP_SCHEDULE="guided,2"
```

Il comando seguente Visualizza l'impostazione corrente della `OMP_SCHEDULE` variabile di ambiente:

```cmd
set OMP_SCHEDULE
```
