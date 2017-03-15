---
title: "IRowsetChangeImpl::SetData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetData"
  - "IRowsetChangeImpl::SetData"
  - "ATL.IRowsetChangeImpl.SetData"
  - "IRowsetChangeImpl.SetData"
  - "ATL::IRowsetChangeImpl::SetData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetData (metodo)"
ms.assetid: 81e1dd0a-0518-440c-8808-cee76e4929c7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IRowsetChangeImpl::SetData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta i valori dei dati in una o più colonne.  
  
## Sintassi  
  
```  
  
      STDMETHOD ( SetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData   
);  
```  
  
#### Parametri  
 Vedere [IRowsetChange::SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)