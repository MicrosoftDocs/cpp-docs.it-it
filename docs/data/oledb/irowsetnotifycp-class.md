---
title: Classe IRowsetNotifyCP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetNotifyCP
dev_langs:
- C++
helpviewer_keywords:
- IRowsetNotifyCP class
ms.assetid: ccef402b-94a0-4c2e-9a13-7e854ef82390
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 19147710ce8965222eed998e1a7ab4baa1e32caf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="irowsetnotifycp-class"></a>Classe IRowsetNotifyCP
Implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx).  
  
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
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da `IRowsetNotifyCP`.  
  
 `ReentrantEventSync`  
 Una mutex (classe) che supporta la reentrancy (il valore predefinito è **CComSharedMutex**). Un mutex è un oggetto di sincronizzazione che consente un accesso si escludono a vicenda thread a una risorsa.  
  
 `piid`  
 Un puntatore all'ID dell'interfaccia (**IID\***) per un **IRowsetNotify** interfaccia punto di connessione. Il valore predefinito è **& __uuidof(IRowsetNotify)**.  
  
 `DynamicUnkArray`  
 Matrice di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), ovvero una matrice allocata in modo dinamico di **IUnknown** interfacce del sink di puntatori al client.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Fire_OnFieldChange](../../data/oledb/irowsetnotifycp-fire-onfieldchange.md)|Notifica al consumer di una modifica al valore di una colonna.|  
|[Fire_OnRowChange](../../data/oledb/irowsetnotifycp-fire-onrowchange.md)|Notifica al consumer di una modifica che interessano le righe.|  
|[Fire_OnRowsetChange](../../data/oledb/irowsetnotifycp-fire-onrowsetchange.md)|Notifica al consumer di una modifica che interessano l'intero set di righe.|  
  
## <a name="remarks"></a>Note  
 `IRowsetNotifyCP` implementa funzioni per comunicare ai listener sul punto di connessione di broadcast **IID_IRowsetNotify** delle modifiche al contenuto del set di righe.  
  
 Si noti che è anche necessario implementare e registrare `IRowsetNotify` sul consumer (noto anche come "sink") utilizzando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) in modo che il consumer può gestire le notifiche. Vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione dell'interfaccia di punto di connessione sul consumer.  
  
 Per informazioni dettagliate sull'implementazione delle notifiche, vedere "Supporto di notifiche" in [la creazione di un Provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Notifiche (COM)](http://msdn.microsoft.com/library/windows/desktop/ms678433)   
 [BEGIN_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#begin_connection_point_map)   
 [END_CONNECTION_POINT_MAP](../../atl/reference/connection-point-macros.md#end_connection_point_map)   
 [CONNECTION_POINT_ENTRY](../../atl/reference/connection-point-macros.md#connection_point_entry)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)