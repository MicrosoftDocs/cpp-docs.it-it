---
title: "Classe IConvertTypeImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IConvertTypeImpl<T>"
  - "IConvertTypeImpl"
  - "ATL.IConvertTypeImpl"
  - "ATL::IConvertTypeImpl"
  - "ATL::IConvertTypeImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IConvertTypeImpl (classe)"
ms.assetid: 7f81e79e-7d3f-4cbe-b93c-d632a94b15f6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IConvertTypeImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione dell'interfaccia di [IConvertType](https://msdn.microsoft.com/en-us/library/ms715926.aspx).  
  
## Sintassi  
  
```  
template <class T>  
class ATL_NO_VTABLE IConvertTypeImpl   
   : public IConvertType, public CConvertHelper  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IConvertTypeImpl`.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[CanConvert](../../data/oledb/iconverttypeimpl-canconvert.md)|Consente di specificare informazioni sulla disponibilità delle conversioni di tipo un comando o per un rowset.|  
  
## Note  
 Questa interfaccia è obbligatoria sui controlli, sui rowset e sui rowset dell'indice.  **IConvertTypeImpl** implementa l'interfaccia delegando la conversione l'oggetto fornito da OLE DB.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)