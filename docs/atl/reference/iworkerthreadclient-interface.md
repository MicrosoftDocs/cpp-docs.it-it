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
ms.openlocfilehash: aa72f090a006d6936339582a919b0faf5cab6b03
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88835350"
---
# <a name="iworkerthreadclient-interface"></a>Interfaccia IWorkerThreadClient

`IWorkerThreadClient` è l'interfaccia implementata dai client della classe [CWorkerThread](../../atl/reference/cworkerthread-class.md) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
__interface IWorkerThreadClient
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|-|-|
|[CloseHandle](#closehandle)|Implementare questo metodo per chiudere l'handle associato a questo oggetto.|
|[Eseguire](#execute)|Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.|

## <a name="remarks"></a>Osservazioni

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

### <a name="remarks"></a>Osservazioni

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

### <a name="remarks"></a>Osservazioni

L'handle e il puntatore DWORD/puntatore passati a questo metodo sono stati precedentemente associati a questo oggetto da una chiamata a [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice seguente viene illustrata una semplice implementazione di `IWorkerThreadClient::Execute` .

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classi](../../atl/reference/atl-classes.md)<br/>
[Classe CWorkerThread](../../atl/reference/cworkerthread-class.md)
