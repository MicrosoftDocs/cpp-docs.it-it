---
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
ms.openlocfilehash: da4b8b3d5a41ab16dc2027fd632c56158afd3b97
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62275938"
---
# <a name="win32threadtraits-class"></a>Classe Win32ThreadTraits

Questa classe fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non useranno le funzioni CRT.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class Win32ThreadTraits
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Win32ThreadTraits::CreateThread](#createthread)|(Statico) Chiamare questa funzione per creare un thread che non deve utilizzare funzioni CRT.|

## <a name="remarks"></a>Note

Tratti di thread sono classi che forniscono una funzione di creazione per un particolare tipo di thread. La funzione di creazione ha la stessa firma e la semantica di Windows [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) (funzione).

Tratti di thread vengono usati dalle classi seguenti:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

Se il thread useranno le funzioni CRT, usare [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) invece.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="createthread"></a>  Win32ThreadTraits::CreateThread

Chiamare questa funzione per creare un thread che non deve utilizzare funzioni CRT.

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
Gli attributi di sicurezza per il nuovo thread.

*dwStackSize*<br/>
La dimensione dello stack per il nuovo thread.

*pfnThreadProc*<br/>
La routine del thread del nuovo thread.

*pvParam*<br/>
Il parametro deve essere passato alla routine del thread.

*dwCreationFlags*<br/>
La creazione di flag (0 o CREATE_SUSPENDED).

*pdwThreadId*<br/>
[out] Indirizzo della variabile DWORD che, in caso di esito positivo riceve l'ID del thread del thread appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per il thread appena creato oppure NULL in caso di errore. Chiamare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per ottenere informazioni dettagliate sull'errore.

### <a name="remarks"></a>Note

Visualizzare [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) per altre informazioni sui parametri per questa funzione.

Questa funzione chiama `CreateThread` per creare il thread.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
