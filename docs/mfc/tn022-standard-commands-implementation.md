---
title: 'TN022: Implementazione di comandi Standard | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.commands
dev_langs: C++
helpviewer_keywords:
- ID_PREV_PANE command [MFC]
- ID_APP_EXIT command [MFC]
- ID_NEXT_PANE command [MFC]
- ID_INDICATOR_REC command [MFC]
- ID_WINDOW_SPLIT command [MFC]
- ID_FILE_PRINT_PREVIEW command [MFC]
- ID_WINDOW_CASCADE command [MFC]
- ID_FILE_CLOSE command [MFC]
- ID_FILE_SAVE_COPY_AS command [MFC]
- ID_WINDOW_ARRANGE command [MFC]
- ID_EDIT_FIND command [MFC]
- ID_FILE_OPEN command [MFC]
- ID_FILE_PAGE_SETUP command [MFC]
- ID_OLE_VERB_FIRST command [MFC]
- ID_EDIT_UNDO command [MFC]
- ID_EDIT_CLEAR command [MFC]
- ID_INDICATOR_CAPS command [MFC]
- ID_HELP_INDEX command [MFC]
- commands [MFC], standard
- ID_FILE_PRINT_SETUP command [MFC]
- ID_DEFAULT_HELP command [MFC]
- ID_INDICATOR_SCRL command [MFC]
- ID_FILE_PRINT command [MFC]
- ID_INDICATOR_OVR command [MFC]
- ID_INDICATOR_KANA command [MFC]
- ID_EDIT_COPY command [MFC]
- ID_EDIT_REDO command [MFC]
- ID_EDIT_PASTE command [MFC]
- ID_OLE_INSERT_NEW command [MFC]
- ID_OLE_EDIT_LINKS command [MFC]
- ID_EDIT_PASTE_SPECIAL command [MFC]
- ID_INDICATOR_EXT command [MFC]
- ID_HELP_USING command [MFC]
- standard commands
- ID_VIEW_STATUS_BAR command [MFC]
- ID_FILE_SAVE_AS command [MFC]
- ID_EDIT_CLEAR_ALL command [MFC]
- ID_WINDOW_NEW command [MFC]
- ID_CONTEXT_HELP command [MFC]
- ID_EDIT_REPLACE command [MFC]
- ID_WINDOW_TILE_HORZ command [MFC]
- ID_APP_ABOUT command [MFC]
- TN022
- ID_VIEW_TOOLBAR command [MFC]
- ID_HELP command [MFC]
- ID_WINDOW_TILE_VERT command [MFC]
- ID_EDIT_CUT command [MFC]
- ID_FILE_UPDATE command [MFC]
- ID_EDIT_REPEAT command [MFC]
- ID_FILE_SAVE command [MFC]
- ID_EDIT_PASTE_LINK command [MFC]
- ID_EDIT_SELECT_ALL command [MFC]
- ID_FILE_NEW command [MFC]
- ID_INDICATOR_NUM command
ms.assetid: a7883b46-23f7-4870-ac3a-804aed9258b5
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 05e5e927ebfcb1584913d6415349c473bde4463c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn022-standard-commands-implementation"></a>TN022: implementazione di comandi standard
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive le implementazioni di comando standard disponibili in MFC 2.0. Lettura [21 Nota tecnica](../mfc/tn021-command-and-message-routing.md) prima perché descrive i meccanismi utilizzati per implementare molti dei comandi standard.  
  
 Questa descrizione presume la conoscenza delle architetture MFC, le API e pratica di programmazione comune. Documentato come non documentate "implementazione solo" API sono descritte. Questo non è un strumento per apprendere le funzionalità di o la programmazione in MFC. Per ulteriori informazioni generali e per informazioni dettagliate sulle API documentate, fare riferimento a Visual C++.  
  
## <a name="the-problem"></a>Il problema  
 MFC definisce molti ID di comando standard nel file di intestazione AFXRES. H. Il supporto per questi comandi Framework varia. Comprendere dove e come le classi framework gestiscono questi comandi non solo sarà visibile come framework funziona internamente ma verranno fornite informazioni utili su come personalizzare le implementazioni standard e illustrano alcune tecniche per l'implementazione gestori di comando.  
  
## <a name="contents-of-this-technical-note"></a>Contenuto di questa nota tecnica  
 Ogni ID di comando è descritto nelle due sezioni:  
  
-   Il titolo: il nome simbolico dell'ID di comando (ad esempio, **ID_FILE_SAVE**) seguito dallo scopo del comando (ad esempio, "Salva il documento corrente"), separato da due punti.  
  
-   Uno o più paragrafi che descrive le classi che implementano il comando e l'implementazione predefinita non  
  
 La maggior parte delle implementazioni di comando predefinite sono prewired nella mappa messaggi di classe di base del framework. Esistono alcune implementazioni di comandi che richiedono il cablaggio esplicito nella classe derivata. Questi elementi sono descritti in "Note". Se si sceglie le opzioni corrette in Creazione guidata applicazione, saranno connesse questi gestori predefiniti per l'utente nell'applicazione scheletro generato.  
  
## <a name="naming-convention"></a>Convenzione di denominazione  
 I comandi standard di seguono una convenzione di denominazione semplice che è consigliabile che utilizzare se possibile. Comandi standard si trovano in posizioni standard nella barra dei menu dell'applicazione. Il nome simbolico del comando inizia con ID "_" seguito dal nome del menu di scelta rapida standard, seguito dal nome del menu. Il nome simbolico è in maiuscolo con interruzioni di parola carattere di sottolineatura. Per i comandi che non dispongono di nomi di menu standard, un nome di comando logico è definito a partire da ID "_" (ad esempio, **ID_NEXT_PANE**).  
  
 Utilizziamo il prefisso "ID _" per indicare i comandi che sono progettati per essere associato a voci di menu, pulsanti della barra degli strumenti o altri oggetti dell'interfaccia utente di comando. I gestori di comando Gestione dei comandi "Con ID _" è necessario utilizzare il `ON_COMMAND` e `ON_UPDATE_COMMAND_UI` meccanismi di MFC comando architettura.  
  
 È consigliabile che utilizzare il prefisso standard "IdM _" per cui non seguono l'architettura di comando e menu specifico codice necessario per abilitare e disabilitare le voci di menu. Naturalmente il numero specifici dei comandi di menu deve essere un piccolo perché segue l'architettura di comando MFC non solo rende più potente dei gestori di comando (dal momento che funzionano con le barre degli strumenti), ma rende il codice del gestore comando riutilizzabili.  
  
## <a name="id-ranges"></a>Intervalli di ID  
 Consultare [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) per ulteriori informazioni sull'utilizzo di intervalli di ID in MFC.  
  
 Comandi standard di MFC è compreso nell'intervallo 0xE000 a 0xEFFF. . Non fare affidamento sui valori specifici di questi ID poiché sono soggette a modifiche nelle future versioni della libreria.  
  
 L'applicazione deve definire i comandi nell'intervallo 0x8000 a 0xDFFF.  
  
## <a name="standard-command-ids"></a>ID di comando standard  
 Per ogni ID di comando, è una stringa prompt dei comandi di righe di messaggio standard sono reperibili le richieste di file. RC. L'ID di stringa per il prompt dei comandi di menu deve essere la stessa di ID di comando.  
  
-   ID_FILE_NEW crea un documento nuovo/vuoto.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnFileNew`implementa questo comando in modo diverso a seconda del numero di modelli di documento nell'applicazione. Se è presente un solo `CDocTemplate`, `CWinApp::OnFileNew` creerà un nuovo documento di quel tipo, come la classe cornice e visualizzazione appropriata.  
  
     Se è presente più di `CDocTemplate`, `CWinApp::OnFileNew` richiederà all'utente una finestra di dialogo (**AFX_IDD_NEWTYPEDLG**) consentendo loro di selezionare il tipo di documento da utilizzare. Selezionato `CDocTemplate` viene utilizzato per creare il documento.  
  
     Una personalizzazione frequente applicata di `ID_FILE_NEW` consiste nel fornire un diverso e più grafica scelta dei tipi di documento. In questo caso è possibile implementare la propria **CMyApp::OnFileNew** e inserirlo nella mappa messaggi anziché `CWinApp::OnFileNew`. Non è necessario chiamare l'implementazione della classe base.  
  
     Un'altra personalizzazione comune di `ID_FILE_NEW` consiste nel fornire un comando distinto per la creazione di un documento di ogni tipo. In questo caso è necessario definire il nuovo ID di comando, ad esempio ID_FILE_NEW_CHART e ID_FILE_NEW_SHEET.  
  
-   ID_FILE_OPEN apre un documento esistente.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnFileOpen`è un'implementazione molto semplice chiamare **CWinApp::DoPromptFileName** seguito da `CWinApp::OpenDocumentFile` con il nome di file o il percorso del file da aprire. Il `CWinApp` routine implementazione **DoPromptFileName** viene visualizzata la finestra di dialogo standard di FileOpen e vi inserisce le estensioni di file ottenute dai modelli di documento corrente.  
  
     Una personalizzazione frequente applicata di `ID_FILE_OPEN` consiste nel personalizzare la finestra di dialogo FileOpen o aggiungere filtri aggiuntive del file. Il metodo consigliato per personalizzare questa impostazione consiste nel sostituire l'implementazione predefinita con la propria finestra di dialogo FileOpen e chiamare `CWinApp::OpenDocumentFile` con il nome di file o il percorso del documento. Non è necessario chiamare la classe base.  
  
-   ID_FILE_CLOSE chiude il documento attualmente aperto.  
  
     **CDocument::OnFileClose** chiamate `CDocument::SaveModified` per richiedere all'utente di salvare il documento, se è stato modificato e quindi chiama `OnCloseDocument`. Tutta la logica di chiusura, tra cui eliminare il documento, viene eseguita nel `OnCloseDocument` routine.  
  
    > [!NOTE]
    >  **ID_FILE_CLOSE** agisce in modo diverso da un `WM_CLOSE` messaggio o un **SC_CLOSE** comando sistema inviato alla finestra cornice di documenti. Chiusura di una finestra chiudere il documento solo se l'ultima finestra frame che mostra il documento. Chiudere il documento con **ID_FILE_CLOSE** non chiuderà solo il documento, ma verrà chiudere tutte le finestre cornice che mostra il documento.  
  
-   ID_FILE_SAVE Salva il documento corrente.  
  
     L'implementazione Usa una routine di supporto **CDocument::DoSave** che viene utilizzato sia per **OnFileSave** e **OnFileSaveAs**. Se si salva un documento che non è stato salvato prima (vale a dire, non ha un nome di percorso, come nel caso di FileNew) o che è stato letto da un documento di sola lettura, la **OnFileSave** logica si comporta come il **ID_FILE_SAVE_AS** comando e richiedere all'utente di specificare un nuovo nome file. L'effettivo processo di apertura del file e di eseguire il salvataggio viene eseguito tramite la funzione virtuale `OnSaveDocument`.  
  
     Esistono due motivi comuni per personalizzare **ID_FILE_SAVE**. Per i documenti che non si salvano, rimuovere semplicemente la **ID_FILE_SAVE** voci di menu e pulsanti della barra degli strumenti dall'interfaccia utente. Assicurarsi inoltre che non dirty mai il documento (ovvero, non chiamano mai `CDocument::SetModifiedFlag`) e il framework non causerà mai il documento da salvare. Per i documenti salvate in qualche punto diverso da un file su disco, definire un nuovo comando per l'operazione.  
  
     In caso di un `COleServerDoc`, **ID_FILE_SAVE** viene utilizzato sia per salvataggio file (per i documenti normale) e l'aggiornamento di file (per i documenti incorporati).  
  
     Se i dati del documento viene archiviati in singoli file su disco, ma non si desidera utilizzare il valore predefinito **CDocument** serializzare implementazione, è necessario eseguire l'override `CDocument::OnSaveDocument` anziché **OnFileSave**.  
  
-   ID_FILE_SAVE_AS Salva il documento corrente con un nome di file diverso.  
  
     Il **CDocument::OnFileSaveAs** implementazione utilizza lo stesso **CDocument::DoSave** routine dell'helper come **OnFileSave**. Il **OnFileSaveAs** comando viene gestito come **ID_FILE_SAVE** se i documenti alcun nome file prima del salvataggio. **COleServerDoc::OnFileSaveAs** implementa la logica per salvare un file di dati del documento normale o salvare un documento di server che rappresenta un oggetto OLE incorporata in un'altra applicazione come file separato.  
  
     Se si personalizza la logica di **ID_FILE_SAVE**, si desidera personalizzare probabilmente **ID_FILE_SAVE_AS** in modo analogo o all'operazione di "Salva con nome" potrebbe non essere applicabile al documento. Se non è più necessaria, è possibile rimuovere la voce di menu dalla barra dei menu.  
  
-   ID_FILE_SAVE_COPY_AS Salva una copia di documento corrente con un nuovo nome.  
  
     Il **COleServerDoc::OnFileSaveCopyAs** implementazione è molto simile a **CDocument::OnFileSaveAs**, ad eccezione del fatto che il documento oggetto non è "connesso" per il file sottostante dopo il salvataggio. Ovvero, se il documento in memoria è stata "modificato" prima del salvataggio, è ancora "modificato". Inoltre, questo comando non ha effetto sul nome del percorso o titolo archiviati nel documento.  
  
-   ID_FILE_UPDATE notifica al contenitore di salvare un documento incorporato.  
  
     Il `COleServerDoc::OnUpdateDocument` implementazione semplicemente notifiies il contenitore in cui deve essere salvato l'incorporamento. Il contenitore chiama quindi le appropriate API OLE per salvare l'oggetto incorporato.  
  
-   ID_FILE_PAGE_SETUP richiama una finestra di dialogo di installazione/layout di pagina specifici dell'applicazione.  
  
     Il framework non è Nessuna implementazione predefinita di questo comando non è attualmente presente standard per questa finestra di dialogo.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_FILE_PRINT_SETUP richiamare la finestra di dialogo Imposta stampante standard.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     Questo comando Visualizza la finestra di dialogo Stampa standard che consente all'utente di personalizzare la stampante e le impostazioni di almeno il documento o al massimo tutti i documenti in questa applicazione. È necessario utilizzare il pannello di controllo per modificare le impostazioni predefinite della stampante per l'intero sistema.  
  
     `CWinApp::OnFilePrintSetup`è un'implementazione molto semplice creare un `CPrintDialog` oggetto e la chiamata di **CWinApp::DoPrintDialog** funzione di implementazione. Consente di impostare l'impostazione della stampante dell'applicazione.  
  
     La necessità di comune per la personalizzazione di questo comando è quello di consentire le impostazioni della stampante per ogni documento, che devono essere archiviate con il documento salvato. Per eseguire questa operazione è necessario aggiungere un gestore della mappa messaggi nel **CDocument** classe che crea un `CPrintDialog` oggetto, viene inizializzato con gli attributi della stampante appropriate (in genere **hDevMode** e **hDevNames**), chiamare il **CPrintDialog::DoModal,** e salvare le impostazioni della stampante modificate. Per un'implementazione efficace, è necessario controllare l'implementazione di **CWinApp::DoPrintDialog** per rilevare gli errori e **CWinApp::UpdatePrinterSelection** per la gestione delle impostazioni predefinite ragionevoli e rilevamento delle modifiche della stampante a livello di sistema.  
  
-   ID_FILE_PRINT Standard stampa del documento corrente  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CView`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     Il comando Stampa il documento corrente o più correttamente, viene avviato il processo di stampa, che consiste nel richiamare la finestra di dialogo Stampa standard e in esecuzione il motore di stampato.  
  
     **CView::OnFilePrint** implementa questo comando e il ciclo di stampato principale. Chiama virtuale `CView::OnPreparePrinting` alla richiesta dell'utente con la finestra di dialogo Stampa. Viene quindi prepara l'output di controller di dominio per la stampante, viene visualizzata la finestra di dialogo di stato stampa (**AFX_IDD_PRINTDLG**) e invia il `StartDoc` escape alla stampante. **CView::OnFilePrint** contiene inoltre il ciclo di stampato principale orientato alla pagina. Per ogni pagina, viene chiamata virtuale `CView::OnPrepareDC` seguito da un `StartPage` escape e chiamata virtuale `CView::OnPrint` per la pagina. Al termine, virtuale `CView::OnEndPrinting` viene chiamato e viene chiusa la finestra di dialogo Stampa di stato.  
  
     L'architettura di stampa di MFC è progettato per effettuare l'hook in molti modi diversi per la stampa e anteprima di stampa. In genere si troverà i vari `CView` funzioni sottoponibili a override adeguate per le attività di stampa orientato alla pagina. Solo nel caso di un'applicazione che utilizza la stampante per non di pagina orientata ai servizi di output, è necessario trovare la necessità di sostituire il **ID_FILE_PRINT** implementazione.  
  
-   Immettere ID_FILE_PRINT_PREVIEW modalità anteprima di stampa per il documento corrente.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CView`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     **CView::OnFilePrintPreview** avvia la modalità di anteprima di stampa chiamando la funzione di supporto documentati **CView::DoPrintPreview**. **CView::DoPrintPreview** è il motore principale per il ciclo di anteprima di stampa, come **OnFilePrint** è il motore principale per il ciclo di stampa.  
  
     L'operazione di anteprima di stampa può essere personalizzato in diversi modi, passando parametri diversi per **DoPrintPreview**. Consultare [30 Nota tecnica](../mfc/tn030-customizing-printing-and-print-preview.md), che illustra alcuni dettagli di anteprima di stampa e come personalizzarlo.  
  
-   **ID_FILE_MRU_FILE1**... **FILE16** un intervallo di ID di comando per il File MRU `list`.  
  
     **CWinApp::OnUpdateRecentFileMenu** un gestore dell'interfaccia utente di comando di aggiornamento che è uno degli usi più avanzati di `ON_UPDATE_COMMAND_UI` meccanismo. Nella risorsa menu, è necessario definire solo una singola voce di menu con ID **ID_FILE_MRU_FILE1**. La voce di menu rimane inizialmente disabilitata.  
  
     Come il MRU elenco diventa troppo grande, più menu gli elementi vengono aggiunti all'elenco. Lo standard `CWinApp` implementazione per impostazione predefinita il limite di standard di quattro file utilizzati di recente. È possibile modificare il valore predefinito chiamando `CWinApp::LoadStdProfileSettings` con un valore maggiore o minore. L'elenco dei file più recenti è archiviato in dell'applicazione. File INI. L'elenco viene caricato in un'applicazione `InitInstance` funzione se si chiama `LoadStdProfileSettings`e viene salvata alla chiusura dell'applicazione. Il gestore dell'interfaccia utente comando update MRU anche convertirà i percorsi assoluti per i percorsi relativi per la visualizzazione del menu file.  
  
     **CWinApp::OnOpenRecentFile** è il `ON_COMMAND` gestore che esegue il comando effettivo. Ottiene semplicemente il nome del file dall'elenco dei file più recenti e le chiamate `CWinApp::OpenDocumentFile`, che esegue tutte le operazioni di apertura del file e l'aggiornamento dell'elenco MRU.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_EDIT_CLEAR Cancella la selezione corrente  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando utilizzando `CEdit::Clear`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_CLEAR_ALL Cancella l'intero documento.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando. Vedere l'esempio di esercitazione MFC [SCRIBBLE](../visual-cpp-samples.md) per un esempio di implementazione.  
  
-   ID_EDIT_COPY copia la selezione corrente negli Appunti.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che copia il testo selezionato negli Appunti come CF_TEXT utilizzando `CEdit::Copy`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_CUT Taglia la selezione corrente negli Appunti.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che taglia il testo selezionato negli Appunti come CF_TEXT utilizzando `CEdit::Cut`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_FIND inizia l'operazione di ricerca, viene visualizzata la finestra di dialogo non modale di ricerca.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che chiama la funzione di supporto di implementazione **OnEditFindReplace** da usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. La `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale per chiedere conferma all'utente.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_PASTE inserisce il contenuto degli Appunti corrente.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che copia i dati degli Appunti correnti sostituendo il testo selezionato tramite `CEdit::Paste`. Il comando è disabilitato se è presente alcun **CF_TEXT** negli Appunti.  
  
     **COleClientDoc** fornisce solo un gestore del comando dell'interfaccia utente di aggiornamento per questo comando. Se gli Appunti non contengono incorporabile elemento/oggetto OLE, il comando verrà disabilitato. Si è responsabile della scrittura del gestore per il comando effettivo per eseguire l'effettiva operazione di Incolla. Se un'applicazione OLE può incollare anche altri formati, è necessario fornire il proprio gestore dell'interfaccia utente di comando di aggiornamento nella vista o nel documento (ovvero, un punto prima **COleClientDoc** nel ciclo di destinazione di comando).  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
     Per sostituire l'implementazione di OLE standard, utilizzare `COleClientItem::CanPaste`.  
  
-   ID_EDIT_PASTE_LINK inserisce un collegamento dal contenuto degli Appunti corrente.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `COleDocument`fornisce solo un gestore del comando dell'interfaccia utente di aggiornamento per questo comando. Se gli Appunti non contengono collegabile oggetto OLE, il comando verrà disabilitato. Si è responsabile della scrittura del gestore per il comando effettivo per eseguire l'effettiva operazione di Incolla. Se un'applicazione OLE può incollare anche altri formati, è necessario fornire il proprio gestore dell'interfaccia utente di comando di aggiornamento nella vista o nel documento (ovvero, un punto prima `COleDocument` nel ciclo di destinazione di comando).  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
     Per sostituire l'implementazione di OLE standard, utilizzare `COleClientItem::CanPasteLink`.  
  
-   ID_EDIT_PASTE_SPECIAL inserisce il contenuto corrente degli Appunti con opzioni.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata. MFC non fornisce questa finestra di dialogo.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_REPEAT ripete l'ultima operazione.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando per ripetere l'ultima operazione di ricerca. Vengono utilizzate le variabili di implementazione privata per la ricerca. Il comando è disabilitato se è Impossibile tentare di eseguire una ricerca.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_REPLACE inizia l'operazione di sostituzione, viene visualizzata la finestra di dialogo non modale di sostituzione.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che chiama la funzione di supporto di implementazione **OnEditFindReplace** da usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. La `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale che richiede all'utente.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_SELECT_ALL seleziona l'intero documento.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, che seleziona tutto il testo nel documento. Il comando è disabilitato se è disponibile alcun testo per selezionare.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_UNDO Annulla l'ultima operazione.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     `CEditView`fornisce un'implementazione di questo comando, mediante `CEdit::Undo`. Il comando è disabilitato se `CEdit::CanUndo` restituisce FALSE.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_EDIT_REDO ripete l'ultima operazione.  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare questo metodo per ogni `CView`-classe derivata.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_WINDOW_NEW apre un'altra finestra del documento attivo.  
  
     **CMDIFrameWnd::OnWindowNew** implementa questa funzionalità avanzata tramite il modello di documento del documento corrente per creare un altro frame contenente un'altra visualizzazione del documento corrente.  
  
     Ad esempio la maggior parte delle più documenti (MDI) di interfaccia comandi del menu finestra, il comando è disabilitato se è presente alcuna finestra figlio MDI attiva.  
  
     Personalizzazione di questo gestore del comando non è consigliata. Se si desidera fornire un comando che consente di creare visualizzazioni aggiuntive o finestre cornice, probabilmente sarà preferibile realizzazione di un comando personalizzato. È possibile clonare il codice da **CMDIFrameWnd::OnWindowNew** e modificarlo per le classi specifiche di cornice e visualizzazione di base alle proprie esigenze.  
  
-   ID_WINDOW_ARRANGE dispone le icone nella parte inferiore di una finestra MDI.  
  
     `CMDIFrameWnd`implementa questo comando MDI standard in una funzione di supporto di implementazione **OnMDIWindowCmd**. Questo supporto viene eseguito il mapping degli ID di comando per i messaggi di finestre MDI e pertanto può condividere una grande quantità di codice.  
  
     Ad esempio la maggior parte dei comandi di menu finestra MDI, il comando è disabilitato se è presente alcuna finestra figlio MDI attiva.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   Windows ID_WINDOW_CASCADE a catena in modo che si sovrappongano.  
  
     `CMDIFrameWnd`implementa questo comando MDI standard in una funzione di supporto di implementazione **OnMDIWindowCmd**. Questo supporto viene eseguito il mapping degli ID di comando per i messaggi di finestre MDI e pertanto può condividere una grande quantità di codice.  
  
     Ad esempio la maggior parte dei comandi di menu finestra MDI, il comando è disabilitato se è presente alcuna finestra figlio MDI attiva.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   Windows ID_WINDOW_TILE_HORZ riquadri orizzontalmente.  
  
     Questo comando viene implementato in `CMDIFrameWnd` come **ID_WINDOW_CASCADE**, ma viene utilizzato un messaggio di finestre MDI diverso per l'operazione.  
  
     Selezionare l'orientamento del riquadro predefinito per l'applicazione. È possibile farlo modificando l'ID della finestra "Sezione" voce di menu al **ID_WINDOW_TILE_HORZ** o **ID_WINDOW_TILE_VERT**.  
  
-   Windows ID_WINDOW_TILE_VERT riquadri verticalmente.  
  
     Questo comando viene implementato in `CMDIFrameWnd` come **ID_WINDOW_CASCADE**, ma viene utilizzato un messaggio di finestre MDI diverso per l'operazione.  
  
     Selezionare l'orientamento del riquadro predefinito per l'applicazione. È possibile farlo modificando l'ID della finestra "Sezione" voce di menu al **ID_WINDOW_TILE_HORZ** o **ID_WINDOW_TILE_VERT**.  
  
-   Interfaccia ID_WINDOW_SPLIT tastiera per la barra di divisione.  
  
     `CView`Questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando verrà delegato della funzione di implementazione `CSplitterWnd::DoKeyboardSplit`. Inserire la barra di divisione in una modalità che consente agli utenti di tastiera dividere o annullare una finestra con separatore.  
  
     Questo comando è disabilitato se la vista non è presente in una barra di divisione.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_APP_ABOUT richiama la finestra di dialogo informazioni su.  
  
     Non vi è Nessuna implementazione standard per la finestra informazioni su un'applicazione. L'applicazione creata dalla creazione guidata applicazioni predefinita verrà creare una classe di finestra di dialogo personalizzata per l'applicazione e usarlo come la finestra informazioni su. La creazione guidata applicazione, si scriverà anche il gestore del comando semplice che gestisce il comando e richiama la finestra di dialogo.  
  
     Questo comando viene quasi sempre implementato.  
  
-   ID_APP_EXIT uscire dall'applicazione.  
  
     **CWinApp::OnAppExit** gestisce questo comando inviando un `WM_CLOSE` messaggio alla finestra principale dell'applicazione. Lo standard in corso l'arresto dell'applicazione (richiesta dei file dirty e così via) viene gestito dal `CFrameWnd` implementazione.  
  
     Personalizzazione di questo gestore del comando non è consigliata. Si esegue l'override `CWinApp::SaveAllModified` o `CFrameWnd` logica di chiusura è consigliata.  
  
     Se si sceglie di implementare questo comando, si consiglia di che usare l'ID di comando.  
  
-   ID_HELP_INDEX Elenca Guida da. File HLP.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnHelpIndex`gestisce il comando chiamando in modo semplice `CWinApp::WinHelp`.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_HELP_USING Visualizza la Guida su come utilizzare la Guida.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnHelpUsing`gestisce il comando chiamando in modo semplice `CWinApp::WinHelp`.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   Modalità di ID_CONTEXT_HELP immette MAIUSC + F1 Guida in linea.  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnContextHelp`gestisce questo comando impostando il cursore di modalità della Guida, immettere un ciclo modale di e, in attesa per l'utente di selezionare una finestra per visualizzare la Guida di. Consultare [28 Nota tecnica](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni sull'implementazione della Guida MFC.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_HELP offre Guida relativa al contesto corrente  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     `CWinApp::OnHelp`gestisce questo comando ottenendo il contesto della Guida destra per il contesto dell'applicazione corrente. In grado di gestire semplice F1 Guida in linea, Guida nelle finestre di messaggio e così via. Consultare [28 Nota tecnica](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni su MFC consentono all'implementazione.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_DEFAULT_HELP Visualizza la Guida predefinito per il contesto  
  
    > [!NOTE]
    >  È necessario connettersi a questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.  
  
     Questo comando è in genere associato a `CWinApp::OnHelpIndex`.  
  
     Se si desidera creare una distinzione tra predefinito della Guida in linea e l'indice della Guida, è possibile specificare un gestore del comando diverso.  
  
-   ID_NEXT_PANE passa al riquadro successivo  
  
     `CView`Questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando verrà delegato della funzione di implementazione **CSplitterWnd::OnNextPaneCmd**. La visualizzazione attiva verrà spostata al riquadro successivo nella barra di divisione.  
  
     Questo comando è disabilitato se la vista non è presente in una barra di divisione o non esiste alcun riquadro successivo su cui spostarsi.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_PREV_PANE passa al riquadro precedente.  
  
     `CView`Questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando verrà delegato della funzione di implementazione **CSplitterWnd::OnNextPaneCmd**. La visualizzazione attiva verrà spostata al riquadro precedente nella barra di divisione.  
  
     Questo comando è disabilitato se la vista non è presente in una barra di divisione o non esiste alcun riquadro per passare al precedente.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_OLE_INSERT_NEW inserisce un nuovo oggetto OLE  
  
     Non è attualmente presente alcuna implementazione standard per questo comando. È necessario implementare per la `CView`-derivata per inserire un nuovo elemento/oggetto OLE in corrispondenza della selezione corrente.  
  
     Tutte le applicazioni client OLE devono implementare questo comando. La creazione guidata applicazione, con l'opzione OLE, verrà creato uno scheletro di implementazione di **OnInsertObject** nella classe di visualizzazione che devono essere completate.  
  
     Vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) esempio per un'implementazione completa di questo comando.  
  
-   ID_OLE_EDIT_LINKS Modifica collegamenti OLE  
  
     `COleDocument`gestisce questo comando mediante l'implementazione fornita da MFC della finestra di dialogo collegamenti OLE standard. L'implementazione di questa finestra di dialogo è possibile accedervi tramite la `COleLinksDialog` classe. Se il documento corrente non contiene alcun collegamento, il comando è disattivato.  
  
     Personalizzazione di questo gestore del comando non è consigliata.  
  
-   ID_OLE_VERB_FIRST... ULTIMO intervallo di un ID per i verbi OLE  
  
     `COleDocument`Usa questo intervallo di ID di comando per i verbi supportati dall'oggetto attualmente selezionato OLE elemento /. Deve trattarsi di un intervallo dopo un determinato tipo di oggetto/OLE può supportare zero o più verbi personalizzati. Nel menu dell'applicazione, è una voce di menu con l'ID di **ID_OLE_VERB_FIRST**. Quando viene eseguito il programma, il menu verrà aggiornato con la descrizione di verbo di menu appropriata (o il menu a comparsa con numero di verbi). La gestione del menu OLE è garantita da `AfxOleSetEditMenu`fatto nel gestore dell'interfaccia utente di comando di aggiornamento per questo comando.  
  
     Esistono gestori comando esplicito per la gestione di un ID di comando in questo intervallo. **COleDocument::OnCmdMsg** è sottoposto a override per intercettare tutti gli ID di comando in questo intervallo, convertirle in numeri in base zero verbo e avviare il server per il verbo (utilizzando `COleClientItem::DoVerb`).  
  
     Personalizzazione o un altro uso di questo intervallo di ID di comando non è consigliabile.  
  
-   ID_VIEW_TOOLBAR attiva o disattiva la barra degli strumenti e disattivare  
  
     `CFrameWnd`gestisce il comando e il gestore di comando di aggiornamento dell'interfaccia utente per attivare o disattivare lo stato di visualizzazione della barra degli strumenti. La barra degli strumenti deve essere una finestra del frame di ID di finestra figlio di `AFX_IDW_TOOLBAR`. Il gestore del comando Alterna effettivamente la visibilità della finestra degli strumenti. `CFrameWnd::RecalcLayout`viene utilizzato per ridisegnare la finestra cornice con la barra degli strumenti nel suo nuovo stato. Il gestore dell'interfaccia utente di comando di aggiornamento verifica la voce di menu quando la barra degli strumenti è visibile.  
  
     Personalizzazione di questo gestore del comando non è consigliata. Se si desidera aggiungere altre barre degli strumenti, è possibile clonare e modificare il gestore del comando e il gestore di comando di aggiornamento dell'interfaccia utente per questo comando.  
  
-   ID_VIEW_STATUS_BAR attiva o disattiva la barra di stato e disattivare  
  
     Questo comando viene implementato in `CFrameWnd` come **ID_VIEW_TOOLBAR**, ad eccezione di un ID di finestra figlio diverso (**AFX_IDW_STATUS_BAR**) viene utilizzato.  
  
## <a name="update-only-command-handlers"></a>Gestori di comandi solo aggiornamento  
 Più ID di comando standard vengono utilizzate come indicatori di barre di stato. Questi utilizzare lo stesso meccanismo di gestione interfaccia utente di comando di aggiornamento per visualizzare lo stato corrente di visual durante l'inattività dell'applicazione. Poiché non possono essere selezionati dall'utente (vale a dire, è Impossibile push un riquadro della barra di stato), quindi non ha senso disporre di un `ON_COMMAND` gestore per questi ID di comando.  
  
-   **ID_INDICATOR_CAPS** : indicatore di blocco CAP.  
  
-   **ID_INDICATOR_NUM** : indicatore di blocco NUM.  
  
-   **ID_INDICATOR_SCRL** : indicatore di blocco BLOC SCORR.  
  
-   **ID_INDICATOR_KANA** : indicatore di blocco dei caratteri KANA (applicabile solo ai sistemi giapponesi).  
  
 Tutte e tre questi vengono implementati in **CFrameWnd::OnUpdateKeyIndicator**, un supporto di implementazione che utilizza l'ID di comando per eseguire il mapping alla chiave virtuale appropriata. Un'implementazione comune Abilita o disabilita (per i riquadri di stati disabilitati non = Nessun testo) il `CCmdUI` oggetto a seconda se la chiave virtuale appropriata è attualmente bloccata.  
  
 Personalizzazione di questo gestore del comando non è consigliata.  
  
-   **ID_INDICATOR_EXT: EXT**indicatore selezionare terminata.  
  
-   **ID_INDICATOR_OVR: Configurare**e**R**strike indicatore.  
  
-   **ID_INDICATOR_REC: REC**indicatore ording.  
  
 Non è attualmente presente alcuna implementazione standard per questi indicatori.  
  
 Se si sceglie di implementare questi indicatori, è consigliabile utilizzare questi ID indicatore e gestire l'ordine degli indicatori della barra di stato (ovvero, in questo ordine: EXT, CAP, BLOC NUM, BLOC SCORR, SSC, Cons.).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

