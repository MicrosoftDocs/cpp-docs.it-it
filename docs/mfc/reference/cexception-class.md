---
title: "CException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchiveException class, classi base"
  - "CDaoException class, classi base"
  - "CDBException class, classi base"
  - "CException class"
  - "CFileException class, classi base"
  - "CInternetException class, classi base"
  - "CMemoryException class, classi base"
  - "CNotSupportedException class, classi base"
  - "COleDispatchException class, classi base"
  - "COleException class, classi base"
  - "CResourceException class, classi base"
  - "CUserException class"
  - "eccezioni, classes for"
  - "macro, gestione eccezioni"
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per tutte le eccezioni nella libreria MFC.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE CException : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CException::CException](../Topic/CException::CException.md)|Costruisce un oggetto `CException`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CException::Delete](../Topic/CException::Delete.md)|Rimuove un oggetto `CException`.|  
|[CException::ReportError](../Topic/CException::ReportError.md)|Indica un messaggio di errore in una finestra di messaggio per l'utente.|  
  
## Note  
 Poiché `CException` è una classe base astratta non è possibile creare direttamente gli oggetti `CException` ; è necessario creare gli oggetti di classi derivate.  Se è necessario creare una classe di stile `CException`, utilizzare una delle classi derivate indicate come modello.  Assicurarsi che la classe derivata inoltre utilizzare `IMPLEMENT_DYNAMIC`.  
  
 Le classi derivate e le relative descrizioni sono elencate di seguito:  
  
|||  
|-|-|  
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Una classe base per le eccezioni alle risorse critiche di MFC|  
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Stato di un'eccezione di argomento non valido|  
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|L'eccezione di memoria insufficiente|  
|[CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta per un'operazione non supportata|  
|[CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezione Archivio\-specifica|  
|[CFileException](../../mfc/reference/cfileexception-class.md)|Per un'eccezione specifica|  
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa di Windows non trovata o non creabile|  
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|  
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione del database \(ovvero termini di eccezione che si verificano per le classi di database MFC basate su ODBC\)|  
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|Eccezione di invio di \(automazione OLE\)|  
|[CUserException](../../mfc/reference/cuserexception-class.md)|Un'eccezione che indica che una risorsa non viene trovata|  
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione dell'oggetto di accesso ai dati \(ovvero termini di eccezione che si verificano per le classi DAO\)|  
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione Internet \(ovvero termini di eccezione che si verificano per le classi Internet\).|  
  
 Queste eccezioni vengano utilizzate con le macro [TIRO](../Topic/THROW%20\(MFC\).md), [THROW\_LAST](../Topic/THROW_LAST.md), [PROVA](../Topic/TRY.md), [FERMO](../Topic/CATCH.md), [AND\_CATCH](../Topic/AND_CATCH.md)e [END\_CATCH](../Topic/END_CATCH.md).  Per ulteriori informazioni sulle eccezioni, vedere [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)o, vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
 Per intercettare un'eccezione specifica, utilizzare la classe derivata appropriata.  Per rilevare tutti i tipi di eccezioni, utilizzare `CException`quindi utilizzare [CObject::IsKindOf](../Topic/CObject::IsKindOf.md) per distinguere `CException`di classi derivate.  Si noti che funziona il `CObject::IsKindOf` solo per le classi presentano dichiarato con la macro [IMPLEMENT\_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md), per sfruttare il controllo di tipo dinamico.  Qualsiasi `CException`nella classe derivata creata deve utilizzare la macro `IMPLEMENT_DYNAMIC`, anche.  
  
 È possibile correlare i dettagli sulle eccezioni all'utente chiamando [GetErrorMessage](../Topic/CFileException::GetErrorMessage.md) o [ReportError](../Topic/CException::ReportError.md), due funzioni membro che utilizzano le classi derivate di `CException`.  
  
 Se viene rilevata da una macro, l'oggetto `CException` viene eliminato automaticamente; non eliminare manualmente.  Se viene rilevata utilizzando una parola chiave **catch**, non viene eliminato automaticamente.  Vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md) per ulteriori informazioni su quando eliminare un oggetto di exeption.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CException`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)   
 [Ricerca di categorie: Creazione di mie proprie classi di eccezione personalizzate?](http://go.microsoft.com/fwlink/?LinkId=128045)