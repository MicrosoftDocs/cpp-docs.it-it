---
title: "CDBException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDBException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBException class"
  - "database exceptions [C++]"
  - "errori [C++], database"
  - "exceptions [C++], database"
  - "classi ODBC [C++], eccezioni"
ms.assetid: eb9e1119-89f5-49a7-b9d4-b91cee1ccc82
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CDBException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di eccezione in seguito alle classi di database.  
  
## Sintassi  
  
```  
  
class CDBException : public CException  
  
```  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDBException::m\_nRetCode](../Topic/CDBException::m_nRetCode.md)|Contiene un codice restituito ODBC \(open database connectivity\), di tipo **RETCODE**.|  
|[CDBException::m\_strError](../Topic/CDBException::m_strError.md)|Contiene una stringa che descrive l'errore in termini alfanumerici.|  
|[CDBException::m\_strStateNativeOrigin](../Topic/CDBException::m_strStateNativeOrigin.md)|Contiene una stringa che descrive l'errore in termini di codici di errore restituiti da ODBC.|  
  
## Note  
 La classe include due membri dati pubblici che è possibile utilizzare per determinare la causa di un'eccezione o visualizzare un messaggio di testo che descrive l'eccezione.  Gli oggetti di`CDBException` vengono costruiti e generati dalle funzioni membro delle classi di database.  
  
> [!NOTE]
>  Questa classe è una delle classi ODBC MFC \(ODBC\).  Se invece si utilizzano le versioni nuove classi di \(DAO\) degli oggetti di accesso ai dati, utilizzare [CDaoException](../../mfc/reference/cdaoexception-class.md) anziché.  Tutti i nomi delle classi DAO presentano "CDao" come prefisso.  Per ulteriori informazioni, vedere l'articolo [cenni preliminari: La programmazione di database](../../data/data-access-programming-mfc-atl.md).  
  
 Le eccezioni sono casi di esecuzione anomala che includono i termini esterno del controllo del programma, come origine dati o errore di I\/O di rete.  Gli errori che si prevede venga visualizzata in corso normale di eseguire il programma in genere non vengono considerati eccezioni.  
  
 È possibile accedere a questi oggetti in un'espressione **CATCH**.  È inoltre possibile generare gli oggetti `CDBException` dal codice con la funzione globale `AfxThrowDBException`.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in genere o sugli oggetti `CDBException`, vedere gli articoli [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: Eccezioni di database](../../mfc/exceptions-database-exceptions.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDBException`  
  
## Requisiti  
 **Header:** afxdb.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)   
 [AfxThrowDBException](../Topic/AfxThrowDBException.md)   
 [CRecordset::Update](../Topic/CRecordset::Update.md)   
 [CRecordset::Delete](../Topic/CRecordset::Delete.md)   
 [CException Class](../../mfc/reference/cexception-class.md)