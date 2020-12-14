---
description: 'Altre informazioni su: task_completion_event Class'
title: Classe task_completion_event
ms.date: 11/04/2016
f1_keywords:
- task_completion_event
- PPLTASKS/concurrency::task_completion_event
- PPLTASKS/concurrency::task_completion_event::task_completion_event
- PPLTASKS/concurrency::task_completion_event::set
- PPLTASKS/concurrency::task_completion_event::set_exception
helpviewer_keywords:
- task_completion_event class
ms.assetid: fb19ed98-f245-48dc-9ba5-487ba879b28a
ms.openlocfilehash: 791b68d6a67ea2f8a9697b69266e8744455f845c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188365"
---
# <a name="task_completion_event-class"></a>Classe task_completion_event

La classe `task_completion_event` consente di ritardare l'esecuzione di un'attività fino a quando non viene soddisfatta una condizione oppure di avviare un'attività in risposta a un evento esterno.

## <a name="syntax"></a>Sintassi

```cpp
template<typename _ResultType>
class task_completion_event;

template<>
class task_completion_event<void>;
```

### <a name="parameters"></a>Parametri

*_ResultType*<br/>
Il tipo di risultato di questa classe `task_completion_event`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[task_completion_event](#ctor)|Costruisce un oggetto `task_completion_event`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[set](#set)|Di overload. Imposta l'evento di completamento attività.|
|[set_exception](#set_exception)|Di overload. Propaga un'eccezione a tutte le attività associate a questo evento.|

## <a name="remarks"></a>Commenti

Usare un'attività creata da un evento di completamento attività quando lo scenario richiede di creare un'attività che verrà completata, le cui continuazioni saranno in tal modo programmate per l'esecuzione in un momento successivo. `task_completion_event` deve avere lo stesso tipo di attività creata dall'utente e la chiamata del metodo set dell'evento di completamento attività con un valore di quel tipo causerà il completamento dell'attività associata e fornirà tale valore come risultato delle relative continuazioni.

Se l'evento di completamento di attività non viene mai segnalato, le eventuali attività create in base ad esso verranno annullate quando verrà eliminato.

`task_completion_event` si comporta come un puntatore intelligente e deve essere passato in base al valore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_completion_event`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppltasks. h

**Spazio dei nomi:** Concurrency

## <a name="set"></a><a name="set"></a> set

Imposta l'evento di completamento attività.

```cpp
bool set(_ResultType _Result) const ;

bool set() const ;
```

### <a name="parameters"></a>Parametri

*_Result*<br/>
Risultato con cui impostare questo evento.

### <a name="return-value"></a>Valore restituito

Il metodo restituisce **`true`** se ha avuto esito positivo nell'impostazione dell'evento. Restituisce **`false`** se l'evento è già impostato.

### <a name="remarks"></a>Commenti

In presenza di più chiamate simultanee a `set` , solo la prima chiamata avrà esito positivo e il risultato (se presente) verrà archiviato nell'evento di completamento dell'attività. I set rimanenti verranno ignorati e il metodo restituirà false. Quando si imposta un evento di completamento attività, tutte le attività create da tale evento verranno completate immediatamente e verranno pianificate le relative continuazioni. Gli oggetti di completamento delle attività che hanno un `_ResultType` valore diverso da **`void`** passeranno il valore alle relative continuazioni.

## <a name="set_exception"></a><a name="set_exception"></a> set_exception

Propaga un'eccezione a tutte le attività associate a questo evento.

```cpp
template<typename _E>
__declspec(noinline) bool set_exception(_E _Except) const;

__declspec(noinline) bool set_exception(std::exception_ptr _ExceptionPtr) const ;
```

### <a name="parameters"></a>Parametri

*_E*<br/>
Tipo di eccezione.

*_Except*<br/>
Eccezione da impostare.

*_ExceptionPtr*<br/>
Puntatore di eccezione da impostare.

### <a name="return-value"></a>Valore restituito

## <a name="task_completion_event"></a><a name="ctor"></a> task_completion_event

Costruisce un oggetto `task_completion_event`.

```cpp
task_completion_event();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
