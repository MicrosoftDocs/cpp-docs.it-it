---
description: 'Altre informazioni su: classe IServiceProviderImpl'
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
ms.openlocfilehash: 0cd9fab784fe8bffe420123129aa51c80c187890
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139152"
---
# <a name="iserviceproviderimpl-class"></a>Classe IServiceProviderImpl

Questa classe fornisce un'implementazione predefinita dell' `IServiceProvider` interfaccia.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IServiceProviderImpl : public IServiceProvider
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IServiceProviderImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IServiceProviderImpl:: QueryService](#queryservice)|Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.|

## <a name="remarks"></a>Commenti

L' `IServiceProvider` interfaccia individua un servizio specificato dal relativo GUID e restituisce il puntatore di interfaccia per l'interfaccia richiesta sul servizio. La classe `IServiceProviderImpl` fornisce un'implementazione predefinita di questa interfaccia.

`IServiceProviderImpl` Specifica un metodo: [QueryService](#queryservice), che crea o accede al servizio specificato e restituisce un puntatore di interfaccia all'interfaccia specificata per il servizio.

`IServiceProviderImpl` Usa una mappa dei servizi, a partire da [BEGIN_SERVICE_MAP](service-map-macros.md#begin_service_map) e termina con [END_SERVICE_MAP](service-map-macros.md#end_service_map).

La mappa del servizio contiene due voci: [SERVICE_ENTRY](service-map-macros.md#service_entry), che indica un ID di servizio (SID) specificato supportato dall'oggetto e [SERVICE_ENTRY_CHAIN](service-map-macros.md#service_entry_chain), che chiama `QueryService` per concatenare a un altro oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IServiceProvider`

`IServiceProviderImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="iserviceproviderimplqueryservice"></a><a name="queryservice"></a> IServiceProviderImpl:: QueryService

Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.

```
STDMETHOD(QueryService)(
    REFGUID guidService,
    REFIID riid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*guidService*<br/>
in Puntatore a un identificatore del servizio (SID).

*riid*<br/>
in Identificatore dell'interfaccia a cui il chiamante deve ottenere l'accesso.

*ppvObj*<br/>
out Puntatore indiretto all'interfaccia richiesta.

### <a name="return-value"></a>Valore restituito

Il valore HRESULT restituito è uno dei seguenti:

|Valore restituito|Significato|
|------------------|-------------|
|S_OK|Il servizio è stato creato o recuperato correttamente.|
|E_INVALIDARG|Uno o più argomenti non sono validi.|
|E_OUTOFMEMORY|Memoria insufficiente per la creazione del servizio.|
|E_UNEXPECTED|Si è verificato un errore sconosciuto.|
|E_NOINTERFACE|L'interfaccia richiesta non fa parte di questo servizio o il servizio è sconosciuto.|

### <a name="remarks"></a>Commenti

`QueryService` Restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessario.

Quando si chiama `QueryService` , viene passato un identificatore del servizio (*guidService*) e un identificatore di interfaccia (*riid*). *GuidService* specifica il servizio a cui si desidera accedere e *riid* identifica un'interfaccia che fa parte del servizio. In return si riceve un puntatore indiretto all'interfaccia.

L'oggetto che implementa l'interfaccia può implementare anche interfacce che fanno parte di altri servizi. Considerare quanto segue:

- Alcune di queste interfacce potrebbero essere facoltative. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presenti in ogni implementazione del servizio o in ogni oggetto restituito.

- A differenza delle chiamate a `QueryInterface` , il passaggio di un identificatore del servizio diverso non significa necessariamente che venga restituito un oggetto Component Object Model (com) diverso.

- L'oggetto restituito potrebbe avere interfacce aggiuntive che non fanno parte della definizione del servizio.

Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, possono entrambi specificare l'uso della stessa interfaccia, anche se l'implementazione dell'interfaccia potrebbe non avere nulla in comune tra i due servizi. Questa operazione funziona perché una chiamata a `QueryService` (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da `QueryService` (SID_SYourService, IID_IDispatch). L'identità dell'oggetto non viene presupposta quando si specifica un identificatore del servizio diverso.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
