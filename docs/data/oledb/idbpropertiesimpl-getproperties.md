---
title: "IDBPropertiesImpl::GetProperties | Microsoft Docs"
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
  - "IDBPropertiesImpl::GetProperties"
  - "IDBPropertiesImpl.GetProperties"
  - "GetProperties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProperties (metodo)"
ms.assetid: ab24aebd-366d-49a1-b49b-bb46c6d90f05
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBPropertiesImpl::GetProperties
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce i valori delle proprietà in gruppi di proprietà di origine dati, di informazioni di un'origine dati e di inizializzazione attualmente sono impostati sull'oggetto origine dati o sui valori delle proprietà nel gruppo di proprietà di inizializzazione attualmente sono impostate sull'enumeratore.  
  
## Sintassi  
  
```  
  
      STDMETHOD(GetProperties)(   
   ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcProperties,   
   DBPROPSET ** prgProperties    
);  
```  
  
#### Parametri  
 Vedere [IDBProperties::GetProperties](https://msdn.microsoft.com/en-us/library/ms714344.aspx)*in OLE DB Programmer's Reference*.  
  
 Alcuni parametri corrispondono ai parametri *di OLE DB Programmer's Reference* dei nomi diversi, descritti in **IDBProperties::GetProperties**:  
  
|Parametri di modelli OLE DB|Parametri di*OLE DB Programmer's Reference*|  
|---------------------------------|-------------------------------------------------|  
|`cPropertySets`|`cPropertyIDSets`|  
|`rgPropertySets`|`rgPropertyIDSets`|  
|*pcProperties*|*pcPropertySets*|  
|*prgProperties*|*prgPropertySets*|  
  
## Note  
 Se il provider viene inizializzato, questo metodo restituisce i valori delle proprietà in **DBPROPSET\_DATASOURCE**, **DBPROPSET\_DATASOURCEINFO**, gruppi di proprietà di **DBPROPSET\_DBINIT** attualmente sono impostati sull'oggetto origine dati.  Se il provider non inizializzata, restituisce le proprietà del gruppo di **DBPROPSET\_DBINIT** solo.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)   
 [IDBPropertiesImpl::GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)   
 [IDBPropertiesImpl::SetProperties](../../data/oledb/idbpropertiesimpl-setproperties.md)