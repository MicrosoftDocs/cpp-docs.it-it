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
ms.openlocfilehash: 1fa8a5e42d002260076f737d3d33cfa191ff297a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295279"
---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient

`IWorkerThreadClient` è l'interfaccia implementata da client del [CWorkerThread](../../atl/reference/cworkerthread-class.md) classe.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
__interface IWorkerThreadClient
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CloseHandle](#closehandle)|Implementare questo metodo per chiudere l'handle associato all'oggetto.|
|[Execute](#execute)|Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.|

## <a name="remarks"></a>Note

Quando si dispone di codice che deve essere eseguito su un thread di lavoro in risposta a un handle che diventa segnalato, implementano questa interfaccia.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="closehandle"></a>  IWorkerThreadClient::CloseHandle

Implementare questo metodo per chiudere l'handle associato all'oggetto.

```
HRESULT CloseHandle(HANDLE  hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

Restituire S_OK su esito positivo o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Il codice seguente illustra un'implementazione semplice di `IWorkerThreadClient::CloseHandle`.

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]

##  <a name="execute"></a>  IWorkerThreadClient::Execute

Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam*<br/>
Il parametro user.

*hObject*<br/>
Handle che è diventato segnalato.

### <a name="return-value"></a>Valore restituito

Restituire S_OK su esito positivo o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

L'handle e DWORD/puntatore passato a questo metodo era precedentemente associato l'oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Il codice seguente illustra un'implementazione semplice di `IWorkerThreadClient::Execute`.

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)
