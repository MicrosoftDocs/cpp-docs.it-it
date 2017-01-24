---
title: "Struttura CDaoErrorInfo | Microsoft Docs"
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
  - "CDaoErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoErrorInfo (struttura)"
  - "DAO (Data Access Objects), raccolta di errori"
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CDaoErrorInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoErrorInfo` contiene informazioni su un oggetto error definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoErrorInfo  
{  
   long m_lErrorCode;  
   CString m_strSource;  
   CString m_strDescription;  
   CString m_strHelpFile;  
   long m_lHelpContext;  
};  
```  
  
#### Parametri  
 *m\_lErrorCode*  
 Un codice di errore numerico di DAO.  Vedere l'argomento "errori intercettabili di accesso ai dati" nella Guida di DAO.  
  
 *m\_strSource*  
 Il nome dell'oggetto o dell'applicazione originariamente generato l'errore.  La proprietà di origine specifica un'espressione stringa che rappresenta l'oggetto che ha generato l'errore; l'espressione corrisponde in genere al nome della classe dell'oggetto.  Per informazioni dettagliate, vedere l'argomento "proprietà di origine" nella Guida di DAO.  
  
 *m\_strDescription*  
 Una stringa descrittiva associata a un errore.  Per informazioni dettagliate, vedere l'argomento "proprietà description" nella Guida di DAO.  
  
 *m\_strHelpFile*  
 Il percorso completo di un file della Guida di Microsoft Windows.  Per informazioni dettagliate, vedere l'argomento "HelpContext, proprietà HelpFile di" nella Guida di DAO.  
  
 *m\_lHelpContext*  
 Un ID di contesto per un argomento in un file della Guida di Microsoft Windows.  Per informazioni dettagliate, vedere l'argomento "HelpContext, proprietà HelpFile di" nella Guida di DAO.  
  
## Note  
 MFC non incapsula gli oggetti errori di DAO in una classe.  Al contrario, la classe di [CDaoException](../../mfc/reference/cdaoexception-class.md) fornisce un'interfaccia per accedere alla raccolta degli errori contenuta nell'oggetto di DAO **DBEngine** , l'oggetto che contiene anche tutte le aree di lavoro.  Quando un'operazione di DAO MFC consente di generare un oggetto `CDaoException` che catch, MFC riempie una struttura di `CDaoErrorInfo` e la archiviate nel membro di [m\_pErrorInfo](../Topic/CDaoException::m_pErrorInfo.md) dell'oggetto eccezione. Se si sceglie di chiamare direttamente le API DAO, è necessario chiamare la funzione membro di [GetErrorInfo](../Topic/CDaoException::GetErrorInfo.md) l'oggetto eccezione manualmente per riempire `m_pErrorInfo`\).  
  
 Per ulteriori informazioni sulla gestione degli errori di DAO, vedere l'articolo [Eccezioni: Eccezioni di database](../../mfc/exceptions-database-exceptions.md).  Per informazioni correlate, vedere l'argomento "oggetto error" nella Guida di DAO.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoException::GetErrorInfo](../Topic/CDaoException::GetErrorInfo.md) vengono archiviate in una struttura di `CDaoErrorInfo`.  Esaminare il membro dati di [m\_pErrorInfo](../Topic/CDaoException::m_pErrorInfo.md) da un oggetto di `CDaoException` rilevate in un gestore eccezioni, o la chiamata `GetErrorInfo` da un oggetto di `CDaoException` creati in modo esplicito per controllare gli errori che possono verificarsi durante la chiamata diretta a DAO collega.  `CDaoErrorInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoErrorInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoException Class](../../mfc/reference/cdaoexception-class.md)