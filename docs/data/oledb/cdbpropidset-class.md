---
title: "Classe CDBPropIDSet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDBPropIDSet"
  - "ATL.CDBPropIDSet"
  - "ATL::CDBPropIDSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropIDSet (classe)"
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe CDBPropIDSet
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Eredita dalla struttura di **DBPROPIDSET** e aggiungere un costruttore che consente di inizializzare i campi delle chiavi nonché il metodo di accesso a [AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md).  
  
## Sintassi  
  
```  
class CDBPropIDSet : public tagDBPROPIDSET  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md)|Aggiunge una proprietà da impostare la proprietà ID.|  
|[CDBPropIDSet](../../data/oledb/cdbpropidset-cdbpropidset.md)|Costruttore.|  
|[SetGUID](../../data/oledb/cdbpropidset-setguid.md)|Imposta il GUID del set della proprietà ID.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../../data/oledb/cdbpropidset-operator-equal.md)|Assegna il contenuto di una proprietà ID impostata su un altro.|  
  
## Note  
 Strutture di **DBPROPIDSET** di utilizzo di consumer OLE DB per passare una matrice di proprietà l'id che il consumer desidera ottenere informazioni della proprietà.  Le proprietà identificate in una singola struttura di [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) appartengono a un set di proprietà.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)