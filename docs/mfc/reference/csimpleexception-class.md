---
title: "CSimpleException Class | Microsoft Docs"
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
  - "CSimpleException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleException class"
ms.assetid: be0eb8ef-e5b9-47d6-b0fb-efaff2d1e666
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSimpleException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è una classe base per le eccezioni alle risorse critiche MFC.  
  
## Sintassi  
  
```  
  
class AFX_NOVTABLE CSimpleException : public CException  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleException::CSimpleException](../Topic/CSimpleException::CSimpleException.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleException::GetErrorMessage](../Topic/CSimpleException::GetErrorMessage.md)|Fornisce il testo su un errore che si è verificato.|  
  
## Note  
 `CSimpleException` è la classe base per le eccezioni alle risorse critiche di MFC e gestisce la proprietà e l'inizializzazione di un messaggio di errore.  Le classi utilizzano `CSimpleException` la relativa classe di base:  
  
|||  
|-|-|  
|[Classe di CMemoryException](../../mfc/reference/cmemoryexception-class.md)|L'eccezione di memoria insufficiente|  
|[Classe di CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richieste per un'operazione non supportata|  
|[Classe di CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa di Windows non trovata o non creabile|  
|[Classe di CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica una risorsa non viene trovata|  
|[Classe di CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Eccezione che indica un argomento non valido|  
  
 Poiché `CSimpleException` è una classe base astratta, non è possibile dichiarare direttamente un oggetto `CSimpleException`.  Invece, è necessario dichiarare gli oggetti derivati come quelli nella tabella precedente.  Per dichiarare una classe derivata, utilizzare le classi precedenti come modello.  
  
 Per ulteriori informazioni, vedere l'argomento e [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md)di [classe di CException](../../mfc/reference/cexception-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CSimpleException`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Gestione delle eccezioni](../../mfc/exception-handling-in-mfc.md)