---
title: Classe IAccessorImpl
ms.date: 11/04/2016
f1_keywords:
- IAccessorImpl
- ATL.IAccessorImpl.IAccessorImpl
- ATL::IAccessorImpl::IAccessorImpl
- IAccessorImpl::IAccessorImpl
- IAccessorImpl.IAccessorImpl
- ATL::IAccessorImpl::AddRefAccessor
- AddRefAccessor
- IAccessorImpl::AddRefAccessor
- IAccessorImpl.AddRefAccessor
- ATL.IAccessorImpl.AddRefAccessor
- IAccessorImpl::CreateAccessor
- CreateAccessor
- ATL::IAccessorImpl::CreateAccessor
- IAccessorImpl.CreateAccessor
- ATL.IAccessorImpl.CreateAccessor
- IAccessorImpl.GetBindings
- ATL::IAccessorImpl::GetBindings
- IAccessorImpl::GetBindings
- GetBindings
- ATL.IAccessorImpl.GetBindings
- ReleaseAccessor
- IAccessorImpl::ReleaseAccessor
- ATL.IAccessorImpl.ReleaseAccessor
- ATL::IAccessorImpl::ReleaseAccessor
- IAccessorImpl.ReleaseAccessor
helpviewer_keywords:
- IAccessorImpl class
- IAccessorImpl class, constructor
- IAccessorImpl constructor
- AddRefAccessor method
- CreateAccessor method
- GetBindings method
- ReleaseAccessor method
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
ms.openlocfilehash: 356278b316912bdb81f1c43bbf2034f00ec3d785
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845614"
---
# <a name="iaccessorimpl-class"></a>Classe IAccessorImpl

Fornisce un'implementazione dell'interfaccia [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T,
   class BindType = ATLBINDINGS,
   class BindingVector = CAtlMap <HACCESSOR hAccessor, BindType* pBindingsStructure>>
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il set di righe o la classe di oggetti Command.

*BindType*<br/>
Unità di archiviazione per le informazioni di binding. Il valore predefinito è la `ATLBINDINGS` struttura (vedere Atldb. h).

*BindingVector*<br/>
Unità di archiviazione per le informazioni sulle colonne. Il valore predefinito è [CAtlMap](../../atl/reference/catlmap-class.md) , in cui l'elemento Key è un valore hAccessor e l'elemento value è un puntatore a una `BindType` struttura.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[IAccessorImpl](#iaccessorimpl)|Costruttore.|

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Descrizione |
|-|-|
|[AddRefAccessor](#addrefaccessor)|Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.|
|[CreateAccessor](#createaccessor)|Crea una funzione di accesso da un insieme di associazioni.|
|[GetBindings](#getbindings)|Restituisce le associazioni contenute in una funzione di accesso.|
|[ReleaseAccessor](#releaseaccessor)|Rilascia una funzione di accesso.|

## <a name="remarks"></a>Osservazioni

Questa operazione è obbligatoria per i set di righe e i comandi. OLE DB richiede che i provider implementino un HACCESSOR, che è un tag per una matrice di strutture [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) . HACCESSORoggetti fornite da `IAccessorImpl` sono indirizzi delle `BindType` strutture. Per impostazione predefinita, `BindType` è definito come `ATLBINDINGS` una `IAccessorImpl` definizione di modello in. `BindType` fornisce un meccanismo utilizzato da `IAccessorImpl` per tenere traccia del numero di elementi nella `DBBINDING` matrice, nonché di un conteggio dei riferimenti e dei flag della funzione di accesso.

## <a name="iaccessorimpliaccessorimpl"></a><a name="iaccessorimpl"></a> IAccessorImpl:: IAccessorImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
IAccessorImpl();
```

## <a name="iaccessorimpladdrefaccessor"></a><a name="addrefaccessor"></a> IAccessorImpl:: AddRefAccessor

Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(AddRefAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### <a name="parameters"></a>Parametri

Vedere [IAccessor:: AddRefAccessor](/previous-versions/windows/desktop/ms714978(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="iaccessorimplcreateaccessor"></a><a name="createaccessor"></a> IAccessorImpl:: CreateAccessor

Crea una funzione di accesso da un insieme di associazioni.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(CreateAccessor)(DBACCESSORFLAGS dwAccessorFlags,
   DBCOUNTITEM cBindings,
   const DBBINDING rgBindings[],
   DBLENGTH cbRowSize,
   HACCESSOR* phAccessor,
   DBBINDSTATUS rgStatus[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IAccessor:: CreateAccessor](/previous-versions/windows/desktop/ms720969(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="iaccessorimplgetbindings"></a><a name="getbindings"></a> IAccessorImpl:: GetBindings

Restituisce le associazioni delle colonne di base del consumer in una funzione di accesso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetBindings)(HACCESSOR hAccessor,
   DBACCESSORFLAGS* pdwAccessorFlags,
   DBCOUNTITEM* pcBindings,
   DBBINDING** prgBindings);
```

#### <a name="parameters"></a>Parametri

Vedere [IAccessor:: GetBindings](/previous-versions/windows/desktop/ms721253(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="iaccessorimplreleaseaccessor"></a><a name="releaseaccessor"></a> IAccessorImpl:: ReleaseAccessor

Rilascia una funzione di accesso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(ReleaseAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### <a name="parameters"></a>Parametri

Vedere [IAccessor:: ReleaseAccessor](/previous-versions/windows/desktop/ms719717(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
