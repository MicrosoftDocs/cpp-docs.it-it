---
title: "CRowsetImpl::NameFromDBID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowsetImpl.NameFromDBID"
  - "CRowsetImpl::NameFromDBID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NameFromDBID (metodo)"
ms.assetid: 6aa5b074-90c7-4434-adfd-c64c13e76c78
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowsetImpl::NameFromDBID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Estrae una stringa da **DBID** e di copiarlo in `bstr` passato.  
  
## Sintassi  
  
```  
  
      HRESULT CRowsetBaseImpl::NameFromDBID(  
   DBID* pDBID,  
   CComBSTR& bstr,  
   bool bIndex   
);  
```  
  
#### Parametri  
 *pDBID*  
 \[in\] puntatore A **DBID** da cui disegnare una stringa.  
  
 `bstr`  
 \[in\] riferimento A [CComBSTR](../../atl/reference/ccombstr-class.md) per inserire una copia della stringa di **DBID**.  
  
 `bIndex`  
 \[in\] **true** se un indice **DBID**; **false** se una tabella **DBID**.  
  
## Valore restituito  
 `HRESULT`standard.  A seconda **DBID** è una tabella o un indice \(indicata da `bIndex`\), il metodo restituirà **DB\_E\_NOINDEX** o **DB\_E\_NOTABLE**.  
  
## Note  
 Questo metodo viene chiamato dalle implementazioni di `CRowsetImpl` di [ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md) e di [GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)