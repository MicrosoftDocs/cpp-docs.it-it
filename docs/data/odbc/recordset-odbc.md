---
title: "Recordset (ODBC) | Microsoft Docs"
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
  - "recordset dinamici"
  - "dynaset"
  - "recordset forward-only"
  - "recordset ODBC"
  - "recordset ODBC, oggetti CRecordset"
  - "recordset, informazioni"
  - "recordset, creazione"
  - "recordset, dynaset"
  - "recordset, snapshot"
  - "snapshot, recordset ODBC"
ms.assetid: 333337c5-575e-4d26-b5f6-47166ad7874d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Recordset (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Un oggetto [CRecordset](../../mfc/reference/crecordset-class.md) rappresenta un insieme di record selezionati da un'origine dati.  I record possono provenire da:  
  
-   una tabella  
  
-   una query  
  
-   una stored procedure che accede a una o più tabelle.  
  
 Un esempio di recordset basato su una tabella è rappresentato dall'insieme di tutti i clienti recuperati da una tabella Clienti.  Una query potrebbe ad esempio restituire tutte le fatture di un determinato cliente. Un recordset basato su una stored procedure, definito talvolta query già definita, potrebbe ad esempio recuperare tutti i conti arretrati, richiamando una stored procedure nel database back\-end.  Un recordset è in grado di unire tramite join due o più tabelle presenti nella stessa origine dati, ma non tabelle con origini dati differenti.  
  
> [!NOTE]
>  Per informazioni sulla derivazione delle classi di recordset con le procedure guidate, vedere [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md) e [Supporto di database e Creazione guidata applicazioni MFC](../../mfc/reference/database-support-mfc-application-wizard.md).  
  
> [!NOTE]
>  Alcuni driver ODBC supportano le visualizzazioni del database.  In questo senso, una visualizzazione è una query originariamente creata mediante l'istruzione SQL `CREATE VIEW`.  Le procedure guidate non supportano attualmente le visualizzazioni. È tuttavia possibile scrivere il codice necessario per fornire questo supporto.  
  
##  <a name="_core_recordset_capabilities"></a> Proprietà del recordset  
 Tutti gli oggetti recordset condividono le proprietà descritte di seguito.  
  
-   Se l'origine dati non è in sola lettura, è possibile impostare il recordset come [aggiornabile](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md), [abilitato per le aggiunte](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md) o in sola lettura.  Se il recordset è aggiornabile, è possibile scegliere i metodi di [blocco](../../data/odbc/recordset-locking-records-odbc.md) ottimistico o pessimistico, a condizione che il driver fornisca il supporto appropriato per il blocco.  Se l'origine dati è in sola lettura, il recordset è in sola lettura.  
  
-   È possibile chiamare le funzioni membro per [scorrere](../../data/odbc/recordset-scrolling-odbc.md) i record selezionati.  
  
-   È possibile [filtrare](../../data/odbc/recordset-filtering-records-odbc.md) i record per applicare vincoli alla selezione dei record disponibili.  
  
-   È possibile [ordinare](../../data/odbc/recordset-sorting-records-odbc.md) i record in ordine crescente o decrescente sulla base di una o più colonne.  
  
-   È possibile [applicare parametri](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md) al recordset per qualificarne la selezione in fase di esecuzione.  
  
##  <a name="_core_snapshots_and_dynasets"></a> Snapshot e dynaset  
 Esistono due tipi principali di recordset: gli [snapshot](../../data/odbc/snapshot.md) e i [dynaset](../../data/odbc/dynaset.md).  Entrambi i tipi sono supportati dalla classe `CRecordset` e condividono le caratteristiche comuni a tutti i recordset. Ciascuno di essi tuttavia estende le funzionalità comuni in base alle proprie caratteristiche intrinseche.  Gli snapshot forniscono una visualizzazione statica dei dati e risultano utili per i report e altre situazioni in cui si desidera una visualizzazione specifica dei dati in un determinato momento.  I dynaset risultano utili quando si desidera visualizzare nel recordset gli aggiornamenti effettuati da altri utenti, senza dover aggiornare o ripetere una query del recordset.  Gli snapshot e i dynaset possono essere aggiornabili o in sola lettura.  Per visualizzare i record aggiunti o eliminati da altri utenti, chiamare [CRecordset::Requery](../Topic/CRecordset::Requery.md).  
  
 `CRecordset` consente inoltre di utilizzare altri due tipi di recordset: i recordset dinamici e quelli forward\-only.  I recordset dinamici sono simili ai dynaset, tuttavia riflettono tutti i record aggiunti o eliminati senza chiamare `CRecordset::Requery`.  Per questa ragione, in genere i recordset dinamici risultano dispendiosi in termini di tempo di elaborazione nel DBMS e non sono supportati da molti driver ODBC.  Al contrario, i recordset di tipo forward\-only forniscono il metodo più efficace di accesso ai dati per i recordset che non richiedono aggiornamenti o lo scorrimento indietro.  È possibile, ad esempio, utilizzare un recordset forward\-only per trasferire i dati da un'origine dati a un'altra, eseguendo solo lo scorrimento in avanti.  Per utilizzare un recordset di tipo forward\-only, è necessario eseguire entrambe le operazioni riportate di seguito.  
  
-   Passare l'opzione **CRecordset::forwardOnly** come parametro `nOpenType` della funzione membro [Open](../Topic/CRecordset::Open.md).  
  
-   Specificare **CRecordset::readOnly** nel parametro `dwOptions` della funzione membro **Open**.  
  
    > [!NOTE]
    >  Per informazioni sui requisiti del driver ODBC per il supporto dei dynaset, vedere [ODBC](../../data/odbc/odbc-basics.md).  Per un elenco dei driver ODBC inclusi in questa versione di Visual C\+\+ e per informazioni sulla possibilità di ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
##  <a name="_core_your_recordsets"></a> Recordset  
 Per ogni specifica tabella, visualizzazione o stored procedure a cui si desidera accedere viene in genere definita una classe derivata da `CRecordset`. L'unica eccezione è costituita dal join di database, in cui un recordset rappresenta le colonne di due o più tabelle. Quando si deriva una classe di recordset, viene attivato il meccanismo RFX \(Record Field Exchange, trasferimento di campi di record\) o il meccanismo RFX di massa \(Bulk Record Field Exchange, trasferimento di massa di campi di record\), simile al meccanismo DDX \(Dialog Data Exchange\).  I meccanismi RFX e RFX di massa semplificano il trasferimento di dati dall'origine dati al recordset. RFX consente inoltre di trasferire i dati dal recordset all'origine dati.  Per ulteriori informazioni, vedere [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md) e [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Un oggetto recordset consente di accedere a tutti i record selezionati.  È necessario scorrere la maggior parte dei record selezionati mediante le funzioni membro di `CRecordset`, quali `MoveNext` e `MovePrev`.  Un oggetto recordset rappresenta, in un determinato momento, solo uno dei record selezionati, ovvero il record corrente.  È possibile esaminare i campi del record corrente dichiarando le variabili membro delle classi del recordset corrispondenti alle colonne della tabella o dei record risultanti dalla query del database.  Per informazioni sui membri dati dei recordset, vedere [Recordset: architettura \(ODBC\)](../../data/odbc/recordset-architecture-odbc.md).  
  
 Negli argomenti riportati di seguito vengono fornite informazioni dettagliate sull'utilizzo degli oggetti recordset.  Gli argomenti sono elencati in categorie funzionali e disposti in modo da consentirne la lettura sequenziale.  
  
### Argomenti relativi alle operazioni di apertura, lettura e chiusura dei recordset  
  
-   [Recordset: architettura \(ODBC\)](../../data/odbc/recordset-architecture-odbc.md)  
  
-   [Recordset: dichiarazione di una classe per una tabella \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-table-odbc.md)  
  
-   [Recordset: creazione e chiusura di recordset \(ODBC\)](../../data/odbc/recordset-creating-and-closing-recordsets-odbc.md)  
  
-   [Recordset: scorrimento \(ODBC\)](../../data/odbc/recordset-scrolling-odbc.md)  
  
-   [Recordset: bookmark e absolute position \(ODBC\)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md)  
  
-   [Recordset: applicazione di filtri ai record \(ODBC\)](../../data/odbc/recordset-filtering-records-odbc.md)  
  
-   [Recordset: ordinamento dei record \(ODBC\)](../../data/odbc/recordset-sorting-records-odbc.md)  
  
-   [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
### Argomenti relativi alle operazioni di modifica dei recordset  
  
-   [Recordset: aggiunta, aggiornamento ed eliminazione di record \(ODBC\)](../../data/odbc/recordset-adding-updating-and-deleting-records-odbc.md)  
  
-   [Recordset: blocco dei record \(ODBC\)](../../data/odbc/recordset-locking-records-odbc.md)  
  
-   [Recordset: ripetizione di una query in un recordset \(ODBC\)](../../data/odbc/recordset-requerying-a-recordset-odbc.md)  
  
### Argomenti relativi a tecniche più avanzate  
  
-   [Recordset: esecuzione di un join \(ODBC\)](../../data/odbc/recordset-performing-a-join-odbc.md)  
  
-   [Recordset: dichiarazione di una classe per una query già definita \(ODBC\)](../../data/odbc/recordset-declaring-a-class-for-a-predefined-query-odbc.md)  
  
-   [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)  
  
-   [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md)  
  
-   [Recordset: gestione di dati di grandi dimensioni \(ODBC\)](../../data/odbc/recordset-working-with-large-data-items-odbc.md)  
  
-   [Recordset: recupero di somme e altri risultati aggregati \(ODBC\)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)  
  
### Argomenti relativi al funzionamento dei recordset  
  
-   [Recordset: selezione dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)  
  
-   [Recordset: aggiornamento dei record \(ODBC\)](../../data/odbc/recordset-how-recordsets-update-records-odbc.md)  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)   
 [Transazione \(ODBC\)](../../data/odbc/transaction-odbc.md)