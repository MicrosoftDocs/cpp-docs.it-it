---
title: Classe scheduler_worker_creation_error
ms.date: 11/04/2016
f1_keywords:
- scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error
helpviewer_keywords:
- scheduler_worker_creation_error class
ms.assetid: 4aec1c3e-c32a-41b2-899d-2d898f23b3c7
ms.openlocfilehash: e7f2763d7244be9e5e5b006b31b97c08e213a4f2
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142762"
---
# <a name="scheduler_worker_creation_error-class"></a>Classe scheduler_worker_creation_error

Questa classe descrive un'eccezione generata a causa di un errore nella creazione di un contesto di esecuzione del lavoro nel runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class scheduler_worker_creation_error : public scheduler_resource_allocation_error;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_worker_creation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_worker_creation_error`.|

## <a name="remarks"></a>Osservazioni

Questa eccezione viene generata soprattutto nel caso in cui una chiamata al sistema operativo per creare contesti di esecuzione nel runtime di concorrenza abbia esito negativo. I contesti di esecuzione sono thread tramite cui vengono eseguite attività nel runtime di concorrenza. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo della classe base `get_error_code`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

[scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md)

`scheduler_worker_creation_error`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>scheduler_worker_creation_error

Costruisce un oggetto `scheduler_worker_creation_error`.

```cpp
scheduler_worker_creation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_worker_creation_error(
    HRESULT _Hresult) throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

*_Hresult*<br/>
Valore `HRESULT` dell'errore che ha causato l'eccezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
