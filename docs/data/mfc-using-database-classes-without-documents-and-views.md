---
title: 'MFC: Utilizzo di classi di Database senza documenti e visualizzazioni | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ba2e59b53524975f87e4ad7ffe99b9a4a3cc870d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-using-database-classes-without-documents-and-views"></a>MFC: utilizzo di classi di database senza documenti e viste
Talvolta si potrebbe non si desidera utilizzare l'architettura documento/visualizzazione del framework nelle applicazioni di database. Questo argomento viene illustrato:  
  
-   [Quando non occorre usare i documenti](#_core_when_you_don.92.t_need_documents) , ad esempio la serializzazione di documenti.  
  
-   [Opzioni della procedura guidata applicazione](#_core_appwizard_options_for_documents_and_views) per supportare le applicazioni senza la serializzazione e relativi ai documenti **File** , ad esempio i comandi di menu **nuovo**, **aprire** , **Salvare**, e **Salva con nome**.  
  
-   [Utilizzo di un'applicazione che utilizza un documento minimo](#_core_applications_with_minimal_documents).  
  
-   [Creazione della struttura di un'applicazione con alcun documento o una vista](#_core_applications_with_no_document).  
  
##  <a name="_core_when_you_don.92.t_need_documents"></a> Quando non è necessario documenti  
 Alcune applicazioni hanno un concetto distinto di un documento. Queste applicazioni in genere caricano tutte o la maggior parte di un file dall'archiviazione in memoria con un **Apri File** comando. Il file aggiornato viene riscritto per l'archiviazione in una sola volta con un **salvataggio File** o **Salva con nome** comando. L'utente visualizza è un file di dati.  
  
 Alcune categorie di applicazioni, tuttavia, non richiedono un documento. Le applicazioni di database funzionano in termini di transazioni. L'applicazione consente di selezionare i record da un database e li presenta all'utente, spesso una alla volta. L'utente visualizza è in genere un singolo record corrente, che potrebbe essere l'unica in memoria.  
  
 Se l'applicazione non richiede un documento per l'archiviazione dei dati, possono essere distribuiti con alcuni o tutti dell'architettura documento/visualizzazione del framework. La parte di architettura con dipende dall'approccio scelto. È possibile:  
  
-   Utilizzare un documento minimo come un punto per archiviare una connessione all'origine dati senza implementare le funzionalità di documento normale, ad esempio la serializzazione. Ciò è utile quando si desidera più viste dei dati e si desidera sincronizzare tutte le visualizzazioni, aggiornarli in una sola volta e così via.  
  
-   Utilizzare una finestra cornice, in cui disegnare direttamente, anziché una vista. In questo caso, si omette il documento e archiviare i dati o connessioni dati nell'oggetto finestra cornice.  
  
##  <a name="_core_appwizard_options_for_documents_and_views"></a> Opzioni della procedura guidata dell'applicazione per documenti e visualizzazioni  
 La creazione guidata applicazione MFC offre diverse opzioni **supporto database**, elencate nella tabella seguente. Se si utilizza la creazione guidata applicazione MFC per creare un'applicazione, tutte queste opzioni produrranno con documenti e visualizzazioni. Alcune opzioni di forniscono i documenti e visualizzazioni che omettono le funzionalità per documenti. Per ulteriori informazioni, vedere [supporto Database, creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md).  
  
|Opzione|Visualizza|Document|  
|------------|----------|--------------|  
|**None**|Derivata da `CView`.|Non fornisce alcun supporto del database. Questa è l'opzione predefinita.<br /><br /> Se si seleziona il **Supporto architettura documento/visualizzazione** opzione il [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) , si ottiene supporto completo dei documenti, con la serializzazione e `New`,  **Aprire**, **salvare**, e **Salva con nome** comandi il **File** menu. Vedere [applicazioni senza documenti](#_core_applications_with_no_document).|  
|**Solo i file di intestazione**|Derivata da `CView`.|Fornisce il livello di base del supporto di database per l'applicazione.<br /><br /> Include AFXDB. h. Aggiunge le librerie di collegamento, ma non crea tutte le classi specifiche del database. È possibile creare set di record in un secondo momento e usarli per esaminare e aggiornare i record.|  
|**Visualizzazione database senza supporto file**|Derivato da `CRecordView`|Fornisce il supporto dei documenti, ma non per la serializzazione. Documento può memorizzare recordset e coordinare più viste. non supporta la serializzazione o la `New`, **aprire**, **salvare**, e **Salva con nome** comandi. Vedere [applicazioni con documenti minimi](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione di database, librerie di collegamento, una visualizzazione di record e un oggetto recordset. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata nel [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) pagina.)|  
|**Vista di database con supporto file**|Derivato da `CRecordView`|Fornisce supporto completo dei documenti, inclusi la serializzazione e relativi ai documenti **File** i comandi di menu. Applicazioni di database è in genere funzionano in base al record anziché in un singolo file e non richiedono la serializzazione. Tuttavia, potrebbe essere un utilizzo speciale per la serializzazione. Vedere [applicazioni con documenti minimi](#_core_applications_with_minimal_documents). Se si include una vista di database, è necessario specificare l'origine dei dati.<br /><br /> Include i file di intestazione di database, librerie di collegamento, una visualizzazione di record e un oggetto recordset. (Disponibile solo per le applicazioni con il **Supporto architettura documento/visualizzazione** opzione selezionata nel [tipo di applicazione, creazione guidata applicazione MFC](../mfc/reference/application-type-mfc-application-wizard.md) pagina.)|  
  
 Per una descrizione delle alternative alla serializzazione e all'utilizzo per la serializzazione, vedere [serializzazione: serializzazione e. Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md).  
  
##  <a name="_core_applications_with_minimal_documents"></a> Applicazioni con documenti minimi  
 La creazione guidata applicazione MFC sono disponibili due opzioni che supportano applicazioni di accesso ai dati basato su form. Ogni opzione Crea un `CRecordView`-classe di visualizzazione e un documento derivati. Differiscono negli elementi del documento implementati.  
  
###  <a name="_core_a_document_without_file_support"></a> Documento senza supporto File  
 Selezionare l'opzione di database di creazione guidata applicazione **vista Database senza supporto file** se non è necessaria la serializzazione di documenti. Il documento ha i seguenti scopi utili:  
  
-   È una posizione comoda in cui archiviare un `CRecordset` oggetto.  
  
     Questo utilizzo normale documento al concetto: il documento archivia i dati (o, in questo caso, un set di record) e la vista è una visualizzazione del documento.  
  
-   Se l'applicazione presenta più visualizzazioni (ad esempio, più visualizzazioni di record), un documento supporta il coordinamento delle visualizzazioni.  
  
     Se più visualizzazioni contengono gli stessi dati, è possibile utilizzare il `CDocument::UpdateAllViews` funzione membro per coordinare gli aggiornamenti in tutte le viste quando si modifica qualsiasi visualizzazione di dati.  
  
 È in genere possibile utilizzare questa opzione per applicazioni semplici basate su form. La creazione guidata applicazione supporta una struttura semplice per tali applicazioni automaticamente.  
  
###  <a name="_core_a_document_with_file_support"></a> Documento con supporto File  
 Selezionare l'opzione di database di creazione guidata applicazione **vista con supporto file di Database** quando si dispone di un utilizzo alternativo per il documento relativi **File** i comandi di menu e la serializzazione di documenti. Per la parte di accesso ai dati del programma, è possibile utilizzare il documento nello stesso modo come descritto in [documento senza supporto File](#_core_a_document_without_file_support). È possibile utilizzare funzionalità di serializzazione del documento, ad esempio, per leggere e scrivere un documento di profilo utente serializzato che archivia le preferenze dell'utente o altre informazioni utili. Per ulteriori informazioni, vedere [serializzazione: serializzazione e. Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md).  
  
 La creazione guidata applicazione supporta questa opzione, ma è necessario scrivere codice che serializza il documento. Archiviare le informazioni serializzate in membri dati del documento.  
  
##  <a name="_core_applications_with_no_document"></a> Applicazioni senza documenti  
 Talvolta si potrebbe scrivere un'applicazione che non vengono utilizzati documenti o viste. Senza documenti, si archiviano i dati (ad esempio un `CRecordset` oggetto) nella classe finestra cornice o dell'applicazione. Eventuali requisiti aggiuntivi dipendono se l'applicazione presenta un'interfaccia utente.  
  
###  <a name="_core_database_support_with_a_user_interface"></a> Supporto per database con un'interfaccia utente  
 Se si dispone di un'interfaccia utente (diversa, ad esempio, un'interfaccia della riga di comando di console), l'applicazione consente di disegnare direttamente nell'area client della finestra cornice invece che in una vista. Tale applicazione non utilizza `CRecordView`, `CFormView`, o `CDialog` per l'interfaccia utente principale, ma utilizza `CDialog` per le finestre di dialogo comune.  
  
###  <a name="_core_writing_applications_without_documents"></a> Scrittura di applicazioni senza documenti  
 Poiché la creazione guidata applicazione non supporta la creazione di applicazioni senza documenti, è necessario scrivere la propria `CWinApp`-classe derivata e, se necessario, creare anche un `CFrameWnd` o `CMDIFrameWnd` classe. Eseguire l'override `CWinApp::InitInstance` e dichiarare un oggetto applicazione come:  
  
```  
CYourNameApp theApp;  
```  
  
 Il framework fornisce ancora il meccanismo della mappa messaggi e molte altre funzionalità.  
  
###  <a name="_core_database_support_separate_from_the_user_interface"></a> Supporto di database senza l'interfaccia utente  
 Alcune applicazioni richiedono alcuna interfaccia utente o solo una minima. Si supponga, ad esempio, che si sta scrivendo:  
  
-   Un oggetto di accesso ai dati intermedi che chiamano altre applicazioni (client) per un'elaborazione speciale dei dati tra l'applicazione e l'origine dati.  
  
-   Un'applicazione che elabora i dati senza l'intervento dell'utente, ad esempio un'applicazione che consente di spostare i dati da un formato di database a un'altra oppure quello che esegue calcoli e gli aggiornamenti in batch.  
  
 Poiché appartiene ad alcun documento il `CRecordset` dell'oggetto, è consigliabile memorizzarlo come membro di dati incorporato nel `CWinApp`-applicazione classe derivata. Le alternative includono:  
  
-   Non mantenere permanente `CRecordset` oggetto affatto. È possibile passare **NULL** ai costruttori della classe del recordset. In tal caso, il framework crea una password temporanea `CDatabase` utilizzando le informazioni del recordset `GetDefaultConnect` funzione membro. Si tratta probabilmente alternativa.  
  
-   Effettua il `CRecordset` una variabile globale dell'oggetto. Questa variabile deve essere un puntatore a un oggetto recordset creati in modo dinamico il `CWinApp::InitInstance` eseguire l'override. Questo evita il tentativo di costruire l'oggetto prima dell'inizializzazione del framework.  
  
-   Utilizzo degli oggetti recordset, come avviene all'interno del contesto di un documento o una vista. Creare set di record nel membro funzioni dell'applicazione o gli oggetti della finestra cornice.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di database MFC](../data/mfc-database-classes-odbc-and-dao.md)