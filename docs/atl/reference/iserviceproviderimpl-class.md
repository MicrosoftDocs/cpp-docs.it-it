---
title: Classe IServiceProviderImpl
ms.date: 11/04/2016
f1_keywords:
- IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl::QueryService
helpviewer_keywords:
- IServiceProviderImpl class
- IServiceProvider interface, ATL implementation
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
ms.openlocfilehash: e52c28d528e187713d2d0925fed23bd8cd4493d5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298672"
---
# <a name="iserviceproviderimpl-class"></a>Classe IServiceProviderImpl

Questa classe fornisce un'implementazione predefinita del `IServiceProvider` interfaccia.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IServiceProviderImpl : public IServiceProvider
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IServiceProviderImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IServiceProviderImpl::QueryService](#queryservice)|Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.|

## <a name="remarks"></a>Note

Il `IServiceProvider` interfaccia individua un servizio specificato dal relativo GUID e restituisce un puntatore a interfaccia per l'interfaccia richiesta nel servizio. Classe `IServiceProviderImpl` fornisce un'implementazione predefinita di questa interfaccia.

`IServiceProviderImpl` Specifica un metodo: [QueryService](#queryservice), che crea o si accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.

`IServiceProviderImpl` utilizza una mappa del servizio, a partire [BEGIN_SERVICE_MAP](service-map-macros.md#begin_service_map) fino al [END_SERVICE_MAP](service-map-macros.md#end_service_map).

La mappa del servizio contiene due voci: [SERVICE_ENTRY](service-map-macros.md#service_entry), che indica un id di servizio specificato (SID) supportato dall'oggetto, e [SERVICE_ENTRY_CHAIN](service-map-macros.md#service_entry_chain), che chiama `QueryService` concatenarsi a un altro oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IServiceProvider`

`IServiceProviderImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="queryservice"></a>  IServiceProviderImpl::QueryService

Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.

```
STDMETHOD(QueryService)(
    REFGUID guidService,
    REFIID riid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*guidService*<br/>
[in] Puntatore a un identificatore di servizio (SID).

*riid*<br/>
[in] Identificatore dell'interfaccia a cui il chiamante è per ottenere l'accesso.

*ppvObj*<br/>
[out] Puntatore indiretto all'interfaccia richiesta.

### <a name="return-value"></a>Valore restituito

Il valore HRESULT restituito è uno dei seguenti:

|Valore restituito|Significato|
|------------------|-------------|
|S_OK|Il servizio è stata correttamente creato o recuperato.|
|E_INVALIDARG|Uno o più argomenti non sono validi.|
|E_OUTOFMEMORY|La memoria è insufficiente per creare il servizio.|
|E_UNEXPECTED|Si è verificato un errore sconosciuto.|
|E_NOINTERFACE|L'interfaccia richiesta non fa parte di questo servizio, o il servizio è sconosciuto.|

### <a name="remarks"></a>Note

`QueryService` Restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessaria.

Quando si chiama `QueryService`, si passa sia un identificatore del servizio (*guidService*) e un identificatore di interfaccia (*riid*). Il *guidService* specifica il servizio a cui si desidera l'accesso, e il *riid* identifica un'interfaccia che fa parte del servizio. In cambio, si riceve un puntatore indiretto all'interfaccia.

L'oggetto che implementa l'interfaccia potrebbe essere inoltre implementano interfacce che fanno parte di altri servizi. Si consideri quanto segue.

- Alcune di queste interfacce potrebbero essere facoltativo. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presenti in ogni implementazione del servizio o in ogni oggetto restituito.

- A differenza delle chiamate a `QueryInterface`, passando un identificatore di servizio diverso non significa necessariamente che venga restituito un oggetto modello COM (Component Object) diverso.

- L'oggetto restituito potrebbe avere interfacce aggiuntive che non fanno parte della definizione del servizio.

Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, possono entrambi specificano l'uso dell'interfaccia stessa, anche se l'implementazione dell'interfaccia può avere nulla in comune tra i due servizi. Questo procedimento funziona perché una chiamata a `QueryService` (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da quello `QueryService` (SID_SYourService, IID_IDispatch). Identità dell'oggetto non viene considerato come quando si specifica un identificatore di servizio diverso.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
