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
ms.openlocfilehash: c914a449b73e7da876d2e05b894c016b53881c3b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360666"
---
# <a name="mfc-using-database-classes-without-documents-and-views"></a>MFC: utilizzo di classi di database senza documenti e viste

In alcuni stati potrebbe non voler usare l'architettura documento/visualizzazione del framework nelle applicazioni di database. In questo argomento:

- [Quando non è necessario utilizzare documenti](#_core_when_you_don.92.t_need_documents) come la serializzazione dei documenti.

- [Opzioni della Creazione guidata applicazione](#_core_appwizard_options_for_documents_and_views) per supportare le applicazioni senza serializzazione e senza comandi di menu **File** correlati al documento, ad esempio **Nuovo**, **Apri**, **Salva**e Salva **con nome**.

- [Come utilizzare un'applicazione che utilizza un documento minimo.](#_core_applications_with_minimal_documents)

- [Come strutturare un'applicazione senza documento o visualizzazione](#_core_applications_with_no_document).

## <a name="when-you-do-not-need-documents"></a><a name="_core_when_you_don.92.t_need_documents"></a>Quando non hai bisogno di documenti

Alcune applicazioni hanno un concetto distinto di documento. Queste applicazioni in genere caricano tutto o la maggior parte di un file dall'archiviazione in memoria con un comando **Apri file.** Scrivono il file aggiornato nell'archivio tutto in una volta con un **comando Salva file** o Salva con **nome.** Ciò che l'utente vede è un file di dati.

Alcune categorie di applicazioni, tuttavia, non richiedono un documento. Le applicazioni di database operano in termini di transazioni. L'applicazione seleziona i record da un database e li presenta all'utente, spesso uno alla volta. Ciò che l'utente vede è di solito un singolo record corrente, che potrebbe essere l'unico in memoria.

Se l'applicazione non richiede un documento per l'archiviazione dei dati, è possibile fare a meno di una parte o di tutta l'architettura documento/visualizzazione del framework. Quanto si dispensa a dipende dall'approccio che si preferisce. È possibile:

- Usare un documento minimo come posizione per archiviare una connessione all'origine dati, ma fare a meno delle normali funzionalità del documento, ad esempio la serializzazione. Ciò è utile quando si desidera che diverse visualizzazioni dei dati e si desidera sincronizzare tutte le viste, aggiornandole tutte contemporaneamente e così via.

- Utilizzare una finestra cornice, in cui disegnare direttamente, anziché utilizzare una visualizzazione. In questo caso, si omettere il documento e archiviare i dati o le connessioni dati nell'oggetto finestra cornice.

## <a name="application-wizard-options-for-documents-and-views"></a><a name="_core_appwizard_options_for_documents_and_views"></a>Opzioni della Creazione guidata applicazione per documenti e visualizzazioni

Nella Creazione guidata applicazione MFC sono disponibili diverse opzioni in **Seleziona supporto database,** elencate nella tabella seguente. Se si utilizza la Creazione guidata applicazione MFC per creare un'applicazione, tutte queste opzioni producono applicazioni con documenti e visualizzazioni. Alcune opzioni forniscono documenti e visualizzazioni che obiettano le funzionalità dei documenti non necessari. Per ulteriori informazioni, vedere [Supporto di database, Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).

|Opzione|Visualizzazione|Document|
|------------|----------|--------------|
|**Nessuno**|Derivata da `CView`.|Non fornisce alcun supporto per il database. Questa è l'opzione predefinita.<br /><br /> Se si seleziona l'opzione **Supporto architettura documento/visualizzazione** nella pagina [Tipo di applicazione, Creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) , si otterrà il supporto completo del documento, tra cui la serializzazione e i comandi **Nuovo**, **Apri**, **Salva**e Salva **con nome** del menu **File** . Consultate [Applicazioni senza documenti.](#_core_applications_with_no_document)|
|**Solo file di intestazione**|Derivata da `CView`.|Fornisce il livello di base del supporto del database per l'applicazione.<br /><br /> Include Afxdb.h. Aggiunge librerie di collegamenti, ma non crea classi specifiche del database. È possibile creare recordset in un secondo momento e utilizzarli per esaminare e aggiornare i record.|
|**Vista database senza supporto file**|Derivato da`CRecordView`|Fornisce supporto per i documenti, ma non supporta la serializzazione. Document può memorizzare recordset e coordinare più viste; non supporta la serializzazione o i comandi **Nuovo**, **Apri**, **Salva**e Salva **con nome** . Consultate [Applicazioni con documenti minimi.](#_core_applications_with_minimal_documents) Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include file di intestazione del database, librerie di collegamenti, una visualizzazione di record e un recordset. (Disponibile solo per le applicazioni con l'opzione **Supporto architettura documento/visualizzazione** selezionata nella pagina [Tipo di applicazione, Creazione guidata applicazione MFC.)](../mfc/reference/application-type-mfc-application-wizard.md)|
|**Vista database con supporto file**|Derivato da`CRecordView`|Fornisce il supporto completo per i documenti, inclusi la serializzazione e i comandi del menu **File** relativi ai documenti. Le applicazioni di database in genere operano in base al record anziché in base al file e pertanto non richiedono la serializzazione. Tuttavia, potrebbe essere un uso speciale per la serializzazione. Consultate [Applicazioni con documenti minimi.](#_core_applications_with_minimal_documents) Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include file di intestazione del database, librerie di collegamenti, una visualizzazione di record e un recordset. (Disponibile solo per le applicazioni con l'opzione **Supporto architettura documento/visualizzazione** selezionata nella pagina [Tipo di applicazione, Creazione guidata applicazione MFC.)](../mfc/reference/application-type-mfc-application-wizard.md)|

Per una descrizione delle alternative alla serializzazione e degli utilizzi alternativi per la serializzazione, vedere [Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

## <a name="applications-with-minimal-documents"></a><a name="_core_applications_with_minimal_documents"></a>Applicazioni con documenti minimi

Nella Creazione guidata applicazione MFC sono disponibili due opzioni che supportano le applicazioni di accesso ai dati basate su form. Ogni opzione `CRecordView`crea una classe di visualizzazione derivata e un documento. Si differenziano per ciò che lasciano fuori dal documento.

### <a name="document-without-file-support"></a><a name="_core_a_document_without_file_support"></a>Documento senza supporto file

Selezionare l'opzione di database Creazione guidata applicazione **Vista database senza supporto file** se non è necessaria la serializzazione dei documenti. Il documento serve ai seguenti scopi utili:

- È un luogo conveniente `CRecordset` per memorizzare un oggetto.

   Questo utilizzo è parallelo ai concetti comuni del documento: il documento archivia i dati (o, in questo caso, un set di record) e la visualizzazione è una visualizzazione del documento.

- Se l'applicazione presenta più visualizzazioni( ad esempio più visualizzazioni di record), un documento supporta il coordinamento delle visualizzazioni.

   Se più visualizzazioni mostrano gli `CDocument::UpdateAllViews` stessi dati, è possibile utilizzare la funzione membro per coordinare gli aggiornamenti a tutte le visualizzazioni quando una vista modifica i dati.

Questa opzione viene in genere utilizzata per semplici applicazioni basate su form. La creazione guidata applicazione supporta automaticamente una struttura conveniente per tali applicazioni.

### <a name="document-with-file-support"></a><a name="_core_a_document_with_file_support"></a>Documento con supporto per i file

Selezionare l'opzione di database della creazione guidata applicazione **Visualizzazione database con supporto file** quando si dispone di un utilizzo alternativo per i comandi del menu **File** correlati al documento e la serializzazione dei documenti. Per la parte relativa all'accesso ai dati del programma, è possibile utilizzare il documento nello stesso modo descritto in [Documento senza supporto file](#_core_a_document_without_file_support). È possibile utilizzare la funzionalità di serializzazione del documento, ad esempio, per leggere e scrivere un documento del profilo utente serializzato che archivia le preferenze dell'utente o altre informazioni utili. Per altre idee, vedere [Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md).

La creazione guidata applicazione supporta questa opzione, ma è necessario scrivere il codice che serializza il documento. Archiviare le informazioni serializzate nei membri dati del documento.

## <a name="applications-with-no-document"></a><a name="_core_applications_with_no_document"></a>Applicazioni senza documenti

Talvolta potrebbe essere necessario scrivere un'applicazione che non utilizza documenti o visualizzazioni. Senza documenti, i dati vengono `CRecordset` archiviati, ad esempio un oggetto, nella classe della finestra cornice o nella classe dell'applicazione. Eventuali requisiti aggiuntivi dipendono dal fatto che l'applicazione presenti o meno un'interfaccia utente.

### <a name="database-support-with-a-user-interface"></a><a name="_core_database_support_with_a_user_interface"></a>Supporto del database con un'interfaccia utente

Se si dispone di un'interfaccia utente (diversa, ad esempio, un'interfaccia della riga di comando della console), l'applicazione disegna direttamente nell'area client della finestra cornice anziché in una visualizzazione. Tale applicazione non `CRecordView`utilizza `CFormView`, `CDialog` , o per la sua `CDialog` interfaccia utente principale, ma normalmente viene utilizzata per le normali finestre di dialogo.

### <a name="writing-applications-without-documents"></a><a name="_core_writing_applications_without_documents"></a>Scrittura di applicazioni senza documenti

Poiché la creazione guidata applicazione non supporta la `CWinApp`creazione di applicazioni senza documenti, `CFrameWnd` è `CMDIFrameWnd` necessario scrivere una classe derivata personalizzata e, se necessario, creare anche una classe o . Eseguire `CWinApp::InitInstance` l'override e dichiarare un oggetto applicazione come:Override and declare an application object as:

```cpp
CYourNameApp theApp;
```

Il framework fornisce ancora il meccanismo della mappa messaggi e molte altre funzionalità.

### <a name="database-support-separate-from-the-user-interface"></a><a name="_core_database_support_separate_from_the_user_interface"></a>Supporto di database separato dall'interfaccia utente

Alcune applicazioni non necessitano di interfaccia utente o solo di una minima applicazione. Si supponga, ad esempio, di scrivere:

- Oggetto di accesso ai dati intermedio che altre applicazioni (client) richiedono un'elaborazione speciale dei dati tra l'applicazione e l'origine dati.

- Un'applicazione che elabora i dati senza l'intervento dell'utente, ad esempio un'applicazione che sposta i dati da un formato di database a un altro o uno che esegue calcoli ed esegue aggiornamenti batch.

Poiché nessun documento `CRecordset` è proprietario dell'oggetto, è probabile che `CWinApp`si desideri archiviarlo come membro dati incorporato nella classe dell'applicazione derivata. Le alternative includono:

- Non tenere `CRecordset` un oggetto permanente a tutti. È possibile passare NULL ai costruttori della classe recordset. In tal caso, il `CDatabase` framework crea un oggetto temporaneo `GetDefaultConnect` utilizzando le informazioni nella funzione membro del recordset. Questo è l'approccio alternativo più probabile.

- Rendere `CRecordset` l'oggetto una variabile globale. Questa variabile deve essere un puntatore a un `CWinApp::InitInstance` oggetto recordset creato in modo dinamico nell'override. In questo modo si evita di tentare di costruire l'oggetto prima dell'inizializzazione del framework.

- Utilizzo di oggetti recordset come nel contesto di un documento o di una visualizzazione. Creare recordset nelle funzioni membro dell'applicazione o degli oggetti finestra cornice.

## <a name="see-also"></a>Vedere anche

[Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)
