---
title: "Classe IDBPropertiesImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBPropertiesImpl"
  - "ATL.IDBPropertiesImpl"
  - "ATL.IDBPropertiesImpl<T>"
  - "ATL::IDBPropertiesImpl<T>"
  - "ATL::IDBPropertiesImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBPropertiesImpl (classe)"
ms.assetid: a7f15a8b-95b2-4316-b944-d5d03f8d74ab
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IDBPropertiesImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione per l'interfaccia di `IDBProperties`.  
  
## Sintassi  
  
```  
template <class T>   
class ATL_NO_VTABLE IDBPropertiesImpl   
   : public IDBProperties, public CUtlProps<T>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IDBPropertiesImpl`.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/idbpropertiesimpl-getproperties.md)|Restituisce i valori delle proprietà in gruppi di proprietà di origine dati, di informazioni di un'origine dati e di inizializzazione attualmente sono impostati sull'oggetto origine dati o sui valori delle proprietà nel gruppo di proprietà di inizializzazione attualmente sono impostate sull'enumeratore.|  
|[GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)|Restituisce informazioni su tutte le proprietà supportate dal provider.|  
|[SetProperties](../../data/oledb/idbpropertiesimpl-setproperties.md)|Impostare le proprietà in gruppi di proprietà di inizializzazione e origine dati, oggetti origine dati, o il gruppo di proprietà di inizializzazione, per gli enumeratori.|  
  
## Note  
 [IDBProperties](https://msdn.microsoft.com/en-us/library/ms719607.aspx) è un'interfaccia richiesta per gli oggetti origine dati e un'interfaccia opzionale per gli enumeratori.  Tuttavia, se un enumeratore espone [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx), deve esporre `IDBProperties`.  `IDBPropertiesImpl` implementa `IDBProperties` utilizzando una funzione statica definita da [BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)