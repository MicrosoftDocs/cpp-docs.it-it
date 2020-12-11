---
description: 'Altre informazioni su: classe Win32ThreadTraits'
title: Classe Win32ThreadTraits
ms.date: 11/04/2016
f1_keywords:
- Win32ThreadTraits
- ATLBASE/ATL::Win32ThreadTraits
- ATLBASE/ATL::Win32ThreadTraits::CreateThread
helpviewer_keywords:
- threading [ATL], Windows threads
- threading [ATL], creation functions
- Win32ThreadTraits class
ms.assetid: 50279c38-eae1-4301-9ea6-97ccea580f3e
ms.openlocfilehash: 6dc752c5e8d527f9329c7f4274243a8561dd6339
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157594"
---
# <a name="win32threadtraits-class"></a>Classe Win32ThreadTraits

Questa classe fornisce la funzione di creazione per un thread di Windows. Utilizzare questa classe se il thread non utilizzerà funzioni CRT.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class Win32ThreadTraits
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[Win32ThreadTraits:: CreateThread](#createthread)|Statico Chiamare questa funzione per creare un thread che non deve usare funzioni CRT.|

## <a name="remarks"></a>Commenti

I tratti dei thread sono classi che forniscono una funzione di creazione per un determinato tipo di thread. La funzione di creazione ha la stessa firma e la stessa semantica della funzione [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) di Windows.

I tratti dei thread vengono usati dalle classi seguenti:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

Se il thread userà le funzioni CRT, usare invece [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="win32threadtraitscreatethread"></a><a name="createthread"></a> Win32ThreadTraits:: CreateThread

Chiamare questa funzione per creare un thread che non deve usare funzioni CRT.

```
static HANDLE CreateThread(
    LPSECURITY_ATTRIBUTES lpsa,
    DWORD dwStackSize,
    LPTHREAD_START_ROUTINE pfnThreadProc,
    void* pvParam,
    DWORD dwCreationFlags,
    DWORD* pdwThreadId) throw();
```

### <a name="parameters"></a>Parametri

*lpsa*<br/>
Attributi di sicurezza per il nuovo thread.

*dwStackSize*<br/>
Dimensioni dello stack per il nuovo thread.

*pfnThreadProc*<br/>
Routine del thread del nuovo thread.

*pvParam*<br/>
Parametro da passare alla routine del thread.

*dwCreationFlags*<br/>
Flag di creazione (0 o CREATE_SUSPENDED).

*pdwThreadId*<br/>
out Indirizzo della variabile DWORD che, in esito positivo, riceve l'ID del thread appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per il thread appena creato o NULL in caso di errore. Chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per ottenere informazioni estese sull'errore.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sui parametri di questa funzione, vedere [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) .

Questa funzione chiama `CreateThread` per creare il thread.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
