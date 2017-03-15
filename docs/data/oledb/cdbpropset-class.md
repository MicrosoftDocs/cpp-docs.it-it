---
title: "Classe CDBPropSet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDBPropSet"
  - "ATL.CDBPropSet"
  - "ATL::CDBPropSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropSet (classe)"
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe CDBPropSet
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eredita dalla struttura di **DBPROPSET** e aggiungere un costruttore che consente di inizializzare i campi delle chiavi nonché il metodo di accesso a `AddProperty`.  
  
## Sintassi  
  
```  
class CDBPropSet : public tagDBPROPSET  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddProperty](../../data/oledb/cdbpropset-addproperty.md)|Aggiunge una proprietà alla raccolta di proprietà.|  
|[CDBPropSet](../../data/oledb/cdbpropset-cdbpropset.md)|Costruttore.|  
|[SetGUID](../../data/oledb/cdbpropset-setguid.md)|Impostare il campo di **guidPropertySet** della struttura di **DBPROPSET**.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../../data/oledb/cdbpropset-operator-equal.md)|Assegna il contenuto di una proprietà a un altro.|  
  
## Note  
 I provider OLE DB e consumer utilizzano le strutture di **DBPROPSET** per passare matrici di strutture `DBPROP`.  Ogni struttura di `DBPROP` rappresenta una singola proprietà che può essere impostata.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)   
 [DBPROPSET Structure](https://msdn.microsoft.com/en-us/library/ms714367.aspx)   
 [DBPROP Structure](https://msdn.microsoft.com/en-us/library/ms717970.aspx)