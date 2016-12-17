---
title: "Classe IRowsetChangeImpl | Microsoft Docs"
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
  - "ATL::IRowsetChangeImpl"
  - "IRowsetChangeImpl"
  - "ATL.IRowsetChangeImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetChangeImpl (classe)"
  - "provider, aggiornabile"
  - "provider aggiornabili, aggiornamento immediato"
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetChangeImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'implementazione dei modelli OLE DB dell'interfaccia [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) nella specifica OLE DB.  
  
## Sintassi  
  
```  
template <  
   class T,   
   class Storage,   
   class BaseInterface = IRowsetChange,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >   
>  
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface  
```  
  
#### Parametri  
 `T`  
 Una classe deriva da `IRowsetChangeImpl`.  
  
 `Storage`  
 Record utente  
  
 `BaseInterface`  
 La classe di base per l'interfaccia, come ad esempio `IRowsetChange`.  
  
 `RowClass`  
 L'unità di archiviazione per il punto di controllo della riga.  
  
 `MapClass`  
 L'unità di archiviazione per tutti i punti di controllo della riga utilizzati dal provider.  
  
## Membri  
  
### Metodi di interfaccia \(utilizzato con IRowsetChange\)  
  
|||  
|-|-|  
|[DeleteRows](../../data/oledb/irowsetchangeimpl-deleterows.md)|Righe eliminate dal rowset.|  
|[InsertRow](../../data/oledb/irowsetchangeimpl-insertrow.md)|Inserisce una riga nel rowset.|  
|[SetData](../../data/oledb/irowsetchangeimpl-setdata.md)|Imposta in una riga i valori dei dati contenuti in una o più colonne.|  
  
### Metodo di implementazione \(callback\)  
  
|||  
|-|-|  
|[FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md)|Overidden dal provider per eseguire il commit dei dati sull'archivio.|  
  
## Note  
 Questa interfaccia è responsabile dell'operazioni di lettura immediata da un archivio dati. "Immediato" indica che quando l'utente finale \(la persona consumatore\) effettua le modifiche, tali modifiche vengono immediatamente trasmesse all'archivio dati \(e non possono essere annullate\).  
  
 `IRowsetChangeImpl` implementa l'interfaccia OLE DB `IRowsetChange`, che consente l'aggiornamento dei valori delle colonne nelle righe esistenti e l'inserimento di nuove righe.  
  
 L'implementazione dei modelli OLE DB supporta tutti i metodi di base \(`SetData`, `InsertRow` e `DeleteRows`\).  
  
> [!IMPORTANT]
>  Si consiglia di leggere la documentazione seguente PRIMA di tentare di implementare il provider:  
  
-   [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Capitolo 6 di *OLE DB Programmer's Reference*  
  
-   Vedere anche come la classe `RUpdateRowset` viene utilizzata nell'esempio UpdatePV  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)