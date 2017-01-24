---
title: "CDynamicParameterAccessor::SetParamStatus | Microsoft Docs"
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
  - "CDynamicParameterAccessor::SetParamStatus"
  - "ATL.CDynamicParameterAccessor.SetParamStatus"
  - "ATL::CDynamicParameterAccessor::SetParamStatus"
  - "CDynamicParameterAccessor.SetParamStatus"
  - "SetParamStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParamStatus (metodo)"
ms.assetid: 0c2271f6-457d-46ca-88b7-4590aadb20d7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::SetParamStatus
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta lo stato del parametro specificato memorizzato nel buffer.  
  
## Sintassi  
  
```  
  
      bool SetParamStatus(  
   DBORDINAL nParam,  
   DBSTATUS status  
);  
```  
  
#### Parametri  
 `nParam`  
 \[in\] Numero del parametro \(offset da 1\).  Il parametro 0 è riservato per i valori restituiti.  Il numero del parametro è l'indice del parametro in base al relativo ordine nell'SQL o nella chiamata a una stored procedure.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 *status*  
 \[in\] Stato `DBSTATUS` del parametro specificato.  Per informazioni sui valori di `DBSTATUS`, vedere [Status](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in *OLE DB Programmer's Reference*, oppure individuare `DBSTATUS` in oledb.h.  
  
## Note  
 Restituisce **true** se l'operazione ha esito positivo oppure **false** in caso di esito negativo.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)