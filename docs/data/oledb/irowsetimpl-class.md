---
title: "Classe IRowsetImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetImpl (classe)"
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IRowsetImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione dell'interfaccia `IRowset`.  
  
## Sintassi  
  
```  
template <  
   class T,   
   class RowsetInterface,  
   class RowClass = CSimpleRow,  
   class MapClass = CAtlMap <  
      RowClass::KeyType,  
      RowClass*   
   >  
>  
class ATL_NO_VTABLE IRowsetImpl : public RowsetInterface  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IRowsetImpl`.  
  
 `RowsetInterface`  
 Classe derivata da `IRowsetImpl`.  
  
 `RowClass`  
 Unità di archiviazione per **HROW**.  
  
 `MapClass`  
 Unità di archiviazione per tutti gli handle di riga utilizzate dal provider.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|  
|[CreateRow](../../data/oledb/irowsetimpl-createrow.md)|Chiamato da [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) per allocare nuovo **HROW**.  Non chiamato direttamente dall'utente.|  
|[GetData](../../data/oledb/irowsetimpl-getdata.md)|Recupera dati dalla copia della riga del set di righe.|  
|[GetDBStatus](../../data/oledb/irowsetimpl-getdbstatus.md)|Restituisce lo stato del campo specificato.|  
|[GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md)|Recupera le righe in sequenza, memorizzando la posizione precedente.|  
|[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)|Costruttore.  Non chiamato direttamente dall'utente.|  
|[RefRows](../../data/oledb/irowsetimpl-refrows.md)|Chiamato da [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e da [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md).  Non chiamato direttamente dall'utente.|  
|[ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)|Rilascia righe.|  
|[RestartPosition](../../data/oledb/irowsetimpl-restartposition.md)|Riposizionare la posizione di recupero successivo alla posizione iniziale; ovvero la posizione in cui il rowset innanzitutto è stato creato.|  
|[SetDBStatus](../../data/oledb/irowsetimpl-setdbstatus.md)|Imposta flag di stato per il campo specificato.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_bCanFetchBack](../../data/oledb/irowsetimpl-m-bcanfetchback.md)|Indica se un provider supporta da recuperare.|  
|[m\_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)|Indica se un provider può eseguire lo scorrimento indietro cursore.|  
|[m\_bReset](../../data/oledb/irowsetimpl-m-breset.md)|Indica se un provider può reimpostare la posizione del cursore.  Ciò ha un significato particolare quando si esegue lo scorrimento indietro o recuperando indietro in [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md).|  
|[m\_iRowset](../../data/oledb/irowsetimpl-m-irowset.md)|Un indice nel rowset, che rappresenta il cursore.|  
|[m\_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md)|Un elenco di handle di riga.|  
  
## Note  
 [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) è l'interfaccia base del rowset.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)