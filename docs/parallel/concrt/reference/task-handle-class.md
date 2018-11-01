---
title: Classe task_handle
ms.date: 11/04/2016
f1_keywords:
- task_handle
- PPL/concurrency::task_handle
- PPL/concurrency::task_handle::task_handle
helpviewer_keywords:
- task_handle class
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
ms.openlocfilehash: c1a12555b0b7277fd6b52d935518e4bb1f297285
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50521359"
---
# <a name="taskhandle-class"></a>Classe task_handle

La classe `task_handle` rappresenta un elemento di lavoro parallelo individuale. Incapsula le istruzioni e i dati richiesti per eseguire un lavoro.

## <a name="syntax"></a>Sintassi

```
template<
    typename _Function
>
class task_handle : public ::Concurrency::details::_UnrealizedChore;
```

#### <a name="parameters"></a>Parametri

*_Function*<br/>
Il tipo dell'oggetto funzione che verrà richiamato per eseguire il lavoro rappresentato dal `task_handle` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[task_handle](#ctor)|Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito invocando la funzione specificata come parametro al costruttore.|
|[~ task_handle distruttore](#dtor)|Elimina definitivamente il `task_handle` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator()](#task_handle__operator_call)|L'operatore di chiamata di funzione che richiama il runtime per eseguire un'operazione dell'handle di attività.|

## <a name="remarks"></a>Note

`task_handle` gli oggetti possono essere utilizzati in combinazione con un `structured_task_group` o una più generico `task_group` oggetto per scomporre il lavoro in attività in parallelo. Per altre informazioni, vedere [Task Parallelism](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Si noti che l'autore di un `task_handle` oggetto è responsabile per la gestione della durata dell'oggetto creato `task_handle` dell'oggetto fino a quando non è più necessario dal Runtime di concorrenza. In genere, ciò significa che il `task_handle` oggetto non è necessario distruggere fino a quando non il `wait` o `run_and_wait` metodo per il `task_group` o `structured_task_group` a cui è in coda è stato chiamato.

`task_handle` gli oggetti vengono in genere usati in combinazione con le espressioni lambda C++. Perché non si conosce il tipo effettivo dell'espressione lambda, la [make_task](concurrency-namespace-functions.md#make_task) funzione viene in genere utilizzata per creare un `task_handle` oggetto.

Il runtime crea una copia della funzione lavoro che viene passato a un `task_handle` oggetto. Di conseguenza, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non compariranno nella propria copia di tale oggetto funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_handle`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="task_handle__operator_call"></a> operator)

L'operatore di chiamata di funzione che richiama il runtime per eseguire un'operazione dell'handle di attività.

```
void operator()() const;

```

##  <a name="task_handle__ctor"></a> task_handle

Costruisce un nuovo oggetto `task_handle`. Il lavoro dell'attività viene eseguito invocando la funzione specificata come parametro al costruttore.

```
task_handle(const _Function& _Func);
```

### <a name="parameters"></a>Parametri

*Func*<br/>
La funzione che verrà richiamata per eseguire il lavoro rappresentato dal `task_handle` oggetto. Potrebbe trattarsi di un funtore lambda, un puntatore a una funzione, o qualsiasi oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.

### <a name="remarks"></a>Note

Il runtime crea una copia della funzione lavoro che viene passato al costruttore. Di conseguenza, le modifiche di stato che si verificano in una funzione dell'oggetto passato a un `task_handle` oggetto non compariranno nella propria copia di tale oggetto funzione.

##  <a name="dtor"></a> ~task_handle

Elimina definitivamente il `task_handle` oggetto.

```
~task_handle();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
