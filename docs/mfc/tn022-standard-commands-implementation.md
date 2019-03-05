---
title: 'TN022: Implementazione di comandi standard'
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
ms.openlocfilehash: 4c066521ba2b5be9ac24a8abaece42e57b8ad85f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57279357"
---
# <a name="tn022-standard-commands-implementation"></a>TN022: Implementazione di comandi standard

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive le implementazioni standard dei comandi disponibili in MFC 2.0. Lettura [21 Nota tecnica](../mfc/tn021-command-and-message-routing.md) prima perché descrive i meccanismi usati per implementare molti dei comandi standard.

Questa descrizione presuppone una conoscenza delle architetture di MFC, API e pratica di programmazione comune. Documentato come pure non documentate "implementazione solo" API vengono definite. Non si tratta di un punto di partenza apprendere i concetti relativi alla programmazione in MFC o le funzionalità di. Per altre informazioni generali e per informazioni dettagliate sulle API documentate, fare riferimento a Visual C++.

## <a name="the-problem"></a>Il problema

MFC definisce molti ID di comando standard nel file di intestazione AFXRES. H. Supporto di Framework per questi comandi varia. Comprendere dove e come le classi di framework di gestire i comandi seguenti non solo illustrerà come il framework funziona internamente ma è disponibili informazioni utili su come personalizzare le implementazioni standard e imparare alcune tecniche per l'implementazione i propri gestori comando.

## <a name="contents-of-this-technical-note"></a>Contenuto di questa nota tecnica

Ogni ID di comando è descritto nelle due sezioni:

- Titolo: il nome simbolico dell'ID di comando (ad esempio, ID_FILE_SAVE) seguito dallo scopo del comando (ad esempio, "Salva il documento corrente") separati da due punti.

- Uno o più paragrafi che descrive le classi che implementano il comando e l'implementazione predefinita non

La maggior parte delle implementazioni di comandi predefiniti sono prewired nella mappa messaggi della classe base del framework. Sono disponibili alcune implementazioni di comandi che richiedono l'associazione esplicita nella classe derivata. Vengono descritti in "Note". Se si sceglie le opzioni corrette nella creazione guidata applicazione, questi gestori predefiniti verranno connesso automaticamente nell'applicazione scheletro generato.

## <a name="naming-convention"></a>Convenzione di denominazione

I comandi standard di seguono una convenzione di denominazione semplice che è consigliabile che usare se possibile. I comandi più standard si trovano in posizioni standard nella barra dei menu dell'applicazione. Il nome simbolico del comando inizia con ID "_" seguito dal nome del menu di scelta rapida standard, seguito dal nome di elemento del menu. Il nome simbolico è in maiuscolo con le interruzioni di parola un carattere di sottolineatura. Per i comandi che non hanno nomi di voce di menu standard, è definito un nome di comando logica inizia con ID "_" (ad esempio, ID_NEXT_PANE).

Usiamo il prefisso "ID _" per indicare i comandi che sono progettati per essere associato a voci di menu, pulsanti della barra degli strumenti o altri oggetti di interfaccia utente di comando. Gestori di comando Gestione dei comandi "Con ID _" devono utilizzare i meccanismi ON_COMMAND e ON_UPDATE_COMMAND_UI dell'architettura di comando di MFC.

È consigliabile che usare il prefisso standard "IdM _" per voci di menu che non seguono l'architettura di comando e menu specifico codice necessario per abilitare e disabilitare la loro. Naturalmente il numero specifico di comandi di menu deve essere piccolo poiché segue l'architettura di comandi MFC non solo rende più potente dei gestori di comando (dal momento che siano compatibili con le barre degli strumenti), ma rende il codice del gestore comando riutilizzabili.

## <a name="id-ranges"></a>Intervalli di ID

Consultare [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) per altri dettagli sull'uso di intervalli di ID in MFC.

I comandi standard di MFC è compreso nell'intervallo 0xE000 a 0xEFFF. Non fare affidamento sui valori specifici di questi ID perché sono soggette a modifiche nelle versioni future della libreria.

L'applicazione deve definire i relativi comandi nell'intervallo 0x8000 a 0xDFFF.

## <a name="standard-command-ids"></a>ID di comando standard

Per ogni ID di comando, vi è una stringa di messaggio di richiesta riga standard del messaggio che può essere trovata nei prompt file. RC. L'ID di stringa per il prompt dei comandi di menu deve essere lo stesso ID di comando.

- ID_FILE_NEW crea un documento nuovo o vuota.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnFileNew` implementa questo comando in modo diverso a seconda del numero di modelli di documento nell'applicazione. Se è presente una sola `CDocTemplate`, `CWinApp::OnFileNew` creerà un nuovo documento di quel tipo, nonché la classe cornice e visualizzazione appropriata.

   Se è presente più di un `CDocTemplate`, `CWinApp::OnFileNew` richiederà all'utente una finestra di dialogo (AFX_IDD_NEWTYPEDLG) informarli selezionare quale tipo usare di documento. Selezionato `CDocTemplate` viene usato per creare il documento.

   Una personalizzazione comune di ID_FILE_NEW consiste nel fornire un diverso e più scelta grafica dei tipi di documento. In questo caso è possibile implementare il proprio `CMyApp::OnFileNew` e posizionarlo nella mappa del messaggio anziché `CWinApp::OnFileNew`. Non è necessario chiamare l'implementazione della classe base.

   Un'altra personalizzazione comune di ID_FILE_NEW consiste nel fornire un comando separato per la creazione di un documento di ogni tipo. In questo caso è necessario definire nuovi ID di comando, ad esempio ID_FILE_NEW_CHART e ID_FILE_NEW_SHEET.

- ID_FILE_OPEN apre un documento esistente.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnFileOpen` ha un'implementazione molto semplice della chiamata al metodo `CWinApp::DoPromptFileName` seguita da `CWinApp::OpenDocumentFile` con il nome file o percorso del file da aprire. Il `CWinApp` routine implementazione `DoPromptFileName` consente di visualizzare la finestra di dialogo FileOpen standard e vi inserisce le estensioni di file ottenute dai modelli di documento corrente.

   Una personalizzazione comune del ID_FILE_OPEN è per personalizzare la finestra di dialogo FileOpen o aggiungere altri filtri dei file. Il metodo consigliato per personalizzare questo consiste nel sostituire l'implementazione predefinita con il proprio FileOpen dialogo e chiamarlo `CWinApp::OpenDocumentFile` con il nome di file o percorso del documento. Non è necessario chiamare la classe di base.

- ID_FILE_CLOSE chiude il documento attualmente aperto.

   `CDocument::OnFileClose` le chiamate `CDocument::SaveModified` per richiedere all'utente di salvare il documento se è stato modificato e quindi chiama `OnCloseDocument`. Tutta la logica di chiusura, tra cui eliminare il documento, viene eseguita nel `OnCloseDocument` routine.

    > [!NOTE]
    >  ID_FILE_CLOSE si comporta in modo diverso da un messaggio WM_CLOSE o un comando del sistema SC_CLOSE inviati alla finestra cornice documenti. Chiusura di una finestra verrà chiusa il documento solo se è l'ultima finestra frame che mostra il documento. Chiudere il documento con ID_FILE_CLOSE non chiuderà solo il documento, ma verrà chiudere tutte le finestre cornice che mostra il documento.

- ID_FILE_SAVE Salva il documento corrente.

   L'implementazione Usa una routine di supporto `CDocument::DoSave` usto per entrambe `OnFileSave` e `OnFileSaveAs`. Se si salva un documento che non è stato salvato prima (vale a dire, non presenta un nome di percorso, come nel caso FileNew) o che è stato letto da un documento di sola lettura, la `OnFileSave` verrà utilizzato per la logica, ad esempio il ID_FILE_SAVE_AS comando e richiedere all'utente di specificare un nuovo nome file . Il processo effettivo di apertura del file ed esegue il salvataggio viene eseguito tramite la funzione virtuale `OnSaveDocument`.

   Esistono due motivi comuni per personalizzare ID_FILE_SAVE. Per i documenti che non si salvano, rimuovere semplicemente le voci di menu ID_FILE_SAVE e pulsanti della barra degli strumenti dall'interfaccia utente. Assicurarsi anche che non dirty mai il documento (ovvero, non chiamano mai `CDocument::SetModifiedFlag`) e il framework non causerà mai il documento da salvare. Per i documenti che salva in qualche punto diverso da un file su disco, definire un nuovo comando per l'operazione.

   Nel caso di un `COleServerDoc`, ID_FILE_SAVE viene usato per l'aggiornamento del file (per i documenti incorporati) e salvataggio file (per i documenti normale).

   Se i dati del documento viene archiviati in singoli file su disco, ma non si vuole usare il valore predefinito `CDocument` implementazione di serializzazione, è necessario eseguire l'override `CDocument::OnSaveDocument` invece di `OnFileSave`.

- ID_FILE_SAVE_AS Salva il documento corrente in un nome file diverso.

   Il `CDocument::OnFileSaveAs` implementazione Usa lo stesso `CDocument::DoSave` routine dell'helper come `OnFileSave`. Il `OnFileSaveAs` comando viene gestito come ID_FILE_SAVE se i documenti non aveva alcun nome file prima del salvataggio. `COleServerDoc::OnFileSaveAs` implementa la logica per salvare un file di dati documento normale o per salvare un documento del server che rappresenta un oggetto OLE incorporato in un'altra applicazione come file separato.

   Se si personalizza la logica di ID_FILE_SAVE, è probabile che si desideri personalizzare ID_FILE_SAVE_AS in modo analogo o l'operazione di "Salva con nome" potrebbe non essere applicabile al documento. Se non è necessaria, è possibile rimuovere la voce di menu dalla barra dei menu.

- ID_FILE_SAVE_COPY_AS Salva un copia un documento corrente in un nuovo nome.

   Il `COleServerDoc::OnFileSaveCopyAs` implementazione è molto simile a `CDocument::OnFileSaveAs`, ad eccezione del fatto che il documento oggetto non è "connesso" nel file sottostante al termine del salvataggio. Vale a dire, se il documento in memoria è stata "modificato" prima del salvataggio, viene comunque "modificata". Inoltre, questo comando non ha effetto sul nome del percorso o titolo archiviati nel documento.

- ID_FILE_UPDATE notifica al contenitore per salvare un documento incorporato.

   Il `COleServerDoc::OnUpdateDocument` implementazione notifiies semplicemente il contenitore in cui deve essere salvato l'incorporamento. Il contenitore chiama quindi il OLE API appropriate per salvare l'oggetto incorporato.

- ID_FILE_PAGE_SETUP richiama una finestra di dialogo di installazione/layout di pagina specifica dell'applicazione.

   Non è attualmente disponibile alcun standard per questa finestra di dialogo e i framework presenta alcuna implementazione predefinita di questo comando.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_FILE_PRINT_SETUP richiamare la finestra di dialogo Impostazioni di stampa standard.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   Questo comando avvia la finestra di dialogo Stampa standard che consente all'utente di personalizzare la stampante e stampare almeno le impostazioni per questo documento o al massimo tutti i documenti in questa applicazione. È necessario utilizzare il pannello di controllo per modificare le impostazioni della stampante predefinita per l'intero sistema.

   `CWinApp::OnFilePrintSetup` ha un'implementazione molto semplice creare un `CPrintDialog` oggetto e chiamare il `CWinApp::DoPrintDialog` funzione di implementazione. Consente di impostare l'impostazione della stampante dell'applicazione.

   I comuni necessari per la personalizzazione di questo comando sono la possibilità di impostazioni della stampante per ogni documento, che devono essere archiviate con il documento durante il salvataggio. A tale scopo è necessario aggiungere un gestore di mappa dei messaggi nel `CDocument` classe che crea un' `CPrintDialog` dell'oggetto, lo inizializza con gli attributi della stampante appropriate (in genere *hDevMode* e *hDevNames*), chiamare il `CPrintDialog::DoModal`e salvare le impostazioni della stampante modificate. Per un'implementazione affidabile, è opportuno esaminare l'implementazione di `CWinApp::DoPrintDialog` per rilevare gli errori e `CWinApp::UpdatePrinterSelection` per la gestione di impostazioni predefinite ragionevoli e rilevamento delle modifiche a livello di sistema della stampante.

- ID_FILE_PRINT Standard della stampa del documento corrente

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CView`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   Questo comando Stampa il documento corrente o più correttamente, viene avviato il processo di stampa, che implica richiamando la finestra di dialogo Stampa standard e in esecuzione il motore di stampa.

   `CView::OnFilePrint` implementa questo comando e il ciclo di stampa principale. Chiama virtuale `CView::OnPreparePrinting` alla richiesta dell'utente con la finestra di dialogo Stampa. Quindi prepara l'output di controller di dominio a utilizzare la stampante, viene visualizzata la finestra di dialogo di avanzamento stampa (AFX_IDD_PRINTDLG) e invia il `StartDoc` escape alla stampante. `CView::OnFilePrint` contiene inoltre il ciclo di stampa principale orientato alla pagina. Per ogni pagina, viene chiamata virtuale `CView::OnPrepareDC` seguita da un `StartPage` escape e la chiamata virtuale `CView::OnPrint` per la pagina. Al termine, virtuale `CView::OnEndPrinting` viene chiamato, e viene chiusa la finestra di dialogo Stampa di stato di avanzamento.

   L'architettura di stampa di MFC è progettata per associare in molti modi diversi per la stampa e anteprima di stampa. In genere si troveranno i vari `CView` funzioni sottoponibili a override adeguate per eventuali orientato alla pagina le attività di stampa. Solo in caso di un'applicazione che usa la stampante per l'output orientato alle non di pagina, è necessario trovare la necessità di sostituire l'implementazione ID_FILE_PRINT.

- Modalità di anteprima di stampa ID_FILE_PRINT_PREVIEW immettere per il documento corrente.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CView`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CView::OnFilePrintPreview` Avvia la modalità di anteprima di stampa chiamando la funzione helper documentata `CView::DoPrintPreview`. `CView::DoPrintPreview` è il motore principale per il ciclo di anteprima di stampa, proprio come `OnFilePrint` è il motore principale per il ciclo di stampa.

   È possibile personalizzare l'operazione di anteprima di stampa in svariati modi, passando parametri diversi per `DoPrintPreview`. Consultare [30 Nota tecnica](../mfc/tn030-customizing-printing-and-print-preview.md), che illustra alcuni dei dettagli relativi all'anteprima di stampa e come personalizzarlo.

- ID_FILE_MRU_FILE1... FILE16 Un intervallo di ID di comando per il File MRU **elenco**.

   `CWinApp::OnUpdateRecentFileMenu` è un gestore dell'interfaccia utente di comando di aggiornamento che corrisponde a uno degli usi più avanzati del meccanismo di ON_UPDATE_COMMAND_UI. Nella risorsa di menu, è necessario definire solo una singola voce di menu con ID ID_FILE_MRU_FILE1. Tale voce di menu rimane inizialmente disabilitata.

   Come il MRU elenco cresce, menu altro elementi vengono aggiunti all'elenco. Lo standard `CWinApp` implementazione per impostazione predefinita il limite di standard di quattro file utilizzati di recente. È possibile modificare il valore predefinito chiamando `CWinApp::LoadStdProfileSettings` con un valore superiore o inferiore. L'elenco MRU viene archiviato dell'applicazione. File INI. L'elenco viene caricato all'interno dell'applicazione `InitInstance` funzionare se si chiama `LoadStdProfileSettings`e viene salvata alla chiusura dell'applicazione. Il gestore di usati di recente aggiornamento comandi dell'interfaccia utente anche convertirà i percorsi assoluti per i percorsi relativi per la visualizzazione del menu file.

   `CWinApp::OnOpenRecentFile` è il gestore ON_COMMAND che esegue il comando effettivo. Ottiene il nome del file semplicemente dall'elenco dei file più recenti e le chiamate `CWinApp::OpenDocumentFile`, che esegue tutte le operazioni di apertura del file e l'aggiornamento dell'elenco MRU.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_EDIT_CLEAR Cancella la selezione corrente

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando usando `CEdit::Clear`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_CLEAR_ALL Cancella l'intero documento.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando. Vedere l'esempio di esercitazione MFC [SCRIBBLE](../visual-cpp-samples.md) per un esempio di implementazione.

- ID_EDIT_COPY copia la selezione corrente negli Appunti.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che consente di copiare il testo selezionato negli Appunti come CF_TEXT usando `CEdit::Copy`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_CUT Taglia la selezione corrente negli Appunti.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che consente di tagliare il testo attualmente selezionato negli Appunti come CF_TEXT usando `CEdit::Cut`. Il comando è disabilitato se non è stata effettuata alcuna selezione corrente.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_FIND inizia l'operazione di ricerca, viene visualizzata la finestra di dialogo non modale trova.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione di supporto di implementazione `OnEditFindReplace` da usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. Il `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale per chiedere conferma all'utente.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_PASTE inserisce il contenuto degli Appunti corrente.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che copia i dati degli Appunti correnti sostituendo il testo selezionato tramite `CEdit::Paste`. Il comando è disabilitato se è presente alcun **CF_TEXT** negli Appunti.

   `COleClientDoc` fornisce un gestore di aggiornamento comandi dell'interfaccia utente per questo comando. Se gli Appunti non contengono incorporabile elemento o oggetto OLE, il comando verrà disabilitato. Si è responsabili della scrittura il gestore per il comando effettivo per eseguire l'operazione effettiva. Se un'applicazione OLE può incollare anche altri formati, è necessario fornire il proprio gestore dell'interfaccia utente di comando update nella visualizzazione o del documento (ovvero, in un punto prima `COleClientDoc` nel ciclo di destinazione di comando).

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

   Per sostituire l'implementazione di OLE standard, usare `COleClientItem::CanPaste`.

- ID_EDIT_PASTE_LINK inserisce un collegamento dal contenuto degli Appunti corrente.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `COleDocument` fornisce un gestore di aggiornamento comandi dell'interfaccia utente per questo comando. Se gli Appunti non contengono con collegamento elemento o oggetto OLE, il comando verrà disabilitato. Si è responsabili della scrittura il gestore per il comando effettivo per eseguire l'operazione effettiva. Se un'applicazione OLE può incollare anche altri formati, è necessario fornire il proprio gestore dell'interfaccia utente di comando update nella visualizzazione o del documento (ovvero, in un punto prima `COleDocument` nel ciclo di destinazione di comando).

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

   Per sostituire l'implementazione di OLE standard, usare `COleClientItem::CanPasteLink`.

- ID_EDIT_PASTE_SPECIAL inserisce il contenuto degli Appunti corrente con le opzioni.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata. MFC non offre questa finestra di dialogo.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_REPEAT ripete l'ultima operazione.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando per ripetere l'ultima operazione di ricerca. Le variabili di implementazione privata per la ricerca vengono usate. Il comando è disabilitato se non è possibile provare a eseguire una ricerca.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_REPLACE inizia l'operazione di sostituzione, viene visualizzata la finestra di dialogo non modale replace.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione di supporto di implementazione `OnEditFindReplace` da usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. Il `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale che richiede all'utente.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_SELECT_ALL seleziona l'intero documento.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, che seleziona tutto il testo del documento. Il comando è disabilitato se è disponibile alcun testo da selezionare.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_UNDO Annulla l'ultima operazione.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   `CEditView` fornisce un'implementazione di questo comando, usando `CEdit::Undo`. Il comando è disabilitato se `CEdit::CanUndo` restituisce FALSE.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_EDIT_REDO ripete l'ultima operazione.

   Non è attualmente disponibile alcuna implementazione standard per questo comando. Deve essere implementato per ogni `CView`-classe derivata.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_WINDOW_NEW apre un'altra finestra del documento attivo.

   `CMDIFrameWnd::OnWindowNew` implementa questa potente funzionalità usando il modello di documento del documento corrente per creare un altro frame che contiene un'altra visualizzazione del documento corrente.

   Come la maggior parte delle più documenti (MDI) interfaccia comandi del menu finestra, il comando è disabilitato se non è attiva alcuna finestra figlio MDI.

   Personalizzazione di questo gestore di comando non è consigliata. Se si desidera fornire un comando che consente di creare visualizzazioni aggiuntive o finestre cornice, probabilmente sarà preferibile inventare un comando personalizzato. È possibile clonare il codice da `CMDIFrameWnd::OnWindowNew` e modificarla per le specifiche frame e visualizzazione di classi di base alle proprie esigenze.

- ID_WINDOW_ARRANGE dispone le icone nella parte inferiore di una finestra MDI.

   `CMDIFrameWnd` implementa questo comando MDI standard in una funzione helper implementazione `OnMDIWindowCmd`. Questo helper viene eseguito il mapping degli ID di comando per i messaggi di Windows MDI e pertanto può condividere una grande quantità di codice.

   Come la maggior parte dei comandi del menu finestra MDI, il comando è disabilitato se non è attiva alcuna finestra figlio MDI.

   Personalizzazione di questo gestore di comando non è consigliata.

- Windows ID_WINDOW_CASCADE unarie a catena in modo che gli slot si sovrappongono.

   `CMDIFrameWnd` implementa questo comando MDI standard in una funzione helper implementazione `OnMDIWindowCmd`. Questo helper viene eseguito il mapping degli ID di comando per i messaggi di Windows MDI e pertanto può condividere una grande quantità di codice.

   Come la maggior parte dei comandi del menu finestra MDI, il comando è disabilitato se non è attiva alcuna finestra figlio MDI.

   Personalizzazione di questo gestore di comando non è consigliata.

- Windows ID_WINDOW_TILE_HORZ riquadri in senso orizzontale.

   Questo comando viene implementato in `CMDIFrameWnd` Analogamente ID_WINDOW_CASCADE, ad eccezione del fatto un messaggio diverso MDI Windows viene utilizzato per l'operazione.

   È consigliabile scegliere l'orientamento del riquadro predefinito per l'applicazione. È possibile farlo modificando l'ID per la voce di menu "riquadro" finestra ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- Windows ID_WINDOW_TILE_VERT riquadri verticalmente.

   Questo comando viene implementato in `CMDIFrameWnd` Analogamente ID_WINDOW_CASCADE, ad eccezione del fatto un messaggio diverso MDI Windows viene utilizzato per l'operazione.

   È consigliabile scegliere l'orientamento del riquadro predefinito per l'applicazione. È possibile farlo modificando l'ID per la voce di menu "riquadro" finestra ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- Interfaccia ID_WINDOW_SPLIT tastiera per la barra di divisione.

   `CView` gestisce questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::DoKeyboardSplit`. Si inseriranno la barra di divisione in una modalità che consentirà agli utenti della tastiera dividere o annullare la divisione una finestra con separatore.

   Questo comando è disabilitato se la vista non è presente in una barra di divisione.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_APP_ABOUT richiama la finestra di dialogo About.

   Non vi è alcuna implementazione standard per la finestra informazioni su un'applicazione. Creare una classe di finestra di dialogo personalizzata per l'applicazione e l'applicazione predefinita creata dalla creazione guidata applicazioni verrà utilizzato come la finestra informazioni su. La creazione guidata applicazione scriverà anche il gestore del comando semplice che gestisce il comando e richiama la finestra di dialogo.

   Si implementeranno quasi sempre questo comando.

- ID_APP_EXIT uscire dall'applicazione.

   `CWinApp::OnAppExit` gestisce il comando inviando un messaggio WM_CLOSE da finestra principale dell'applicazione. Lo standard in corso l'arresto dell'applicazione (richiesta di conferma per file modificati e così via) viene gestito dal `CFrameWnd` implementazione.

   Personalizzazione di questo gestore di comando non è consigliata. Si esegue l'override `CWinApp::SaveAllModified` o il `CFrameWnd` la logica di chiusura è consigliata.

   Se si sceglie di implementare questo comando, è consigliabile che usare questo ID di comando.

- ID_HELP_INDEX Elenca aiutare gli argomenti da. File HLP.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnHelpIndex` gestisce il comando chiamando facilmente `CWinApp::WinHelp`.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_HELP_USING Visualizza la Guida su come usare la Guida.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnHelpUsing` gestisce il comando chiamando facilmente `CWinApp::WinHelp`.

   Personalizzazione di questo gestore di comando non è consigliata.

- Modalità Guida rapida ID_CONTEXT_HELP immette MAIUSC-F1.

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnContextHelp` gestisce il comando impostando il cursore di modalità della Guida, immettendo un ciclo modale e in attesa all'utente di selezionare una finestra per visualizzare la Guida relativa. Consultare [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per altri dettagli sull'implementazione della Guida MFC.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_HELP offre utili nel contesto corrente

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   `CWinApp::OnHelp` gestisce il comando recuperando il contesto della Guida corretta per il contesto dell'applicazione corrente. Gestisce semplice della Guida F1, aiutare nelle finestre di messaggio e così via. Consultare [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per altre informazioni su MFC ti implementazione.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_DEFAULT_HELP Visualizza la Guida predefinito per il contesto

    > [!NOTE]
    >  È necessario connettere questa opzione per il `CWinApp`-derivato mappa messaggi della classe per abilitare questa funzionalità.

   Questo comando è in genere mappato a `CWinApp::OnHelpIndex`.

   Se non si desidera una distinzione tra predefinito della Guida in linea e l'indice della Guida, è possibile specificare un gestore di comandi diversi.

- ID_NEXT_PANE passa al riquadro successivo

   `CView` gestisce questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::OnNextPaneCmd`. Verrà spostata la visualizzazione attiva al riquadro successivo nella barra di divisione.

   Questo comando è disabilitato se la vista non è presente in una barra di divisione o non esiste alcun riquadro successivo su cui spostarsi.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_PREV_PANE passa al riquadro precedente.

   `CView` gestisce questo comando per il `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::OnNextPaneCmd`. Verrà spostata la visualizzazione attiva al riquadro precedente nella barra di divisione.

   Questo comando è disabilitato se la vista non è presente in una barra di divisione o non esiste alcun riquadro per passare al precedente.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_OLE_INSERT_NEW inserisce un nuovo oggetto OLE

   Non è attualmente disponibile alcuna implementazione standard per questo comando. È necessario implementare questa operazione per il `CView`-derivata per inserire un nuovo elemento o oggetto OLE in corrispondenza della selezione corrente.

   Tutte le applicazioni client OLE devono implementare questo comando. La creazione guidata applicazione, con l'opzione OLE, verrà creata un'implementazione di base `OnInsertObject` nella classe di visualizzazione che devono essere completate.

   Vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) esempio per un'implementazione completa di questo comando.

- ID_OLE_EDIT_LINKS Modifica collegamenti OLE

   `COleDocument` Questo comando viene gestito utilizzando l'implementazione fornita da MFC della finestra di dialogo collegamenti OLE standard. L'implementazione di questa finestra di dialogo è accessibile tramite il `COleLinksDialog` classe. Se il documento corrente non contiene tutti i collegamenti, il comando è disabilitato.

   Personalizzazione di questo gestore di comando non è consigliata.

- ID_OLE_VERB_FIRST... ULTIMO intervallo di ID per i verbi OLE

   `COleDocument` Usa questo intervallo di ID di comando per i verbi supportati dall'oggetto attualmente selezionato OLE elemento /. Deve trattarsi di un intervallo perché un determinato tipo di elemento o oggetto OLE può supportare zero o più verbi personalizzati. Nel menu dell'applicazione, è necessario disporre di una voce di menu con l'ID di ID_OLE_VERB_FIRST. Quando viene eseguito il programma, il menu di scelta verrà aggiornato con la descrizione del verbo menu appropriato (o dal menu a comparsa includono verbi consentono molte). La gestione del menu OLE viene gestita da `AfxOleSetEditMenu`, eseguita nel gestore dell'interfaccia utente di comando di aggiornamento per questo comando.

   Esistono gestori comando espliciti per gestisce ognuno dell'ID di comando in questo intervallo. `COleDocument::OnCmdMsg` sottoposta a override per intercettare tutti gli ID di comando in questo intervallo, trasformarle in numeri in base zero di verbo e avviare il server per il verbo (usando `COleClientItem::DoVerb`).

   Personalizzazione o altro utilizzo di questo intervallo di ID di comando non è consigliato.

- ID_VIEW_TOOLBAR Attiva/Disattiva barra degli strumenti di accensione e spegnimento

   `CFrameWnd` gestisce il comando e il gestore di comando di aggiornamento dell'interfaccia utente per attivare o disattivare lo stato di visualizzazione della barra degli strumenti. Barra degli strumenti deve essere una finestra del frame di finestra secondaria dell'ID di AFX_IDW_TOOLBAR. Il gestore comando effettivamente attiva o disattiva la visibilità della finestra degli strumenti. `CFrameWnd::RecalcLayout` viene usato per ridisegnare la finestra cornice con la barra degli strumenti nello stato nuovo. Il gestore dell'interfaccia utente di comando di aggiornamento verifica la voce di menu quando la barra degli strumenti è visibile.

   Personalizzazione di questo gestore di comando non è consigliata. Se si desidera aggiungere altre barre degli strumenti, è consigliabile clonare e modificare il gestore del comando e il gestore di comando di aggiornamento dell'interfaccia utente per questo comando.

- ID_VIEW_STATUS_BAR Attiva/Disattiva barra di stato accensione e spegnimento

   Questo comando viene implementato in `CFrameWnd` Analogamente ID_VIEW_TOOLBAR, ad eccezione di una finestra figlio diverso ID (AFX_IDW_STATUS_BAR) viene usato.

## <a name="update-only-command-handlers"></a>Gestori comando Update-Only

Diversi ID di comando standard vengono utilizzate come indicatori di barre di stato. Questi usare la stessa interfaccia utente di comando di aggiornamento meccanismo di gestione per visualizzare lo stato corrente di visual durante il tempo di inattività dell'applicazione. Poiché non possono essere selezionati dall'utente (vale a dire, è possibile effettuare il push un riquadro barra di stato), quindi non ha senso disporre di un gestore ON_COMMAND per questi ID di comando.

- ID_INDICATOR_CAPS: Indicatore di blocco di limite di utilizzo.

- ID_INDICATOR_NUM: Indicatore lock NUM.

- ID_INDICATOR_SCRL: Indicatore del blocco BLOC SCORR.

- ID_INDICATOR_KANA : KANA bloccare indicatore (applicabile solo ai sistemi giapponesi).

Tutte e tre questi vengono implementati in `CFrameWnd::OnUpdateKeyIndicator`, un helper di implementazione che usa l'ID di comando per eseguire il mapping alla chiave virtuale appropriato. Un'implementazione comune Abilita o disabilita (per i riquadri di stati disabilitati non = Nessun testo) il `CCmdUI` oggetti a seconda del fatto che la chiave virtuale appropriata è attualmente bloccata.

Personalizzazione di questo gestore di comando non è consigliata.

- ID_INDICATOR_EXT: Indicatore di selezione estesa.

- ID_INDICATOR_OVR : Indicatore di sovrascrittura.

- ID_INDICATOR_REC: Indicatore di registrazione.

Non è attualmente disponibile alcuna implementazione standard per questi indicatori.

Se si sceglie di implementare questi indicatori, è consigliabile usare questi ID di indicatore e mantenere l'ordine degli indicatori nella barra di stato (vale a dire, nell'ordine indicato: EXT, CAP, NUM, SCRL, OVR, REC).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
