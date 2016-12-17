---
title: "Classe CXMLAccessor | Microsoft Docs"
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
  - "ATL::CXMLAccessor"
  - "CXMLAccessor"
  - "ATL.CXMLAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXMLAccessor (classe)"
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CXMLAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente alle origini dati access in formato stringa quando non si conosce lo schema dell'archivio dati \(struttura sottostante.  
  
## Sintassi  
  
```  
class CXMLAccessor : public CDynamicStringAccessorW  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md)|Recupera le informazioni di colonna.|  
|[GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md)|Recupera l'intero contenuto di una tabella tramite linee.|  
  
## Note  
 Tuttavia, `CXMLAccessor` differisce da `CDynamicStringAccessorW` in quanto consente di convertire tutti i dati utilizzati nell'archivio dati in \(contrassegnati\) XML.  Ciò è particolarmente utile per l'output delle pagine Web XML con DPI.  I nomi dei tag XML corrisponderanno i nomi di colonna dell'archivio dati il più possibile.  
  
 Utilizzare i metodi di `CDynamicAccessor` per ottenere le informazioni di colonna.  Tali informazioni di colonna vengono utilizzate per la creazione dinamica di una funzione di accesso in fase di esecuzione.  
  
 Le informazioni di colonna sono memorizzate in un buffer che viene creato e gestito da questa classe.  Ottenere le informazioni di colonna utilizzando [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) o ottenere i dati della colonna dalle righe utilizzando [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md).  
  
## Esempio  
 [!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/CPP/cxmlaccessor-class_1.cpp)]  
  
## Requisiti  
 **Intestazione**: atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CAccessor](../../data/oledb/caccessor-class.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)   
 [Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)   
 [Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)