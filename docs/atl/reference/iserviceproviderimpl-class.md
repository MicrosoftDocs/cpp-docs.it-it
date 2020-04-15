---
title: IServiceProviderImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl::QueryService
helpviewer_keywords:
- IServiceProviderImpl class
- IServiceProvider interface, ATL implementation
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
ms.openlocfilehash: ef0ee4f77441cb8d19ea2d6dcada1fed9faf2782
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329423"
---
# <a name="iserviceproviderimpl-class"></a>IServiceProviderImpl (classe)

Questa classe fornisce un'implementazione predefinita dell'interfaccia. `IServiceProvider`

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IServiceProviderImpl : public IServiceProvider
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IServiceProviderImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|IServiceProviderImpl::QueryService (informazioni in base alla proprietà|Crea o accede al servizio specificato e restituisce un puntatore a interfaccia all'interfaccia specificata per il servizio.|

## <a name="remarks"></a>Osservazioni

L'interfaccia `IServiceProvider` individua un servizio specificato dal relativo GUID e restituisce il puntatore a interfaccia per l'interfaccia richiesta nel servizio. Classe `IServiceProviderImpl` fornisce un'implementazione predefinita di questa interfaccia.

`IServiceProviderImpl`specifica un metodo: [QueryService](#queryservice), che crea o accede al servizio specificato e restituisce un puntatore a interfaccia all'interfaccia specificata per il servizio.

`IServiceProviderImpl`utilizza una mappa del servizio, che inizia con [BEGIN_SERVICE_MAP](service-map-macros.md#begin_service_map) e termina con [END_SERVICE_MAP](service-map-macros.md#end_service_map).

La mappa del servizio contiene due voci: [SERVICE_ENTRY](service-map-macros.md#service_entry), che indica un ID servizio (SID) specificato supportato dall'oggetto, e [SERVICE_ENTRY_CHAIN](service-map-macros.md#service_entry_chain), che chiama `QueryService` per concatenare a un altro oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IServiceProvider`

`IServiceProviderImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

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

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
