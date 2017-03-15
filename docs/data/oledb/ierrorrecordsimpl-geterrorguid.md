---
title: "IErrorRecordsImpl::GetErrorGUID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetErrorGUID"
  - "IErrorRecordsImpl.GetErrorGUID"
  - "IErrorRecordsImpl::GetErrorGUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorGUID (metodo)"
ms.assetid: 42c00755-50e5-401a-8246-adef9de5ced2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IErrorRecordsImpl::GetErrorGUID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene l'errore GUID da un record di errore.  
  
## Sintassi  
  
```  
  
      REFGUID GetErrorGUID(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parametri  
 `rCurError`  
 Un record di `ERRORINFO` in un'interfaccia di **IErrorInfo**.  
  
## Valore restituito  
 Un riferimento a un GUID dell'errore.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)