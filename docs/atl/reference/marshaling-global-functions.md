---
title: Funzioni globali di marshallingMarshaling Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlFreeMarshalStream
- atlbase/ATL::AtlMarshalPtrInProc
- atlbase/ATL::AtlUnmarshalPtr
ms.assetid: 877100b5-6ad9-44c5-a2e0-09414f1720d0
ms.openlocfilehash: b839e93b6251a09ce79df60a49b4054d1af76cc9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326269"
---
# <a name="marshaling-global-functions"></a>Funzioni globali di marshallingMarshaling Global Functions

Queste funzioni forniscono supporto per il marshalling e la conversione dei dati di marshalling in puntatori a interfaccia.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlFreeMarshalStream](#atlfreemarshalstream)|Rilascia i dati `IStream` del marshalling e il puntatore.|
|[AtlMarshalPtrInProc](#atlmarshalptrinproc)|Crea un nuovo oggetto flusso ed esegue il marshalling del puntatore a interfaccia specificato.|
|[AtlUnmarshalPtr](#atlunmarshalptr)|Converte i dati di marshalling di un flusso in un puntatore a interfaccia.|

## <a name="requirements"></a>Requisiti:

**Intestazione:** atlbase.h

## <a name="atlfreemarshalstream"></a><a name="atlfreemarshalstream"></a>AtlFreeMarshalStream (File AtlFreeMarshalStream)

Rilascia i dati del marshalling nel flusso, quindi rilascia il puntatore di flusso.

```
HRESULT AtlFreeMarshalStream(IStream* pStream);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore all'interfaccia `IStream` nel flusso utilizzato per il marshalling.

### <a name="example"></a>Esempio

Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).

## <a name="atlmarshalptrinproc"></a><a name="atlmarshalptrinproc"></a>AtlMarshalPtrInProc (Informazioni in siostapresso)

Crea un nuovo oggetto flusso, scrivere il CLSID del proxy nel flusso ed esegue il marshalling del puntatore a interfaccia specificato scrivendo i dati necessari a inizializzare il proxy nel flusso.

```
HRESULT AtlMarshalPtrInProc(
    IUnknown* pUnk,
    const IID& iid,
    IStream** ppStream);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore all'interfaccia di cui eseguire il marshalling.

*Iid*<br/>
[in] GUID dell'interfaccia di cui viene eseguito il marshalling.

*ppStream*<br/>
[fuori] Puntatore all'interfaccia `IStream` nel nuovo oggetto flusso utilizzato per il marshalling.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il flag MSHLFLAGS_TABLESTRONG è impostato in modo che sia possibile eseguire il marshalling del puntatore a più flussi. È inoltre possibile eseguire l'unmarshalling del puntatore più volte.

Se il marshalling non riesce, il puntatore del flusso viene rilasciato.

`AtlMarshalPtrInProc`può essere utilizzato solo su un puntatore a un oggetto in-process.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#50](../../atl/codesnippet/cpp/marshaling-global-functions_1.cpp)]

## <a name="atlunmarshalptr"></a><a name="atlunmarshalptr"></a>AtlUnmarshalPtr

Converte i dati del marshalling del flusso in un puntatore a interfaccia che può essere utilizzato dal client.

```
HRESULT AtlUnmarshalPtr(
    IStream* pStream,
    const IID& iid,
    IUnknown** ppUnk);
```

### <a name="parameters"></a>Parametri

*pStream (corso)*<br/>
[in] Puntatore al flusso di cui si esegue l'unmarshalling.

*Iid*<br/>
[in] GUID dell'interfaccia di cui viene eseguito l'unmarshalling.

*ppUnk*<br/>
[fuori] Puntatore all'interfaccia unmarshalled.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

Vedere l'esempio per [AtlMarshalPtrInProc](#atlmarshalptrinproc).

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
