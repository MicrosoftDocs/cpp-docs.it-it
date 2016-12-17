---
title: "CDynamicParameterAccessor::SetParam | Microsoft Docs"
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
  - "ATL::CDynamicParameterAccessor::SetParam"
  - "ATL::CDynamicParameterAccessor::SetParam<ctype>"
  - "CDynamicParameterAccessor.SetParam"
  - "ATL.CDynamicParameterAccessor.SetParam"
  - "SetParam"
  - "CDynamicParameterAccessor:SetParam"
  - "CDynamicParameterAccessor::SetParam<ctype>"
  - "CDynamicParameterAccessor::SetParam"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParam (metodo)"
ms.assetid: e2349220-545c-46ad-90da-9113ac52551a
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::SetParam
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il buffer di parametro mediante i dati specificati \(non di tipo stringa\).  
  
## Sintassi  
  
```  
  
      template < class   
      ctype >  
bool SetParam(  
   DBORDINAL nParam,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
template < class ctype >  
bool SetParam(  
   TCHAR* pParamName,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
```  
  
#### Parametri  
 `ctype`  
 Un parametro basato su modelli è il tipo di dati.  
  
 `nParam`  
 \[in\] numero di parametri \(offset da 1\).  Il parametro 0 è riservato ai valori restituiti.  Il numero dei parametri è l'indice del parametro in base al relativo ordine nella chiamata di stored procedure o SQL.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_OLEDB_Consumer#8](../../data/oledb/codesnippet/CPP/cdynamicparameteraccessor-setparam_1.cpp)]  
  
 `pParamName`  
 \[in\] Nome del parametro.  
  
 `pData`  
 \[in\] il puntatore alla memoria contenente i dati da scrivere nel buffer.  
  
 *status*  
 \[in\] lo stato della colonna di `DBSTATUS`.  Per informazioni sui valori di `DBSTATUS`, vedere [Stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx)*in OLE DB Programmer's Reference*, oppure individuare `DBSTATUS` in oledb.h.  
  
## Valore restituito  
 Restituisce **true** su positivo o **false** in caso di errore.  
  
 Utilizzare `SetParam` per impostare i dati dei parametri nonstring nel buffer.  Utilizzare [SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md) per impostare i dati di parametro stringa nel buffer.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)