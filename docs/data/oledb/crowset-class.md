---
title: "Classe CRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CRowset<TAccessor>"
  - "CRowset"
  - "ATL::CRowset"
  - "ATL::CRowset<TAccessor>"
  - "ATL.CRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRowset (classe)"
ms.assetid: b0228a90-b8dd-47cc-b397-8d4c15c1e7f4
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe CRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula un oggetto rowset OLE DB e diverse interfacce correlate e fornisce metodi di modifica dei dati del rowset.  
  
## Sintassi  
  
```  
template <class TAccessor = CAccessorBase>  
class CRowset  
```  
  
#### Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  Il valore predefinito è `CAccessorBase`.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/crowset-addrefrows.md)|Incrementa il conteggio dei riferimenti associato alla riga corrente.|  
|[Chiudi](../../data/oledb/crowset-close.md)|Righe delle versioni e l'interfaccia corrente di `IRowset`.|  
|[Confronto](../../data/oledb/crowset-compare.md)|Confronta due segnalibri utilizzando [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx).|  
|[CRowset](../../data/oledb/crowset-crowset.md)|Crea un nuovo oggetto di `CRowset` ed eventualmente lo associa a un'interfaccia di **IRowset** fornita come parametro.|  
|[Delete](../../data/oledb/crowset-delete.md)|Righe di eliminazione dal rowset utilizzando [IRowsetChange:DeleteRows](https://msdn.microsoft.com/en-us/library/ms724362.aspx).|  
|[FindNextRow](../../data/oledb/crowset-findnextrow.md)|Cercare la riga seguente di corrispondenza dopo che il segnalibro specificato.|  
|[GetApproximatePosition](../../data/oledb/crowset-getapproximateposition.md)|Restituisce la posizione approssimativa di una riga corrispondente a un segnalibro.|  
|[GetData](../../data/oledb/crowset-getdata.md)|Recupera dati dalla copia della riga del set di righe.|  
|[GetDataHere](../../data/oledb/crowset-getdatahere.md)|Recupera i dati dal buffer specificato.|  
|[GetOriginalData](../../data/oledb/crowset-getoriginaldata.md)|Recupera i dati recuperati da l o trasmessi all'origine dati, trascurante modifiche in sospeso.|  
|[GetRowStatus](../../data/oledb/crowset-getrowstatus.md)|Restituisce lo stato di tutte le righe.|  
|[Insert](../../data/oledb/crowset-insert.md)|Crea e inserisce una nuova riga utilizzando [IRowsetChange:InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx).|  
|[IsSameRow](../../data/oledb/crowset-issamerow.md)|Confronta la riga specificata con la riga corrente.|  
|[Membro](../../data/oledb/crowset-movefirst.md)|Riposizionare la posizione di NeXT\- raccolta alla posizione iniziale.|  
|[MoveLast](../../data/oledb/crowset-movelast.md)|Consente di passare all'ultimo record.|  
|[MoveNext](../../data/oledb/crowset-movenext.md)|Dati di raccolte sequenziale dalla riga successiva o un numero specificato di posizioni oltre la riga successiva.|  
|[Membro](../../data/oledb/crowset-moveprev.md)|Consente di passare al record precedente.|  
|[MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)|Recupera la riga contrassegnata da un segnalibro o la riga in un offset specificato dal bookmark.|  
|[MoveToRatio](../../data/oledb/crowset-movetoratio.md)|Le raccolte di righe da una posizione frazionaria del rowset.|  
|[ReleaseRows](../../data/oledb/crowset-releaserows.md)|Chiama [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) per rilasciare l'handle di riga corrente.|  
|[SetData](../../data/oledb/crowset-setdata.md)|Imposta i valori dei dati in una o più colonne di una riga mediante [IRowsetChange:SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx).|  
|[Annulla](../../data/oledb/crowset-undo.md)|Annulla tutte le modifiche apportate a una riga dall'ultima raccolta o [Aggiorna](../../data/oledb/crowset-update.md).|  
|[Aggiorna](../../data/oledb/crowset-update.md)|Trasmette tutte le modifiche in sospeso apportate alla riga corrente dall'ultima raccolta o aggiornamento.|  
|[UpdateAll](../../data/oledb/crowset-updateall.md)|Trasmette tutte le modifiche in sospeso apportate a tutte le righe dall'ultima raccolta o aggiornamento.|  
  
## Note  
 In OLE DB, un rowset è l'oggetto in cui un programma impostare e recuperare i dati.  
  
 Questa classe non deve essere creata un'istanza ma piuttosto per essere passata come parametro di modello a `CTable` o a `CCommand` \(`CRowset` è l'impostazione predefinita\).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Esempio di DBViewer](../../top/visual-cpp-samples.md)   
 [Esempio MultiRead](../../top/visual-cpp-samples.md)   
 [Esempio di attributi MultiRead](../../top/visual-cpp-samples.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)