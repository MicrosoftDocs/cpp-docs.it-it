---
title: "IErrorRecordsImpl::GetErrorHelpContext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetErrorHelpContext"
  - "IErrorRecordsImpl::GetErrorHelpContext"
  - "IErrorRecordsImpl.GetErrorHelpContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorHelpContext (metodo)"
ms.assetid: 53d70239-0d64-482e-9ad4-4e1f4f02d5a3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IErrorRecordsImpl::GetErrorHelpContext
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene l'id del contesto della guida da un record di errore.  
  
## Sintassi  
  
```  
  
      DWORD GetErrorHelpContext(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parametri  
 `rCurError`  
 Un record di `ERRORINFO` in un'interfaccia di **IErrorInfo**.  
  
## Valore restituito  
 L'id del contesto della guida dell'errore.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)