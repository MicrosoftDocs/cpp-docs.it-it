---
title: Classe IRowsetNotifyCP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetNotifyCP
- Fire_OnFieldChange
- ATL::IRowsetNotifyCP::Fire_OnFieldChange
- ATL.IRowsetNotifyCP.Fire_OnFieldChange
- IRowsetNotifyCP.Fire_OnFieldChange
- IRowsetNotifyCP::Fire_OnFieldChange
- IRowsetNotifyCP.Fire_OnRowChange
- ATL.IRowsetNotifyCP.Fire_OnRowChange
- Fire_OnRowChange
- ATL::IRowsetNotifyCP::Fire_OnRowChange
- IRowsetNotifyCP::Fire_OnRowChange
- Fire_OnRowsetChange
- IRowsetNotifyCP::Fire_OnRowsetChange
- IRowsetNotifyCP.Fire_OnRowsetChange
- ATL::IRowsetNotifyCP::Fire_OnRowsetChange
- ATL.IRowsetNotifyCP.Fire_OnRowsetChange
dev_langs:
- C++
helpviewer_keywords:
- IRowsetNotifyCP class
- Fire_OnFieldChange method
- Fire_OnRowChange method
- Fire_OnRowsetChange method
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e9826dd9249d01b78466a18df866afd818df78c8
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212344"
---
# <a name="irowsetnotifycp-class"></a>Classe IRowsetNotifyCP
Implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](/previous-versions/windows/desktop/ms712959\(v=vs.85\)).  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class ReentrantEventSync = CComSharedMutex>  
class IRowsetNotifyCP :   
   public IConnectionPointImpl<  
      T,   
      piid = &__uuidof(IRowsetNotify),   
      CComDynamicUnkArray DynamicUnkArray>,  
   public ReentrantEventSync  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Una classe derivata da `IRowsetNotifyCP`.  
  
 *ReentrantEventSync*  
 Una classe mutex che supporta la reentrancy (il valore predefinito è `CComSharedMutex`). Un mutex è un oggetto di sincronizzazione che consente un accesso che si escludono a vicenda thread a una risorsa.  
  
 *piid*  
 Un puntatore all'ID interfaccia (`IID*`) per un `IRowsetNotify` interfaccia del punto di connessione. Il valore predefinito è `&__uuidof(IRowsetNotify)`.  
  
 *DynamicUnkArray*  
 Matrice di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che è una matrice allocata in modo dinamico di `IUnknown` interfacce del sink puntatori al client. 

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h   
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Fire_OnFieldChange](#onfieldchange)|Notifica al consumer di una modifica al valore di una colonna.|  
|[Fire_OnRowChange](#onrowchange)|Notifica al consumer di una modifica che interessano le righe.|  
|[Fire_OnRowsetChange](#onrowsetchange)|Notifica al consumer di un cambiamento influisce sull'intero set di righe.|  
  
## <a name="remarks"></a>Note  
 `IRowsetNotifyCP` implementa funzioni per comunicare ai listener nel punto di connessione di broadcast `IID_IRowsetNotify` delle modifiche al contenuto del set di righe.  
  
 Si noti che è anche necessario implementare e registrare `IRowsetNotify` sul consumer (noto anche come "sink") usando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) in modo che il consumer può gestire le notifiche. Visualizzare [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia del punto di connessione sul consumer.  
  
 Per informazioni dettagliate sull'implementazione delle notifiche, vedere "Supporto delle notifiche" in [creazione di un Provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md).  

## <a name="onfieldchange"></a> IRowsetNotifyCP:: Fire_onfieldchange
Trasmette un [OnFieldChange](/previous-versions/windows/desktop/ms715961\(v=vs.85\)) evento per notificare i consumer di una modifica al valore di una colonna.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Fire_OnFieldChange(IRowset* pRowset,  
   HROW hRow,  
   DBORDINAL cColumns,  
   DBORDINAL* rgColumns,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify::OnFieldChange](/previous-versions/windows/desktop/ms715961\(v=vs.85\)) nel *riferimento per programmatori OLE DB*. 

## <a name="onrowchange"></a> IRowsetNotifyCP:: Fire_onrowchange
Trasmette un [OnRowChange](/previous-versions/windows/desktop/ms722694\(v=vs.85\)) evento in tutti i listener nel punto di connessione `IID_IRowsetNotify` per notificare i consumer di una modifica che interessano le righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Fire_OnRowChange(IRowset* pRowset,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify:: Onrowchange](/previous-versions/windows/desktop/ms722694\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  

## <a name="onrowsetchange"></a> IRowsetNotifyCP:: Fire_onrowsetchange
Trasmette un [OnRowsetChange](/previous-versions/windows/desktop/ms722669\(v=vs.85\)) evento in tutti i listener nel punto di connessione `IID_IRowsetNotify` per notificare i consumer di un cambiamento influisce sull'intero set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify::OnRowsetChange](/previous-versions/windows/desktop/ms722669\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifiche (COM)](https://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)   
 [END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)   
 [CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)