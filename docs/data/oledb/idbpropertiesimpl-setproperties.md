---
title: "IDBPropertiesImpl::SetProperties | Microsoft Docs"
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
  - "IDBPropertiesImpl.SetProperties"
  - "SetProperties"
  - "IDBPropertiesImpl::SetProperties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetProperties (metodo)"
ms.assetid: 2f9fc1de-7f35-4bca-bab3-7b427bf92c26
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBPropertiesImpl::SetProperties
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta le proprietà in gruppi di proprietà di inizializzazione e origine dati, per gli oggetti origine dati, o il gruppo di proprietà di inizializzazione, per gli enumeratori.  
  
## Sintassi  
  
```  
  
      STDMETHOD(SetProperties)(   
   ULONG cPropertySets,   
   DBPROPSET rgPropertySets[]    
);  
```  
  
#### Parametri  
 Vedere [IDBProperties::SetProperties](https://msdn.microsoft.com/en-us/library/ms723049.aspx) in *OLE DB Programmer's Reference*.  
  
## Note  
 Se il provider viene inizializzato, questo metodo imposta i valori delle proprietà in **DBPROPSET\_DATASOURCE**, **DBPROPSET\_DATASOURCEINFO**, i gruppi di proprietà **DBPROPSET\_DBINIT** per l'oggetto origine dati.  Se il provider non viene inizializzato, imposta solo le proprietà del gruppo **DBPROPSET\_DBINIT**.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBPropertiesImpl](../../data/oledb/idbpropertiesimpl-class.md)   
 [IDBPropertiesImpl::GetProperties](../../data/oledb/idbpropertiesimpl-getproperties.md)   
 [IDBPropertiesImpl::GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)