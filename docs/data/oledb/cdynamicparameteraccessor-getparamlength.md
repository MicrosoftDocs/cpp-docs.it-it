---
title: "CDynamicParameterAccessor::GetParamLength | Microsoft Docs"
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
  - "ATL::CDynamicParameterAccessor::GetParamLength"
  - "ATL.CDynamicParameterAccessor.GetParamLength"
  - "CDynamicParameterAccessor.GetParamLength"
  - "CDynamicParameterAccessor::GetParamLength"
  - "GetParamLength"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamLength (metodo)"
ms.assetid: 04d76931-911a-4915-9c2c-ad585a9f3854
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::GetParamLength
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la lunghezza del parametro specificato memorizzato nel buffer.  
  
## Sintassi  
  
```  
  
      bool GetParamLength(  
   DBORDINAL nParam,  
   DBLENGTH* pLength  
);  
DBLENGTH* GetParamLength(   
   DBORDINAL nParam    
) const throw( );  
```  
  
#### Parametri  
 `nParam`  
 \[in\] Il numero di parametri \(offset da 1\).  Il parametro 0 è riservato per i valori restituiti.  Il numero di parametri è l'indice del parametro in base al relativo ordine nell'SQL o nella chiamata di procedura di archiviazione.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pLength`  
 \[out\] Un puntatore alla variabile contenente la lunghezza in byte del parametro specificato.  
  
## Note  
 Il primo override restituisce **true** alla riuscita oppure **false** in caso di fallimento.  Il secondo override punta alla memoria che contiene la lunghezza del parametro.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)