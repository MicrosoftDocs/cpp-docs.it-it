---
title: "CDynamicParameterAccessor::GetParamIO | Microsoft Docs"
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
  - "GetParamIO"
  - "CDynamicParameterAccessor::GetParamIO"
  - "ATL.CDynamicParameterAccessor.GetParamIO"
  - "CDynamicParameterAccessor.GetParamIO"
  - "ATL::CDynamicParameterAccessor::GetParamIO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamIO (metodo)"
ms.assetid: 9c485e39-c67e-4df7-a707-c773019c4d1e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::GetParamIO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se il parametro specificato è un input o di output.  
  
## Sintassi  
  
```  
  
      bool GetParamIO(   
   DBORDINAL nParam,   
   DBPARAMIO * pParamIO    
) const throw( );  
```  
  
#### Parametri  
 `nParam`  
 \[in\] numero di parametri \(offset da 1\).  Il parametro 0 è riservato ai valori restituiti.  Il numero dei parametri è l'indice del parametro in base al relativo ordine nella chiamata di stored procedure o SQL.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 *pParamIO*  
 Un puntatore alla variabile contenente il tipo di **DBPARAMIO** \(input o output\) del parametro specificato.  Viene definito come segue:  
  
 `typedef DWORD DBPARAMIO;`  
  
 `enum DBPARAMIOENUM`  
  
 `{   DBPARAMIO_NOTPARAM   = 0,`  
  
 `DBPARAMIO_INPUT      = 0x1,`  
  
 `DBPARAMIO_OUTPUT     = 0x2`  
  
 `};`  
  
## Valore restituito  
 Restituisce **true** su positivo o **false** in caso di errore.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)