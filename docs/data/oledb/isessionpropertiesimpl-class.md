---
title: "Classe ISessionPropertiesImpl | Microsoft Docs"
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
  - "ISessionPropertiesImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISessionPropertiesImpl (classe)"
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe ISessionPropertiesImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione dell'interfaccia di [ISessionProperties](https://msdn.microsoft.com/en-us/library/ms713721.aspx).  
  
## Sintassi  
  
```  
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ISessionPropertiesImpl :  
   public ISessionProperties,    
   public CUtlProps<PropClass>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `ISessionPropertiesImpl`.  
  
 `PropClass`  
 Una classe di proprietà definibile dall'utente che per impostazione predefinita a `T`.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/isessionpropertiesimpl-getproperties.md)|Restituisce l'elenco delle proprietà del gruppo di proprietà della sessione di test attualmente impostato nella sessione.|  
|[SetProperties](../../data/oledb/isessionpropertiesimpl-setproperties.md)|Impostare le proprietà nel gruppo di proprietà della sessione.|  
  
## Note  
 Un'interfaccia richiesta sulle sessioni.  Questa classe implementa le proprietà della sessione chiamando una funzione statica definita da [mappa degli insiemi di proprietà](../../data/oledb/begin-propset-map.md).  La mappa degli insiemi di proprietà deve essere specificata nella classe di sessione.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)