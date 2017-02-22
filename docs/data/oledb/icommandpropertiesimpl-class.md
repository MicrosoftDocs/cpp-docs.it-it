---
title: "Classe ICommandPropertiesImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandPropertiesImpl"
  - "ATL.ICommandPropertiesImpl"
  - "ATL::ICommandPropertiesImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandPropertiesImpl (classe)"
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe ICommandPropertiesImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione dell'interfaccia di [ICommandProperties](https://msdn.microsoft.com/en-us/library/ms723044.aspx).  
  
## Sintassi  
  
```  
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ICommandPropertiesImpl   
   : public ICommandProperties, public CUtlProps<PropClass>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da  
  
 `PropClass`  
 La classe di proprietà.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/icommandpropertiesimpl-getproperties.md)|Restituisce l'elenco delle proprietà del gruppo di proprietà del rowset che attualmente è necessario per il rowset.|  
|[SetProperties](../../data/oledb/icommandpropertiesimpl-setproperties.md)|Impostare le proprietà nel gruppo di proprietà del rowset.|  
  
## Note  
 Questa condizione è obbligatoria nei controlli.  L'implementazione venga fornita da una funzione statica definita dalla macro di [BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)