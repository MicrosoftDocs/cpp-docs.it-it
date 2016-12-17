---
title: "Nozioni fondamentali su ODBC | Microsoft Docs"
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
  - "componenti ODBC"
  - "componenti ODBC, componenti richiesti"
  - "ODBC (libreria di cursori) [ODBC], componenti ODBC"
  - "ODBC, informazioni su ODBC"
  - "ODBC, componenti"
ms.assetid: ec529702-0fb2-4754-b8de-d1efa8eca18f
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Nozioni fondamentali su ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento sono presentate le nozioni di base su ODBC \(Open Database Connectivity\).  
  
-   [ODBC e le classi di database](../../data/odbc/odbc-and-the-database-classes.md)  
  
-   [Requisiti dei driver ODBC per dynaset](../../data/odbc/odbc-driver-requirements-for-dynasets.md)  
  
-   [Ridistribuzione dei componenti ODBC ai clienti](../../data/odbc/redistributing-odbc-components-to-your-customers.md)  
  
 Vedere anche l'argomento correlato [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!NOTE]
>  È possibile accedere alle origini dati ODBC tramite le classi ODBC MFC, come descritto nel presente argomento, oppure tramite le classi DAO \(Data Access Object\) MFC.  
  
> [!NOTE]
>  Le classi ODBC MFC supportano il formato Unicode e multithreading.  Per ulteriori informazioni sul supporto del multithreading, vedere [Classi e thread ODBC](../../data/odbc/odbc-classes-and-threads.md)  
  
 ODBC è un'interfaccia a livello di chiamata che consente alle applicazioni di accedere ai dati di qualsiasi database per il quale è disponibile un driver ODBC.  Tramite ODBC è possibile creare applicazioni di database con l'accesso a tutti i database per cui l'utente finale dispone di un driver ODBC.  ODBC fornisce un'API che consente all'applicazione di non dipendere dal sistema di gestione di database \(DBMS\) di origine.  
  
 ODBC svolge la funzione di database per Microsoft Windows Open Services Architecture \(WOSA\), ovvero un'interfaccia che consente alle applicazioni desktop per Windows di connettersi a più ambienti di elaborazione senza che sia necessario riscrivere l'applicazione per ciascuna piattaforma.  
  
 Di seguito sono riportati alcuni componenti di ODBC.  
  
-   API ODBC  
  
     Una libreria di chiamate alle funzioni, un insieme di codici di errore e una sintassi [SQL](../../data/odbc/sql.md) standard per l'accesso ai dati nei DBMS.  
  
-   Gestione driver ODBC  
  
     Una libreria a collegamento dinamico \(Odbc32.dll\) che carica i driver per i database ODBC per un'applicazione.  Questa DLL risulta trasparente all'applicazione.  
  
-   Driver per database ODBC  
  
     Una o più DLL che elaborano le chiamate alle funzioni ODBC per DBMS specifici.  Per un elenco dei driver disponibili, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
-   [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)  
  
     Una libreria a collegamento dinamico \(Odbccr32.dll\) che si trova tra Gestione driver ODBC e i driver e gestisce lo scorrimento dei dati.  
  
-   [Amministratore ODBC](../../data/odbc/odbc-administrator.md)  
  
     Uno strumento utilizzato per la configurazione di un DBMS per renderlo disponibile come origine dati per un'applicazione.  
  
 Per essere indipendente dai DBMS, un'applicazione deve utilizzare un driver ODBC scritto in modo specifico per un DBMS anziché utilizzare direttamente il DBMS.  Il driver converte le chiamate in comandi utilizzati dal relativo DBMS, semplificando il lavoro degli sviluppatori e rendendo il sistema disponibile per un'ampia gamma di origini dati.  
  
 Le classi di database supportano qualsiasi origine dati per la quale sia disponibile un driver ODBC,  inclusi, ad esempio, i database relazionali, i database ISAM \(Indexed Sequential Access Method\), i fogli di calcolo di Microsoft Excel o i file di testo.  I driver ODBC gestiscono le connessioni all'origine dati, mentre, per selezionare i record dal database, vengono utilizzate istruzioni SQL.  
  
 Per un elenco dei driver ODBC inclusi in questa versione di Visual C\+\+ e per informazioni sulla possibilità di ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)