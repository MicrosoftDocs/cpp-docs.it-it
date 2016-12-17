---
title: "Documentazione MFC sui database | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO [C++], MFC"
  - "database [C++], MFC"
  - "MFC [C++], applicazioni database"
  - "ODBC [C++], MFC"
ms.assetid: bb120282-cd0d-4bf4-a27c-93b3501fb3a0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Documentazione MFC sui database
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La documentazione MFC per le classi DAO e ODBC è costituita dai componenti elencati nella tabella riportata di seguito.  
  
### Documentazione MFC sui database  
  
|Per la documentazione su|Vedere|  
|------------------------------|------------|  
|Classi DAO e ODBC|Nome della classe in *Riferimenti alla libreria MFC*|  
|Funzioni globali e macro per DAO e ODBC|Nome della funzione o della macro in *Riferimenti alla libreria MFC*|  
|Programmazione con le classi ODBC MFC|[ODBC e MFC](../data/odbc/odbc-and-mfc.md)|  
|Note tecniche per DAO e ODBC|[Note tecniche MFC](../mfc/technical-notes-by-category.md)|  
  
##  <a name="_core_mfc_documentation_and_dao_documentation"></a> Documentazione MFC e documentazione DAO  
 Nella documentazione MFC per le classi DAO MFC sono disponibili riferimenti ad argomenti dell'SDK di DAO, incluso nella documentazione online.  Poiché MFC esegue il wrapping di DAO, la documentazione MFC ha le seguenti caratteristiche:  
  
-   È incentrata su MFC e sulle relative differenze rispetto all'implementazione di DAO sottostante.  
  
-   Rimanda agli argomenti della Guida dell'SDK di DAO per informazioni più dettagliate.  I riferimenti incrociati hanno il seguente formato "argomento relativo a *X* nella Guida di DAO".  
  
-   Vengono sottolineate le differenze tra le varie operazioni in MFC e DAO.  MFC non esegue il wrapping di DAO in modo completo.  Ad esempio, in MFC non sono inclusi gli oggetti della funzionalità di sicurezza di DAO.  
  
> [!NOTE]
>  La Guida dell'SDK di DAO è fornita in un file distinto.  Nella presente documentazione non sono pertanto presenti collegamenti ipertestuali alla Guida di DAO per questa versione di Visual C\+\+.  
  
> [!NOTE]
>  Alcuni argomenti della Guida dell'SDK di DAO richiedono operazioni di conversione.  Infatti, gli esempi sono scritti nel linguaggio di programmazione Basic e non in C\+\+. L'SDK di DAO include però un insieme di esempi in C\+\+ che non utilizzano MFC.  
  
##  <a name="_core_mfc_documentation_and_odbc_documentation"></a> Documentazione MFC e documentazione ODBC  
 La documentazione MFC per le classi ODBC MFC è organizzata in modo differente.  Le classi ODBC MFC offrono un livello elevato di astrazione basato su ODBC piuttosto che su un wrapper dell'API ODBC.  Pertanto, le due documentazioni sono meno collegate tra di loro di quanto non lo siano la documentazione di MFC e quella di DAO.  Nella documentazione di ODBC viene utilizzato il linguaggio C, molto più simile a C\+\+ rispetto al linguaggio Basic.  
  
## Vedere anche  
 [Classi di database MFC \(ODBC e DAO\)](../data/mfc-database-classes-odbc-and-dao.md)   
 [Nozioni fondamentali su ODBC](../data/odbc/odbc-basics.md)