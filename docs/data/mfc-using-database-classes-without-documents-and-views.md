---
title: 'MFC: utilizzo di classi di database senza documenti e viste'
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC applications [C++], without views
- documents [C++], applications without
- ODBC applications [C++]
- document/view architecture [C++], in databases
- files [C++], MFC
- database classes [C++], MFC
- CRecordView class, using in database applications
- database applications [C++], without views
- database applications [C++], application wizard options
- application wizards [C++], creating database applications
- ODBC [C++], file support in database applications
- ODBC applications [C++], without documents
- database applications [C++], without documents
- user interface [C++], drawing information
ms.assetid: 15bf52d4-91cf-4b1d-8b37-87c3ae70123a
ms.openlocfilehash: 57a7abd89bc9bfb465912a35c21f9780668f4466
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213356"
---
# <a name="mfc-using-database-classes-without-documents-and-views"></a>MFC: utilizzo di classi di database senza documenti e viste

In alcuni casi è possibile che non si desideri utilizzare l'architettura documento/visualizzazione del Framework nelle applicazioni di database. In questo argomento:

- [Quando non è necessario utilizzare documenti](#_core_when_you_don.92.t_need_documents) come la serializzazione di documenti.

- [Opzioni della creazione guidata applicazione](#_core_appwizard_options_for_documents_and_views) per supportare le applicazioni senza serializzazione e senza comandi di menu **file** correlati al documento, ad esempio **nuovo**, **Apri**, **Salva**e **Salva con nome**.

- [Come usare un'applicazione che usa un documento minimo](#_core_applications_with_minimal_documents).

- [Come strutturare un'applicazione senza documenti o viste](#_core_applications_with_no_document).

##  <a name="when-you-do-not-need-documents"></a><a name="_core_when_you_don.92.t_need_documents"></a>Quando non sono necessari documenti

Alcune applicazioni hanno un concetto distinto di un documento. Queste applicazioni in genere caricano tutti o la maggior parte di un file dalla risorsa di archiviazione in memoria con un comando **Apri file** . Scrivono il file aggiornato nello spazio di archiviazione in una sola volta con un comando Salva con nome **file** o **Salva con nome** . Ciò che l'utente vede è un file di dati.

Alcune categorie di applicazioni, tuttavia, non richiedono un documento. Le applicazioni di database operano in termini di transazioni. L'applicazione seleziona i record da un database e li presenta all'utente, spesso uno alla volta. Ciò che l'utente vede è in genere un singolo record corrente, che potrebbe essere l'unico in memoria.

Se l'applicazione non richiede un documento per l'archiviazione dei dati, è possibile utilizzare alcune o tutte le architetture documento/visualizzazione del Framework. Il modo in cui si dispensa dipende dall'approccio preferito. È possibile:

- Usare un documento minimo come posizione in cui archiviare una connessione all'origine dati, ma con funzionalità di documento normali come la serializzazione. Questa operazione è utile quando si desiderano diverse visualizzazioni dei dati e si desidera sincronizzare tutte le visualizzazioni, aggiornarle tutte in una sola volta e così via.

- Utilizzare una finestra cornice, nella quale è possibile creare direttamente, anziché utilizzare una visualizzazione. In questo caso, si omette il documento e si archiviano dati o connessioni dati nell'oggetto finestra cornice.

##  <a name="application-wizard-options-for-documents-and-views"></a><a name="_core_appwizard_options_for_documents_and_views"></a>Opzioni della creazione guidata applicazione per documenti e visualizzazioni

Nella creazione guidata applicazione MFC sono disponibili diverse opzioni in **Seleziona supporto database**, elencate nella tabella seguente. Se si utilizza la creazione guidata applicazione MFC per creare un'applicazione, tutte queste opzioni generano applicazioni con documenti e visualizzazioni. Alcune opzioni forniscono documenti e visualizzazioni che ometteno la funzionalità del documento non necessaria. Per ulteriori informazioni, vedere [supporto per database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).

|Opzione|Visualizza|Document|
|------------|----------|--------------|
|**Nessuno**|Derivata da `CView`.|Non fornisce supporto per i database. Questa è l'opzione predefinita.<br /><br /> Se si seleziona l'opzione **supporto architettura documento/visualizzazione** nella pagina [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) , è possibile ottenere supporto completo dei documenti, inclusi i comandi di serializzazione e **nuovo**, **Apri**, **Salva**e **Salva con nome** nel menu **file** . Vedere [applicazioni senza documenti](#_core_applications_with_no_document).|
|**Solo file di intestazione**|Derivata da `CView`.|Fornisce il livello di base del supporto del database per l'applicazione.<br /><br /> Include AFXDB. h. Aggiunge librerie di collegamento, ma non crea classi specifiche del database. È possibile creare recordset in un secondo momento e utilizzarli per esaminare e aggiornare i record.|
|**Visualizzazione database senza supporto file**|Derivato da `CRecordView`|Fornisce supporto per i documenti ma senza supporto per la serializzazione. Il documento può archiviare recordset e coordinare più viste; non supporta la serializzazione o i comandi **nuovi**, **Apri**, **Salva**e **Salva con nome** . Vedere [applicazioni con documenti minimi](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione del database, le librerie di collegamento, una visualizzazione di record e un recordset. Disponibile solo per le applicazioni con l'opzione di **supporto architettura documento/visualizzazione** selezionata nella pagina [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) .|
|**Visualizzazione database con supporto file**|Derivato da `CRecordView`|Fornisce supporto completo per i documenti, inclusi la serializzazione e i comandi di menu **file** correlati ai documenti. Le applicazioni di database in genere operano in base ai singoli record anziché ai singoli file e pertanto non necessitano di serializzazione. Tuttavia, è possibile che si disponga di un uso speciale per la serializzazione. Vedere [applicazioni con documenti minimi](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione del database, le librerie di collegamento, una visualizzazione di record e un recordset. Disponibile solo per le applicazioni con l'opzione di **supporto architettura documento/visualizzazione** selezionata nella pagina [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) .|

Per informazioni sulle alternative alla serializzazione e sugli usi alternativi per la serializzazione, vedere [serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

##  <a name="applications-with-minimal-documents"></a><a name="_core_applications_with_minimal_documents"></a>Applicazioni con documenti minimi

La creazione guidata applicazione MFC offre due opzioni che supportano le applicazioni di accesso ai dati basate su form. Ogni opzione Crea una classe di visualizzazione derivata da `CRecordView`e un documento. Si differenziano per gli elementi che lasciano fuori dal documento.

###  <a name="document-without-file-support"></a><a name="_core_a_document_without_file_support"></a>Documento senza supporto file

Se non è necessaria la serializzazione dei documenti, selezionare l'opzione di database visualizzazione del database per la creazione guidata applicazione **senza supporto file** . Il documento è utile per gli scopi seguenti:

- Si tratta di una posizione comoda per archiviare un oggetto `CRecordset`.

   Questo utilizzo è paragonabile ai concetti comuni del documento: il documento archivia i dati (o, in questo caso, un set di record) e la vista è una visualizzazione del documento.

- Se l'applicazione presenta più visualizzazioni, ad esempio più visualizzazioni di record, un documento supporta il coordinamento delle viste.

   Se più visualizzazioni mostrano gli stessi dati, è possibile utilizzare la funzione membro `CDocument::UpdateAllViews` per coordinare gli aggiornamenti a tutte le visualizzazioni quando una visualizzazione modifica i dati.

Questa opzione viene in genere utilizzata per semplici applicazioni basate su form. La creazione guidata applicazione supporta automaticamente una struttura comoda per tali applicazioni.

###  <a name="document-with-file-support"></a><a name="_core_a_document_with_file_support"></a>Documento con supporto file

Selezionare l'opzione database della creazione guidata applicazione **visualizzazione database con supporto file** quando si utilizza alternativamente per i comandi di menu **file** correlati al documento e la serializzazione dei documenti. Per la parte di accesso ai dati del programma, è possibile usare il documento nello stesso modo descritto in [documento senza supporto](#_core_a_document_without_file_support)per i file. È possibile utilizzare la funzionalità di serializzazione del documento, ad esempio, per leggere e scrivere un documento di profilo utente serializzato che archivia le preferenze dell'utente o altre informazioni utili. Per altre idee, vedere [serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

La creazione guidata applicazione supporta questa opzione, ma è necessario scrivere il codice che serializza il documento. Archiviare le informazioni serializzate nei membri dati del documento.

##  <a name="applications-with-no-document"></a><a name="_core_applications_with_no_document"></a>Applicazioni senza documenti

A volte potrebbe essere necessario scrivere un'applicazione che non utilizzi documenti o visualizzazioni. Senza documenti, è possibile archiviare i dati, ad esempio un oggetto `CRecordset`, nella classe della finestra cornice o nella classe dell'applicazione. Eventuali requisiti aggiuntivi variano a seconda che l'applicazione presenti un'interfaccia utente.

###  <a name="database-support-with-a-user-interface"></a><a name="_core_database_support_with_a_user_interface"></a>Supporto di database con un'interfaccia utente

Se si dispone di un'interfaccia utente, ad esempio un'interfaccia della riga di comando della console, l'applicazione viene disegnata direttamente nell'area client della finestra cornice anziché in una visualizzazione. Tale applicazione non utilizza `CRecordView`, `CFormView`o `CDialog` per l'interfaccia utente principale, ma in genere utilizza `CDialog` per le finestre di dialogo comuni.

###  <a name="writing-applications-without-documents"></a><a name="_core_writing_applications_without_documents"></a>Scrittura di applicazioni senza documenti

Poiché la creazione guidata applicazione non supporta la creazione di applicazioni senza documenti, è necessario scrivere una classe derivata da `CWinApp`e, se necessario, creare anche una classe `CFrameWnd` o `CMDIFrameWnd`. Eseguire l'override `CWinApp::InitInstance` e dichiarare un oggetto applicazione come:

```cpp
CYourNameApp theApp;
```

Il Framework fornisce ancora il meccanismo di mappa dei messaggi e molte altre funzionalità.

###  <a name="database-support-separate-from-the-user-interface"></a><a name="_core_database_support_separate_from_the_user_interface"></a>Supporto del database separato dall'interfaccia utente

Per alcune applicazioni non è necessaria alcuna interfaccia utente o solo una minima. Si supponga, ad esempio, di scrivere:

- Un oggetto di accesso ai dati intermedio che altre applicazioni (client) chiamano per un'elaborazione speciale dei dati tra l'applicazione e l'origine dati.

- Applicazione che elabora i dati senza l'intervento dell'utente, ad esempio un'applicazione che sposta i dati da un formato di database a un altro o che esegue calcoli ed esegue aggiornamenti batch.

Poiché nessun documento è proprietario dell'oggetto `CRecordset`, probabilmente si vuole archiviarlo come membro dati incorporato nella classe dell'applicazione derivata da `CWinApp`. Le alternative includono:

- Non mantenere un oggetto `CRecordset` permanente. È possibile passare NULL ai costruttori della classe recordset. In tal caso, il Framework crea un oggetto `CDatabase` temporaneo usando le informazioni contenute nella funzione membro `GetDefaultConnect` del recordset. Questo è l'approccio alternativo più probabile.

- Rendere l'oggetto `CRecordset` una variabile globale. Questa variabile deve essere un puntatore a un oggetto recordset creato dinamicamente nell'override del `CWinApp::InitInstance`. In questo modo si evita di provare a costruire l'oggetto prima dell'inizializzazione del Framework.

- Utilizzo di oggetti recordset come nel contesto di un documento o di una vista. Creare recordset nelle funzioni membro dell'applicazione o degli oggetti finestra cornice.

## <a name="see-also"></a>Vedere anche

[Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)
