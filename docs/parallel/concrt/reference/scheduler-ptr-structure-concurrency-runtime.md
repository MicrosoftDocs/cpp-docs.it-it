---
title: Struttura scheduler_ptr
ms.date: 11/04/2016
f1_keywords:
- scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::get
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::operator bool
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
ms.openlocfilehash: 7fd81a1ccf6702c74a013c5772d59f01121b61a0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479222"
---
# <a name="schedulerptr-structure"></a>Struttura scheduler_ptr

Rappresenta un puntatore a un'utilità di pianificazione. Questa classe esiste per consentire la specifica di una durata condivisa utilizzando shared_ptr o semplicemente un riferimento normale utilizzando puntatore non elaborato.

## <a name="syntax"></a>Sintassi

```
struct scheduler_ptr;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_ptr::scheduler_ptr](#ctor)|Di overload. Crea un puntatore dell'utilità di pianificazione da shared_ptr all'utilità di pianificazione|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_ptr::get](#get)|Restituisce il puntatore raw all'utilità di pianificazione|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_ptr:: operator bool](#operator_bool)|Verificare se il puntatore dell'utilità di pianificazione è diverso da null|
|[scheduler_ptr::operator-&gt;](#operator_ptr)|Comportarsi come un puntatore|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scheduler_ptr`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplinterface. h

**Spazio dei nomi:** Concurrency

##  <a name="get"></a>  Metodo scheduler_ptr:: Get

Restituisce il puntatore raw all'utilità di pianificazione

```
scheduler_interface* get() const;
```

### <a name="return-value"></a>Valore restituito

##  <a name="operator_bool"></a>  scheduler_ptr:: operator bool

Verificare se il puntatore dell'utilità di pianificazione è diverso da null

' ' operator bool () const;
```

##  <a name="operator_ptr"></a>  scheduler_ptr::operator-&gt;

Behave like a pointer

```
scheduler_interface * operator -> () const;
```

### Return Value

##  <a name="ctor"></a>  scheduler_ptr::scheduler_ptr Constructor

Creates a scheduler pointer from shared_ptr to scheduler

```
esplicita scheduler_ptr (std:: shared_ptr < scheduler_interface > dell'utilità di pianificazione);

scheduler_ptr esplicito (_In_opt_ scheduler_interface * pScheduler);
```

### Parameters

*scheduler*<br/>
The scheduler to convert.

*pScheduler*<br/>
The scheduler pointer to convert.

## See Also

[concurrency Namespace](concurrency-namespace.md)
