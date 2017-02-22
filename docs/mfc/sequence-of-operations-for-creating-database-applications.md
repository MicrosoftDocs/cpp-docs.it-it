---
title: "Sequenza delle operazioni per la creazione di applicazioni database | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC], database"
  - "applicazioni di database [C++]"
  - "applicazioni di database [C++], creazione"
  - "MFC [C++], applicazioni database"
ms.assetid: 9371da59-8536-43cd-8314-706ad320e2ec
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Sequenza delle operazioni per la creazione di applicazioni database
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tabella riportata di seguito viene descritto il ruolo del ruolo del framework nelle applicazioni di database di scrittura.  
  
> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare ODBC per i nuovi progetti MFC.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
### Creare applicazioni di database  
  
|Attività|Si|Il framework esegue|  
|--------------|--------|-------------------------|  
|Decidere se utilizzare ODBC MFC o le classi DAO.|Utilizzo di ODBC per i nuovi progetti MFC.  Utilizzare DAO solo per gestire le applicazioni esistenti.  Vedere [È preferibile utilizzare DAO o ODBC?](../data/should-i-use-dao-or-odbc-q.md).  Per informazioni generali, vedere l'articolo [Programmazione dell'accesso ai dati](../data/data-access-programming-mfc-atl.md).|Il framework fornisce classi che supportano l'accesso al database.|  
|Creare la struttura di applicazione con le opzioni del database.|Eseguire la Creazione guidata applicazione MFC.  Selezionare le opzioni nella pagina supporto database.  Se si sceglie un'opzione che consente di creare una visualizzazione di record, specificare anche:<br /><br /> -   L'origine dati e la tabella nome o nomi<br />-   Nome o nomi di query.|La Creazione guidata applicazione MFC crea file e specificare il necessario include.  A seconda delle opzioni specificate, i file può comportare una classe recordset.|  
|Progetti del modulo di database o form.|Utilizzare l'editor finestre di Visual C\+\+ per posizionare i controlli sulle risorse modello di finestra di dialogo per le classi per la visualizzazione di record.|La Creazione guidata applicazione MFC crea una risorsa vuota modello di finestra di dialogo per compilare.|  
|Creare una visualizzazione di record supplementare e le classi recordset in base alle necessità.|Utilizzare Visualizzazione classi per creare classi e l'editor finestre di dialogo per la progettazione visualizzazioni.|Visualizzazione classi creati i file aggiuntivi per le nuove classi.|  
|Creare gli oggetti recordset in base alle necessità nel codice.  Utilizzare ogni recordset per modificare i record...|I recordset sono basati su classi derivate da [CRecordset](../mfc/reference/crecordset-class.md) con le procedure guidate.|ODBC utilizza il trasferimento di campi di Record per lo scambio di dati tra il database e i membri dati di campo del recordset.  Se si utilizza una visualizzazione di record, dati di scambio di dati di scambio della finestra di dialogo \(DDX\) tra il recordset e i controlli della visualizzazione di record.|  
|... o creare [CDatabase](../mfc/reference/cdatabase-class.md) esplicito nel codice per ogni database che si desidera aprire.|Utilizzare gli oggetti recordset sugli oggetti di database.|L'oggetto di database fornisce un'interfaccia all'origine dati.|  
|Associare le colonne di dati al recordset in modo dinamico.|In ODBC, aggiungere codice alla classe derivata recordset per gestire l'associazione.  Vedere l'articolo [Recordset: Associazione dinamica di colonne di dati \(ODBC\)](../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||  
  
## Vedere anche  
 [Compilazione nel framework](../mfc/building-on-the-framework.md)   
 [Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)