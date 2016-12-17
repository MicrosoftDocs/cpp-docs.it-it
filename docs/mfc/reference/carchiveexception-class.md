---
title: "CArchiveException Class | Microsoft Docs"
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
  - "CArchiveException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "archive exceptions [C++]"
  - "CArchiveException class"
  - "exceptions [C++], archive"
  - "exceptions [C++], serializzazione"
  - "serializzazione [C++], eccezioni"
ms.assetid: da31a127-e86c-41d1-b0b6-bed0865b1b49
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CArchiveException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di eccezione di serializzazione  
  
## Sintassi  
  
```  
class CArchiveException : public CException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchiveException::CArchiveException](../Topic/CArchiveException::CArchiveException.md)|Costruisce un oggetto `CArchiveException`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchiveException::m\_cause](../Topic/CArchiveException::m_cause.md)|Indica la causa di un'eccezione.|  
|[CArchiveException::m\_strFileName](../Topic/CArchiveException::m_strFileName.md)|Specifica il nome del file da questo stato di eccezione.|  
  
## Note  
 La classe `CArchiveException` include un membro dati pubblico che indica la causa di un'eccezione.  
  
 Gli oggetti di`CArchiveException` vengono costruiti funzioni membro e interne generate [CArchive](../../mfc/reference/carchive-class.md).  È possibile accedere a questi oggetti in un'espressione **CATCH**.  Il codice della causa è indipendente dal sistema operativo.  Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CArchiveException`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CArchive Class](../../mfc/reference/carchive-class.md)   
 [AfxThrowArchiveException](../Topic/AfxThrowArchiveException.md)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)