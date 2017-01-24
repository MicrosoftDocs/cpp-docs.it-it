---
title: "Classe IRowsetUpdateImpl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetUpdateImpl"
  - "ATL.IRowsetUpdateImpl"
  - "ATL::IRowsetUpdateImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetUpdateImpl (classe)"
  - "provider, aggiornabile"
  - "provider aggiornabili, aggiornamento posticipato"
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetUpdateImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'implementazione dei modelli OLE DB dell'interfaccia di [IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx).  
  
## Sintassi  
  
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
  
#### Parametri  
 `T`  
 Classe derivata da `IRowsetUpdateImpl`.  
  
 `Storage`  
 Il record utente.  
  
 `UpdateArray`  
 Una matrice contenente i dati memorizzati nella cache per aggiornare il rowset.  
  
 `RowClass`  
 L'unità di archiviazione per **HROW**.  
  
 `MapClass`  
 L'unità di archiviazione per tutti gli handle di riga utilizzate dal provider.  
  
## Membri  
  
### Metodi di interfaccia \(utilizzato con IRowsetChange\)  
  
|||  
|-|-|  
|[SetData](../../data/oledb/irowsetupdateimpl-setdata.md)|Imposta i valori dei dati in una o più colonne.|  
  
### Metodi di interfaccia \(utilizzato con IRowsetUpdate\)  
  
|||  
|-|-|  
|[GetOriginalData](../../data/oledb/irowsetupdateimpl-getoriginaldata.md)|Ottiene i dati di recente trasmessi a o ottenuti dall'origine dati, trascurante modifiche in sospeso.|  
|[GetPendingRows](../../data/oledb/irowsetupdateimpl-getpendingrows.md)|Restituisce un elenco di righe con modifiche in sospeso.|  
|[GetRowStatus](../../data/oledb/irowsetupdateimpl-getrowstatus.md)|Restituisce lo stato delle righe specificate.|  
|[Annulla](../../data/oledb/irowsetupdateimpl-undo.md)|Annulla tutte le modifiche alla riga dall'ultima raccolta o aggiornamento.|  
|[Aggiorna](../../data/oledb/irowsetupdateimpl-update.md)|Trasmette le modifiche apportate alla riga dall'ultima raccolta o aggiornamento.|  
  
### Metodi di implementazione \(callback\)  
  
|||  
|-|-|  
|[IsUpdateAllowed](../../data/oledb/irowsetupdateimpl-isupdateallowed.md)|Utilizzato per verificare la presenza di sicurezza, integrità e così via, prima di consentire gli aggiornamenti.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_mapCachedData](../../data/oledb/irowsetupdateimpl-m-mapcacheddata.md)|Contiene i dati originali per l'operazione posticipata.|  
  
## Note  
 È consigliabile leggere e comprendere la documentazione per [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx), in quanto tutti descritto vi si applica anche di seguito.  È necessario inoltre aver letto chapter 6 di `OLE``DB``Programmer's``Reference` sui dati dell'impostazione.  
  
 `IRowsetUpdateImpl` implementa l'interfaccia OLE DB `IRowsetUpdate`, che consente agli utenti di ritardare la trasmissione delle modifiche apportate a `IRowsetChange` all'origine dati e annulla modifica prima della trasmissione.  
  
> [!IMPORTANT]
>  Si consiglia di leggere la documentazione seguente PRIMA di tentare di implementare il provider:  
  
-   [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Capitolo 6 di `OLE``DB``Programmer's``Reference`  
  
-   Vedere anche come classe di `RUpdateRowset` viene utilizzata nell'esempio UpdatePV  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)