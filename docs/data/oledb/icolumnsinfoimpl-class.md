---
title: Classe IColumnsInfoImpl
ms.date: 11/04/2016
f1_keywords:
- ATL.IColumnsInfoImpl<T>
- ATL::IColumnsInfoImpl
- IColumnsInfoImpl
- ATL.IColumnsInfoImpl
- ATL::IColumnsInfoImpl<T>
- GetColumnInfo
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
ms.openlocfilehash: d9fbe95f87cfdf51ae9c52c7890e6f6c4075c89a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039793"
---
# <a name="icolumnsinfoimpl-class"></a>Classe IColumnsInfoImpl

Fornisce un'implementazione del [IColumnsInfo](/previous-versions/windows/desktop/ms724541(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IColumnsInfoImpl :
   public IColumnsInfo, 
   public CDBIDOps
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IColumnsInfoImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetColumnInfo](#getcolumninfo)|Restituisce i metadati della colonna necessari per la maggior parte dei consumatori.|
|[MapColumnIDs](#mapcolumnids)|Restituisce una matrice di ordinali delle colonne in un set di righe che sono identificati dall'ID di colonna specificati.|

## <a name="remarks"></a>Note

Un'interfaccia obbligatoria nel set di righe e i comandi. Per modificare il comportamento del proprio provider `IColumnsInfo` implementazione, è necessario modificare la mappa delle colonne del provider.

## <a name="getcolumninfo"></a> IColumnsInfoImpl::GetColumnInfo

Restituisce i metadati della colonna necessari per la maggior parte dei consumatori.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetColumnInfo)(DBORDINAL* pcColumns,
   DBCOLUMNINFO** prgInfo,
   OLECHAR** ppStringsBuffer);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.

## <a name="mapcolumnids"></a> IColumnsInfoImpl::MapColumnIDs

Restituisce una matrice di ordinali delle colonne in un set di righe che sono identificati dall'ID di colonna specificati.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (MapColumnIDs)(DBORDINAL cColumnIDs,
   const DBID rgColumnIDs[],
   DBORDINAL rgColumns[]);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IColumnsInfo::MapColumnIDs](/previous-versions/windows/desktop/ms714200(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)