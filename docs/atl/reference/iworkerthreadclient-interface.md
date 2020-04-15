---
title: Interfaccia IWorkerThreadClient
ms.date: 11/04/2016
f1_keywords:
- IWorkerThreadClient
- ATLUTIL/ATL::IWorkerThreadClient
- ATLUTIL/ATL::CloseHandle
- ATLUTIL/ATL::Execute
helpviewer_keywords:
- IWorkerThreadClient interface
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
ms.openlocfilehash: 6a68f25f153a0ad2cf42ebfaa374ff63c5746fcd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326303"
---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient

`IWorkerThreadClient`è l'interfaccia implementata dai client della classe [CWorkerThread.](../../atl/reference/cworkerthread-class.md)

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
__interface IWorkerThreadClient
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Closehandle](#closehandle)|Implementare questo metodo per chiudere l'handle associato a questo oggetto.|
|[Execute](#execute)|Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.|

## <a name="remarks"></a>Osservazioni

Implementare questa interfaccia quando si dispone di codice che deve essere eseguito su un thread di lavoro in risposta a un handle che diventa segnalato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="iworkerthreadclientclosehandle"></a><a name="closehandle"></a>IWorkerThreadClient::CloseHandleIWorkerThreadClient::CloseHandle

Implementare questo metodo per chiudere l'handle associato a questo oggetto.

```
HRESULT CloseHandle(HANDLE  hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Maniglia da chiudere.

### <a name="return-value"></a>Valore restituito

Restituire S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice riportato di `IWorkerThreadClient::CloseHandle`seguito viene illustrata una semplice implementazione di .

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]

## <a name="iworkerthreadclientexecute"></a><a name="execute"></a>IWorkerThreadClient::EsecuzioneIWorkerThreadClient::Execute

Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam (informazioni in base al tano*<br/>
Parametro dell'utente.

*hOggetto*<br/>
Handle che è diventato segnalato.

### <a name="return-value"></a>Valore restituito

Restituire S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

L'handle e il DWORD/pointer passati a questo metodo sono stati precedentemente associati a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice riportato di `IWorkerThreadClient::Execute`seguito viene illustrata una semplice implementazione di .

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)
