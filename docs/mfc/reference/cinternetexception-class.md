---
title: "CInternetException Class | Microsoft Docs"
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
  - "CInternetException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInternetException class"
  - "gestione eccezioni, Internet operations"
  - "eccezioni, Internet"
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
caps.latest.revision: 22
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CInternetException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di errore correlato a un'operazione Internet.  
  
## Sintassi  
  
```  
class CInternetException : public CException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetException::CInternetException](../Topic/CInternetException::CInternetException.md)|Costruisce un oggetto `CInternetException`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetException::m\_dwContext](../Topic/CInternetException::m_dwContext.md)|Il valore di contesto associata all'operazione che ha causato l'eccezione.|  
|[CInternetException::m\_dwError](../Topic/CInternetException::m_dwError.md)|l'errore che ha causato l'eccezione.|  
  
## Note  
 La classe `CInternetException` include due membri dati pubblici: è contenuta il codice di errore associato all'eccezione e l'altro utilizza l'identificatore di contesto dell'applicazione Internet associata all'errore.  
  
 Per ulteriori informazioni sugli identificatori di contesto per le applicazioni Internet, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CInternetException`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)