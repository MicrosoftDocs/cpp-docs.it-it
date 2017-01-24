---
title: "CFileException Class | Microsoft Docs"
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
  - "CFileException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFile class, exceptions of"
  - "CFileException class"
  - "eccezioni, file type"
ms.assetid: f6491bb9-bfbc-42fd-a952-b33f9b62323f
caps.latest.revision: 20
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFileException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno stato di eccezione file correlato.  
  
## Sintassi  
  
```  
class CFileException : public CException  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::CFileException](../Topic/CFileException::CFileException.md)|Costruisce un oggetto `CFileException`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::ErrnoToException](../Topic/CFileException::ErrnoToException.md)|Codice di causa della corrispondente al numero di runtime.|  
|[CFileException::GetErrorMessage](../Topic/CFileException::GetErrorMessage.md)|Recupera il messaggio che viene descritta un'eccezione.|  
|[CFileException::OsErrorToException](../Topic/CFileException::OsErrorToException.md)|Restituisce un codice delle cause che corrisponde a un codice di errore del sistema operativo.|  
|[CFileException::ThrowErrno](../Topic/CFileException::ThrowErrno.md)|Genera un'eccezione di file basata su un numero di errore di runtime.|  
|[CFileException::ThrowOsError](../Topic/CFileException::ThrowOsError.md)|Genera un'eccezione di file basata su un numero di errore del sistema operativo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::m\_cause](../Topic/CFileException::m_cause.md)|Contiene il codice portabile che corrisponde alla causa di un'eccezione.|  
|[CFileException::m\_lOsError](../Topic/CFileException::m_lOsError.md)|Contiene il numero errore del sistema operativo correlato.|  
|[CFileException::m\_strFileName](../Topic/CFileException::m_strFileName.md)|Contiene il nome del file per questa eccezione.|  
  
## Note  
 La classe `CFileException` include i membri dati pubblici che utilizzano codice portabile causa e il numero errore funzionamento\-sistema\- specifico.  La classe fornisce anche funzioni membro statico per generare eccezioni di file e restituire i codici di seguito per gli errori del sistema operativo che gli errori di runtime del linguaggio C.  
  
 Gli oggetti di`CFileException` vengono costruiti e generati nelle funzioni membro `CFile` e funzioni membro delle classi derivate.  È possibile accedere a questi oggetti in un'espressione **CATCH**.  Per la portabilità, utilizzare solo il codice di seguito per ottenere la causa di un'eccezione.  Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Gestione delle eccezioni \(MFC\)](../../mfc/exception-handling-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CFileException`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)