---
title: "CResourceException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CResourceException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CResourceException class"
  - "eccezioni, risorsa"
  - "resource allocation exception"
  - "resource exceptions"
  - "risorse [C++], allocazione"
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CResourceException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Generato quando Windows non è possibile trovare o allocare una risorsa richiesta.  
  
## Sintassi  
  
```  
class CResourceException : public CSimpleException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CResourceException::CResourceException](../Topic/CResourceException::CResourceException.md)|Costruisce un oggetto `CResourceException`.|  
  
## Note  
 Non è necessaria alcuna ulteriore qualificazione necessaria o possibile.  
  
 Per ulteriori informazioni su l `CResourceException`, vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CResourceException`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)