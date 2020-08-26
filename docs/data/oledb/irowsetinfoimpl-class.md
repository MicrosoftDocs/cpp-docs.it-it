---
title: Classe IRowsetInfoImpl
ms.date: 11/04/2016
f1_keywords:
- ATL.IRowsetInfoImpl
- IRowsetInfoImpl
- ATL::IRowsetInfoImpl
- ATL.IRowsetInfoImpl.GetProperties
- IRowsetInfoImpl.GetProperties
- ATL::IRowsetInfoImpl::GetProperties
- IRowsetInfoImpl::GetProperties
- ATL::IRowsetInfoImpl::GetReferencedRowset
- GetReferencedRowset
- ATL.IRowsetInfoImpl.GetReferencedRowset
- IRowsetInfoImpl.GetReferencedRowset
- IRowsetInfoImpl::GetReferencedRowset
- IRowsetInfoImpl::GetSpecification
- ATL.IRowsetInfoImpl.GetSpecification
- IRowsetInfoImpl.GetSpecification
- GetSpecification
- ATL::IRowsetInfoImpl::GetSpecification
helpviewer_keywords:
- IRowsetInfoImpl class
- GetProperties method
- GetReferencedRowset method
- GetSpecification method
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
ms.openlocfilehash: dfa3873917d5215d0069e504e0556c31744f4334
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840388"
---
# <a name="irowsetinfoimpl-class"></a>Classe IRowsetInfoImpl

Fornisce un'implementazione per l'interfaccia [IRowsetInfo](/previous-versions/windows/desktop/ms724541(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE IRowsetInfoImpl :
   public IRowsetInfo,
   public CUtlProps<PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetInfoImpl` .

*PropClass*<br/>
Classe di proprietà definibile dall'utente che per impostazione predefinita è *T*.

## <a name="requirements"></a>Requisiti

**Intestazione:** altdb. h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Descrizione |
|-|-|
|[GetProperties](#getproperties)|Restituisce le impostazioni correnti di tutte le proprietà supportate dal rowset.|
|[GetReferencedRowset](#getreferencedrowset)|Restituisce un puntatore a interfaccia al set di righe a cui si applica un segnalibro.|
|[GetSpecification](#getspecification)|Restituisce un puntatore a un'interfaccia sull'oggetto (comando o sessione) che crea questo rowset.|

## <a name="remarks"></a>Osservazioni

Interfaccia obbligatoria nei set di righe. Questa classe implementa le proprietà del set di righe tramite la [mappa del set di proprietà](../../data/oledb/begin-propset-map.md) definita nella classe Command. Anche se la classe del set di righe sembra usare i set di proprietà della classe Command, il set di righe viene fornito con la relativa copia delle proprietà della fase di esecuzione, quando viene creato da un oggetto Command o Session.

## <a name="irowsetinfoimplgetproperties"></a><a name="getproperties"></a> IRowsetInfoImpl:: GetProperties

Restituisce le impostazioni correnti per le proprietà del `DBPROPSET_ROWSET` gruppo.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetProperties )(const ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG* pcPropertySets,
   DBPROPSET** prgPropertySets);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetInfo:: GetProperties](/previous-versions/windows/desktop/ms719611(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetinfoimplgetreferencedrowset"></a><a name="getreferencedrowset"></a> IRowsetInfoImpl:: GetReferencedRowset

Restituisce un puntatore a interfaccia al set di righe a cui si applica un segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetReferencedRowset )(DBORDINAL iOrdinal,
   REFIID riid,
   IUnknown** ppReferencedRowset);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetInfo:: GetReferencedRowset](/previous-versions/windows/desktop/ms721145(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*. Il parametro *iOrdinal* deve essere una colonna bookmark.

## <a name="irowsetinfoimplgetspecification"></a><a name="getspecification"></a> IRowsetInfoImpl:: GetSpecification

Restituisce un puntatore a un'interfaccia sull'oggetto (comando o sessione) che crea questo rowset.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetSpecification )(REFIID riid,
   IUnknown** ppSpecification);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetInfo:: GetSpecification](/previous-versions/windows/desktop/ms716746(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo con [IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md) per recuperare le proprietà dall'oggetto origine dati.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
