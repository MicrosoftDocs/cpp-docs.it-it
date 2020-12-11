---
description: 'Altre informazioni su: marshalling delle funzioni globali'
title: Funzioni globali di marshalling
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlFreeMarshalStream
- atlbase/ATL::AtlMarshalPtrInProc
- atlbase/ATL::AtlUnmarshalPtr
ms.assetid: 877100b5-6ad9-44c5-a2e0-09414f1720d0
ms.openlocfilehash: 5652ccf89090ba1d0f00c03472e29da9158b781e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157945"
---
# <a name="marshaling-global-functions"></a>Funzioni globali di marshalling

Queste funzioni forniscono supporto per il marshalling e la conversione dei dati di marshalling in puntatori di interfaccia.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|Nome|Description|
|-|-|
|[AtlFreeMarshalStream](#atlfreemarshalstream)|Rilascia i dati del marshalling e il `IStream` puntatore.|
|[AtlMarshalPtrInProc](#atlmarshalptrinproc)|Crea un nuovo oggetto flusso ed effettua il marshalling del puntatore a interfaccia specificato.|
|[AtlUnmarshalPtr](#atlunmarshalptr)|Converte i dati di marshalling di un flusso in un puntatore a interfaccia.|

## <a name="requirements"></a>Requisiti:

**Intestazione:** atlbase. h

## <a name="atlfreemarshalstream"></a><a name="atlfreemarshalstream"></a> AtlFreeMarshalStream

Rilascia i dati del marshalling nel flusso, quindi rilascia il puntatore di flusso.

```
HRESULT AtlFreeMarshalStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore all' `IStream` interfaccia nel flusso utilizzato per il marshalling.

### <a name="example"></a>Esempio

Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).

## <a name="atlmarshalptrinproc"></a><a name="atlmarshalptrinproc"></a> AtlMarshalPtrInProc

Crea un nuovo oggetto flusso, scrivere il CLSID del proxy nel flusso ed esegue il marshalling del puntatore a interfaccia specificato scrivendo i dati necessari a inizializzare il proxy nel flusso.

```
HRESULT AtlMarshalPtrInProc(
    IUnknown* pUnk,
    const IID& iid,
    IStream** ppStream);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore all'interfaccia di cui effettuare il marshalling.

*IID*<br/>
in GUID dell'interfaccia di cui viene effettuato il marshalling.

*ppStream*<br/>
out Puntatore all' `IStream` interfaccia nel nuovo oggetto flusso utilizzato per il marshalling.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Il flag di MSHLFLAGS_TABLESTRONG è impostato in modo che sia possibile effettuare il marshalling del puntatore a più flussi. Il puntatore può anche essere sottoposto a unmarshalling più volte.

Se il marshalling ha esito negativo, viene rilasciato il puntatore di flusso.

`AtlMarshalPtrInProc` può essere utilizzato solo su un puntatore a un oggetto in-process.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#50](../../atl/codesnippet/cpp/marshaling-global-functions_1.cpp)]

## <a name="atlunmarshalptr"></a><a name="atlunmarshalptr"></a> AtlUnmarshalPtr

Converte i dati del marshalling del flusso in un puntatore a interfaccia che può essere utilizzato dal client.

```
HRESULT AtlUnmarshalPtr(
    IStream* pStream,
    const IID& iid,
    IUnknown** ppUnk);
```

### <a name="parameters"></a>Parametri

*pStream*<br/>
in Puntatore al flusso di cui viene effettuato l'unmarshalling.

*IID*<br/>
in GUID dell'interfaccia di cui viene eseguito l'unmarshalling.

*ppUnk*<br/>
out Puntatore all'interfaccia di cui è stato effettuato l'unmarshalling.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)
