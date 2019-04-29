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
- GetProperties
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
ms.openlocfilehash: b42ecf6c03dd1023d1ba150d579f77c4bae8998a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390724"
---
# <a name="irowsetinfoimpl-class"></a>Classe IRowsetInfoImpl

Fornisce un'implementazione per il [IRowsetInfo](/previous-versions/windows/desktop/ms724541(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>
class ATL_NO_VTABLE IRowsetInfoImpl :
   public IRowsetInfo, 
   public CUtlProps<PropClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IRowsetInfoImpl`.

*PropClass*<br/>
Una classe di proprietà definibili dall'utente che viene impostato su *T*.

## <a name="requirements"></a>Requisiti

**Intestazione:** altdb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetProperties](#getproperties)|Restituisce le impostazioni correnti di tutte le proprietà supportate dal set di righe.|
|[GetReferencedRowset](#getreferencedrowset)|Restituisce un puntatore di interfaccia al set di righe a cui viene applicato un segnalibro.|
|[GetSpecification](#getspecification)|Restituisce un puntatore a interfaccia sull'oggetto (comando o sessione) che ha creato questo set di righe.|

## <a name="remarks"></a>Note

Un'interfaccia obbligatoria nel set di righe. Questa classe implementa le proprietà del set di righe usando il [mapping dell'insieme di proprietà](../../data/oledb/begin-propset-map.md) definito nella classe del comando. Anche se la classe di set di righe viene visualizzata usare proprietà della classe di comando imposta il set di righe viene fornito con la propria copia delle proprietà in fase di esecuzione, quando viene creato da un oggetto comando o sessione.

## <a name="getproperties"></a> IRowsetInfoImpl::GetProperties

Restituisce le impostazioni correnti per le proprietà di `DBPROPSET_ROWSET` gruppo.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetProperties )(const ULONG cPropertyIDSets,
   const DBPROPIDSET rgPropertyIDSets[],
   ULONG* pcPropertySets,
   DBPROPSET** prgPropertySets);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetInfo:: GetProperties](/previous-versions/windows/desktop/ms719611(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="getreferencedrowset"></a> IRowsetInfoImpl::GetReferencedRowset

Restituisce un puntatore di interfaccia al set di righe a cui viene applicato un segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetReferencedRowset )(DBORDINAL iOrdinal,
   REFIID riid,
   IUnknown** ppReferencedRowset);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetInfo::GetReferencedRowset](/previous-versions/windows/desktop/ms721145(v=vs.85)) nel *riferimento per programmatori OLE DB*. Il *iOrdinal* parametro deve essere una colonna del segnalibro.

## <a name="getspecification"></a> IRowsetInfoImpl::GetSpecification

Restituisce un puntatore a interfaccia sull'oggetto (comando o sessione) che ha creato questo set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetSpecification )(REFIID riid,
   IUnknown** ppSpecification);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetInfo::GetSpecification](/previous-versions/windows/desktop/ms716746(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Utilizzare questo metodo con [IGetDataSourceImpl](../../data/oledb/igetdatasourceimpl-class.md) per recuperare le proprietà dall'oggetto origine dati.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)