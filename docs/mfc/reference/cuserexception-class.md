---
title: "CUserException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CUserException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUserException class"
  - "errori [C++], intercettazione"
  - "eccezioni, generazione"
  - "operations [C++]"
  - "operations [C++], interruzione"
  - "generazione di eccezioni, stopping user operations"
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CUserException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Generato per interrompere un'operazione dell'utente finale.  
  
## Sintassi  
  
```  
class CUserException : public CSimpleException  
```  
  
## Note  
 Utilizzo `CUserException` quando si desidera utilizzare il meccanismo di un'eccezione catch\/throw per le eccezioni specifiche dell'applicazione.    L'utente" nel nome della classe può essere interpretato come "my l'utente ha fatto di elementi eccezionale che deve gestire."  
  
 `CUserException` viene solitamente generato dopo la chiamata alla funzione globale `AfxMessageBox` per informare l'utente che l'operazione non è riuscita.  Quando si scrive un gestore eccezioni, gestire in particolare eccezione poiché in genere è già stato notifica di errore.  Il framework genera in alcuni casi questa eccezione.  Per generare `CUserException` manualmente, segnalazione e chiamare la funzione globale `AfxThrowUserException`.  
  
 Nell'esempio riportato di seguito, una funzione che contiene operazioni che possono avere esito negativo gli avvisi dell'utente e generano `CUserException`.  La funzione chiamante intercetta l'eccezione e la gestione particolarmente:  
  
 [!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/CPP/cuserexception-class_1.cpp)]  
  
 Per ulteriori informazioni su l `CUserException`, vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CUserException`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [AfxMessageBox](../Topic/AfxMessageBox.md)   
 [AfxThrowUserException](../Topic/AfxThrowUserException.md)   
 [Ricerca di categorie: Creazione di mie proprie classi di eccezione personalizzate?](http://go.microsoft.com/fwlink/?LinkId=128045)