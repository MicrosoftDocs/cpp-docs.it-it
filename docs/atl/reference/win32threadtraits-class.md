---
title: Win32ThreadTraits (classe)
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
ms.openlocfilehash: 64f02293508894a70f36c29d5032c9ba8f250c38
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325791"
---
# <a name="win32threadtraits-class"></a>Win32ThreadTraits (classe)

Questa classe fornisce la funzione di creazione per un thread di Windows.This class provides the creation function for a Windows thread. Utilizzare questa classe se il thread non utilizzerà le funzioni CRT.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class Win32ThreadTraits
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Win32ThreadTraits::CreateThread](#createthread)|(Statico) Chiamare questa funzione per creare un thread che non deve utilizzare le funzioni CRT.|

## <a name="remarks"></a>Osservazioni

I tratti del thread sono classi che forniscono una funzione di creazione per un particolare tipo di thread. La funzione di creazione ha la stessa firma e la stessa semantica della funzione CreateThread di Windows.The creation function has the same signature and semantics as the Windows [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) function.

I tratti del filetto vengono utilizzati dalle seguenti classi:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

Se il thread utilizzerà le funzioni CRT, utilizzare invece [ATits CRTThread.](../../atl/reference/crtthreadtraits-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="win32threadtraitscreatethread"></a><a name="createthread"></a>Win32ThreadTraits::CreateThread

Chiamare questa funzione per creare un thread che non deve utilizzare le funzioni CRT.

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
Dimensione dello stack per il nuovo thread.

*PfnThreadProc (PfnThreadProc)*<br/>
Procedura del thread del nuovo thread.

*pvParam (parametri di pvParam)*<br/>
Parametro da passare alla routine del thread.

*dwCreationFlags (flag dwCreation)*<br/>
I flag di creazione (0 o CREATE_SUSPENDED).

*pdwThreadId*<br/>
[fuori] Indirizzo della variabile DWORD che, in caso di esito positivo, riceve l'ID del thread appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per il thread appena creato o NULL in caso di errore. Chiamare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per ottenere informazioni estese sull'errore.

### <a name="remarks"></a>Osservazioni

Vedere [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) per ulteriori informazioni sui parametri di questa funzione.

Questa funzione `CreateThread` chiama per creare il thread.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
