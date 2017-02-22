---
title: "MFC: utilizzo di classi di database senza documenti e viste | Microsoft Docs"
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
  - "creazioni guidate applicazione [C++], creazione di applicazioni database"
  - "CDaoRecordView (classe), utilizzo in applicazioni database"
  - "CRecordView (classe), utilizzo in applicazioni database"
  - "DAO [C++], supporto file in applicazioni database"
  - "DAO [C++], scrittura di applicazioni"
  - "applicazioni di database [C++], opzioni creazione guidata applicazioni"
  - "applicazioni di database [C++], senza documenti"
  - "applicazioni di database [C++], senza visualizzazioni"
  - "classi di database [C++], MFC"
  - "architettura documento/visualizzazione [C++], in database"
  - "documenti [C++], applicazioni senza"
  - "file [C++], MFC"
  - "ODBC [C++], supporto file in applicazioni database"
  - "applicazioni ODBC [C++]"
  - "applicazioni ODBC [C++], senza documenti"
  - "applicazioni ODBC [C++], senza visualizzazioni"
  - "interfaccia utente [C++], informazioni sul disegno"
ms.assetid: 15bf52d4-91cf-4b1d-8b37-87c3ae70123a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# MFC: utilizzo di classi di database senza documenti e viste
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In alcuni casi non è consigliabile utilizzare l'architettura documento\/visualizzazione del framework per le applicazioni di database create.  In questo argomento vengono fornite informazioni su:  
  
-   [Casi in cui non è richiesto l'utilizzo di documenti](#_core_when_you_don.92.t_need_documents), ad esempio durante la serializzazione di documenti.  
  
-   [Opzioni della Creazione guidata applicazione](#_core_appwizard_options_for_documents_and_views) per supportare applicazioni senza serializzazione e senza comandi del menu **File** relativi al documento, quali **Nuovo**, **Apri**, **Salva** e **Salva con nome**.  
  
-   [Utilizzo di un'applicazione con un documento minimo](#_core_applications_with_minimal_documents).  
  
-   [Creazione della struttura di un'applicazione senza documenti o visualizzazioni](#_core_applications_with_no_document).  
  
##  <a name="_core_when_you_don.92.t_need_documents"></a> Casi in cui non è richiesto l'utilizzo di documenti  
 Alcune applicazioni si basano su un diverso concetto di documento.  Tali applicazioni caricano in genere un intero file o la maggior parte di esso da un archivio nella memoria tramite un comando **Apri file**.  Il file aggiornato viene riscritto nello spazio di memoria in un'unica operazione tramite il comando **Salva** o **Salva con nome** del menu File.  L'utente visualizza un file di dati.  
  
 Tuttavia, alcune categorie di applicazioni non richiedono l'uso di un documento.  Le applicazioni di database funzionano in termini di transazioni.  L'applicazione seleziona i record da un database e li presenta all'utente, in genere uno alla volta.  All'utente viene in genere visualizzato un unico record corrente, che potrebbe essere l'unico record in memoria.  
  
 Se l'applicazione non richiede l'uso di un documento per la memorizzazione di dati, è possibile fare a meno di parte o di tutta l'architettura documento\/visualizzazione del framework.  La parte di architettura utilizzata dipende dall'approccio scelto.  È possibile scegliere una delle seguenti soluzioni:  
  
-   Utilizzare un documento minimo come spazio di archiviazione di una connessione all'origine dati senza implementare le normali funzionalità per i documenti quali la serializzazione.  Questa soluzione risulta utile quando si desidera disporre di diverse visualizzazioni dei dati e sincronizzare le visualizzazioni, aggiornandole tutte contemporaneamente e così via.  
  
-   Utilizzare una finestra cornice, in cui operare direttamente, anziché utilizzare una visualizzazione.  In questo caso, si omette il documento e i dati o le connessioni ai dati vengono memorizzate nell'oggetto finestra cornice.  
  
##  <a name="_core_appwizard_options_for_documents_and_views"></a> Opzioni della Creazione guidata applicazione MFC per documenti e visualizzazioni  
 La schermata **Supporto database** della Creazione guidata applicazione MFC offre diverse opzioni elencate nella tabella riportata di seguito.  Se si utilizza la Creazione guidata applicazione MFC per creare un'applicazione, tutte queste opzioni produrranno un'applicazione con documenti e visualizzazioni.  Alcune opzioni consentono di creare documenti e visualizzazioni omettendo le funzionalità per documenti non necessarie.  Per ulteriori informazioni, vedere [Supporto database, Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).  
  
|Opzione|Visualizzazione|Documento|  
|-------------|---------------------|---------------|  
|**None**|Derivata da `CView`.|Nessun supporto di database.  Questa è l'opzione predefinita.<br /><br /> Se viene selezionata l'opzione **Supporto architettura documento\/visualizzazione** alla pagina [Tipo di applicazione, Creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md), si ottiene il supporto completo dei documenti, con la serializzazione e i comandi `New`, **Apri**, **Salva** e **Salva con nome** nel menu **File**.  Vedere [Applicazioni senza documenti](#_core_applications_with_no_document).|  
|**Solo file di intestazione**|Derivata da `CView`.|Fornisce all'applicazione il livello di base del supporto per database.<br /><br /> Include Afxdb.h.  Aggiunge librerie a collegamento, ma non crea classi specifiche del database.  È possibile creare recordset in un secondo momento e utilizzarli per analizzare e aggiornare i record.|  
|**Visualizzazione database senza supporto file**|Derivata da `CRecordView`.|Supporto dei documenti ma non della serializzazione.  Il documento può memorizzare recordset e coordinare più visualizzazioni. Non supporta la serializzazione né i comandi `New`, **Apri**, **Salva** e **Salva con nome**.  Vedere [Applicazioni con documenti minimi](#_core_applications_with_minimal_documents).  Se si include una visualizzazione di database, è necessario specificare l'origine dei dati.<br /><br /> Include file di intestazione del database, DLL, una visualizzazione record e un recordset. È disponibile solo per applicazioni per le quali è stata selezionata l'opzione **Supporto architettura documento\/visualizzazione**  alla pagina [Tipo di applicazione, Creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md).|  
|**Visualizzazione database con supporto file**|Derivata da `CRecordView`.|Supporto completo dei documenti, inclusi la serializzazione e i comandi del menu **File** relativi ai documenti.  Il funzionamento delle applicazioni di database è in genere basato su record anziché su file e non richiede quindi la serializzazione.  Tuttavia, è possibile utilizzare l'applicazione in modo speciale anche per la serializzazione.  Vedere [Applicazioni con documenti minimi](#_core_applications_with_minimal_documents).  Se si include una visualizzazione di database, è necessario specificare l'origine dei dati.<br /><br /> Include file di intestazione del database, DLL, una visualizzazione record e un recordset. È disponibile solo per applicazioni per le quali è stata selezionata l'opzione **Supporto architettura documento\/visualizzazione**  alla pagina [Tipo di applicazione, Creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md).|  
  
 Per una descrizione delle alternative alla serializzazione e all'utilizzo speciale di un'applicazione per la serializzazione, vedere [Serializzazione: serializzazione e input\/output del database](../mfc/serialization-serialization-vs-database-input-output.md).  
  
##  <a name="_core_applications_with_minimal_documents"></a> Applicazioni con documenti minimi  
 La Creazione guidata applicazione MFC include due opzioni per supportare le applicazioni di accesso ai dati basate sui form.  Ogni opzione consente di creare una classe di visualizzazioni derivate da `CRecordView` e un documento.  La differenza tra le due opzioni consiste negli elementi del documento implementati.  
  
###  <a name="_core_a_document_without_file_support"></a> Documento senza supporto dei file  
 Selezionare l'opzione **Visualizzazione database senza supporto file** per il database nella creazione guidata se non è necessaria la serializzazione del documento.  Questo documento ha le caratteristiche descritte di seguito.  
  
-   È una posizione comoda in cui memorizzare un oggetto `CRecordset`.  
  
     Questo tipo di utilizzo corrisponde al concetto comune di documento, ovvero come posizione in cui memorizzare i dati o, in questo caso, un insieme di record, mentre la visualizzazione è una visualizzazione del documento.  
  
-   Se l'applicazione presenta più visualizzazioni, ad esempio visualizzazioni record multiple, un documento supporta il coordinamento delle visualizzazioni.  
  
     Se più visualizzazioni contengono gli stessi dati, è possibile utilizzare la funzione membro `CDocument::UpdateAllViews` per coordinare gli aggiornamenti in tutte le visualizzazioni quando i dati di una di esse vengono modificati.  
  
 Questa opzione viene in genere utilizzata per applicazioni semplici basate su form.   La creazione guidata supporta automaticamente una pratica struttura per tali applicazioni.  
  
###  <a name="_core_a_document_with_file_support"></a> Documento con supporto dei file  
 Selezionare l'opzione **Visualizzazione database con supporto file** per il database quando esiste un utilizzo alternativo dei comandi del menu **File** relativi ai documenti e si esegue la serializzazione dei documenti.  Per la parte del programma relativa all'accesso ai dati, è possibile utilizzare il documento come descritto in [Documento senza supporto dei file](#_core_a_document_without_file_support).  È possibile utilizzare la funzionalità di serializzazione del documento, ad esempio, per leggere e scrivere un documento di profilo utente serializzato in cui sono memorizzate le preferenze dell'utente o altre informazioni utili.  Per ulteriori informazioni, vedere [Serializzazione: serializzazione e input\/output del database](../mfc/serialization-serialization-vs-database-input-output.md).  
  
 La creazione guidata supporta questa opzione, tuttavia è necessario scrivere manualmente il codice per la serializzazione del documento.  Memorizzare le informazioni serializzate nei membri dati del documento.  
  
##  <a name="_core_applications_with_no_document"></a> Applicazioni senza documenti  
 In alcuni casi è utile scrivere un'applicazione che non utilizzi documenti né visualizzazioni.  Senza i documenti, i dati, ad esempio un oggetto `CRecordset`, vengono memorizzati nella classe della finestra cornice o dell'applicazione.  Gli eventuali requisiti aggiuntivi dipendono dal fatto che l'applicazione presenti o meno un'interfaccia utente.  
  
###  <a name="_core_database_support_with_a_user_interface"></a> Supporto di database con un'interfaccia utente  
 Se è disponibile un'interfaccia utente, ad esempio diversa da un'interfaccia della riga di comando di una console, l'applicazione opera direttamente nell'area client della finestra cornice anziché in una visualizzazione.  Questo tipo di applicazione non utilizza `CRecordView`, `CFormView` o `CDialog` per l'interfaccia utente principale, ma utilizza `CDialog` per le finestre di dialogo comuni.  
  
###  <a name="_core_writing_applications_without_documents"></a> Creazione di applicazioni senza documenti  
 Poiché la procedura guidata non supporta la creazione di applicazioni senza documenti, si deve scrivere una classe personalizzata derivata da `CWinApp` e, se necessario, deve essere inoltre creata una classe `CFrameWnd` o `CMDIFrameWnd`.  Eseguire l'override di `CWinApp::InitInstance` e dichiarare un oggetto applicazione come segue:  
  
```  
CYourNameApp theApp;  
```  
  
 Il framework fornirà comunque il meccanismo della mappa messaggi e molte altre funzionalità.  
  
###  <a name="_core_database_support_separate_from_the_user_interface"></a> Supporto di database senza interfaccia utente  
 Alcune applicazioni non richiedono un'interfaccia utente o ne utilizzano una molto ridotta.  Si supponga ad esempio di creare:  
  
-   Un oggetto di accesso ai dati intermedio chiamato da altre applicazioni client per operazioni speciali di elaborazione dei dati tra l'applicazione e l'origine dati.  
  
-   Un'applicazione che elabora i dati senza intervento dell'utente, ad esempio un'applicazione che converte i dati da un formato di database a un altro o un'applicazione che esegue calcoli e aggiornamenti in batch.  
  
 Poiché l'oggetto `CRecordset` o `CDaoRecordset` non appartiene ad alcun documento, è consigliabile memorizzarlo come membro dati incorporato nella classe di applicazione derivata da `CWinApp`.  In alternativa, è possibile operare come descritto di seguito.  
  
-   Non mantenere un oggetto `CRecordset` o `CDaoRecordset` permanente.  È possibile passare il valore **NULL** ai costruttori della classe del recordset.  In tal caso, il framework crea un oggetto `CDatabase` o `CDaoDatabase` temporaneo utilizzando le informazioni presenti nella funzione membro `GetDefaultConnect` del recordset.  Si tratta del metodo alternativo più comune.  
  
-   Rendere l'oggetto `CRecordset` o `CDaoRecordset` una variabile globale.  Tale variabile deve essere un puntatore a un oggetto recordset creato dinamicamente nell'override di `CWinApp::InitInstance`.  In questo modo si evita di creare l'oggetto prima dell'inizializzazione del framework.  
  
-   Utilizzare gli oggetti recordset come se il contesto fosse un documento o una visualizzazione.  Creare recordset nelle funzioni membro degli oggetti dell'applicazione o della finestra cornice.  
  
## Vedere anche  
 [Classi di database MFC \(ODBC e DAO\)](../data/mfc-database-classes-odbc-and-dao.md)