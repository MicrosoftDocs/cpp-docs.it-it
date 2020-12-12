---
description: 'Altre informazioni su: classe CAtlBaseModule'
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
ms.openlocfilehash: 249b2ad2d133ba0f407e9c5fabcf716b09605972
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97147537"
---
# <a name="catlbasemodule-class"></a>Classe CAtlBaseModule

Viene creata un'istanza di questa classe in ogni progetto ATL.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlBaseModule : public _ATL_BASE_MODULE
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlBaseModule:: CAtlBaseModule](#catlbasemodule)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlBaseModule:: AddResourceInstance](#addresourceinstance)|Aggiunge un'istanza di risorsa all'elenco di handle archiviati.|
|[CAtlBaseModule:: GetHInstanceAt](#gethinstanceat)|Restituisce un handle per un'istanza di risorsa specificata.|
|[CAtlBaseModule:: GetModuleInstance](#getmoduleinstance)|Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.|
|[CAtlBaseModule:: GetResourceInstance](#getresourceinstance)|Restituisce l'istanza della risorsa da un `CAtlBaseModule` oggetto.|
|[CAtlBaseModule:: RemoveResourceInstance](#removeresourceinstance)|Rimuove un'istanza di risorsa dall'elenco degli handle archiviati.|
|[CAtlBaseModule:: SetResourceInstance](#setresourceinstance)|Imposta l'istanza della risorsa di un `CAtlBaseModule` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAtlBaseModule:: m_bInitFailed](#m_binitfailed)|Variabile che indica se l'inizializzazione del modulo non è riuscita.|

## <a name="remarks"></a>Commenti

Un'istanza di `CAtlBaseModule` denominata _AtlBaseModule è presente in ogni progetto ATL, contenente un handle per l'istanza del modulo, un handle per il modulo che contiene le risorse (che per impostazione predefinita sono uno e lo stesso) e una matrice di handle ai moduli che forniscono le risorse primarie. `CAtlBaseModule` è possibile accedere in modo sicuro da più thread.

Questa classe sostituisce la classe [CComModule](../../atl/reference/ccommodule-class.md) obsoleta usata nelle versioni precedenti di ATL.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)

`CAtlBaseModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="catlbasemoduleaddresourceinstance"></a><a name="addresourceinstance"></a> CAtlBaseModule:: AddResourceInstance

Aggiunge un'istanza di risorsa all'elenco di handle archiviati.

```cpp
bool AddResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Istanza di risorsa da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stata aggiunta correttamente; in caso contrario, false.

## <a name="catlbasemodulecatlbasemodule"></a><a name="catlbasemodule"></a> CAtlBaseModule:: CAtlBaseModule

Costruttore.

```cpp
CAtlBaseModule() throw();
```

### <a name="remarks"></a>Commenti

Crea l'oggetto `CAtlBaseModule`.

## <a name="catlbasemodulegethinstanceat"></a><a name="gethinstanceat"></a> CAtlBaseModule:: GetHInstanceAt

Restituisce un handle per un'istanza di risorsa specificata.

```cpp
HINSTANCE GetHInstanceAt(int i) throw();
```

### <a name="parameters"></a>Parametri

*i*<br/>
Numero dell'istanza di risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per l'istanza della risorsa o NULL se non esiste alcuna istanza di risorsa corrispondente.

## <a name="catlbasemodulegetmoduleinstance"></a><a name="getmoduleinstance"></a> CAtlBaseModule:: GetModuleInstance

Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.

```cpp
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza del modulo.

## <a name="catlbasemodulegetresourceinstance"></a><a name="getresourceinstance"></a> CAtlBaseModule:: GetResourceInstance

Restituisce l'istanza della risorsa.

```cpp
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza della risorsa.

## <a name="catlbasemodulem_binitfailed"></a><a name="m_binitfailed"></a> CAtlBaseModule:: m_bInitFailed

Variabile che indica se l'inizializzazione del modulo non è riuscita.

```cpp
static bool m_bInitFailed;
```

### <a name="remarks"></a>Commenti

True se il modulo è stato inizializzato, false se non è stato possibile inizializzare.

## <a name="catlbasemoduleremoveresourceinstance"></a><a name="removeresourceinstance"></a> CAtlBaseModule:: RemoveResourceInstance

Rimuove un'istanza di risorsa dall'elenco degli handle archiviati.

```cpp
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Istanza di risorsa da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stata rimossa correttamente; in caso contrario, false.

## <a name="catlbasemodulesetresourceinstance"></a><a name="setresourceinstance"></a> CAtlBaseModule:: SetResourceInstance

Imposta l'istanza della risorsa di un `CAtlBaseModule` oggetto.

```cpp
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
Nuova istanza della risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza della risorsa aggiornata.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
