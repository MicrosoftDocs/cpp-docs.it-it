---
title: Classe IRowsetUpdateImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetUpdateImpl
- ATL.IRowsetUpdateImpl
- ATL::IRowsetUpdateImpl
- SetData
- IRowsetUpdateImpl::SetData
- IRowsetUpdateImpl.SetData
- ATL::IRowsetUpdateImpl::SetData
- ATL.IRowsetUpdateImpl.SetData
- ATL.IRowsetUpdateImpl.GetOriginalData
- IRowsetUpdateImpl.GetOriginalData
- GetOriginalData
- ATL::IRowsetUpdateImpl::GetOriginalData
- IRowsetUpdateImpl::GetOriginalData
- IRowsetUpdateImpl::GetPendingRows
- GetPendingRows
- IRowsetUpdateImpl.GetPendingRows
- ATL::IRowsetUpdateImpl::GetPendingRows
- ATL.IRowsetUpdateImpl.GetPendingRows
- ATL.IRowsetUpdateImpl.GetRowStatus
- IRowsetUpdateImpl::GetRowStatus
- IRowsetUpdateImpl.GetRowStatus
- ATL::IRowsetUpdateImpl::GetRowStatus
- GetRowStatus
- ATL.IRowsetUpdateImpl.Undo
- ATL::IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl.Undo
- ATL::IRowsetUpdateImpl::Update
- IRowsetUpdateImpl::Update
- IRowsetUpdateImpl.Update
- ATL.IRowsetUpdateImpl.Update
- IRowsetUpdateImpl::IsUpdateAllowed
- IRowsetUpdateImpl.IsUpdateAllowed
- IsUpdateAllowed
- IRowsetUpdateImpl.m_mapCachedData
- IRowsetUpdateImpl::m_mapCachedData
- m_mapCachedData
dev_langs:
- C++
helpviewer_keywords:
- providers, updatable
- IRowsetUpdateImpl class
- updatable providers, deferred update
- SetData method
- GetOriginalData method
- GetPendingRows method
- GetRowStatus method
- Undo method
- Update method
- IsUpdateAllowed method
- m_mapCachedData
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8d58709e9a2b5bd86102e8323456c6bf9ca72fa1
ms.sourcegitcommit: e5792fcb89b9ba64c401f90f4f26a8e45d4a2359
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2018
ms.locfileid: "39322137"
---
# <a name="irowsetupdateimpl-class"></a>Classe IRowsetUpdateImpl
L'implementazione di modelli OLE DB del [IRowsetUpdate](https://msdn.microsoft.com/library/ms714401.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
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
   MapClass>  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Una classe derivata da `IRowsetUpdateImpl`.  
  
 *Archiviazione*  
 Il record dell'utente.  
  
 *UpdateArray*  
 Matrice che contiene dati memorizzati nella cache per l'aggiornamento del set di righe.  
  
 *RowClass*  
 L'unità di archiviazione per il `HROW`.  
  
 *MapClass*  
 L'unità di archiviazione per tutti gli handle di riga utilizzato dal provider.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)  
  
|||  
|-|-|  
|[SetData](#setdata)|Imposta i valori dei dati in una o più colonne.|  
  
### <a name="interface-methods-used-with-irowsetupdate"></a>Metodi di interfaccia (utilizzati con IRowsetUpdate)  
  
|||  
|-|-|  
|[GetOriginalData](#getoriginaldata)|Ottiene i dati trasmessi a più di recente o ottenuti dall'origine dati, ignorando le modifiche in sospeso.|  
|[GetPendingRows](#getpendingrows)|Restituisce un elenco di righe con modifiche in sospeso.|  
|[GetRowStatus](#getrowstatus)|Restituisce lo stato di righe specificate.|  
|[Operazione di annullamento](#undo)|Annulla tutte le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.|  
|[Aggiornamento](#update)|Trasmette tutte le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.|  
  
### <a name="implementation-methods-callback"></a>Metodi di implementazione (Callback)  
  
|||  
|-|-|  
|[IsUpdateAllowed](#isupdateallowed)|Utilizzate per verificare la sicurezza, l'integrità, e così via prima di consentire gli aggiornamenti.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_mapCachedData](#mapcacheddata)|Contiene i dati originali per l'operazione posticipata.|  
  
## <a name="remarks"></a>Note  
 Prima di tutto necessario leggere e comprendere la documentazione per [IRowsetChange](https://msdn.microsoft.com/library/ms715790.aspx), in quanto tutto ciò che è descritti vi si applica anche qui. È consigliabile leggere anche il capitolo 6 del *riferimento per programmatori OLE DB* sull'impostazione dei dati.  
  
 `IRowsetUpdateImpl` implementa OLE DB `IRowsetUpdate` interfaccia, che consente agli utenti di ritardare la trasmissione delle modifiche apportate con `IRowsetChange` per l'origine dati e annullare le modifiche prima della trasmissione.  
  
> [!IMPORTANT]
>  È consigliabile leggere la documentazione seguente prima di tentare di implementare un provider:  
  
-   [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Capitolo 6 del *riferimento per programmatori OLE DB*  
  
-   Vedere anche il `RUpdateRowset` classe viene utilizzata nell'esempio UpdatePV  

## <a name="setdata"></a> IRowsetUpdateImpl:: SetData
Imposta i valori dei dati in una o più colonne.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (SetData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetChange:: SetData](https://msdn.microsoft.com/library/ms721232.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override di [IRowsetChangeImpl:: SetData](../../data/oledb/irowsetchangeimpl-setdata.md) metodo ma include la memorizzazione nella cache dei dati originali per consentire l'elaborazione immediata o posticipata dell'operazione.

## <a name="getoriginaldata"></a> IRowsetUpdateImpl:: GetOriginalData
Ottiene i dati trasmessi a più di recente o ottenuti dall'origine dati, ignorando le modifiche in sospeso.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (GetOriginalData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pData);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetUpdate::GetOriginalData](https://msdn.microsoft.com/library/ms709947.aspx) nel *riferimento per programmatori OLE DB*.   

## <a name="getpendingrows"></a> IRowsetUpdateImpl:: Getpendingrows
Restituisce un elenco di righe con modifiche in sospeso.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (GetPendingRows )(HCHAPTER /* hReserved */,  
   DBPENDINGSTATUS dwRowStatus,  
   DBCOUNTITEM* pcPendingRows,  
   HROW** prgPendingRows,  
   DBPENDINGSTATUS** prgPendingStatus);  
```  
  
#### <a name="parameters"></a>Parametri  
 *hReserved*  
 [in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/library/ms719626.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/library/ms719626.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [IRowsetUpdate::GetPendingRows](https://msdn.microsoft.com/library/ms719626.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="getrowstatus"></a> IRowsetUpdateImpl:: GetRowStatus
Restituisce lo stato di righe specificate.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (GetRowStatus )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBPENDINGSTATUS rgPendingStatus[]);  
```  
  
#### <a name="parameters"></a>Parametri  
 *hReserved*  
 [in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/library/ms724377.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/library/ms724377.aspx) nel *riferimento per programmatori OLE DB*.  

## <a name="undo"></a> IRowsetUpdateImpl:: Undo
Annulla tutte le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (Undo )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[ ],  
   DBCOUNTITEM* pcRowsUndone,  
   HROW** prgRowsUndone,  
   DBROWSTATUS** prgRowStatus);  
```  
  
#### <a name="parameters"></a>Parametri  
 *hReserved*  
 [in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/library/ms719655.aspx).  
  
 *pcRowsUndone*  
 [out] Corrisponde alla *pcRows* nel parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/library/ms719655.aspx).  
  
 *prgRowsUndone*  
 [in] Corrisponde alla *prgRows* nel parametro [IRowsetUpdate::Undo](https://msdn.microsoft.com/library/ms719655.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::Undo](https://msdn.microsoft.com/library/ms719655.aspx) nel *riferimento per programmatori OLE DB*. 

## <a name="update"></a> IRowsetUpdateImpl:: Update
Trasmette tutte le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (Update )(HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBCOUNTITEM* pcRows,  
   HROW** prgRows,  
   DBROWSTATUS** prgRowStatus);  
```  
  
#### <a name="parameters"></a>Parametri  
 *hReserved*  
 [in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate:: Update](https://msdn.microsoft.com/library/ms719709.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate:: Update](https://msdn.microsoft.com/library/ms719709.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  
 Le modifiche vengono trasmesse tramite la chiamata [IRowsetChangeImpl:: FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md). Il consumer deve chiamare [CRowset:: Update](../../data/oledb/crowset-update.md) rendere effettive le modifiche. Impostare *prgRowstatus* su un valore appropriato come descritto in [stati](https://msdn.microsoft.com/library/ms722752.aspx) nel *riferimento per programmatori OLE DB*. 
  
## <a name="isupdateallowed"></a> IRowsetUpdateImpl:: IsUpdateAllowed
Eseguire l'override di questo metodo per verificare la presenza di sicurezza, l'integrità, e così via prima degli aggiornamenti.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT IsUpdateAllowed(DBPENDINGSTATUS /* [in] */ /* status */,  
   HROW /* [in] */ /* hRowUpdate */,  
   DBROWSTATUS* /* [out] */ /* pRowStatus */);  
```  
  
#### <a name="parameters"></a>Parametri  
 *status*  
 [in] Lo stato di operazioni sulle righe in sospeso.  
  
 *hRowUpdate*  
 [in] Handle per le righe che l'utente desidera aggiornare.  
  
 *pRowStatus*  
 [out] Lo stato restituito all'utente.  
  
### <a name="remarks"></a>Note  
 Se si determina che un aggiornamento deve essere consentito, restituisce S_OK; in caso contrario restituisce E_FAIL. Se si consente a un aggiornamento, è anche necessario impostare il `DBROWSTATUS` nelle [IRowsetUpdateImpl:: Update](../../data/oledb/irowsetupdateimpl-update.md) al relativo [lo stato della riga](https://msdn.microsoft.com/library/ms722752.aspx).  

## <a name="mapcacheddata"></a> IRowsetUpdateImpl:: M_mapcacheddata
Una mappa che contiene i dati originali per l'operazione posticipata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      CAtlMap<   
   HROW hRow,    
   Storage* pData   
>   
m_mapCachedData;  
```  
  
#### <a name="parameters"></a>Parametri  
 *hRow*  
 Handle per le righe per i dati.  
  
 *pData*  
 Puntatore ai dati da memorizzare nella cache. I dati sono di tipo *archiviazione* (la classe di record utente). Vedere le *memorizzazione* argomento di modello in [classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md).  

## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)
