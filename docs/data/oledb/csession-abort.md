---
title: "CSession::Abort | Microsoft Docs"
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
  - "CSession.Abort"
  - "CSession::Abort"
  - "ATL.CSession.Abort"
  - "ATL::CSession::Abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Abort (metodo)"
ms.assetid: 02413b20-c486-451f-b4d7-73a6e8065df8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSession::Abort
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Termina la transazione.  
  
## Sintassi  
  
```  
  
      HRESULT Abort(   
   BOID* pboidReason = NULL,   
   BOOL bRetaining = FALSE,   
   BOOL bAsync = FALSE    
) const throw( );  
```  
  
#### Parametri  
 Vedere [ITransaction::Abort](https://msdn.microsoft.com/en-us/library/ms709833.aspx) in *Riferimenti per Programmatori OLE DB*.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CSession](../../data/oledb/csession-class.md)