---
title: Classe IAccessorImpl
ms.date: 11/04/2016
f1_keywords:
- IAccessorImpl
- ATL.IAccessorImpl.IAccessorImpl
- ATL::IAccessorImpl::IAccessorImpl
- IAccessorImpl::IAccessorImpl
- IAccessorImpl.IAccessorImpl
- IAccessorImpl
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
ms.openlocfilehash: a01a090d4302983f7d53e051cf4d8a72bd739b4a
ms.sourcegitcommit: c40469825b6101baac87d43e5f4aed6df6b078f5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2018
ms.locfileid: "51556738"
---
# <a name="iaccessorimpl-class"></a>Classe IAccessorImpl

Fornisce un'implementazione del [IAccessor](https://docs.microsoft.com/previous-versions/windows/desktop/ms719672(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T,
   class BindType = ATLBINDINGS,
   class BindingVector = CAtlMap <HACCESSOR hAccessor, BindType* pBindingsStructure>>
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe di oggetto set di righe o un comando.

*BindType*<br/>
Unità di archiviazione per le informazioni di associazione. Il valore predefinito è il `ATLBINDINGS` struttura (vedere Atldb. h).

*BindingVector*<br/>
Unità di archiviazione di informazioni sulle colonne. Il valore predefinito è [CAtlMap](../../atl/reference/catlmap-class.md) in cui l'elemento principale è un valore HACCESSOR e l'elemento value è un puntatore a un `BindType` struttura.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[IAccessorImpl](#iaccessorimpl)|Costruttore.|

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[AddRefAccessor](#addrefaccessor)|Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.|
|[CreateAccessor](#createaccessor)|Crea una funzione di accesso da un set di associazioni.|
|[GetBindings](#getbindings)|Restituisce le associazioni in una funzione di accesso.|
|[ReleaseAccessor](#releaseaccessor)|Rilascia una funzione di accesso.|

## <a name="remarks"></a>Note

Questo campo è obbligatorio nel set di righe e i comandi. OLE DB richiede ai provider di implementare un HACCESSOR, ovvero un tag a una matrice di [DBBINDING](https://docs.microsoft.com/previous-versions/windows/desktop/ms716845(v=vs.85)) strutture. HACCESSORs disql `IAccessorImpl` sono gli indirizzi del `BindType` strutture. Per impostazione predefinita, `BindType` viene definito come un' `ATLBINDINGS` in `IAccessorImpl`della definizione del modello. `BindType` fornisce un meccanismo utilizzato da `IAccessorImpl` per tenere traccia del numero di elementi nella relativa `DBBINDING` della matrice, nonché un flag di funzioni di accesso e conteggio di riferimento.

## <a name="iaccessorimpl"></a> IAccessorImpl:: IAccessorImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
IAccessorImpl();
```

## <a name="addrefaccessor"></a> IAccessorImpl:: Addrefaccessor

Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(AddRefAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IAccessor::AddRefAccessor](https://docs.microsoft.com/previous-versions/windows/desktop/ms714978(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="createaccessor"></a> IAccessorImpl:: CreateAccessor

Crea una funzione di accesso da un set di associazioni.

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

Visualizzare [IAccessor:: CreateAccessor](https://docs.microsoft.com/previous-versions/windows/desktop/ms720969(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="getbindings"></a> IAccessorImpl:: Getbindings

Restituisce le associazioni di colonne di base da consumer in una funzione di accesso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetBindings)(HACCESSOR hAccessor,
   DBACCESSORFLAGS* pdwAccessorFlags,
   DBCOUNTITEM* pcBindings,
   DBBINDING** prgBindings);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IAccessor::GetBindings](https://docs.microsoft.com/previous-versions/windows/desktop/ms721253(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="releaseaccessor"></a> IAccessorImpl:: ReleaseAccessor

Rilascia una funzione di accesso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(ReleaseAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IAccessor:: ReleaseAccessor](https://docs.microsoft.com/previous-versions/windows/desktop/ms719717(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)