---
title: Macro Mapping dei servizi
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::BEGIN_SERVICE_MAP
- atlcom/ATL::END_SERVICE_MAP
- atlcom/ATL::SERVICE_ENTRY
- atlcom/ATL::SERVICE_ENTRY_CHAIN
ms.assetid: ca02a125-454a-4cf6-aac2-1c5585025ed4
ms.openlocfilehash: ab130b2401dc9885f82fd5668a2d722a96dd289b
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78862514"
---
# <a name="service-map-macros"></a>Macro Mapping dei servizi

Queste macro definiscono le mappe e le voci del servizio.

|||
|-|-|
|[BEGIN_SERVICE_MAP](#begin_service_map)|Contrassegna l'inizio di una mappa del servizio ATL.|
|[END_SERVICE_MAP](#end_service_map)|Contrassegna la fine di una mappa del servizio ATL.|
|[SERVICE_ENTRY](#service_entry)|Indica che l'oggetto supporta un ID del servizio specifico.|
|[SERVICE_ENTRY_CHAIN](#service_entry_chain)|Indica a [IServiceProviderImpl:: QueryService](#queryservice) di concatenare all'oggetto specificato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="begin_service_map"></a>BEGIN_SERVICE_MAP

Contrassegna l'inizio della mappa del servizio.

```
BEGIN_SERVICE_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
in Specifica la classe che contiene la mappa dei servizi.

### <a name="remarks"></a>Osservazioni

Utilizzare l'elenco dei servizi per implementare la funzionalità del provider di servizi nell'oggetto COM. In primo luogo, è necessario derivare la classe da [IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md). Esistono due tipi di voci:

- [SERVICE_ENTRY](#service_entry)   Indica il supporto per l'ID servizio specificato (SID).

- [SERVICE_ENTRY_CHAIN](#service_entry_chain)   Indica a [IServiceProviderImpl:: QueryService](#queryservice) di concatenare a un altro oggetto specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#57](../../atl/codesnippet/cpp/service-map-macros_1.h)]

##  <a name="end_service_map"></a>END_SERVICE_MAP

Contrassegna la fine della mappa del servizio.

```
END_SERVICE_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

##  <a name="service_entry"></a>SERVICE_ENTRY

Indica che l'oggetto supporta l'ID servizio specificato da *SID*.

```
SERVICE_ENTRY( SID )
```

### <a name="parameters"></a>Parametri

*SID*<br/>
L'ID del servizio.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

##  <a name="service_entry_chain"></a>SERVICE_ENTRY_CHAIN

Indica a [IServiceProviderImpl:: QueryService](#queryservice) di concatenare all'oggetto specificato da *punk*.

```
SERVICE_ENTRY_CHAIN( punk )
```

### <a name="parameters"></a>Parametri

*punk*<br/>
Puntatore all'interfaccia **IUnknown** a cui concatenare.

### <a name="example"></a>Esempio

Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).

##  <a name="queryservice"></a>IServiceProviderImpl:: QueryService

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

### <a name="remarks"></a>Osservazioni

`QueryService` restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessario.

Quando si chiama `QueryService`, viene passato un identificatore del servizio (*guidService*) e un identificatore di interfaccia (*riid*). *GuidService* specifica il servizio a cui si desidera accedere e *riid* identifica un'interfaccia che fa parte del servizio. In return si riceve un puntatore indiretto all'interfaccia.

L'oggetto che implementa l'interfaccia può implementare anche interfacce che fanno parte di altri servizi. Valutare gli aspetti seguenti:

- Alcune di queste interfacce potrebbero essere facoltative. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presenti in ogni implementazione del servizio o in ogni oggetto restituito.

- A differenza delle chiamate a `QueryInterface`, il passaggio di un identificatore del servizio diverso non significa necessariamente che venga restituito un oggetto Component Object Model (COM) diverso.

- L'oggetto restituito potrebbe avere interfacce aggiuntive che non fanno parte della definizione del servizio.

Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, possono entrambi specificare l'uso della stessa interfaccia, anche se l'implementazione dell'interfaccia potrebbe non avere nulla in comune tra i due servizi. Questa operazione funziona perché una chiamata a `QueryService` (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da `QueryService` (SID_SYourService, IID_IDispatch). L'identità dell'oggetto non viene presupposta quando si specifica un identificatore del servizio diverso.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
