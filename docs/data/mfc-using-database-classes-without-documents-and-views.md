---
title: 'MFC: Utilizzo di classi di Database senza documenti e visualizzazioni'
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
ms.openlocfilehash: ab9946609fa20c4644873a684a754cbc8a41742f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396015"
---
# <a name="mfc-using-database-classes-without-documents-and-views"></a>MFC: Utilizzo di classi di Database senza documenti e visualizzazioni

In alcuni casi è possibile evitare di utilizzare l'architettura documento/visualizzazione del framework nelle applicazioni di database. Questo argomento viene illustrato:

- [Quando non è necessario usare documenti](#_core_when_you_don.92.t_need_documents) , ad esempio la serializzazione di documenti.

- [Opzioni di creazione guidata applicazione](#_core_appwizard_options_for_documents_and_views) per supportare le applicazioni senza la serializzazione e relative al documento **File** , ad esempio i comandi di menu **New**, **Open** , **Salvare**, e **Salva con nome**.

- [Come lavorare con un'applicazione che usa un documento minimo](#_core_applications_with_minimal_documents).

- [Creazione della struttura di un'applicazione con alcun documento o una vista](#_core_applications_with_no_document).

##  <a name="_core_when_you_don.92.t_need_documents"></a> Quando non è necessario documenti

Alcune applicazioni hanno un concetto distinto di un documento. Queste applicazioni in genere caricare tutti o la maggior parte di un file dall'archiviazione in memoria con un **Apri File** comando. Il file aggiornato viene riscritto in un archivio in una sola volta con un **salvataggio File** oppure **Salva con nome** comando. Ciò che l'utente vede è un file di dati.

Alcune categorie di applicazioni, tuttavia, non richiedono un documento. Le applicazioni del database operano in termini di transazioni. L'applicazione consente di selezionare i record da un database e li presenta all'utente, spesso una alla volta. Ciò che l'utente vede è in genere un singolo record corrente, che potrebbe essere l'unica in memoria.

Se l'applicazione non richiede un documento per l'archiviazione dei dati, possono essere distribuiti con alcuni o tutti dell'architettura documento/visualizzazione del framework. Come parte di architettura utilizzata varia a seconda dell'approccio che si preferisce. È possibile:

- Usare un documento minimo come un'unica posizione per archiviare una connessione all'origine dati senza implementare le funzionalità di documento normale, ad esempio la serializzazione. Ciò è utile quando si desidera che visualizzazioni diverse dei dati e si vogliono sincronizzare tutte le visualizzazioni, aggiornarle tutte contemporaneamente e così via.

- Usare una finestra cornice, in cui disegnare direttamente, anziché utilizzare una vista. In questo caso, si omette il documento e archiviare i dati o le connessioni dati nell'oggetto finestra cornice.

##  <a name="_core_appwizard_options_for_documents_and_views"></a> Opzioni della procedura guidata dell'applicazione per documenti e visualizzazioni

La creazione guidata applicazione MFC offre diverse opzioni **seleziona il supporto per database**, elencate nella tabella riportata di seguito. Se si usa la creazione guidata applicazione MFC per creare un'applicazione, tutte queste opzioni produrranno applicazioni con documenti e visualizzazioni. Alcune opzioni di forniscono documenti e visualizzazioni che omettono le funzionalità per documenti. Per altre informazioni, vedere [supporto di Database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).

|Opzione|Visualizza|Document|
|------------|----------|--------------|
|**None**|Derivata da `CView`.|Non offre alcun supporto del database. Questa è l'opzione predefinita.<br /><br /> Se si seleziona il **supporto per l'architettura documento/visualizzazione** opzione il [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) , si ottiene supporto documento completo, con la serializzazione e **New** , **Aperta**, **salvare**, e **Salva con nome** comandi la **File** menu. Visualizzare [le applicazioni con alcun documento](#_core_applications_with_no_document).|
|**Solo i file di intestazione**|Derivata da `CView`.|Fornisce il livello di base del supporto di database per l'applicazione.<br /><br /> Include AFXDB. h. Aggiunge le librerie di collegamento, ma non crea tutte le classi specifiche del database. È possibile creare set di record in un secondo momento e usarli per esaminare e aggiornare i record.|
|**Visualizzazione database senza supporto file**|Derivato da `CRecordView`|Fornisce il supporto dei documenti, ma non per la serializzazione. Documento può archiviare recordset e coordinare più viste. non supporta la serializzazione o la **New**, **Open**, **Salva**, e **Salva con nome** comandi. Visualizzare [le applicazioni con i documenti minimo](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione di database, le librerie di collegamento, una visualizzazione di record e un set di record. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata sulle [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) pagina.)|
|**Vista di database con supporto file**|Derivato da `CRecordView`|Fornisce supporto per il documento completo, incluso la serializzazione e relative al documento **File** i comandi di menu. Le applicazioni di database è in genere funzionano in base al record anziché su un file per ogni singolo e pertanto non è necessaria la serializzazione. Tuttavia, potrebbe essere un utilizzo speciale per la serializzazione. Visualizzare [le applicazioni con i documenti minimo](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione di database, le librerie di collegamento, una visualizzazione di record e un set di record. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata sulle [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) pagina.)|

Per una discussione di alternative alla serializzazione e all'utilizzo per la serializzazione, vedere [serializzazione: Serializzazione e Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md).

##  <a name="_core_applications_with_minimal_documents"></a> Applicazioni con i documenti minimo

La creazione guidata applicazione MFC sono disponibili due opzioni che supportano applicazioni di accesso ai dati basato su form. Ogni opzione Crea un `CRecordView`-derivata a classe di visualizzazione e un documento. Differiscono in ciò che gli utenti lasciano all'esterno del documento.

###  <a name="_core_a_document_without_file_support"></a> Documento senza supporto File

Selezionare l'opzione di database di creazione guidata applicazione **vista senza supporto per file di Database** se non è necessaria la serializzazione di documenti. Il documento ha i seguenti scopi utili:

- È un modo pratico per archiviare un `CRecordset` oggetto.

   Questo tipo di utilizzo al concetto documento normale: il documento archivia i dati (o, in questo caso, un set di record) e la visualizzazione è una visualizzazione del documento.

- Se l'applicazione presenta più visualizzazioni (ad esempio, più visualizzazioni di record), un documento supporta il coordinamento delle visualizzazioni.

   Se più visualizzazioni contengono gli stessi dati, è possibile usare il `CDocument::UpdateAllViews` funzione membro per coordinare gli aggiornamenti a tutte le viste quando qualsiasi visualizzazione di modifica dei dati.

È in genere utilizzare questa opzione per applicazioni semplici basati su form. La creazione guidata applicazione supporta una pratica struttura per tali applicazioni automaticamente.

###  <a name="_core_a_document_with_file_support"></a> Documento con il supporto di File

Selezionare l'opzione di database di creazione guidata applicazione **vista con supporto per file di Database** quando si dispone di un utilizzo alternativo per il documento correlato **File** comandi di menu e la serializzazione di documenti. Per la parte di accesso ai dati del programma, è possibile usare il documento nello stesso modo come descritto in [documento senza supporto File](#_core_a_document_without_file_support). È possibile usare funzionalità di serializzazione del documento, ad esempio, per leggere e scrivere un documento del profilo utente serializzato che archivia le preferenze dell'utente o altre informazioni utili. Per altre informazioni, vedere [serializzazione: Serializzazione e Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md).

La creazione guidata applicazione supporta questa opzione, ma è necessario scrivere il codice che serializza il documento. Store le informazioni serializzate in membri dati del documento.

##  <a name="_core_applications_with_no_document"></a> Applicazioni con alcun documento

A volte è possibile scrivere un'applicazione che non utilizza documenti né visualizzazioni. Senza documenti, si archiviano i dati (ad esempio un `CRecordset` oggetto) nella classe della finestra cornice o classe dell'applicazione. Eventuali requisiti aggiuntivi dipendono dal fatto che l'applicazione presenta un'interfaccia utente.

###  <a name="_core_database_support_with_a_user_interface"></a> Supporto per database con un'interfaccia utente

Se si dispone di un'interfaccia utente (diversa, ad esempio, un'interfaccia della riga di comando di console), l'applicazione consente di disegnare direttamente nell'area client della finestra cornice invece che in una vista. Tale applicazione non usa `CRecordView`, `CFormView`, o `CDialog` per l'interfaccia utente principale, ma viene in genere Usa `CDialog` per le finestre di dialogo comune.

###  <a name="_core_writing_applications_without_documents"></a> Scrittura di applicazioni senza documenti

Poiché la procedura guidata dell'applicazione non supporta la creazione di applicazioni senza documenti, è necessario scrivere il proprio `CWinApp`-classe derivata e, se necessario, creare anche un `CFrameWnd` o `CMDIFrameWnd` classe. Eseguire l'override `CWinApp::InitInstance` e dichiarare un oggetto applicazione come:

```cpp
CYourNameApp theApp;
```

Il framework fornisce comunque il meccanismo della mappa messaggi e molte altre funzionalità.

###  <a name="_core_database_support_separate_from_the_user_interface"></a> Supporto di database senza l'interfaccia utente

Alcune applicazioni richiedono solo una minima o senza interfaccia utente. Si supponga, ad esempio, che si sta scrivendo:

- Un oggetto di accesso ai dati intermedio che altre applicazioni (client) richiedono un'elaborazione speciale dei dati tra l'applicazione e l'origine dati.

- Un'applicazione che elabora i dati senza l'intervento dell'utente, ad esempio un'applicazione che sposta i dati da un formato di database a un altro o a quello che esegue calcoli e gli aggiornamenti in batch.

Perché non appartiene ad alcun documento la `CRecordset` dell'oggetto, è consigliabile archiviarla come un membro di dati incorporati nel `CWinApp`-applicazione classe derivata. Le alternative includono:

- Non mantenere permanente `CRecordset` affatto dell'oggetto. È possibile passare NULL per i costruttori della classe recordset. In tal caso, il framework crea una variabile temporanea `CDatabase` utilizzando le informazioni del recordset `GetDefaultConnect` funzione membro. Questo è l'approccio alternativo più probabile.

- Effettua il `CRecordset` una variabile globale dell'oggetto. Questa variabile deve essere un puntatore a un oggetto recordset che è necessario creare in modo dinamico nel `CWinApp::InitInstance` eseguire l'override. Questo evita il tentativo di costruire l'oggetto prima dell'inizializzazione del framework.

- Utilizzo degli oggetti recordset come si farebbe nel contesto di un documento o una vista. Creare set di record nel membro funzioni dell'applicazione o gli oggetti della finestra cornice.

## <a name="see-also"></a>Vedere anche

[Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)