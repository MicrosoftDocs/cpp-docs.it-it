---
title: Classe IColumnsInfoImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- IColumnsInfoImpl class
- GetColumnInfo method
- MapColumnIDs method
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2bc335a0c83e57b8abfeb708d9c6acce977010dd
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42571480"
---
# <a name="icolumnsinfoimpl-class"></a>Classe IColumnsInfoImpl
Fornisce un'implementazione del [IColumnsInfo](/previous-versions/windows/desktop/ms724541\(v=vs.85\)) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T>  
class ATL_NO_VTABLE IColumnsInfoImpl :   
   public IColumnsInfo,    
   public CDBIDOps  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
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

## <a name="getcolumninfo"></a> Icolumnsinfoimpl:: GetColumnInfo
Restituisce i metadati della colonna necessari per la maggior parte dei consumatori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (GetColumnInfo)(DBORDINAL* pcColumns,  
   DBCOLUMNINFO** prgInfo,  
   OLECHAR** ppStringsBuffer);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  

## <a name="mapcolumnids"></a> Icolumnsinfoimpl:: Mapcolumnids
Restituisce una matrice di ordinali delle colonne in un set di righe che sono identificati dall'ID di colonna specificati.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD (MapColumnIDs)(DBORDINAL cColumnIDs,  
   const DBID rgColumnIDs[],  
   DBORDINAL rgColumns[]);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IColumnsInfo::MapColumnIDs](/previous-versions/windows/desktop/ms714200\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)