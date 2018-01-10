---
title: Classe IRowsetUpdateImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetUpdateImpl
- ATL.IRowsetUpdateImpl
- ATL::IRowsetUpdateImpl
dev_langs: C++
helpviewer_keywords:
- providers, updatable
- IRowsetUpdateImpl class
- updatable providers, deferred update
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 206f3d25069eaa12efce8150e82c4f54fc96f4fd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetupdateimpl-class"></a>Classe IRowsetUpdateImpl
L'implementazione di modelli OLE DB del [IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   class T,   
   class Storage,   
   class UpdateArray = CAtlArray<Storage>,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>   
>  
class IRowsetUpdateImpl : public IRowsetChangeImpl<  
   T,   
   Storage,   
   IRowsetUpdate,   
   RowClass,   
   MapClass  
>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da `IRowsetUpdateImpl`.  
  
 `Storage`  
 Record utente.  
  
 `UpdateArray`  
 Matrice che contiene dati memorizzati nella cache per l'aggiornamento del set di righe.  
  
 `RowClass`  
 L'unità di archiviazione per il **HROW**.  
  
 `MapClass`  
 L'unità di archiviazione per tutti gli handle di riga mantenuti dal provider.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)  
  
|||  
|-|-|  
|[SetData](../../data/oledb/irowsetupdateimpl-setdata.md)|Imposta i valori dei dati in una o più colonne.|  
  
### <a name="interface-methods-used-with-irowsetupdate"></a>Metodi di interfaccia (utilizzati con IRowsetUpdate)  
  
|||  
|-|-|  
|[GetOriginalData](../../data/oledb/irowsetupdateimpl-getoriginaldata.md)|Ottiene i dati trasmessi a più di recente o ottenuti dall'origine dati, ignorando le modifiche in sospeso.|  
|[GetPendingRows](../../data/oledb/irowsetupdateimpl-getpendingrows.md)|Restituisce un elenco di righe con modifiche in sospeso.|  
|[GetRowStatus](../../data/oledb/irowsetupdateimpl-getrowstatus.md)|Restituisce lo stato di righe specificate.|  
|[Annulla](../../data/oledb/irowsetupdateimpl-undo.md)|Annulla le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.|  
|[Aggiornamento](../../data/oledb/irowsetupdateimpl-update.md)|Consente di trasmettere le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.|  
  
### <a name="implementation-methods-callback"></a>Metodi di implementazione (Callback)  
  
|||  
|-|-|  
|[IsUpdateAllowed](../../data/oledb/irowsetupdateimpl-isupdateallowed.md)|Utilizzate per verificare la sicurezza, l'integrità, e così via prima di consentire gli aggiornamenti.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_mapCachedData](../../data/oledb/irowsetupdateimpl-m-mapcacheddata.md)|Contiene i dati originali per l'operazione posticipata.|  
  
## <a name="remarks"></a>Note  
 È innanzitutto leggere attentamente la documentazione relativa a [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx), in quanto tutti gli elementi descritti vi si applica anche qui. È consigliabile leggere anche il capitolo 6 del *riferimento per programmatori OLE DB* sull'impostazione di dati.  
  
 `IRowsetUpdateImpl`implementa OLE DB `IRowsetUpdate` interfaccia, che consente ai consumer di ritardare la trasmissione delle modifiche apportate con `IRowsetChange` per l'origine dati e annullare le modifiche apportate prima della trasmissione.  
  
> [!IMPORTANT]
>  È consigliabile leggere la documentazione seguente prima di tentare di implementare un provider:  
  
-   [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Capitolo 6 il *di riferimento per programmatori OLE DB*  
  
-   Vedere anche la `RUpdateRowset` classe viene utilizzata nell'esempio UpdatePV  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)