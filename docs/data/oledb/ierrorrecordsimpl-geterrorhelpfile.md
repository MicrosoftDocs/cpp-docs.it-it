---
title: "IErrorRecordsImpl::GetErrorHelpFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IErrorRecordsImpl::GetErrorHelpFile"
  - "GetErrorHelpFile"
  - "IErrorRecordsImpl.GetErrorHelpFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorHelpFile (metodo)"
ms.assetid: ad198f76-5bdf-4b8d-9f1a-3d38f72f31ad
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IErrorRecordsImpl::GetErrorHelpFile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il nome del percorso del file della Guida da un record di errore.  
  
## Sintassi  
  
```  
  
      LPOLESTR GetErrorHelpFile(  
   ERRORINFO& rCurError   
);  
```  
  
#### Parametri  
 `rCurError`  
 Un record di `ERRORINFO` in un'interfaccia di **IErrorInfo**.  
  
## Valore restituito  
 Puntatore a una stringa contenente il nome del percorso del file della Guida dell'errore.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)