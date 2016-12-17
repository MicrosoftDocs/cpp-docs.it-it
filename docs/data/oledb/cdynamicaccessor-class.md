---
title: "Classe CDynamicAccessor | Microsoft Docs"
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
  - "ATL.CDynamicAccessor"
  - "ATL::CDynamicAccessor"
  - "CDynamicAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicAccessor (classe)"
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDynamicAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di accedere ad un'origine dati quando non si conosce lo schema del database \(la struttura sottostante del database\).  
  
## Sintassi  
  
```  
class CDynamicAccessor : public CAccessorBase  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddBindEntry](../../data/oledb/cdynamicaccessor-addbindentry.md)|Aggiunge una voce di associazione alle colonne di output quando si esegue l'override della funzione di accesso predefinita.|  
|[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)|Crea un'istanza e inizializza l'oggetto `CDynamicAccessor`.|  
|[Chiudi](../../data/oledb/cdynamicaccessor-close.md)|Separa tutte le colonne, libera la memoria allocata e rilascia il puntatore della classe all'interfaccia [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx).|  
|[GetBookmark](../../data/oledb/cdynamicaccessor-getbookmark.md)|Recupera il segnalibro della riga corrente.|  
|[GetBlobHandling](../../data/oledb/cdynamicaccessor-getblobhandling.md)|Recupera il valore di gestione dei BLOB della riga corrente.|  
|[GetBlobSizeLimit](../../data/oledb/cdynamicaccessor-getblobsizelimit.md)|Recupera la massima dimensione dei BLOB in byte.|  
|[GetColumnCount](../../data/oledb/cdynamicaccessor-getcolumncount.md)|Recupera il numero di colonne del rowset.|  
|[GetColumnFlags](../../data/oledb/cdynamicaccessor-getcolumnflags.md)|Recupera le caratteristiche delle colonne.|  
|[GetColumnInfo](../../data/oledb/cdynamicaccessor-getcolumninfo.md)|Recupera i metadati della colonna.|  
|[GetColumnName](../../data/oledb/cdynamicaccessor-getcolumnname.md)|Recupera il nome di una colonna specificata.|  
|[GetColumnType](../../data/oledb/cdynamicaccessor-getcolumntype.md)|Recupera il tipo dei dati di una colonna specificata.|  
|[GetLength](../../data/oledb/cdynamicaccessor-getlength.md)|Recupera la massima lunghezza possibile di una colonna in byte.|  
|[GetOrdinal](../../data/oledb/cdynamicaccessor-getordinal.md)|Recupera l'indice di una colonna a partire da un nome di colonna.|  
|[GetStatus](../../data/oledb/cdynamicaccessor-getstatus.md)|Recupera lo stato di una colonna specificata.|  
|[GetValue](../../data/oledb/cdynamicaccessor-getvalue.md)|Recupera i dati dal buffer.|  
|[SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md)|Imposta il valore di gestione dei BLOB della riga corrente.|  
|[SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md)|Imposta la dimensione massima dei BLOB in byte.|  
|[SetLength](../../data/oledb/cdynamicaccessor-setlength.md)|Imposta la lunghezza di una colonna in byte.|  
|[SetStatus](../../data/oledb/cdynamicaccessor-setstatus.md)|Imposta lo stato di una colonna specificata.|  
|[SetValue](../../data/oledb/cdynamicaccessor-setvalue.md)|Memorizza i dati nel buffer.|  
  
## Note  
 Utilizzare i metodi `CDynamicAccessor` per ottenere informazioni relative alle colonne, come ad esempio i nomi, il conteggio, il tipo dei dati e così via.  Tali informazioni di colonna vengono poi utilizzate per la creazione dinamica di una funzione di accesso in fase di esecuzione.  
  
 Le informazioni di colonna sono memorizzate in un buffer che viene creato e gestito da questa classe.  Si ottengono quindi i dati dal buffer utilizzando [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md).  
  
 Per informazioni ed esempi di utilizzo delle classi delle funzioni di accesso dinamiche, vedere [Utilizzo delle funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).  
  
## Requisiti  
 **Intestazione**: atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)