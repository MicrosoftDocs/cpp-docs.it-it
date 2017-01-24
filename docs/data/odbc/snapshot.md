---
title: "Snapshot | Microsoft Docs"
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
  - "libreria di cursori [ODBC], snapshot"
  - "cursori [ODBC], statiche"
  - "ODBC (libreria di cursori) [ODBC], snapshot"
  - "recordset ODBC, snapshot"
  - "recordset, snapshot"
  - "snapshot"
  - "snapshot, supporto in ODBC"
  - "cursori statici"
ms.assetid: b5293a52-0657-43e9-bd71-fe3785b21c7e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Snapshot
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Uno snapshot è un recordset che riflette una visualizzazione statica dei dati esistente al momento della creazione.  Una volta aperto lo snapshot ed effettuato lo spostamento su tutti i record, l'insieme di record in esso contenuti e i relativi valori non subiscono modifiche fino a quando lo snapshot non viene ricompilato chiamando **Requery**.  
  
> [!NOTE]
>  L'argomento è relativo alle classi ODBC MFC.  Se si utilizzano le classi DAO MFC anziché le classi ODBC MFC, per una descrizione dei recordset di tipo snapshot, vedere [CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md).  
  
 È possibile creare snapshot aggiornabili o in sola lettura con le classi di database.  A differenza di un dynaset, uno snapshot aggiornabile non riflette le modifiche ai valori di record apportate da altri utenti, ma mostra gli aggiornamenti e le eliminazioni effettuati dal programma.  I record aggiunti a uno snapshot non vengono visualizzati nello snapshot fino a quando non si chiama **Requery**.  
  
> [!TIP]
>  Uno snapshot è un cursore statico ODBC.  I cursori statici non recuperano una riga di dati fino a quando non ci si sposta sul record.  Per assicurarsi che tutti i record vengano immediatamente recuperati, è possibile scorrere fino alla fine del recordset, quindi tornare al primo record che si desidera visualizzare.  Si noti tuttavia che lo scorrimento fino alla fine del recordset comporta un aumento di overhead e può provocare un peggioramento delle prestazioni.  
  
 Gli snapshot risultano particolarmente utili quando è necessario che i dati rimangano invariati durante l'esecuzione delle operazioni, ad esempio durante la generazione di un report o l'esecuzione di calcoli.  Tuttavia, poiché l'origine dati può divergere notevolmente dallo snapshot, potrebbe essere necessario ricompilarlo regolarmente.  
  
 Il supporto degli snapshot è basato sulla libreria di cursori ODBC, che fornisce a qualsiasi driver di livello 1 i cursori statici e gli aggiornamenti posizionati necessari per garantire l'aggiornabilità.  È necessario che la DLL della libreria di cursori venga caricata in memoria per fornire questo supporto.  Quando si costruisce un oggetto `CDatabase` e si chiama la relativa funzione membro `OpenEx`, è necessario specificare l'opzione **CDatabase::useCursorLib** del parametro `dwOptions`.  Se si chiama la funzione membro **Open**, la libreria di cursori viene caricata per impostazione predefinita.  Se si utilizzano i dynaset anziché gli snapshot, non caricare la libreria di cursori.  
  
 Gli snapshot sono disponibili solo se la libreria di cursori ODBC viene caricata durante la costruzione dell'oggetto `CDatabase` o se il driver ODBC utilizzato supporta i cursori statici.  
  
> [!NOTE]
>  È possibile che gli snapshot \(cursori statici\) per alcuni driver ODBC non siano aggiornabili.  Per informazioni sui tipi di cursori supportati e i tipi di concorrenza da essi supportati, consultare la documentazione del driver in uso.  Per garantire l'utilizzo di snapshot aggiornabili, è necessario caricare la libreria di cursori in memoria durante la creazione di un oggetto `CDatabase`.  Per ulteriori informazioni, vedere [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!NOTE]
>  Se si desidera utilizzare sia snapshot che dynaset, è necessario basarli su due oggetti `CDatabase` differenti, ovvero due connessioni differenti.  
  
 Per ulteriori informazioni sulle proprietà condivise dagli snapshot e da tutti i recordset, vedere [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md).  Per ulteriori informazioni su ODBC e sugli snapshot, inclusa la libreria di cursori ODBC, vedere [ODBC](../../data/odbc/odbc-basics.md).  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)