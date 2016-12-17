---
title: "CMemoryException Class | Microsoft Docs"
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
  - "CMemoryException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, memoria"
  - "CMemoryException class"
  - "eccezioni, memory type"
  - "memory exceptions"
  - "memoria, gestione eccezioni"
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
caps.latest.revision: 20
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMemoryException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di un'eccezione di memoria insufficiente.  
  
## Sintassi  
  
```  
class CMemoryException : public CSimpleException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryException::CMemoryException](../Topic/CMemoryException::CMemoryException.md)|Costruisce un oggetto `CMemoryException`.|  
  
## Note  
 Non è necessaria alcuna ulteriore qualificazione necessaria o possibile.  Le eccezioni di memoria vengono create automaticamente da **new**.  Per scrivere funzioni personalizzate di memoria, utilizzando `malloc`, ad esempio, pertanto è responsabile di generare eccezioni di memoria.  
  
 Per ulteriori informazioni su `CMemoryException`, vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CMemoryException`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)