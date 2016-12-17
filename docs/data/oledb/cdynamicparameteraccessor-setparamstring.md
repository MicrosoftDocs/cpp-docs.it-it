---
title: "CDynamicParameterAccessor::SetParamString | Microsoft Docs"
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
  - "ATL.CDynamicParameterAccessor.SetParamString"
  - "ATL::CDynamicParameterAccessor::SetParamString"
  - "SetParamString"
  - "CDynamicParameterAccessor::SetParamString"
  - "CDynamicParameterAccessor.SetParamString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParamString (metodo)"
ms.assetid: 77a38d23-7e33-4e5a-bda6-c12c4c3fe2e4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::SetParamString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta i dati in formato stringa del parametro specificato memorizzato nel buffer.  
  
## Sintassi  
  
```  
  
      bool SetParamString(   
   DBORDINAL nParam,   
   const CHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK    
) throw( );  
bool SetParamString(   
   DBORDINAL nParam,   
   const WCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK    
) throw( );  
```  
  
#### Parametri  
 `nParam`  
 \[in\] numero di parametri \(offset da 1\).  Il parametro 0 è riservato ai valori restituiti.  Il numero dei parametri è l'indice del parametro in base al relativo ordine nella chiamata di stored procedure o SQL.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pString`  
 \[in\] puntatore All'ANSI \(**CHAR**\) o a dati di tipo stringa Unicode \(**WCHAR**\) del parametro specificato.  In `DBSTATUS` vedere oledb.h.  
  
 *status*  
 \[in\] lo stato di `DBSTATUS` del parametro specificato.  Per informazioni sui valori di `DBSTATUS`, vedere [Stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx)*in OLE DB Programmer's Reference*, oppure individuare `DBSTATUS` in oledb.h.  
  
## Note  
 Restituisce **true** su positivo o **false** in caso di errore.  
  
 `SetParamString` avrà esito negativo se si tenta di impostare una stringa che è superiore alla dimensione massima specificata per `pString`.  
  
 Utilizzare `SetParamString` per impostare i dati di parametro stringa nel buffer.  Utilizzare [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per impostare i dati dei parametri nonstring nel buffer.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)