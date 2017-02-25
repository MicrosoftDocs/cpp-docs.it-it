---
title: "MFC: utilizzo di classi di database con documenti e viste | Microsoft Docs"
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
  - "CDaoRecordView (classe), utilizzo in applicazioni database"
  - "CDaoRecordView (classe), utilizzo in form di database"
  - "CRecordView (classe), utilizzo in form di database"
  - "DAO [C++], form in applicazioni database"
  - "DAO (recordset) [C++]"
  - "DAO (recordset) [C++], documenti e visualizzazioni"
  - "applicazioni di database [C++], form"
  - "classi di database [C++], MFC"
  - "architettura documento/visualizzazione [C++], in database"
  - "documenti [C++], applicazioni database"
  - "form [C++], applicazioni database"
  - "ODBC [C++], form"
  - "ODBC (recordset) [C++], documenti e visualizzazioni"
  - "visualizzazioni di record [C++], applicazioni basate su form"
  - "recordset [C++], documenti e visualizzazioni"
  - "visualizzazioni [C++], applicazioni database"
ms.assetid: 83979974-fc63-46ac-b162-e8403a572e2c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# MFC: utilizzo di classi di database con documenti e viste
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare le classi di database DAO MFC o ODBC MFC con o senza l'architettura documento\/visualizzazione.  In questo argomento viene descritto l'utilizzo di documenti e visualizzazioni.  Verranno trattati i seguenti argomenti:  
  
-   [Creazione di un'applicazione basata sui form](#_core_writing_a_form.2d.based_application) tramite un oggetto `CRecordView` o `CDaoRecordView` come visualizzazione principale del documento.  
  
-   [Utilizzo di recordset in documenti e visualizzazioni](#_core_using_recordsets_in_documents_and_views).  
  
-   [Altri fattori](#_core_other_factors).  
  
 Per le alternative, vedere [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).  
  
##  <a name="_core_writing_a_form.2d.based_application"></a> Creazione di un'applicazione basata sui form  
 Molte applicazioni di accesso ai dati si basano su form.  L'interfaccia utente è un form contenente controlli in cui l'utente esamina, immette o modifica i dati.  Per basare un'applicazione sui form, utilizzare la classe `CRecordView` o `CDaoRecordView`.  Quando si esegue la Creazione guidata applicazione MFC e si seleziona il tipo di client **ODBC** nella pagina **Supporto database**, nel progetto la classe `CRecordView` verrà utilizzata come classe delle visualizzazioni.  Le procedure guidate non supportano più DAO, pertanto, se si desidera utilizzare `CDaoRecordView`, è necessario scrivere manualmente il codice necessario.  
  
 In un'applicazione basata su form ogni oggetto visualizzazione record include un puntatore a un oggetto `CRecordset` o `CDaoRecordset`.  Il meccanismo di trasferimento di campi di record \(Record Field Exchange, RFX\) del framework consente lo scambio dei dati tra il recordset e l'origine dati.  Il meccanismo DDX \(Dialog Data Exchange\) consente di scambiare i dati tra i membri dati del campo dell'oggetto recordset e i controlli sul form.  `CRecordView` o `CDaoRecordView` fornisce inoltre funzioni di gestione dei comandi per la navigazione tra record sul form.  
  
 Per creare un'applicazione basata sui form tramite una procedura guidata, vedere [Creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md) e [Supporto database, Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).  
  
 Per una descrizione completa dei form, vedere [Visualizzazioni record](../data/record-views-mfc-data-access.md).  
  
##  <a name="_core_using_recordsets_in_documents_and_views"></a> Utilizzo di recordset in documenti e visualizzazioni  
 Molte applicazioni semplici basate sui form non richiedono l'uso di documenti.  Se l'applicazione è più complessa, è tuttavia consigliabile utilizzare un documento come proxy per il database, per memorizzare un oggetto `CDatabase` o `CDaoDatabase` che stabilisca la connessione con l'origine dati.  Le applicazioni basate sui form includono in genere un puntatore a un oggetto recordset all'interno della visualizzazione.  Altri tipi di applicazioni di database includono recordset e l'oggetto `CDatabase` o `CDaoDatabase` all'interno del documento.  Di seguito sono descritte alcune possibilità per l'utilizzo di documenti in applicazioni di database.  
  
-   Se si accede a un recordset in un contesto locale, creare un oggetto `CRecordset` o `CDaoRecordset` a livello locale in funzioni membro del documento o della visualizzazione, in base alle proprie esigenze.  
  
     Dichiarare un oggetto recordset come variabile locale in una funzione.  Passare **NULL** al costruttore, per fare in modo che il framework crei e apra automaticamente un oggetto `CDatabase` o `CDaoDatabase` temporaneo.  In alternativa, passare un puntatore a un oggetto `CDatabase` o `CDaoDatabase`.  Utilizzare il recordset all'interno della funzione e lasciare che venga eliminato automaticamente al termine della funzione.  
  
     Quando si passa **NULL** al costruttore di un recordset, il framework utilizza le informazioni restituite dalla funzione membro `GetDefaultConnect` del recordset per creare un oggetto `CDatabase` o `CDaoDatabase` e aprirlo.  Le procedure guidate implementano automaticamente `GetDefaultConnect`.  
  
-   Se si accede a un recordset durante il ciclo di vita di un documento, è necessario incorporare uno o più oggetti `CRecordset` o `CDaoRecordset` nel documento.  
  
     Creare gli oggetti recordset quando si inizializza il documento o quando necessario.  È possibile scrivere una funzione che restituisca un puntatore al recordset, se questo è già esistente, oppure che crei e apra il recordset in caso contrario.  Chiudere, eliminare e ricreare il recordset quando necessario oppure chiamare la relativa funzione membro **Requery** per aggiornare i record.  
  
-   Se si accede a un'origine dati durante il ciclo di vita del documento, incorporare un oggetto `CDatabase` o `CDaoDatabase` oppure memorizzare un puntatore a un oggetto `CDatabase` o `CDaoDatabase`.  
  
     L'oggetto `CDatabase` o `CDaoDatabase` gestisce una connessione all'origine dati.  L'oggetto viene creato automaticamente durante la creazione del documento e deve essere chiamata la funzione membro **Open** quando si inizializza il documento.  Quando si creano oggetti recordset nelle funzioni membro di documenti, è necessario passare un puntatore all'oggetto `CDatabase` o `CDaoDatabase` del documento.  In tal modo, ogni recordset viene associato alla relativa origine dati.  L'oggetto di database viene in genere eliminato alla chiusura del documento.  Gli oggetti recordset vengono solitamente eliminati quando escono dall'area di validità di una funzione.  
  
##  <a name="_core_other_factors"></a> Altri fattori  
 Le applicazioni basate su form non sono in genere utili per il meccanismo di serializzazione dei documenti del framework, pertanto si consiglia di rimuovere, disabilitare o sostituire i comandi `New` e **Apri** del menu **File**.  Vedere l'articolo [Serializzazione: serializzazione e input\/output da un database](../mfc/serialization-serialization-vs-database-input-output.md).  
  
 È inoltre possibile utilizzare le molte possibilità offerte dall'interfaccia utente e supportate dal framework.  Ad esempio, è possibile utilizzare più oggetti `CRecordView` o `CDaoRecordView` in una finestra con separatore, aprire più recordset in varie finestre figlio dell'interfaccia a documenti multipli e così via.  
  
 Si consiglia di implementare la stampa degli elementi della visualizzazione, sia che si tratti di un form implementato con `CRecordView` o `CDaoRecordView` che di qualsiasi altro elemento.  Poiché derivano da `CFormView`, le classi `CRecordView` e `CDaoRecordView` non supportano la stampa, ma è possibile eseguire l'override della funzione membro `OnPrint` per consentire la stampa.  Per ulteriori informazioni, vedere la classe [CFormView](../mfc/reference/cformview-class.md).  
  
 È possibile scegliere di non utilizzare documenti e visualizzazioni.  In tal caso, vedere [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md).  
  
## Vedere anche  
 [Classi di database MFC \(ODBC e DAO\)](../data/mfc-database-classes-odbc-and-dao.md)