---
title: "COleException Class | Microsoft Docs"
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
  - "COleException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleException class"
  - "eccezioni, OLE"
ms.assetid: 2571e9fe-26cc-42f0-9ad9-8ad5b4311ec1
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di errore correlato a un'operazione OLE.  
  
## Sintassi  
  
```  
class COleException : public CException  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleException::Process](../Topic/COleException::Process.md)|Converte un'eccezione intercettata in codice restituito OLE.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleException::m\_sc](../Topic/COleException::m_sc.md)|Contiene il codice di stato che indica il motivo dell'eccezione.|  
  
## Note  
 La classe `COleException` include un membro dati pubblico che utilizza il codice di stato che indica il motivo dell'eccezione.  
  
 Non creare direttamente in genere un oggetto `COleException` ; invece, è necessario chiamare [AfxThrowOleException](../Topic/AfxThrowOleException.md).  
  
 Per ulteriori informazioni sulle eccezioni, vedere gli articoli [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: Eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleException`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [L'esempio CALCDRIV MFC](../../top/visual-cpp-samples.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)