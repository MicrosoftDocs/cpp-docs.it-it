---
title: Macro della mappa del servizio
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_SERVICE_MAP
- atlcom/ATL::END_SERVICE_MAP
- atlcom/ATL::SERVICE_ENTRY
- atlcom/ATL::SERVICE_ENTRY_CHAIN
ms.assetid: ca02a125-454a-4cf6-aac2-1c5585025ed4
ms.openlocfilehash: eb2fe41c79135a7ac2ced9bc3242b070170716b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325936"
---
# <a name="service-map-macros"></a>Macro della mappa del servizio

Queste macro definiscono le mappe e le voci dei servizi.

|||
|-|-|
|[BEGIN_SERVICE_MAP](#begin_service_map)|Contrassegna l'inizio di una mappa del servizio ATL.|
|[END_SERVICE_MAP](#end_service_map)|Contrassegna la fine di una mappa del servizio ATL.|
|[SERVICE_ENTRY](#service_entry)|Indica che l'oggetto supporta un ID servizio specifico.|
|[SERVICE_ENTRY_CHAIN](#service_entry_chain)|Indica a [IServiceProviderImpl::QueryService](#queryservice) di concatenare l'oggetto specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="begin_service_map"></a><a name="begin_service_map"></a>BEGIN_SERVICE_MAP

Contrassegna l'inizio della mappa del servizio.

```
BEGIN_SERVICE_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
[in] Specifica la classe contenente la mappa del servizio.

### <a name="remarks"></a>Osservazioni

Utilizzare la mappa del servizio per implementare la funzionalità del provider di servizi nell'oggetto COM. In primo luogo, è necessario derivare la classe da [IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md). Esistono due tipi di voci:

- [SERVICE_ENTRY](#service_entry)   Indica il supporto per l'ID servizio (SID) specificato.

- [SERVICE_ENTRY_CHAIN](#service_entry_chain)   Indica a [IServiceProviderImpl::QueryService](#queryservice) di concatenare a un altro oggetto specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#57](../../atl/codesnippet/cpp/service-map-macros_1.h)]

## <a name="end_service_map"></a><a name="end_service_map"></a>END_SERVICE_MAP

Contrassegna la fine della mappa del servizio.

```
END_SERVICE_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="service_entry"></a><a name="service_entry"></a>SERVICE_ENTRY

Indica che l'oggetto supporta l'ID servizio specificato da *SID.*

```
SERVICE_ENTRY( SID )
```

### <a name="parameters"></a>Parametri

*Sid*<br/>
ID del servizio.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="service_entry_chain"></a><a name="service_entry_chain"></a>SERVICE_ENTRY_CHAIN

Indica a [IServiceProviderImpl::QueryService](#queryservice) di concatenare l'oggetto specificato da *punk*.

```
SERVICE_ENTRY_CHAIN( punk )
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
Puntatore all'interfaccia **IUnknown** a cui concatenare.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="iserviceproviderimplqueryservice"></a><a name="queryservice"></a>IServiceProviderImpl::QueryService (informazioni in base alla proprietà

Crea o accede al servizio specificato e restituisce un puntatore a interfaccia all'interfaccia specificata per il servizio.

```
STDMETHOD(QueryService)(
    REFGUID guidService,
    REFIID riid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*guidService (servizio guid)*<br/>
[in] Puntatore a un identificatore di servizio (SID).

*Riid*<br/>
[in] Identificatore dell'interfaccia a cui il chiamante deve ottenere l'accesso.

*ppvObj*<br/>
[fuori] Puntatore indiretto all'interfaccia richiesta.

### <a name="return-value"></a>Valore restituito

Il valore HRESULT restituito è uno dei seguenti:

|Valore restituito|Significato|
|------------------|-------------|
|S_OK|Il servizio è stato creato o recuperato correttamente.|
|E_INVALIDARG|Uno o più argomenti non sono validi.|
|E_OUTOFMEMORY|Memoria insufficiente per creare il servizio.|
|E_UNEXPECTED|Si è verificato un errore sconosciuto.|
|E_NOINTERFACE|L'interfaccia richiesta non fa parte di questo servizio o il servizio è sconosciuto.|

### <a name="remarks"></a>Osservazioni

`QueryService`restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessario.

Quando si `QueryService`chiama , si passano sia un identificatore del servizio (*guidService*) che un identificatore di interfaccia (*riid*). Il *guidService* specifica il servizio a cui si desidera accedere e il *riid* identifica un'interfaccia che fa parte del servizio. In cambio, viene visualizzato un puntatore indiretto all'interfaccia.

L'oggetto che implementa l'interfaccia può anche implementare interfacce che fanno parte di altri servizi. Valutare gli aspetti seguenti:

- Alcune di queste interfacce potrebbero essere facoltative. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presenti in ogni implementazione del servizio o in ogni oggetto restituito.

- A differenza `QueryInterface`delle chiamate a , il passaggio di un identificatore di servizio diverso non significa necessariamente che venga restituito un oggetto COM (Component Object Model) diverso.

- L'oggetto restituito potrebbe avere interfacce aggiuntive che non fanno parte della definizione del servizio.

Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, possono entrambi specificare l'utilizzo della stessa interfaccia, anche se l'implementazione dell'interfaccia potrebbe non avere nulla in comune tra i due servizi. Questo funziona, perché `QueryService` una chiamata a (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da `QueryService` (SID_SYourService, IID_IDispatch). L'identità dell'oggetto non viene considerata quando si specifica un identificatore di servizio diverso.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
