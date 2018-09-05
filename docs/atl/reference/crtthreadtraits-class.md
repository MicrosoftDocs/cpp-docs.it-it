---
title: Classe CRTThreadTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CRTThreadTraits
- ATLBASE/ATL::CRTThreadTraits
- ATLBASE/ATL::CRTThreadTraits::CreateThread
dev_langs:
- C++
helpviewer_keywords:
- CRTThreadTraits class
- threading [ATL], creation functions
- threading [ATL], CRT threads
ms.assetid: eb6e20b0-c2aa-4170-8e34-aaeeacc86343
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5cbd0031e9291edc39b2b437acb014c6f0424fa4
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753890"
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

*lpsa*  
Gli attributi di sicurezza per il nuovo thread.

*dwStackSize*  
La dimensione dello stack per il nuovo thread.

*pfnThreadProc*  
La routine del thread del nuovo thread.

*parametro pvParam*  
Il parametro deve essere passato alla routine del thread.

*dwCreationFlags*  
La creazione di flag (0 o CREATE_SUSPENDED).

*pdwThreadId*  
[out] Indirizzo della variabile DWORD che, in caso di esito positivo riceve l'ID del thread del thread appena creato.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per il thread appena creato oppure NULL in caso di errore. Chiamare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per ottenere informazioni dettagliate sull'errore.

### <a name="remarks"></a>Note

Visualizzare [CreateThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-createthread) per altre informazioni sui parametri per questa funzione.

Questa funzione chiama [beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) per creare il thread.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
