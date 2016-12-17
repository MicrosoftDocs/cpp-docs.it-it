---
title: "CDynamicParameterAccessor::GetParam | Microsoft Docs"
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
  - "CDynamicParameterAccessor::GetParam"
  - "ATL.CDynamicParameterAccessor.GetParam"
  - "CDynamicParameterAccessor::GetParam<ctype>"
  - "CDynamicParameterAccessor.GetParam"
  - "GetParam"
  - "ATL::CDynamicParameterAccessor::GetParam<ctype>"
  - "ATL::CDynamicParameterAccessor::GetParam"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParam (metodo)"
ms.assetid: 893a6bf8-7b55-4f6d-8a10-a43b13be7f56
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::GetParam
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i dati nonstring per un parametro specificato dal buffer di parametro.  
  
## Sintassi  
  
```  
  
      template < class ctype > bool GetParam(   
   DBORDINAL nParam,   
   ctype* pData    
) const throw( );  
template < class ctype > bool GetParam(   
   TCHAR* pParamName,   
   ctype* pData    
) const throw( );  
void* GetParam(   
   DBORDINAL nParam    
) const throw( );  
void* GetParam(   
   TCHAR* pParamName    
) const throw( );  
```  
  
#### Parametri  
 `ctype`  
 Un parametro basato su modelli è il tipo di dati.  
  
 `nParam`  
 \[in\] numero di parametri \(offset da 1\).  Il parametro 0 è riservato ai valori restituiti.  Il numero dei parametri è l'indice del parametro in base al relativo ordine nella chiamata di stored procedure o SQL.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pParamName`  
 \[in\] Nome del parametro.  
  
 `pData`  
 \[out\] il puntatore alla memoria contenente i dati recuperati dal buffer.  
  
## Valore restituito  
 Per le versioni nontemplated, punta alla memoria contenente i dati recuperati dal buffer.  Per le versioni basate su modelli, il **true** su positivo o **false** in caso di errore.  
  
 Utilizzare `GetParam` per recuperare i dati dei parametri nonstring dal buffer.  Utilizzare [GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md) per recuperare i dati di un parametro di stringa dal buffer.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)