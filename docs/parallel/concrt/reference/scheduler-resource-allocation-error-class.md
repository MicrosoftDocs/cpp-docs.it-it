---
description: 'Altre informazioni su: scheduler_resource_allocation_error Class'
title: Classe scheduler_resource_allocation_error
ms.date: 11/04/2016
f1_keywords:
- scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error::get_error_code
helpviewer_keywords:
- scheduler_resource_allocation_error class
ms.assetid: 8b40449a-7abb-4d0a-bb85-c0e9a495ae97
ms.openlocfilehash: 50f84cbf76d30a415e2393797baa7d6cfa1e89f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188729"
---
# <a name="scheduler_resource_allocation_error-class"></a>Classe scheduler_resource_allocation_error

Questa classe descrive un'eccezione generata a causa dell'errore per acquisire una risorsa critica nel runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class scheduler_resource_allocation_error : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_resource_allocation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_resource_allocation_error`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|

## <a name="remarks"></a>Commenti

Questa eccezione viene in genere generata quando una chiamata al sistema operativo all'interno del runtime di concorrenza ha esito negativo. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo `get_error_code`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`scheduler_resource_allocation_error`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="get_error_code"></a><a name="get_error_code"></a> get_error_code

Restituisce il codice di errore che ha causato l'eccezione.

```cpp
HRESULT get_error_code() const throw();
```

### <a name="return-value"></a>Valore restituito

`HRESULT`Valore dell'errore che ha causato l'eccezione.

## <a name="scheduler_resource_allocation_error"></a><a name="ctor"></a> scheduler_resource_allocation_error

Costruisce un oggetto `scheduler_resource_allocation_error`.

```cpp
scheduler_resource_allocation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_resource_allocation_error(
    HRESULT _Hresult) throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

*_Hresult*<br/>
`HRESULT`Valore dell'errore che ha causato l'eccezione.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
