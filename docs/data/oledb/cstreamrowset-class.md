---
title: "Classe CStreamRowset | Microsoft Docs"
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
  - "ATL::CStreamRowset<TAccessor>"
  - "ATL::CStreamRowset"
  - "CStreamRowset"
  - "ATL.CStreamRowset<TAccessor>"
  - "ATL.CStreamRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStreamRowset (classe)"
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CStreamRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato in una dichiarazione di `CTable` o di `CCommand`.  
  
## Sintassi  
  
```  
template <class TAccessor = CAccessorBase>  
class CStreamRowset  
```  
  
#### Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CStreamRowset](../../data/oledb/cstreamrowset-cstreamrowset.md)|Costruttore.  Crea un'istanza e inizializza l'oggetto di `CStreamRowset`.|  
|[Chiudi](../../data/oledb/cstreamrowset-close.md)|Rilascia il puntatore a interfaccia di [ISequentialStream](https://msdn.microsoft.com/en-us/library/ms718035.aspx) nella classe.|  
  
## Note  
 Utilizzare `CStreamRowset` nella dichiarazione di `CTable` o di `CCommand`, ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/CPP/cstreamrowset-class_1.cpp)]  
  
 o  
  
 [!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/CPP/cstreamrowset-class_2.cpp)]  
  
 `ICommand::Execute` restituisce un puntatore di `ISequentialStream`, archiviato in `m_spStream`.  Utilizzare quindi il metodo di **Leggere** per recuperare i dati \(stringa Unicode in formato XML.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/CPP/cstreamrowset-class_3.cpp)]  
  
 SQL Server 2000 viene eseguita la formattazione XML e restituisce tutte le colonne e le righe del rowset come una stringa XML.  
  
> [!NOTE]
>  Funzionamento di questa funzionalità con solo in SQL Server 2000.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)