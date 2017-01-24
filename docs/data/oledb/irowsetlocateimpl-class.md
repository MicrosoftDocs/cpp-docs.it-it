---
title: "Classe IRowsetLocateImpl | Microsoft Docs"
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
  - "IRowsetLocateImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "segnalibri, OLE DB"
  - "IRowsetLocateImpl (classe)"
  - "provider, segnalibri"
ms.assetid: a8aa3149-7ce8-4976-a680-2da193fd3234
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetLocateImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa l'interfaccia OLE DB [L'interfaccia IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx), che recupera le righe arbitrarie di un rowset.  
  
## Sintassi  
  
```  
template <  
   class T,   
   class RowsetInterface,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >,   
   class BookmarkKeyType = LONG,   
   class BookmarkType = LONG,   
   class BookmarkMapClass = CAtlMap < RowClass::KeyType, RowClass* >  
>  
class ATL_NO_VTABLE IRowsetLocateImpl : public IRowsetImpl<  
   T,   
   RowsetInterface,   
   RowClass,   
   MapClass  
>  
```  
  
#### Parametri  
 `T`  
 Classe derivata da `IRowsetLocateImpl`.  
  
 `RowsetInterface`  
 Classe derivata da `IRowsetImpl`.  
  
 `RowClass`  
 L'unità di archiviazione per **HROW**.  
  
 `MapClass`  
 L'unità di archiviazione per tutti gli handle di riga utilizzate dal provider.  
  
 `BookmarkKeyType`  
 Il tipo del segnalibro, ad esempio un LONG o una stringa.  I segnalibri comuni devono avere una lunghezza almeno due byte. \(La lunghezza a byte singolo è riservata per OLE DB [segnalibri standard](https://msdn.microsoft.com/en-us/library/ms712954.aspx)**DBBMK\_FIRST**, **DBBMK\_LAST** e **DBBMK\_INVALID**\).  
  
 `BookmarkType`  
 Il meccanismo di mapping per gestire le relazioni di segnalibro a dati.  
  
 `BookmarkMapClass`  
 L'unità di archiviazione per tutti gli handle di riga utilizzate dal segnalibro.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[Confronto](../../data/oledb/irowsetlocateimpl-compare.md)|Confronta due segnalibri.|  
|[GetRowsAt](../../data/oledb/irowsetlocateimpl-getrowsat.md)|Le raccolte da iniziare con la riga specificata da un offset da un segnalibro.|  
|[GetRowsByBookmark](../../data/oledb/irowsetlocateimpl-getrowsbybookmark.md)|Recupera le righe che corrispondono ai segnalibri specificati.|  
|[Hash](../../data/oledb/irowsetlocateimpl-hash.md)|Restituisce i valori hash per i bookmark specificati.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_rgBookmarks](../../data/oledb/irowsetlocateimpl-m-rgbookmarks.md)|Una matrice segnalibri.|  
  
## Note  
 `IRowsetLocateImpl` è l'implementazione dei modelli OLE DB dell'interfaccia di [L'interfaccia IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx).  `IRowsetLocate` viene utilizzato per recuperare le righe arbitrarie di un rowset.  Un rowset che non implementa questa interfaccia è un rowset di `sequential`.  Quando `IRowsetLocate` è presente in un rowset, la colonna 0 è il segnalibro per le righe; la lettura di questa colonna visualizzerà un valore del segnalibro che può essere utilizzato per riposizionare la stessa riga.  
  
 `IRowsetLocateImpl` viene utilizzato per implementare il supporto per i bookmark nel provider.  I segnalibri sono segnaposto \(indici in un rowset che consente al consumer per restituire rapidamente a una riga, consentendo l'accesso ai dati ad alta velocità.  Il provider determina che segnalibri possono identificare in modo univoco una riga.  Utilizzando i metodi di `IRowsetLocateImpl`, è possibile confrontare i segnalibri, le righe di recupero da offset, le righe di recupero dal segnalibro e i valori hash di tornare ai segnalibri.  
  
 Per supportare i segnalibri OLE DB in un rowset, sul rowset ereditare dalla classe.  
  
 Per informazioni sull'implementazione del supporto per i bookmark, vedere [Supporto dei bookmark nel provider](../../data/oledb/provider-support-for-bookmarks.md) in *Visual C\+\+ Programmer's Guide* e [Bookmarks](https://msdn.microsoft.com/en-us/library/ms709728.aspx) in *OLE DB Programmer's Reference* in `Platform``SDK`.  
  
## Requisiti  
 **Intestazione**: atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [IRowsetLocate:IRowset](https://msdn.microsoft.com/en-us/library/ms721190.aspx)   
 [Supporto dei bookmark nel provider](../../data/oledb/provider-support-for-bookmarks.md)   
 [Bookmarks](https://msdn.microsoft.com/en-us/library/ms709728.aspx)