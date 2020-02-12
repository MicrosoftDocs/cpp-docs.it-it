---
title: Classe task_handle
ms.date: 03/27/2019
f1_keywords:
- task_handle
- PPL/concurrency::task_handle
- PPL/concurrency::task_handle::task_handle
helpviewer_keywords:
- task_handle class
ms.assetid: 74a34b15-708b-4231-a509-947874292b13
ms.openlocfilehash: a61e72f14448d5033d5be9069ffeec7d3bb08061
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142549"
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
Tipo dell'oggetto funzione che verrà richiamato per eseguire il lavoro rappresentato dall'oggetto `task_handle`.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[task_handle](#task_handle)|Costruisce un oggetto `task_handle` nuovo. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro per il costruttore.|
|[distruttore ~ task_handle](#dtor)|Elimina definitivamente l'oggetto `task_handle`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator()](#task_handle__operator_call)|Operatore di chiamata di funzione richiamato dal runtime per eseguire il lavoro dell'handle dell'attività.|

## <a name="remarks"></a>Osservazioni

per scomporre il lavoro in attività parallele, è possibile usare gli oggetti `task_handle` insieme a una `structured_task_group` o a un oggetto `task_group` più generale. Per altre informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

Si noti che il creatore di un oggetto `task_handle` è responsabile della gestione della durata dell'oggetto `task_handle` creato fino a quando non è più necessario per il runtime di concorrenza. In genere, ciò significa che l'oggetto `task_handle` non deve essere distrutto finché non viene chiamato il metodo `wait` o `run_and_wait` del `task_group` o `structured_task_group` in cui è accodato.

gli oggetti `task_handle` vengono in genere utilizzati insieme C++ alle espressioni lambda. Poiché non si conosce il tipo true dell'espressione lambda, la funzione [make_task](concurrency-namespace-functions.md#make_task) viene in genere utilizzata per creare un oggetto `task_handle`.

Il runtime crea una copia della funzione lavoro passata a un oggetto `task_handle`. Pertanto, qualsiasi modifica dello stato che si verifica in un oggetto funzione passato a un oggetto `task_handle` non verrà visualizzata nella copia dell'oggetto funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_handle`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="task_handle__operator_call"></a>operatore ()

Operatore di chiamata di funzione richiamato dal runtime per eseguire il lavoro dell'handle dell'attività.

```cpp
void operator()() const;
```

## <a name="task_handle"></a>task_handle

Costruisce un oggetto `task_handle` nuovo. Il lavoro dell'attività viene eseguito richiamando la funzione specificata come parametro per il costruttore.

```cpp
task_handle(const _Function& _Func);
```

### <a name="parameters"></a>Parametri

*_Func*<br/>
Funzione che verrà richiamata per eseguire il lavoro rappresentato dall'oggetto `task_handle`. Questo può essere un functor lambda, un puntatore a una funzione o qualsiasi oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()`.

### <a name="remarks"></a>Osservazioni

Il runtime crea una copia della funzione lavoro passata al costruttore. Pertanto, qualsiasi modifica dello stato che si verifica in un oggetto funzione passato a un oggetto `task_handle` non verrà visualizzata nella copia dell'oggetto funzione.

## <a name="dtor"></a>~ task_handle

Elimina definitivamente l'oggetto `task_handle`.

```cpp
~task_handle();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
