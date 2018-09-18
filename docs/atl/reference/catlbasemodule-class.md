---
title: Classe CAtlBaseModule | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAtlBaseModule class
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4b3c7d53e3500b5dd97fdbd49e4006916cd1a80
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055455"
---
# <a name="catlbasemodule-class"></a>Classe CAtlBaseModule

Questa classe viene creata un'istanza in tutti i progetti ATL.

## <a name="syntax"></a>Sintassi

```
class CAtlBaseModule : public _ATL_BASE_MODULE
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlBaseModule::CAtlBaseModule](#catlbasemodule)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlBaseModule::AddResourceInstance](#addresourceinstance)|Aggiunge un'istanza di risorsa per l'elenco di handle stored.|
|[CAtlBaseModule::GetHInstanceAt](#gethinstanceat)|Restituisce un handle per un'istanza di risorsa specificata.|
|[CAtlBaseModule::GetModuleInstance](#getmoduleinstance)|Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.|
|[CAtlBaseModule::GetResourceInstance](#getresourceinstance)|Restituisce l'istanza di risorsa da un `CAtlBaseModule` oggetto.|
|[CAtlBaseModule::RemoveResourceInstance](#removeresourceinstance)|Rimuove un'istanza di risorsa nell'elenco di handle stored.|
|[CAtlBaseModule::SetResourceInstance](#setresourceinstance)|Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAtlBaseModule::m_bInitFailed](#m_binitfailed)|Una variabile che indica se l'inizializzazione del modulo non è riuscita.|

## <a name="remarks"></a>Note

Un'istanza di `CAtlBaseModule` _AtlBaseModule denominata è presente in tutti i progetti ATL, contenente un handle per l'istanza del modulo, un handle per il modulo che contiene risorse (che per impostazione predefinita, sono dello stesso) e una matrice di handle ai moduli fornendo primario risorse. `CAtlBaseModule` è possibile accedere in modo sicuro da più thread.

Questa classe consente di sostituire l'obsoleto [CComModule](../../atl/reference/ccommodule-class.md) classe usata nelle versioni precedenti di ATL.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)

`CAtlBaseModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="addresourceinstance"></a>  CAtlBaseModule::AddResourceInstance

Aggiunge un'istanza di risorsa per l'elenco di handle stored.

```
bool AddResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
L'istanza di risorsa da aggiungere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stata aggiunta, false in caso contrario.

##  <a name="catlbasemodule"></a>  CAtlBaseModule::CAtlBaseModule

Costruttore.

```
CAtlBaseModule() throw();
```

### <a name="remarks"></a>Note

Crea l'oggetto `CAtlBaseModule`.

##  <a name="gethinstanceat"></a>  CAtlBaseModule::GetHInstanceAt

Restituisce un handle per un'istanza di risorsa specificata.

```
HINSTANCE GetHInstanceAt(int i) throw();
```

### <a name="parameters"></a>Parametri

*i*<br/>
Il numero dell'istanza di risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per l'istanza di risorsa, oppure NULL se non esiste alcuna istanza di risorsa corrispondente.

##  <a name="getmoduleinstance"></a>  CAtlBaseModule::GetModuleInstance

Restituisce l'istanza del modulo da un `CAtlBaseModule` oggetto.

```
HINSTANCE GetModuleInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza del modulo.

##  <a name="getresourceinstance"></a>  CAtlBaseModule::GetResourceInstance

Restituisce l'istanza di risorsa.

```
HINSTANCE GetResourceInstance() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza di risorsa.

##  <a name="m_binitfailed"></a>  CAtlBaseModule::m_bInitFailed

Una variabile che indica se l'inizializzazione del modulo non è riuscita.

```
static bool m_bInitFailed;
```

### <a name="remarks"></a>Note

True se il modulo è inizializzato, false se non è riuscito a inizializzare.

##  <a name="removeresourceinstance"></a>  CAtlBaseModule::RemoveResourceInstance

Rimuove un'istanza di risorsa nell'elenco di handle stored.

```
bool RemoveResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
L'istanza di risorsa da rimuovere.

### <a name="return-value"></a>Valore restituito

Restituisce true se la risorsa è stato rimosso correttamente, false in caso contrario.

##  <a name="setresourceinstance"></a>  CAtlBaseModule::SetResourceInstance

Imposta l'istanza di risorsa di un `CAtlBaseModule` oggetto.

```
HINSTANCE SetResourceInstance(HINSTANCE hInst) throw();
```

### <a name="parameters"></a>Parametri

*hInst*<br/>
La nuova istanza di risorsa.

### <a name="return-value"></a>Valore restituito

Restituisce l'istanza di risorsa aggiornata.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
