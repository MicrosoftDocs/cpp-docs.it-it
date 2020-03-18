---
title: Classe IColumnsInfoImpl
ms.date: 11/04/2016
f1_keywords:
- ATL.IColumnsInfoImpl<T>
- ATL::IColumnsInfoImpl
- IColumnsInfoImpl
- ATL.IColumnsInfoImpl
- ATL::IColumnsInfoImpl<T>
- ATL::IColumnsInfoImpl::GetColumnInfo
- ATL.IColumnsInfoImpl.GetColumnInfo
- ATL::IColumnsInfoImpl<T>::GetColumnInfo
- IColumnsInfoImpl::GetColumnInfo
- IColumnsInfoImpl<T>::GetColumnInfo
- IColumnsInfoImpl.GetColumnInfo
- IColumnsInfoImpl<T>::MapColumnIDs
- MapColumnIDs
- ATL::IColumnsInfoImpl::MapColumnIDs
- IColumnsInfoImpl.MapColumnIDs
- ATL::IColumnsInfoImpl<T>::MapColumnIDs
- IColumnsInfoImpl::MapColumnIDs
- ATL.IColumnsInfoImpl<T>.MapColumnIDs
- ATL.IColumnsInfoImpl.MapColumnIDs
helpviewer_keywords:
- IColumnsInfoImpl class
- GetColumnInfo method
- MapColumnIDs method
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
ms.openlocfilehash: 2eb7714762de8ccf810a8fdd04ee33ae24e9d431
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447065"
---
# <a name="icolumnsinfoimpl-class"></a>Classe IColumnsInfoImpl

Fornisce un'implementazione dell'interfaccia [IColumnsInfo](/previous-versions/windows/desktop/ms724541(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IColumnsInfoImpl :
   public IColumnsInfo, 
   public CDBIDOps
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IColumnsInfoImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetColumnInfo](#getcolumninfo)|Restituisce i metadati della colonna necessari per la maggior parte degli utenti.|
|[MapColumnIDs](#mapcolumnids)|Restituisce una matrice di ordinali delle colonne in un rowset, identificati dagli ID di colonna specificati.|

## <a name="remarks"></a>Osservazioni

Interfaccia obbligatoria nei set di righe e nei comandi. Per modificare il comportamento dell'implementazione del `IColumnsInfo` del provider, è necessario modificare la mappa delle colonne del provider.

## <a name="getcolumninfo"></a>IColumnsInfoImpl:: GetColumnInfo

Restituisce i metadati della colonna necessari per la maggior parte degli utenti.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetColumnInfo)(DBORDINAL* pcColumns,
   DBCOLUMNINFO** prgInfo,
   OLECHAR** ppStringsBuffer);
```

#### <a name="parameters"></a>Parametri

Vedere [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="mapcolumnids"></a>IColumnsInfoImpl:: MapColumnIDs

Restituisce una matrice di ordinali delle colonne in un rowset, identificati dagli ID di colonna specificati.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (MapColumnIDs)(DBORDINAL cColumnIDs,
   const DBID rgColumnIDs[],
   DBORDINAL rgColumns[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IColumnsInfo:: MapColumnIDs](/previous-versions/windows/desktop/ms714200(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)