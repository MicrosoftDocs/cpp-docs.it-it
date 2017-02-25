---
title: "CDaoException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDaoException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoException class"
  - "raccolte, DAO (errori)"
  - "DAO (Data Access Objects), eccezioni"
  - "errori [C++], DAO"
  - "Errors collection, DAO"
  - "eccezioni, in MFC DAO classes"
ms.assetid: b2b01fa9-7ce2-42a1-842e-40f13dc50da4
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CDaoException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di eccezione in seguito alle classi di database MFC basate su oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
class CDaoException : public CException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException::CDaoException](../Topic/CDaoException::CDaoException.md)|Costruisce un oggetto `CDaoException`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException::GetErrorCount](../Topic/CDaoException::GetErrorCount.md)|Restituisce il numero di errori nella raccolta degli errori del motore di database.|  
|[CDaoException::GetErrorInfo](../Topic/CDaoException::GetErrorInfo.md)|Restituisce informazioni su un oggetto errore specifico nella raccolta degli errori.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException::m\_nAfxDaoError](../Topic/CDaoException::m_nAfxDaoError.md)|Contiene un codice di errore esteso per qualsiasi errore nelle classi DAO MFC.|  
|[CDaoException::m\_pErrorInfo](../Topic/CDaoException::m_pErrorInfo.md)|Un puntatore a un oggetto [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) contenente informazioni su un oggetto errore di DAO.|  
|[CDaoException::m\_scode](../Topic/CDaoException::m_scode.md)|Il valore [SCODE](../Topic/CDaoException::m_scode.md) associato all'errore.|  
  
## Note  
 La classe include i membri dati pubblici che è possibile utilizzare per determinare la causa di un'eccezione.  Gli oggetti di`CDaoException` vengono costruiti e generati dalle funzioni membro delle classi di database DAO.  
  
> [!NOTE]
>  Le classi di database DAO sono differenziate dalle classi di database MFC basate su ODBC.  Tutti i nomi delle classi di database DAO dispongono del prefisso "di CDao".  È ancora possibile accedere alle origini dati ODBC con le classi DAO.  Le classi MFC basate su DAO risulta in genere più in grado delle classi MFC basate su ODBC, le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite proprio motore di database.  Le classi basate su DAO supportano le operazioni di Data Definition Language \(DDL\), ad esempio aggiunta di tabelle tramite le classi, senza dover chiamare direttamente le API DAO.  Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).  
  
 È possibile accedere agli oggetti eccezione in un'espressione [FERMO](../Topic/CATCH.md).  È inoltre possibile generare gli oggetti `CDaoException` dal codice con la funzione globale [AfxThrowDaoException](../Topic/AfxThrowDaoException.md).  
  
 In MFC, tutti gli errori di DAO sono espressi come eccezioni, di tipo `CDaoException`.  Quando viene rilevata un'eccezione di questo tipo, è possibile utilizzare le funzioni membro `CDaoException` per recuperare informazioni da tutti gli oggetti errori di DAO memorizzati nella raccolta degli errori del motore di database.  Durante ciascun errore si verifica, uno o più oggetti errori vengono inseriti nella raccolta degli errori.  In genere la raccolta contiene un solo oggetto errore; se si utilizza un'origine dati ODBC, è più probabile ottenere gli oggetti più errori.\) Quando un'altra operazione di DAO generato un errore, la raccolta degli errori è deselezionata e il nuovo oggetto errore viene inserito nella raccolta degli errori.  Le operazioni di DAO che non generano un errore non hanno alcun effetto sulla raccolta degli errori.  
  
 Per i codici di errore di DAO, vedere il file. DAOERR.H.  Per informazioni correlate, vedere l'argomento "errori intercettabili di accesso ai dati" nella Guida di DAO.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in genere o sugli oggetti `CDaoException`, vedere gli articoli [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: Eccezioni di database](../../mfc/exceptions-database-exceptions.md).  Il secondo articolo contiene il codice di esempio che illustra la gestione delle eccezioni in DAO.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDaoException`  
  
## Requisiti  
 **Header:** afxdao.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)