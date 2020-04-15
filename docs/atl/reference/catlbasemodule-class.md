---
title: Classe CAtlBaseModule
ms.date: 11/04/2016
f1_keywords:
- CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule::CAtlBaseModule
- ATLCORE/ATL::CAtlBaseModule::AddResourceInstance
- ATLCORE/ATL::CAtlBaseModule::GetHInstanceAt
- ATLCORE/ATL::CAtlBaseModule::GetModuleInstance
- ATLCORE/ATL::CAtlBaseModule::GetResourceInstance
- ATLCORE/ATL::CAtlBaseModule::RemoveResourceInstance
- ATLCORE/ATL::CAtlBaseModule::SetResourceInstance
- ATLCORE/ATL::CAtlBaseModule::m_bInitFailed
helpviewer_keywords:
- CAtlBaseModule class
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
ms.openlocfilehash: a55412eff18fd04ac4e41c0f001991c1cf725b9f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321504"
---
# <a name="catlbasemodule-class"></a>Classe CAtlBaseModule

Questa classe viene creata un'istanza in ogni progetto ATL.

## <a name="syntax"></a>Sintassi

```
class CAtlBaseModule : public _ATL_BASE_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Modulo CAtlBaseModule::CAtlBaseModule](#catlbasemodule)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlBaseModule::AddResourceInstance](#addresourceinstance)|Aggiunge un'istanza di risorsa all'elenco degli handle archiviati.|
|[CAtlBaseModule::GetHInstanceAt (Informazioni in base aunmeper la classe)](#gethinstanceat)|Restituisce un handle per un'istanza di risorsa specificata.|
|[CAtlBaseModule::GetModuleInstance (Modulo DiCAleBaseModule::GetModuleInstance)](#getmoduleinstance)|Restituisce l'istanza `CAtlBaseModule` del modulo da un oggetto.|
|[CAtlBaseModule::GetResourceInstance](#getresourceinstance)|Restituisce l'istanza `CAtlBaseModule` della risorsa da un oggetto.|
|[CAtlBaseModule::RemoveResourceInstance](#removeresourceinstance)|Rimuove un'istanza di risorsa dall'elenco degli handle archiviati.|
|[CAtlBaseModule::SetResourceInstance](#setresourceinstance)|Imposta l'istanza `CAtlBaseModule` della risorsa di un oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlBaseModule::m_bInitFailed](#m_binitfailed)|Variabile che indica se l'inizializzazione del modulo non è riuscita.|

## <a name="remarks"></a>Osservazioni

Un'istanza `CAtlBaseModule` di _AtlBaseModule denominata è presente in ogni progetto ATL, contenente un handle per l'istanza del modulo, un handle per il modulo contenente le risorse (che per impostazione predefinita sono uno e lo stesso) e una matrice di handle per i moduli che forniscono risorse primarie. `CAtlBaseModule`è possibile accedervi in modo sicuro da più thread.

Questa classe sostituisce la classe [CComModule](../../atl/reference/ccommodule-class.md) obsoleta utilizzata nelle versioni precedenti di ATL.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)

`CAtlBaseModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="catlbasemoduleaddresourceinstance"></a><a name="addresourceinstance"></a>CAtlBaseModule::AddResourceInstance

Aggiunge un'istanza di risorsa all'elenco degli handle archiviati.

```
bool AddResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Istanza della risorsa da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stata aggiunta correttamente, false in caso contrario.

## <a name="catlbasemodulecatlbasemodule"></a><a name="catlbasemodule"></a>Modulo CAtlBaseModule::CAtlBaseModule

Costruttore.

```
CAtlBaseModule() throw();
```

### <a name="remarks"></a>Osservazioni

Crea l'oggetto `CAtlBaseModule`.

## <a name="catlbasemodulegethinstanceat"></a><a name="gethinstanceat"></a>CAtlBaseModule::GetHInstanceAt (Informazioni in base aunmeper la classe)

Restituisce un handle per un'istanza di risorsa specificata.

```
HINSTANCE GetHInstanceAt(int i) throw();
```

### <a name="parameters"></a>Parametri

*Ho*<br/>
Numero dell'istanza della risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per l'istanza della risorsa o NULL se non esiste alcuna istanza di risorsa corrispondente.

## <a name="catlbasemodulegetmoduleinstance"></a><a name="getmoduleinstance"></a>CAtlBaseModule::GetModuleInstance (Modulo DiCAleBaseModule::GetModuleInstance)

Restituisce l'istanza `CAtlBaseModule` del modulo da un oggetto.

```
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza del modulo.

## <a name="catlbasemodulegetresourceinstance"></a><a name="getresourceinstance"></a>CAtlBaseModule::GetResourceInstance

Restituisce l'istanza della risorsa.

```
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza della risorsa.

## <a name="catlbasemodulem_binitfailed"></a><a name="m_binitfailed"></a>CAtlBaseModule::m_bInitFailed

Variabile che indica se l'inizializzazione del modulo non è riuscita.

```
static bool m_bInitFailed;
```

### <a name="remarks"></a>Osservazioni

True se il modulo inizializzato, false se non è stato possibile inizializzare.

## <a name="catlbasemoduleremoveresourceinstance"></a><a name="removeresourceinstance"></a>CAtlBaseModule::RemoveResourceInstance

Rimuove un'istanza di risorsa dall'elenco degli handle archiviati.

```
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Istanza della risorsa da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stata rimossa correttamente, false in caso contrario.

## <a name="catlbasemodulesetresourceinstance"></a><a name="setresourceinstance"></a>CAtlBaseModule::SetResourceInstance

Imposta l'istanza `CAtlBaseModule` della risorsa di un oggetto.

```
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Nuova istanza della risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza della risorsa aggiornata.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
