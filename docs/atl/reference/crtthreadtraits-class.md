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
ms.openlocfilehash: e5e13bad907e76968c4d4343e6617903e309e40f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57282604"
---
# <a name="crtthreadtraits-class"></a>Classe CRTThreadTraits

Questa classe fornisce la funzione di creazione di un thread di CRT. Utilizzare questa classe se il thread utilizza le funzioni CRT.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CRTThreadTraits
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRTThreadTraits::CreateThread](#createthread)|(Statico) Chiamare questa funzione per creare un thread che è possibile usare le funzioni CRT.|

## <a name="remarks"></a>Note

Tratti di thread sono classi che forniscono una funzione di creazione per un particolare tipo di thread. La funzione di creazione ha la stessa firma e la semantica di Windows [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) (funzione).

Tratti di thread vengono usati dalle classi seguenti:

- [CThreadPool](../../atl/reference/cthreadpool-class.md)

- [CWorkerThread](../../atl/reference/cworkerthread-class.md)

Se il thread non usa le funzioni CRT, usare [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md) invece.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="createthread"></a>  CRTThreadTraits::CreateThread

Chiamare questa funzione per creare un thread che è possibile usare le funzioni CRT.

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

Questa funzione chiama [beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) per creare il thread.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
