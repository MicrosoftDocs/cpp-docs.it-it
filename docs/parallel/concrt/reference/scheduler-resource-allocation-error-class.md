---
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
ms.openlocfilehash: d8b94a17c4d842e97901e97dd2197692252eed43
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613161"
---
# <a name="schedulerresourceallocationerror-class"></a>Classe scheduler_resource_allocation_error

Questa classe descrive un'eccezione generata a causa dell'errore per acquisire una risorsa critica nel runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```
class scheduler_resource_allocation_error : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_resource_allocation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_resource_allocation_error`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|

## <a name="remarks"></a>Note

Questa eccezione viene generata in genere quando una chiamata al sistema operativo all'interno del Runtime di concorrenza non riesce. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo `get_error_code`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`scheduler_resource_allocation_error`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="get_error_code"></a> get_error_code

Restituisce il codice di errore che ha causato l'eccezione.

```
HRESULT get_error_code() const throw();
```

### <a name="return-value"></a>Valore restituito

Il `HRESULT` valore dell'errore che ha causato l'eccezione.

##  <a name="ctor"></a> scheduler_resource_allocation_error

Costruisce un oggetto `scheduler_resource_allocation_error`.

```
scheduler_resource_allocation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_resource_allocation_error(
    HRESULT _Hresult) throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

*_Hresult*<br/>
Il `HRESULT` valore dell'errore che ha causato l'eccezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
