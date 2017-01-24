---
title: "&#200; preferibile utilizzare DAO o ODBC? | Microsoft Docs"
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
  - "DAO [C++], e ODBC"
  - "classi di database [C++], DAO"
  - "classi di database [C++], ODBC"
  - "ODBC [C++], e DAO"
ms.assetid: 9f67613f-0056-4ece-8c3a-9872e9563d57
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &#200; preferibile utilizzare DAO o ODBC?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare i modelli OLE DB o ODBC per i nuovi progetti e  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
 Il gruppo di classi MFC più opportuno da utilizzare  dipende dalle necessità specifiche:  
  
-   Optare per le classi ODBC se si utilizzano sempre origini dati ODBC, specialmente in ambienti client\/server in cui le classi ODBC MFC garantiscono prestazioni migliori.  
  
-   Optare per le classi DAO se si utilizzano principalmente database Microsoft Jet \(estensione mdb\) o altri formati di database che il modulo di gestione di database Microsoft Jet è in grado di leggere direttamente.  Per un elenco di questi formati, vedere [Quali origini dati sono accessibili con DAO e quali con ODBC?](../data/what-data-sources-can-i-access-with-dao-and-odbc-q.md)  
  
-   Accedere alle origini dati ODBC tramite le classi DAO quando si desidera avvalersi della velocità garantita dal modulo di gestione di database Microsoft Jet e delle funzionalità supplementari delle classi DAO.  
  
    > [!NOTE]
    >  DAO richiede spazio aggiuntivo su disco.  
  
 Le classi DAO presentano i seguenti vantaggi:  
  
-   Migliori prestazioni in alcuni casi, in particolare quando si utilizzano database Microsoft Jet con estensione mdb.  
  
-   Compatibilità con le classi ODBC e con Microsoft Access Basic e Microsoft Visual Basic.  
  
-   Accesso alle regole di convalida.  
  
-   Possibilità di specificare relazioni tra tabelle.  
  
-   Un modello di accesso ai dati più completo, con supporto dei linguaggi DDL \(Data Definition Language\) e DML \(Data Manipulation Language\).  Per ulteriori informazioni, vedere [Definizione e gestione di database](../data/are-ddl-and-dml-supported-q.md).  
  
 Nella tabella riportata di seguito sono riepilogate le differenze chiave per agevolare la scelta.  
  
### Scelta tra le classi ODBC e DAO MFC  
  
|Risultato da ottenere|Disponibile con le classi DAO|Disponibile con le classi ODBC|  
|---------------------------|-----------------------------------|------------------------------------|  
|Accesso a file MDB|Yes|Yes|  
|Accesso a origini dati ODBC|Yes|Yes|  
|Disponibilità per 16 bit|No|Yes|  
|Disponibilità per 32 bit|Yes|Yes|  
|Disponibilità per 64 bit|No|Yes|  
|Compressione di database|Yes|No|  
|Supporto di un modulo di gestione di database|Modulo di gestione di database Microsoft Jet|DBMS di destinazione|  
|Supporto DDL|Yes|Solo tramite chiamate ODBC dirette|  
|Supporto DML|Yes|Yes|  
|Implementazione MFC|Come "wrapper" delle funzioni DAO principali|Come astrazione semplificata anziché "wrapper" dell'API ODBC|  
|Utilizzo ottimale|Con file MDB \(Microsoft Access\)|Con qualsiasi DBMS per il quale si disponga di un driver, specialmente in ambienti client\/server|  
|Supporto delle transazioni|Per soluzione o per database nel caso di dati ODBC|Per database|  
  
 Tenere presente che ogni driver ODBC ha capacità diverse.  Per ulteriori informazioni, vedere *ODBC Programmer's Reference* \(informazioni in lingua inglese\) e il file della Guida del driver ODBC in uso.  
  
## Vedere anche  
 [Domande frequenti relative all'accesso ai dati](../data/data-access-frequently-asked-questions-mfc-data-access.md)