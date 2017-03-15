---
title: "IErrorRecordsImpl::GetErrorDescriptionString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetErrorDescriptionString"
  - "IErrorRecordsImpl.GetErrorDescriptionString"
  - "IErrorRecordsImpl::GetErrorDescriptionString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorDescriptionString (metodo)"
ms.assetid: 8bc71c45-ca9f-4632-bb02-1aa9ed8086c4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IErrorRecordsImpl::GetErrorDescriptionString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la stringa descrittiva di errori da un record di errore.  
  
## Sintassi  
  
```  
  
      LPOLESTR GetErrorDescriptionString(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parametri  
 `rCurError`  
 Un record di `ERRORINFO` in un'interfaccia di **IErrorInfo**.  
  
## Valore restituito  
 Un puntatore a una stringa che descrive l'errore.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)