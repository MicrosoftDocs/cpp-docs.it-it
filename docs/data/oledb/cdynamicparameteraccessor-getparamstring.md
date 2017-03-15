---
title: "CDynamicParameterAccessor::GetParamString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicParameterAccessor.GetParamString"
  - "GetParamString"
  - "CDynamicParameterAccessor::GetParamString"
  - "ATL.CDynamicParameterAccessor.GetParamString"
  - "ATL::CDynamicParameterAccessor::GetParamString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamString (metodo)"
ms.assetid: 078c2b1c-7072-47c1-a203-f47e75363f91
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CDynamicParameterAccessor::GetParamString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i dati stringa del parametro specificato memorizzato nel buffer.  
  
## Sintassi  
  
```  
  
      bool GetParamString(  
   DBORDINAL nParam,  
   CSimpleStringA& strOutput  
) throw( );  
bool GetParamString(  
   DBORDINAL nParam,  
   CSimpleStringW& strOutput  
) throw( );  
bool GetParamString(  
   DBORDINAL nParam,  
   CHAR* pBuffer,  
   size_t* pMaxLen  
) throw( );  
bool GetParamString(  
   DBORDINAL nParam,  
   WCHAR* pBuffer,  
   size_t* pMaxLen  
) throw( );  
```  
  
#### Parametri  
 `nParam`  
 \[in\] Il numero di parametri \(offset da 1\).  Il parametro 0 è riservato per i valori restituiti.  Il numero di parametri è l'indice del parametro in base al relativo ordine nell'SQL o nella chiamata di procedura di archiviazione.  Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `strOutput`  
 \[out\] I dati stringa ANSI \(**CSimpleStringA**\) o Unicode \(**CSimpleStringW**\) del parametro specificato.  È necessario passare un parametro di tipo `CString`, ad esempio:  
  
 [!code-cpp[NVC_OLEDB_Consumer#9](../../data/oledb/codesnippet/CPP/cdynamicparameteraccessor-getparamstring_1.cpp)]  
  
 `pBuffer`  
 \[out\] Un puntatore ai dati stringa ANSI \(**CHAR**\) o Unicode \(**WCHAR**\) del parametro specificato.  
  
 `pMaxLen`  
 \[out\] Un puntatore alla dimensione del buffer puntato da `pBuffer` \(i caratteri, incluso il NULL di terminazione\).  
  
## Note  
 Restituisce **true** se l'operazione ha esito positivo oppure **false** in caso di esito negativo.  
  
 Se `pBuffer` è NULL, questo metodo imposta la dimensione richiesta del buffer nella memoria puntata da `pMaxLen` e restituisce **true** senza copiare i dati.  
  
 Questo metodo fallirà se il buffer `pBuffer` non è abbastanza grande per contenere l'intera stringa.  
  
 Utilizzare `GetParamString` per recuperare i dati di un parametro stringa dal buffer.  Utilizzare [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) per recuperare i dati dei parametri non stringa dal buffer.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)