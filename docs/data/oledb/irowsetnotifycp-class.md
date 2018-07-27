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
ms.openlocfilehash: 207128da3e46da492ebc812b68d9ef09847045e5
ms.sourcegitcommit: e5792fcb89b9ba64c401f90f4f26a8e45d4a2359
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2018
ms.locfileid: "39322124"
---
# <a name="irowsetnotifycp-class"></a>Classe IRowsetNotifyCP
Implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](https://msdn.microsoft.com/library/ms712959.aspx).  
  
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
Trasmette un [OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) evento per notificare i consumer di una modifica al valore di una colonna.  
  
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
 Visualizzare [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/library/ms715961.aspx) nel *riferimento per programmatori OLE DB*. 

## <a name="onrowchange"></a> IRowsetNotifyCP:: Fire_onrowchange
Trasmette un [OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx) evento in tutti i listener nel punto di connessione `IID_IRowsetNotify` per notificare i consumer di una modifica che interessano le righe.  
  
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
 Visualizzare [IRowsetNotify:: Onrowchange](https://msdn.microsoft.com/library/ms722694.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="onrowsetchange"></a> IRowsetNotifyCP:: Fire_onrowsetchange
Trasmette un [OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) evento in tutti i listener nel punto di connessione `IID_IRowsetNotify` per notificare i consumer di un cambiamento influisce sull'intero set di righe.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) nel *riferimento per programmatori OLE DB*.
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifiche (COM)](http://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)   
 [END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)   
 [CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)
