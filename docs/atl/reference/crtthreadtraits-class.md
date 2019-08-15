---
title: Classe CRTThreadTraits
ms.date: 11/04/2016
f1_keywords:
- CRTThreadTraits
- ATLBASE/ATL::CRTThreadTraits
- ATLBASE/ATL::CRTThreadTraits::CreateThread
helpviewer_keywords:
- CRTThreadTraits class
- threading [ATL], creation functions
- threading [ATL], CRT threads
ms.assetid: eb6e20b0-c2aa-4170-8e34-aaeeacc86343
ms.openlocfilehash: 9e12e64041e38b8fa014815870132a75885014bf
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496571"
---
# <a name="crtthreadtraits-class"></a>Classe CRTThreadTraits

Questa classe fornisce la funzione di creazione per un thread CRT. Utilizzare questa classe se il thread utilizzerà funzioni CRT.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CRTThreadTraits
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRTThreadTraits::CreateThread](#createthread)|Statico Chiamare questa funzione per creare un thread in grado di utilizzare le funzioni CRT.|

## <a name="remarks"></a>Note

I tratti dei thread sono classi che forniscono una funzione di creazione per un determinato tipo di thread. La funzione di creazione ha la stessa firma e la stessa semantica della funzione [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) di Windows.

I tratti dei thread vengono usati dalle classi seguenti:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

Se il thread non userà le funzioni CRT, usare invece [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="createthread"></a>  CRTThreadTraits::CreateThread

Chiamare questa funzione per creare un thread in grado di utilizzare le funzioni CRT.

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

### <a name="remarks"></a>Note

Per ulteriori informazioni sui parametri di questa funzione, vedere [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) .

Questa funzione chiama [_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) per creare il thread.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
