---
description: 'Altre informazioni su: interfaccia IWorkerThreadClient'
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
ms.openlocfilehash: fb9113c9380453dad9f647fa2f5a2095ff12cea7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157984"
---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient

`IWorkerThreadClient` è l'interfaccia implementata dai client della classe [CWorkerThread](../../atl/reference/cworkerthread-class.md) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
__interface IWorkerThreadClient
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Nome|Description|
|-|-|
|[CloseHandle](#closehandle)|Implementare questo metodo per chiudere l'handle associato a questo oggetto.|
|[Eseguire](#execute)|Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.|

## <a name="remarks"></a>Commenti

Implementare questa interfaccia quando si dispone di codice che deve essere eseguito in un thread di lavoro in risposta a un handle che diventa segnalato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="iworkerthreadclientclosehandle"></a><a name="closehandle"></a> IWorkerThreadClient:: CloseHandle

Implementare questo metodo per chiudere l'handle associato a questo oggetto.

```
HRESULT CloseHandle(HANDLE  hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice seguente viene illustrata una semplice implementazione di `IWorkerThreadClient::CloseHandle` .

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]

## <a name="iworkerthreadclientexecute"></a><a name="execute"></a> IWorkerThreadClient:: Execute

Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam*<br/>
Parametro User.

*hObject*<br/>
Handle che è stato segnalato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

L'handle e il puntatore DWORD/puntatore passati a questo metodo sono stati precedentemente associati a questo oggetto da una chiamata a [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice seguente viene illustrata una semplice implementazione di `IWorkerThreadClient::Execute` .

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)
