---
title: Classe task_options (runtime di concorrenza)
ms.date: 11/04/2016
f1_keywords:
- ppltasks/concurrency::task_options
ms.assetid: f93d146b-70f7-46ec-8c2f-c33b8bb0af69
ms.openlocfilehash: e79dd7979b587ae807c8984a04b79be362b03758
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368602"
---
# <a name="task_options-class-concurrency-runtime"></a>Classe task_options (runtime di concorrenza)

Rappresenta le opzioni consentite per la creazione di un'attività

## <a name="syntax"></a>Sintassi

```cpp
class task_options;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore task_options::task_options (runtime di concorrenza)](#ctor)|Di overload. Elenco predefinito delle opzioni di creazione di attività|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo task_options::get_cancellation_token (runtime di concorrenza)](#get_cancellation_token)|Restituisce il token di annullamento|
|[Metodo task_options::get_continuation_context (runtime di concorrenza)](#get_continuation_context)|Restituisce il contesto di continuazione|
|[Metodo task_options::get_scheduler (runtime di concorrenza)](#get_scheduler)|Restituisce l'utilità di pianificazione|
|[Metodo task_options::has_cancellation_token (runtime di concorrenza)](#has_cancellation_token)|Indica se un token di annullamento è stato specificato dall'utente|
|[Metodo task_options::has_scheduler (runtime di concorrenza)](#has_scheduler)|Indica se un'utilità di pianificazione è stata specificata dall'utente|
|[Metodo task_options::set_cancellation_token (runtime di concorrenza)](#set_cancellation_token)|Imposta il token specificato nelle opzioni|
|[Metodo task_options::set_continuation_context (runtime di concorrenza)](#set_continuation_context)|Imposta il contesto di continuazione specificato nelle opzioni|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_options`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppltasks.h

**Spazio dei nomi:** Concurrency

## <a name="task_optionsget_cancellation_token-method-concurrency-runtime"></a><a name="get_cancellation_token"></a>Metodo task_options::get_cancellation_token (Runtime di concorrenza)

Restituisce il token di annullamento

```cpp
cancellation_token get_cancellation_token() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsget_continuation_context-method-concurrency-runtime"></a><a name="get_continuation_context"></a>Metodo task_options::get_continuation_context (Runtime di concorrenza)

Restituisce il contesto di continuazione

```cpp
task_continuation_context get_continuation_context() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsget_scheduler-method-concurrency-runtime"></a><a name="get_scheduler"></a>Metodo task_options::get_scheduler (Runtime di concorrenza)task_options::get_scheduler Method (Concurrency Runtime)

Restituisce l'utilità di pianificazione

```cpp
scheduler_ptr get_scheduler() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionshas_cancellation_token-method-concurrency-runtime"></a><a name="has_cancellation_token"></a>Metodo task_options::has_cancellation_token (Runtime di concorrenza)Task_options::has_cancellation_token Method (Concurrency Runtime)

Indica se un token di annullamento è stato specificato dall'utente

```cpp
bool has_cancellation_token() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionshas_scheduler-method-concurrency-runtime"></a><a name="has_scheduler"></a>Metodo task_options::has_scheduler (Runtime di concorrenza)task_options::has_scheduler Method (Concurrency Runtime)

Indica se un'utilità di pianificazione è stata specificata dall'utente

```cpp
bool has_scheduler() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsset_cancellation_token-method-concurrency-runtime"></a><a name="set_cancellation_token"></a>Metodo task_options::set_cancellation_token (Runtime di concorrenza)Task_options::set_cancellation_token Method (Concurrency Runtime)

Imposta il token specificato nelle opzioni

```cpp
void set_cancellation_token(cancellation_token _Token);
```

### <a name="parameters"></a>Parametri

`_Token`

## <a name="task_optionsset_continuation_context-method-concurrency-runtime"></a><a name="set_continuation_context"></a>Metodo task_options::set_continuation_context (Runtime di concorrenza)

Imposta il contesto di continuazione specificato nelle opzioni

```cpp
void set_continuation_context(task_continuation_context _ContinuationContext);
```

### <a name="parameters"></a>Parametri

`_ContinuationContext`

## <a name="task_optionstask_options-constructor-concurrency-runtime"></a><a name="ctor"></a>Costruttore task_options::task_options (Runtime di concorrenza)

Elenco predefinito delle opzioni di creazione di attività

```cpp
task_options();

task_options(
    cancellation_token _Token);

task_options(
    task_continuation_context _ContinuationContext);

task_options(
    cancellation_token _Token,
    task_continuation_context _ContinuationContext);

template<typename _SchedType>
task_options(
    std::shared_ptr<_SchedType> _Scheduler);

task_options(
    scheduler_interface& _Scheduler);

task_options(
    scheduler_ptr _Scheduler);

task_options(
    const task_options& _TaskOptions);
```

### <a name="parameters"></a>Parametri

`_SchedType`

`_Token`

`_ContinuationContext`

`_Scheduler`

`_TaskOptions`

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
