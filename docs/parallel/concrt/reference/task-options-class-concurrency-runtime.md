---
description: 'Altre informazioni su: task_options Class (runtime di concorrenza)'
title: Classe task_options (runtime di concorrenza)
ms.date: 11/04/2016
f1_keywords:
- ppltasks/concurrency::task_options
ms.assetid: f93d146b-70f7-46ec-8c2f-c33b8bb0af69
ms.openlocfilehash: 3752d23e68096df22d076afc5c07dc3d66cc881a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188209"
---
# <a name="task_options-class-concurrency-runtime"></a>Classe task_options (runtime di concorrenza)

Rappresenta le opzioni consentite per la creazione di un'attività

## <a name="syntax"></a>Sintassi

```cpp
class task_options;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore task_options::task_options (runtime di concorrenza)](#ctor)|Di overload. Elenco predefinito delle opzioni di creazione di attività|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
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

**Intestazione:** ppltasks. h

**Spazio dei nomi:** Concurrency

## <a name="task_optionsget_cancellation_token-method-concurrency-runtime"></a><a name="get_cancellation_token"></a> Metodo task_options:: get_cancellation_token (runtime di concorrenza)

Restituisce il token di annullamento

```cpp
cancellation_token get_cancellation_token() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsget_continuation_context-method-concurrency-runtime"></a><a name="get_continuation_context"></a> Metodo task_options:: get_continuation_context (runtime di concorrenza)

Restituisce il contesto di continuazione

```cpp
task_continuation_context get_continuation_context() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsget_scheduler-method-concurrency-runtime"></a><a name="get_scheduler"></a> Metodo task_options:: get_scheduler (runtime di concorrenza)

Restituisce l'utilità di pianificazione

```cpp
scheduler_ptr get_scheduler() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionshas_cancellation_token-method-concurrency-runtime"></a><a name="has_cancellation_token"></a> Metodo task_options:: has_cancellation_token (runtime di concorrenza)

Indica se un token di annullamento è stato specificato dall'utente

```cpp
bool has_cancellation_token() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionshas_scheduler-method-concurrency-runtime"></a><a name="has_scheduler"></a> Metodo task_options:: has_scheduler (runtime di concorrenza)

Indica se un'utilità di pianificazione è stata specificata dall'utente

```cpp
bool has_scheduler() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="task_optionsset_cancellation_token-method-concurrency-runtime"></a><a name="set_cancellation_token"></a> Metodo task_options:: set_cancellation_token (runtime di concorrenza)

Imposta il token specificato nelle opzioni

```cpp
void set_cancellation_token(cancellation_token _Token);
```

### <a name="parameters"></a>Parametri

`_Token`

## <a name="task_optionsset_continuation_context-method-concurrency-runtime"></a><a name="set_continuation_context"></a> Metodo task_options:: set_continuation_context (runtime di concorrenza)

Imposta il contesto di continuazione specificato nelle opzioni

```cpp
void set_continuation_context(task_continuation_context _ContinuationContext);
```

### <a name="parameters"></a>Parametri

`_ContinuationContext`

## <a name="task_optionstask_options-constructor-concurrency-runtime"></a><a name="ctor"></a> Costruttore task_options:: task_options (runtime di concorrenza)

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

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
