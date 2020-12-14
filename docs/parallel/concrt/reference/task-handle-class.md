---
description: 'Altre informazioni su: task_handle Class'
title: Classe task_handle
ms.date: 03/27/2019
f1_keywords:
- task_handle
- PPL/concurrency::task_handle
- PPL/concurrency::task_handle::task_handle
helpviewer_keywords:
- task_handle class
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
ms.openlocfilehash: 21fa2a1782fad200061deb1e85bf052613354a34
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188222"
---
# <a name="task_handle-class"></a>Classe task_handle

La classe `task_handle` rappresenta un elemento di lavoro parallelo individuale. Incapsula le istruzioni e i dati richiesti per eseguire un lavoro.

## <a name="syntax"></a>Sintassi

```cpp
template<
    typename _Function
>
class task_handle : public ::Concurrency::details::_UnrealizedChore;
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che verrà richiamato per eseguire il lavoro rappresentato dall' `task_handle` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[task_handle](#task_handle)|Costruisce un oggetto `task_handle` nuovo. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro per il costruttore.|
|[distruttore ~ task_handle](#dtor)|Elimina definitivamente l' `task_handle` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore ()](#task_handle__operator_call)|Operatore di chiamata di funzione richiamato dal runtime per eseguire il lavoro dell'handle dell'attività.|

## <a name="remarks"></a>Commenti

`task_handle` gli oggetti possono essere usati insieme a un `structured_task_group` oggetto o a un `task_group` oggetto più generale per scomporre il lavoro in attività parallele. Per altre informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Si noti che l'autore di un `task_handle` oggetto è responsabile della gestione della durata dell' `task_handle` oggetto creato fino a quando non è più richiesto dal runtime di concorrenza. In genere, ciò significa che l' `task_handle` oggetto non deve essere distrutto finché `wait` non `run_and_wait` viene chiamato il metodo o di `task_group` o `structured_task_group` in cui è in coda.

`task_handle` gli oggetti vengono in genere utilizzati insieme alle espressioni lambda C++. Poiché non si conosce il tipo true dell'espressione lambda, la funzione [make_task](concurrency-namespace-functions.md#make_task) viene in genere utilizzata per creare un `task_handle` oggetto.

Il runtime crea una copia della funzione lavoro passata a un `task_handle` oggetto. Pertanto, qualsiasi modifica dello stato che si verifica in un oggetto funzione passato a un `task_handle` oggetto non verrà visualizzata nella copia dell'oggetto funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_handle`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="operator"></a><a name="task_handle__operator_call"></a> operatore ()

Operatore di chiamata di funzione richiamato dal runtime per eseguire il lavoro dell'handle dell'attività.

```cpp
void operator()() const;
```

## <a name="task_handle"></a><a name="task_handle"></a> task_handle

Costruisce un oggetto `task_handle` nuovo. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro per il costruttore.

```cpp
task_handle(const _Function& _Func);
```

### <a name="parameters"></a>Parametri

*_Func*<br/>
Funzione che verrà richiamata per eseguire il lavoro rappresentato dall' `task_handle` oggetto. Questo può essere un functor lambda, un puntatore a una funzione o qualsiasi oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()` .

### <a name="remarks"></a>Commenti

Il runtime crea una copia della funzione lavoro passata al costruttore. Pertanto, qualsiasi modifica dello stato che si verifica in un oggetto funzione passato a un `task_handle` oggetto non verrà visualizzata nella copia dell'oggetto funzione.

## <a name="task_handle"></a><a name="dtor"></a> ~ task_handle

Elimina definitivamente l' `task_handle` oggetto.

```cpp
~task_handle();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
