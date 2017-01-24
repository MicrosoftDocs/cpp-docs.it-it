---
title: "COleDispatchException Class | Microsoft Docs"
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
  - "COleDispatchException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "automazione, eccezioni"
  - "COleDispatchException class"
  - "eccezioni, OLE"
  - "OLE exceptions, to IDispatch interface"
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleDispatchException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le eccezioni specifiche dell'interfaccia OLE `IDispatch`, una parte essenziale di automazione OLE.  
  
## Sintassi  
  
```  
class COleDispatchException : public CException  
```  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchException::m\_dwHelpContext](../Topic/COleDispatchException::m_dwHelpContext.md)|Contesto della guida dell'errore.|  
|[COleDispatchException::m\_strDescription](../Topic/COleDispatchException::m_strDescription.md)|Descrizione verbale di errore.|  
|[COleDispatchException::m\_strHelpFile](../Topic/COleDispatchException::m_strHelpFile.md)|File della Guida da utilizzare con `m_dwHelpContext`.|  
|[COleDispatchException::m\_strSource](../Topic/COleDispatchException::m_strSource.md)|Applicazione che ha generato l'eccezione.|  
|[COleDispatchException::m\_wCode](../Topic/COleDispatchException::m_wCode.md)|`IDispatch`\- codice di errore specifico.|  
  
## Note  
 Come le altre classi di eccezioni derivate dalla classe base `CException`, `COleDispatchException` può essere utilizzato con **THROW**, `THROW_LAST`, **TRY**, **CATCH**, `AND_CATCH`e macro `END_CATCH`.  
  
 È necessario chiamare in genere [AfxThrowOleDispatchException](../Topic/AfxThrowOleDispatchException.md) per creare e generare un oggetto `COleDispatchException`.  
  
 Per ulteriori informazioni sulle eccezioni, vedere gli articoli [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: Eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleDispatchException`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [MFC campione CALCDRIV](../../top/visual-cpp-samples.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)   
 [COleException Class](../../mfc/reference/coleexception-class.md)