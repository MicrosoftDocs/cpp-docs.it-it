---
description: 'Altre informazioni su: struttura scheduler_ptr'
title: Struttura scheduler_ptr
ms.date: 11/04/2016
f1_keywords:
- scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::get
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::operator bool
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
ms.openlocfilehash: 314f587c0fd55772a8b1b7b5b8fdf3ddeb53a7a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188781"
---
# <a name="scheduler_ptr-structure"></a>Struttura scheduler_ptr

Rappresenta un puntatore a un'utilità di pianificazione. Questa classe esiste per consentire la specifica di una durata condivisa utilizzando shared_ptr o semplicemente un riferimento normale utilizzando un puntatore non elaborato.

## <a name="syntax"></a>Sintassi

```cpp
struct scheduler_ptr;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_ptr:: scheduler_ptr](#ctor)|Di overload. Crea un puntatore dell'utilità di pianificazione da shared_ptr all'utilità di pianificazione|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_ptr:: Get](#get)|Restituisce il puntatore raw all'utilità di pianificazione|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_ptr:: operator bool](#operator_bool)|Verificare se il puntatore dell'utilità di pianificazione è diverso da null|
|[scheduler_ptr:: operator-&gt;](#operator_ptr)|Comportarsi come un puntatore|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scheduler_ptr`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplinterface. h

**Spazio dei nomi:** Concurrency

## <a name="scheduler_ptrget-method"></a><a name="get"></a> Metodo scheduler_ptr:: Get

Restituisce il puntatore non elaborato all'utilità di pianificazione.

```cpp
scheduler_interface* get() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="scheduler_ptroperator-bool"></a><a name="operator_bool"></a> scheduler_ptr:: operator bool

Verifica se il puntatore dell'utilità di pianificazione è diverso da null.

```cpp
operator bool() const;
```

## <a name="scheduler_ptroperator-gt"></a><a name="operator_ptr"></a> scheduler_ptr:: operator-&gt;

Si comporta come un puntatore.

```cpp
scheduler_interface* operator->() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="scheduler_ptrscheduler_ptr-constructor"></a><a name="ctor"></a> Costruttore scheduler_ptr:: scheduler_ptr

Crea un puntatore dell'utilità di pianificazione da shared_ptr all'utilità di pianificazione.

```cpp
explicit scheduler_ptr(std::shared_ptr<scheduler_interface> scheduler);
explicit scheduler_ptr(_In_opt_ scheduler_interface* pScheduler);
```

### <a name="parameters"></a>Parametri

*Scheduler*<br/>
Utilità di pianificazione da convertire.

*pScheduler*<br/>
Puntatore all'utilità di pianificazione da convertire.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
