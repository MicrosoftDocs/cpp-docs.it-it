---
title: 'TN022: implementazione di comandi standard'
ms.date: 11/04/2016
f1_keywords:
- vc.commands
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
ms.openlocfilehash: 5c7041f40c7e30592f642d29d9d02812a9596864
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370389"
---
# <a name="tn022-standard-commands-implementation"></a>TN022: implementazione di comandi standard

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota vengono descritte le implementazioni dei comandi standard fornite da MFC 2.0. Leggere prima la [nota tecnica 21](../mfc/tn021-command-and-message-routing.md) perché descrive i meccanismi utilizzati per implementare molti dei comandi standard.

In questa descrizione si presuppone la conoscenza delle architetture MFC, delle API e della procedura di programmazione comune. Vengono descritte le API documentate e non documentate "solo implementazione". Questo non è un punto di partenza per conoscere le funzionalità di o come programmare in MFC. Fare riferimento a Visual C. per informazioni più generali e per informazioni dettagliate sulle API documentate.

## <a name="the-problem"></a>Problema

MFC definisce molti ID di comando standard nel file di intestazione AFXRES. H. Il supporto del framework per questi comandi varia. Comprendere dove e come le classi del framework gestiscono questi comandi non solo mostrerà come funziona il framework internamente, ma fornirà informazioni utili su come personalizzare le implementazioni standard e illustrare alcune tecniche per l'implementazione di gestori di comandi personalizzati.

## <a name="contents-of-this-technical-note"></a>Contenuto della presente nota tecnica

Ogni ID di comando è descritto in due sezioni:Each command ID is described in two sections:

- Il titolo: il nome simbolico dell'ID di comando (ad esempio, ID_FILE_SAVE) seguito dallo scopo del comando (ad esempio, "salva il documento corrente") separato da due punti.

- Uno o più paragrafi che descrivono quali classi implementano il comando e le operazioni eseguite dall'implementazione predefinita

La maggior parte delle implementazioni predefinite dei comandi sono precablate nella mappa messaggi della classe base del framework. Esistono alcune implementazioni di comando che richiedono il cablaggio esplicito nella classe derivata. Questi sono descritti in "Nota". Se si sceglie le opzioni corrette in AppWizard, questi gestori predefiniti verranno connessi automaticamente nell'applicazione scheletro generata.

## <a name="naming-convention"></a>Convenzione di denominazione

I comandi standard seguono una convenzione di denominazione semplice che si consiglia di utilizzare se possibile. La maggior parte dei comandi standard si trova in posizioni standard nella barra dei menu di un'applicazione. Il nome simbolico del comando inizia con "ID_" seguito dal nome del menu a comparsa standard, seguito dal nome della voce di menu. Il nome simbolico è in maiuscolo con interruzioni di parola di sottolineatura. Per i comandi che non dispongono di nomi di voci di menu standard, viene definito un nome di comando logico a partire da "ID_" (ad esempio, ID_NEXT_PANE).

Usiamo il prefisso "ID_" per indicare i comandi progettati per essere associati a voci di menu, pulsanti della barra degli strumenti o altri oggetti dell'interfaccia utente dei comandi. I gestori di comandi che gestiscono i comandi "ID_" devono utilizzare i meccanismi ON_COMMAND e ON_UPDATE_COMMAND_UI dell'architettura dei comandi MFC.

Si consiglia di utilizzare il prefisso "IDM_" standard per le voci di menu che non seguono l'architettura dei comandi e richiedono codice specifico del menu per abilitarli e disabilitarli. Naturalmente il numero di comandi specifici del menu deve essere ridotto poiché seguire l'architettura dei comandi MFC non solo rende i gestori di comandi più potenti (poiché funzioneranno con le barre degli strumenti), ma rende riutilizzabile il codice del gestore di comando.

## <a name="id-ranges"></a>Intervalli ID

Fare riferimento alla [nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) per ulteriori dettagli sull'utilizzo di intervalli di ID in MFC.

I comandi standard MFC rientrano nell'intervallo compreso tra 0xE000 e 0xEFFF. Si prega di non fare affidamento sui valori specifici di questi ID poiché sono soggetti a modifiche nelle versioni future della libreria.

L'applicazione deve definire i comandi nell'intervallo da 0x8000 a 0xDFFF.

## <a name="standard-command-ids"></a>Stati di comando standard

Per ogni ID di comando, è presente una stringa di prompt della riga di messaggio standard che si trova nel file PROMPTS. Rc. L'ID stringa per il prompt dei menu deve essere lo stesso dell'ID di comando.

- ID_FILE_NEW Crea un documento nuovo/vuoto.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnFileNew`implementa questo comando in modo diverso a seconda del numero di modelli di documento nell'applicazione. Se è presente `CDocTemplate` `CWinApp::OnFileNew` un solo oggetto , creerà un nuovo documento di quel tipo, nonché il frame e la classe di visualizzazione appropriati.

   Se è presente `CDocTemplate`più `CWinApp::OnFileNew` di un , richiederà all'utente una finestra di dialogo (AFX_IDD_NEWTYPEDLG) che consente di selezionare il tipo di documento da utilizzare. L'oggetto selezionato `CDocTemplate` viene utilizzato per creare il documento.

   Una personalizzazione comune di ID_FILE_NEW consiste nel fornire una scelta diversa e più grafica dei tipi di documento. In questo caso è `CMyApp::OnFileNew` possibile implementare il proprio `CWinApp::OnFileNew`e inserirlo nella mappa messaggi anziché . Non è necessario chiamare l'implementazione della classe base.

   Un'altra personalizzazione comune di ID_FILE_NEW consiste nel fornire un comando separato per la creazione di un documento di ogni tipo. In questo caso è necessario definire nuovi ID di comando, ad esempio ID_FILE_NEW_CHART e ID_FILE_NEW_SHEET.

- ID_FILE_OPEN Apre un documento esistente.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnFileOpen`ha un'implementazione `CWinApp::DoPromptFileName` molto `CWinApp::OpenDocumentFile` semplice di chiamata seguita da con il nome del file o il nome del file da aprire. La `CWinApp` routine `DoPromptFileName` di implementazione visualizza la finestra di dialogo Standard Open standard e la riempie con le estensioni di file ottenute dai modelli di documento correnti.

   Una personalizzazione comune di ID_FILE_OPEN consiste nel personalizzare la finestra di dialogo FileApri o aggiungere ulteriori filtri di file. Il modo consigliato per personalizzare questo consiste nel sostituire l'implementazione predefinita con la propria finestra di dialogo FileOpen e chiamare `CWinApp::OpenDocumentFile` con il nome del file o percorso del documento. Non è necessario chiamare la classe base.

- ID_FILE_CLOSE Consente di chiudere il documento attualmente aperto.

   `CDocument::OnFileClose`chiamate `CDocument::SaveModified` per richiedere all'utente di salvare il documento `OnCloseDocument`se è stato modificato e quindi chiama . Tutta la logica di chiusura, inclusa `OnCloseDocument` la distruzione del documento, viene eseguita nella routine.

    > [!NOTE]
    >  ID_FILE_CLOSE funziona in modo diverso da un messaggio WM_CLOSE o un comando di sistema SC_CLOSE inviato alla finestra cornice dei documenti. La chiusura di una finestra chiuderà il documento solo se si tratta dell'ultima finestra cornice che mostra il documento. La chiusura del documento con ID_FILE_CLOSE non solo chiuderà il documento, ma chiuderà tutte le finestre cornice che mostrano il documento.

- ID_FILE_SAVE Salva il documento corrente.

   L'implementazione utilizza `CDocument::DoSave` una routine `OnFileSave` di `OnFileSaveAs`supporto che viene utilizzata per entrambi e . Se si salva un documento che non è stato salvato in precedenza (ovvero, non ha un nome di percorso, come `OnFileSave` nel caso di FileNew) o che è stato letto da un documento di sola lettura, la logica agirà come il comando ID_FILE_SAVE_AS e chiederà all'utente di fornire un nuovo nome di file. Il processo effettivo di apertura del file e di `OnSaveDocument`salvataggio viene eseguito tramite la funzione virtuale.

   Esistono due motivi comuni per personalizzare ID_FILE_SAVE. Per i documenti che non vengono salvati, è sufficiente rimuovere le voci di menu ID_FILE_SAVE e i pulsanti della barra degli strumenti dall'interfaccia utente. Assicurarsi inoltre di non sporcare mai il `CDocument::SetModifiedFlag`documento (ovvero, non chiamare mai ) e il framework non causerà mai il salvataggio del documento. Per i documenti che vengono salvati in un luogo diverso da un file su disco, definire un nuovo comando per tale operazione.

   Nel caso di `COleServerDoc`un oggetto , ID_FILE_SAVE viene utilizzato sia per il salvataggio di file (per i documenti normali) che per l'aggiornamento dei file (per i documenti incorporati).

   Se i dati del documento vengono archiviati in singoli file `CDocument` su disco, ma `CDocument::OnSaveDocument` non `OnFileSave`si desidera utilizzare l'implementazione di serializzazione predefinita, è necessario eseguire l'override anziché .

- ID_FILE_SAVE_AS Salva il documento corrente con un nome file diverso.

   L'implementazione `CDocument::OnFileSaveAs` `CDocument::DoSave` utilizza la `OnFileSave`stessa routine di supporto di . Il `OnFileSaveAs` comando viene gestito come ID_FILE_SAVE se i documenti non avevano un nome file prima del salvataggio. `COleServerDoc::OnFileSaveAs`implementa la logica per salvare un normale file di dati del documento o per salvare un documento server che rappresenta un oggetto OLE incorporato in un'altra applicazione come file separato.

   Se si personalizza la logica di ID_FILE_SAVE, è probabile che si desideri personalizzare ID_FILE_SAVE_AS in modo simile o l'operazione "Salva con nome" potrebbe non essere applicabile al documento. È possibile rimuovere la voce di menu dalla barra dei menu se non è necessaria.

- ID_FILE_SAVE_COPY_AS Salva una copia del documento corrente con un nuovo nome.

   L'implementazione `COleServerDoc::OnFileSaveCopyAs` è `CDocument::OnFileSaveAs`molto simile a , ad eccezione del fatto che l'oggetto documento non è "collegato" al file sottostante dopo il salvataggio. Ovvero, se il documento in memoria è stato "modificato" prima del salvataggio, è ancora "modificato". Inoltre, questo comando non ha alcun effetto sul nome del percorso o sul titolo memorizzato nel documento.

- ID_FILE_UPDATE Notifica al contenitore di salvare un documento incorporato.

   L'implementazione `COleServerDoc::OnUpdateDocument` notifica semplicemente al contenitore che l'incorporamento deve essere salvato. Il contenitore chiama quindi le API OLE appropriate per salvare l'oggetto incorporato.

- ID_FILE_PAGE_SETUP richiama una finestra di dialogo di impostazione/layout di pagina specifica dell'applicazione.

   Attualmente non esiste uno standard per questa finestra di dialogo e il framework non dispone di alcuna implementazione predefinita di questo comando.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_FILE_PRINT_SETUP Richiamare la finestra di dialogo Impostazioni di stampa standard.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   Questo comando richiama la finestra di dialogo di impostazione di stampa standard che consente all'utente di personalizzare la stampante e le impostazioni di stampa per almeno questo documento o al massimo tutti i documenti in questa applicazione. È necessario utilizzare il Pannello di controllo per modificare le impostazioni predefinite della stampante per l'intero sistema.

   `CWinApp::OnFilePrintSetup`ha un'implementazione `CPrintDialog` molto semplice `CWinApp::DoPrintDialog` la creazione di un oggetto e la chiamata alla funzione di implementazione. In questo modo viene impostata la stampante predefinita dell'applicazione.

   La necessità comune di personalizzare questo comando è quella di consentire le impostazioni della stampante per documento, che devono essere memorizzate con il documento al momento del salvataggio. A tale scopo, è necessario aggiungere `CDocument` un gestore `CPrintDialog` della mappa messaggi nella classe che crea un oggetto, inizializzarlo `CPrintDialog::DoModal`con gli attributi della stampante appropriati (in genere *hDevMode* e *hDevNames*), chiamare il metodo e salvare le impostazioni della stampante modificate. Per un'implementazione affidabile, è `CWinApp::DoPrintDialog` consigliabile esaminare `CWinApp::UpdatePrinterSelection` l'implementazione di per rilevare gli errori e per gestire valori predefiniti ragionevoli e tenere traccia delle modifiche della stampante a livello di sistema.

- ID_FILE_PRINT Stampa standard del documento corrente

    > [!NOTE]
    >  È necessario connettersi `CView`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   Questo comando stampa il documento corrente, o più correttamente, avvia il processo di stampa, che comporta la chiamata della finestra di dialogo di stampa standard e l'esecuzione del motore di stampa.

   `CView::OnFilePrint`implementa questo comando e il loop di stampa principale. Chiama il `CView::OnPreparePrinting` virtuale al prompt dell'utente con la finestra di dialogo di stampa. Prepara quindi il controller di dominio di output per passare alla stampante, `StartDoc` visualizza la finestra di dialogo di avanzamento della stampa (AFX_IDD_PRINTDLG) e invia l'escape alla stampante. `CView::OnFilePrint`contiene anche il ciclo di stampa principale orientato alla pagina. Per ogni pagina, chiama `CView::OnPrepareDC` il `StartPage` virtuale seguito da `CView::OnPrint` un'escape e chiama il virtuale per tale pagina. Al termine, `CView::OnEndPrinting` viene chiamato il virtuale e la finestra di dialogo di avanzamento della stampa viene chiusa.

   L'architettura di stampa MFC è progettata per eseguire l'hook in molti modi diversi per la stampa e l'anteprima di stampa. In genere le `CView` varie funzioni sottoponibili a override sono adeguate per qualsiasi attività di stampa orientata alla pagina. Solo nel caso di un'applicazione che utilizza la stampante per output non orientato alla pagina, è necessario sostituire l'implementazione ID_FILE_PRINT.

- ID_FILE_PRINT_PREVIEW Immettere la modalità di anteprima di stampa per il documento corrente.

    > [!NOTE]
    >  È necessario connettersi `CView`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CView::OnFilePrintPreview`avvia la modalità di anteprima di `CView::DoPrintPreview`stampa chiamando la funzione di supporto documentata. `CView::DoPrintPreview`è il motore principale per il `OnFilePrint` loop di anteprima di stampa, proprio come è il motore principale per il ciclo di stampa.

   L'operazione di anteprima di stampa può essere personalizzata `DoPrintPreview`in diversi modi passando parametri diversi a . Si prega di fare riferimento alla [nota tecnica 30](../mfc/tn030-customizing-printing-and-print-preview.md), che illustra alcuni dei dettagli dell'anteprima di stampa e come personalizzarla.

- ID_FILE_MRU_FILE1... FILE16 Un intervallo di ID di comando per **l'elenco**MRU file .

   `CWinApp::OnUpdateRecentFileMenu`è un gestore dell'interfaccia utente del comando di aggiornamento che è uno degli usi più avanzati del meccanismo di ON_UPDATE_COMMAND_UI. Nella risorsa di menu, è necessario definire solo una singola voce di menu con ID ID_FILE_MRU_FILE1. Tale voce di menu rimane inizialmente disabilitata.

   Man mano che l'elenco MRU aumenta, vengono aggiunte altre voci di menu all'elenco. L'implementazione standard `CWinApp` è il limite standard dei quattro file utilizzati più di recente. È possibile modificare l'impostazione predefinita chiamando `CWinApp::LoadStdProfileSettings` con un valore maggiore o minore. L'elenco MRU viene archiviato nel file . INI. L'elenco viene caricato nella `InitInstance` funzione dell'applicazione se si chiama `LoadStdProfileSettings`e viene salvato alla chiusura dell'applicazione. Il gestore dell'interfaccia utente del comando di aggiornamento MRU convertirà anche i percorsi assoluti in percorsi relativi per la visualizzazione nel menu file.

   `CWinApp::OnOpenRecentFile`è il gestore ON_COMMAND che esegue il comando effettivo. Ottiene semplicemente il nome del file dall'elenco MRU e chiama `CWinApp::OpenDocumentFile`, che esegue tutte le operazioni di apertura del file e di aggiornamento dell'elenco MRU.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_EDIT_CLEAR Cancella la selezione corrente

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione `CEdit::Clear`di questo comando utilizzando . Il comando è disabilitato se non è presente alcuna selezione corrente.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_CLEAR_ALL Cancella l'intero documento.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando. Vedere l'esempio di esercitazione MFC [SCRIBBLE](../overview/visual-cpp-samples.md) per un esempio di implementazione.

- ID_EDIT_COPY Copia la selezione corrente negli Appunti.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, che copia il `CEdit::Copy`testo attualmente selezionato negli Appunti come CF_TEXT utilizzando . Il comando è disabilitato se non è presente alcuna selezione corrente.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_CUT Taglia la selezione corrente negli Appunti.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, che taglia il `CEdit::Cut`testo attualmente selezionato negli Appunti come CF_TEXT utilizzando . Il comando è disabilitato se non è presente alcuna selezione corrente.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_FIND Avvia l'operazione di ricerca, visualizza la finestra di dialogo di ricerca non modale.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, `OnEditFindReplace` che chiama la funzione di supporto di implementazione per utilizzare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione private. La `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale per la richiesta all'utente.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_PASTE Inserisce il contenuto corrente degli Appunti.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, che copia i `CEdit::Paste`dati degli Appunti correnti sostituendo il testo selezionato utilizzando . Il comando è disabilitato se non è presente **alcun aCF_TEXT** negli Appunti.

   `COleClientDoc`fornisce solo un gestore dell'interfaccia utente del comando di aggiornamento per questo comando. Se gli Appunti non contengono un elemento/oggetto OLE incorporabile, il comando verrà disabilitato. L'utente è responsabile della scrittura del gestore per il comando effettivo per eseguire l'incollaggio effettivo. Se l'applicazione OLE può anche incollare altri formati, è necessario fornire il proprio `COleClientDoc` gestore dell'interfaccia utente del comando di aggiornamento nella visualizzazione o nel documento, ovvero in un punto qualsiasi nel routing della destinazione del comando.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

   Per sostituire l'implementazione OLE standard, utilizzare `COleClientItem::CanPaste`.

- ID_EDIT_PASTE_LINK Inserisce un collegamento dal contenuto corrente degli Appunti.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `COleDocument`fornisce solo un gestore dell'interfaccia utente del comando di aggiornamento per questo comando. Se gli Appunti non contengono elemento/oggetto OLE collegabile, il comando verrà disabilitato. L'utente è responsabile della scrittura del gestore per il comando effettivo per eseguire l'incollaggio effettivo. Se l'applicazione OLE può anche incollare altri formati, è necessario fornire il proprio `COleDocument` gestore dell'interfaccia utente del comando di aggiornamento nella visualizzazione o nel documento, ovvero in un punto qualsiasi nel routing della destinazione del comando.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

   Per sostituire l'implementazione OLE standard, utilizzare `COleClientItem::CanPasteLink`.

- ID_EDIT_PASTE_SPECIAL inserisce il contenuto corrente degli Appunti con le opzioni.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata. MFC non fornisce questa finestra di dialogo.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_REPEAT Ripete l'ultima operazione.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando per ripetere l'ultima operazione di ricerca. Vengono utilizzate le variabili di implementazione private per l'ultima ricerca. Il comando è disabilitato se non è possibile eseguire una ricerca.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_REPLACE Avvia l'operazione di sostituzione, visualizza la finestra di dialogo di sostituzione non modale.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, `OnEditFindReplace` che chiama la funzione di supporto di implementazione per utilizzare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione private. La `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale che richiede all'utente.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_SELECT_ALL Seleziona l'intero documento.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di questo comando, che seleziona tutto il testo nel documento. Il comando è disabilitato se non è presente alcun testo da selezionare.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_UNDO Annulla l'ultima operazione.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   `CEditView`fornisce un'implementazione di `CEdit::Undo`questo comando, utilizzando . Il comando è `CEdit::CanUndo` disabilitato se restituisce FALSE.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_EDIT_REDO esegue nuovamente l'ultima operazione.

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questo per ogni classe derivata.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_WINDOW_NEW Apre un'altra finestra del documento attivo.

   `CMDIFrameWnd::OnWindowNew`implementa questa potente funzionalità utilizzando il modello di documento del documento corrente per creare un'altra cornice contenente un'altra visualizzazione del documento corrente.

   Come la maggior parte dei comandi di menu della finestra di interfaccia a documenti multipli (MDI), il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   La personalizzazione di questo gestore comandi non è consigliata. Se si desidera fornire un comando che crea ulteriori visualizzazioni o finestre cornice, probabilmente sarà meglio inventare il proprio comando. È possibile clonare `CMDIFrameWnd::OnWindowNew` il codice e modificarlo in base alle classi di frame e visualizzazione specifiche di proprio gradimento.

- ID_WINDOW_ARRANGE dispone le icone nella parte inferiore di una finestra MDI.

   `CMDIFrameWnd`implementa questo comando MDI standard `OnMDIWindowCmd`in una funzione di supporto di implementazione. Questo helper esegue il mapping degli ID di comando ai messaggi MDI di Windows e può pertanto condividere molto codice.

   Come la maggior parte dei comandi di menu della finestra MDI, il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_WINDOW_CASCADE Cascades in modo che si sovrappongano.

   `CMDIFrameWnd`implementa questo comando MDI standard `OnMDIWindowCmd`in una funzione di supporto di implementazione. Questo helper esegue il mapping degli ID di comando ai messaggi MDI di Windows e può pertanto condividere molto codice.

   Come la maggior parte dei comandi di menu della finestra MDI, il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_WINDOW_TILE_HORZ Affianca le finestre orizzontalmente.

   Questo comando viene `CMDIFrameWnd` implementato in modo simile a ID_WINDOW_CASCADE, ad eccezione del fatto che per l'operazione viene utilizzato un messaggio di Windows MDI diverso.

   È necessario scegliere l'orientamento del riquadro predefinito per l'applicazione. A tale scopo, è possibile modificare l'ID per la voce di menu "Tile" della finestra in ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- ID_WINDOW_TILE_VERT Piastrelle finestre verticalmente.

   Questo comando viene `CMDIFrameWnd` implementato in modo simile a ID_WINDOW_CASCADE, ad eccezione del fatto che per l'operazione viene utilizzato un messaggio di Windows MDI diverso.

   È necessario scegliere l'orientamento del riquadro predefinito per l'applicazione. A tale scopo, è possibile modificare l'ID per la voce di menu "Tile" della finestra in ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- ID_WINDOW_SPLITinterfaccia della tastiera per la barra di divisione.

   `CView`gestisce questo `CSplitterWnd` comando per l'implementazione. Se la visualizzazione fa parte di una finestra con separatore, questo comando delega alla funzione `CSplitterWnd::DoKeyboardSplit`di implementazione . In questo modo la barra di divisione verrà posizionata in una modalità che consentirà agli utenti della tastiera di dividere o annullare la divisione di una finestra di divisione.

   Questo comando è disabilitato se la vista non è in una barra di divisione.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_APP_ABOUT Richiama la finestra di dialogo Informazioni su.

   Non esiste un'implementazione standard per la casella Informazioni su di un'applicazione. L'applicazione predefinita creata dalla Creazione guidata applicazione creerà una classe di finestre di dialogo personalizzata per l'applicazione e la utilizzerà come casella Informazioni su. AppWizard scriverà anche il gestore di comando semplice che gestisce questo comando e richiama la finestra di dialogo.

   Questo comando verrà quasi sempre implementato.

- ID_APP_EXIT Uscire dall'applicazione.

   `CWinApp::OnAppExit`gestisce questo comando inviando un messaggio di WM_CLOSE alla finestra principale dell'applicazione. L'arresto standard dell'applicazione (richiesta di file dirty e così `CFrameWnd` via) viene gestito dall'implementazione.

   La personalizzazione di questo gestore comandi non è consigliata. Si `CWinApp::SaveAllModified` consiglia `CFrameWnd` di eseguire l'override o la logica di chiusura.

   Se si sceglie di implementare questo comando, si consiglia di utilizzare questo ID di comando.

- ID_HELP_INDEX Elenca gli argomenti della Guida di . HLP.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnHelpIndex`gestisce questo comando `CWinApp::WinHelp`chiamando in modo banale .

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_HELP_USING Visualizza la Guida su come utilizzare la Guida.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnHelpUsing`gestisce questo comando `CWinApp::WinHelp`chiamando in modo banale .

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_CONTEXT_HELP Entra in modalità Guida SHIFT-F1.

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnContextHelp`gestisce questo comando impostando il cursore della modalità guida, entrando in un ciclo modale e in attesa che l'utente selezioni una finestra su cui ottenere assistenza. Fare riferimento alla [nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per ulteriori dettagli sull'implementazione della Guida mfc.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_HELP Fornisce assistenza sul contesto corrente

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   `CWinApp::OnHelp`gestisce questo comando ottenendo il contesto della Guida corretto per il contesto dell'applicazione corrente. Questo gestisce semplice F1 aiuto, aiuto su finestre di messaggio e così via. Fare riferimento alla [nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per ulteriori dettagli sull'implementazione della Guida MFC.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_DEFAULT_HELP Visualizza la Guida predefinita per il contesto

    > [!NOTE]
    >  È necessario connettersi `CWinApp`alla mappa messaggi della classe derivata per abilitare questa funzionalità.

   Questo comando è in `CWinApp::OnHelpIndex`genere mappato a .

   Se si desidera una distinzione tra la Guida predefinita e l'indice della Guida, è possibile fornire un gestore di comandi diverso.

- ID_NEXT_PANE Passa al riquadro successivo

   `CView`gestisce questo `CSplitterWnd` comando per l'implementazione. Se la visualizzazione fa parte di una finestra con separatore, questo comando delega alla funzione `CSplitterWnd::OnNextPaneCmd`di implementazione . In questo modo la visualizzazione attiva verrà spostata nel riquadro successivo nella barra di divisione.

   Questo comando è disabilitato se la visualizzazione non è in una barra di divisione o non è presente alcun riquadro successivo a cui passare.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_PREV_PANE Passa al riquadro precedente

   `CView`gestisce questo `CSplitterWnd` comando per l'implementazione. Se la visualizzazione fa parte di una finestra con separatore, questo comando delega alla funzione `CSplitterWnd::OnNextPaneCmd`di implementazione . In questo modo la visualizzazione attiva verrà spostata nel riquadro precedente nella barra di divisione.

   Questo comando è disabilitato se la visualizzazione non è in una barra di divisione o non è presente alcun riquadro precedente a cui passare.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_OLE_INSERT_NEW inserisce un nuovo oggetto OLE

   Attualmente non esiste un'implementazione standard per questo comando. È necessario implementare `CView`questa funzionalità per la classe derivata dalla classe derivata per inserire un nuovo elemento/oggetto OLE in corrispondenza della selezione corrente.

   Tutte le applicazioni client OLE devono implementare questo comando. AppWizard, con l'opzione OLE, creerà un'implementazione scheletro di `OnInsertObject` nella classe di visualizzazione che sarà necessario completare.

   Vedere l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) esempio per un'implementazione completa di questo comando.

- ID_OLE_EDIT_LINKS modifica collegamenti OLE

   `COleDocument`gestisce questo comando utilizzando l'implementazione fornita da MFC della finestra di dialogo collegamenti OLE standard. L'implementazione di questa `COleLinksDialog` finestra di dialogo è accessibile tramite la classe . Se il documento corrente non contiene collegamenti, il comando è disabilitato.

   La personalizzazione di questo gestore comandi non è consigliata.

- ID_OLE_VERB_FIRST... LAST Un intervallo di ID per i verbi OLE

   `COleDocument`utilizza questo intervallo di ID di comando per i verbi supportati dall'elemento/oggetto OLE attualmente selezionato. Deve essere un intervallo poiché un determinato tipo di elemento/oggetto OLE può supportare zero o più verbi personalizzati. Nel menu dell'applicazione, dovresti avere una voce di menu con l'ID di ID_OLE_VERB_FIRST. Quando il programma viene eseguito, il menu verrà aggiornato con la descrizione del verbo di menu appropriato (o menu a comparsa con molti verbi). La gestione del menu OLE `AfxOleSetEditMenu`viene gestita da , eseguita nel gestore dell'interfaccia utente del comando di aggiornamento per questo comando.

   Non sono disponibili gestori di comandi espliciti per la gestione di ogni ID di comando in questo intervallo. `COleDocument::OnCmdMsg`viene sottoposto a override per intercettare tutti gli Id di comando in questo intervallo, `COleClientItem::DoVerb`trasformarli in numeri di verbo in base zero e avviare il server per tale verbo (utilizzando ).

   La personalizzazione o un altro utilizzo di questo intervallo di ID di comando non è consigliato.

- ID_VIEW_TOOLBAR Attiva e disattiva la barra degli strumenti

   `CFrameWnd`gestisce questo comando e il gestore dell'interfaccia utente del comando di aggiornamento per attivare o disattivare lo stato visibile della barra degli strumenti. La barra degli strumenti deve essere una finestra figlio del frame con ID finestra figlio di AFX_IDW_TOOLBAR. Il gestore del comando attiva e disattiva effettivamente la visibilità della finestra della barra degli strumenti. `CFrameWnd::RecalcLayout`viene utilizzato per ridisegnare la finestra cornice con la barra degli strumenti nel nuovo stato. Il gestore dell'interfaccia utente del comando di aggiornamento controlla la voce di menu quando la barra degli strumenti è visibile.

   La personalizzazione di questo gestore comandi non è consigliata. Se si desidera aggiungere altre barre degli strumenti, è necessario clonare e modificare il gestore di comando e il gestore dell'interfaccia utente del comando di aggiornamento per questo comando.

- ID_VIEW_STATUS_BAR Attiva e disattiva la barra di stato

   Questo comando viene `CFrameWnd` implementato proprio come ID_VIEW_TOOLBAR, ad eccezione del fatto che viene utilizzato un ID finestra figlio (AFX_IDW_STATUS_BAR) diverso.

## <a name="update-only-command-handlers"></a>Gestori dei comandi di solo aggiornamentoUpdate-Only Command Handlers

Diversi ID di comando standard vengono utilizzati come indicatori nelle barre di stato. Questi usano lo stesso meccanismo di gestione dell'interfaccia utente di aggiornamento-comando per visualizzare lo stato di visualizzazione corrente durante il tempo di inattività dell'applicazione. Poiché non possono essere selezionati dall'utente (ovvero, non è possibile eseguire il push di un riquadro della barra di stato), non ha senso disporre di un gestore di ON_COMMAND per questi ID di comando.

- ID_INDICATOR_CAPS: indicatore di blocco CAP.

- ID_INDICATOR_NUM: indicatore di blocco NUM.

- ID_INDICATOR_SCRL : indicatore di blocco SCRL.

- ID_INDICATOR_KANA : indicatore di blocco KANA (applicabile solo ai sistemi giapponesi).

Tutti e tre vengono `CFrameWnd::OnUpdateKeyIndicator`implementati in , un helper di implementazione che utilizza l'ID di comando per eseguire il mapping alla chiave virtuale appropriata. Un'implementazione comune abilita o disabilita (per i `CCmdUI` riquadri di stato disabilitati, senza testo), l'oggetto a seconda che la chiave virtuale appropriata sia attualmente bloccata.

La personalizzazione di questo gestore comandi non è consigliata.

- ID_INDICATOR_EXT: indicatore select interrotto.

- ID_INDICATOR_OVR: indicatore OVeRstrike.

- ID_INDICATOR_REC : indicatore RECording.

Attualmente non esiste un'implementazione standard per questi indicatori.

Se si sceglie di implementare questi indicatori, si consiglia di utilizzare questi ID indicatore e mantenere l'ordine degli indicatori nella barra di stato (vale a dire, nell'ordine seguente: EXT, CAP, NUM, SCRL, OVR, REC).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
