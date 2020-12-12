---
description: 'Altre informazioni su: TN022: implementazione di comandi standard'
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
ms.openlocfilehash: 7c8540dcf0e41e5f6d5f00a4f22568c4df0fcdbe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215807"
---
# <a name="tn022-standard-commands-implementation"></a>TN022: implementazione di comandi standard

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive le implementazioni del comando standard fornite da MFC 2,0. Leggere prima la [Nota tecnica 21](../mfc/tn021-command-and-message-routing.md) perché descrive i meccanismi usati per implementare molti dei comandi standard.

Questa descrizione presuppone la conoscenza delle architetture MFC, delle API e delle procedure di programmazione comuni. Sono descritte le API "solo implementazione" documentate e non documentate. Questo non è un punto di partenza per acquisire familiarità con le funzionalità di o come programmare in MFC. Per informazioni più generali e per informazioni dettagliate sulle API documentate, vedere Visual C++.

## <a name="the-problem"></a>Problema

MFC definisce molti ID di comando standard nel file di intestazione AFXRES. H. Il supporto del Framework per questi comandi varia. Comprendere dove e in che modo le classi del Framework gestiscono questi comandi non solo mostreranno il funzionamento interno del Framework, ma forniranno informazioni utili su come personalizzare le implementazioni standard e apprendere alcune tecniche per l'implementazione dei propri gestori di comandi.

## <a name="contents-of-this-technical-note"></a>Contenuto della presente nota tecnica

Ogni ID di comando viene descritto in due sezioni:

- Titolo: il nome simbolico dell'ID comando (ad esempio, ID_FILE_SAVE) seguito dallo scopo del comando (ad esempio, "Salva il documento corrente") separato da due punti.

- Uno o più paragrafi che descrivono quali classi implementano il comando e l'implementazione predefinita

La maggior parte delle implementazioni di comandi predefinite è precablata nella mappa messaggi della classe base del Framework. Sono disponibili alcune implementazioni dei comandi che richiedono un cablaggio esplicito nella classe derivata. Questi sono descritti in "nota". Se si scelgono le opzioni corrette in creazione guidata applicazioni, questi gestori predefiniti verranno connessi automaticamente nell'applicazione Skeleton generata.

## <a name="naming-convention"></a>Convenzione di denominazione

I comandi standard seguono una semplice convenzione di denominazione che è consigliabile usare, se possibile. La maggior parte dei comandi standard si trova in posizioni standard nella barra dei menu di un'applicazione. Il nome simbolico del comando inizia con "ID_" seguito dal nome del menu di scelta rapida standard, seguito dal nome della voce di menu. Il nome simbolico è in maiuscolo con le interruzioni di parola del carattere di sottolineatura. Per i comandi che non hanno nomi di voci di menu standard, viene definito un nome di comando logico che inizia con "ID_", ad esempio ID_NEXT_PANE.

Il prefisso "ID_" viene usato per indicare i comandi progettati per essere associati a voci di menu, pulsanti della barra degli strumenti o altri oggetti dell'interfaccia utente del comando. I gestori di comandi che gestiscono i comandi "ID_" devono usare i meccanismi ON_COMMAND e ON_UPDATE_COMMAND_UI dell'architettura del comando MFC.

Si consiglia di usare il prefisso "IDM_" standard per le voci di menu che non seguono l'architettura del comando e richiedono codice specifico del menu per abilitarli e disabilitarli. Naturalmente, il numero di comandi specifici del menu dovrebbe essere ridotto, in quanto dopo l'architettura del comando MFC non solo i gestori di comandi sono più potenti, perché funzionano con le barre degli strumenti, ma rende il codice del gestore del comando riutilizzabile.

## <a name="id-ranges"></a>Intervalli ID

Per ulteriori informazioni sull'utilizzo degli intervalli di ID in MFC, vedere la [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) .

I comandi standard MFC rientrino nell'intervallo compreso tra 0xE000 e 0xEFFF. Non fare affidamento sui valori specifici di questi ID perché sono soggetti a modifiche nelle versioni future della libreria.

L'applicazione deve definire i comandi nell'intervallo da 0x8000 a 0xDFFF.

## <a name="standard-command-ids"></a>ID di comando standard

Per ogni ID di comando è presente una stringa di richiesta di riga di messaggio standard che è possibile trovare nei PROMPT dei file. RC. L'ID di stringa per la richiesta di menu deve essere uguale a quello per l'ID di comando.

- ID_FILE_NEW crea un documento nuovo/vuoto.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnFileNew` implementa questo comando in modo diverso a seconda del numero di modelli di documento nell'applicazione. Se ne esiste solo uno `CDocTemplate` , creerà `CWinApp::OnFileNew` un nuovo documento di tale tipo, oltre alla classe frame e visualizzazione corretta.

   Se ne sono presenti più di uno, richiederà `CDocTemplate` `CWinApp::OnFileNew` all'utente una finestra di dialogo (AFX_IDD_NEWTYPEDLG) che consente di selezionare il tipo di documento da usare. L'oggetto selezionato `CDocTemplate` viene utilizzato per creare il documento.

   Una personalizzazione comune di ID_FILE_NEW consiste nel fornire una scelta grafica e diversa per i tipi di documento. In questo caso è possibile implementare il proprio `CMyApp::OnFileNew` e inserirlo nella mappa messaggi anziché `CWinApp::OnFileNew` . Non è necessario chiamare l'implementazione della classe di base.

   Un'altra personalizzazione comune di ID_FILE_NEW consiste nel fornire un comando separato per la creazione di un documento di ogni tipo. In questo caso è necessario definire nuovi ID comando, ad esempio ID_FILE_NEW_CHART e ID_FILE_NEW_SHEET.

- ID_FILE_OPEN apre un documento esistente.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnFileOpen` dispone di un'implementazione molto semplice della chiamata `CWinApp::DoPromptFileName` a seguita da `CWinApp::OpenDocumentFile` con il nome del file o del percorso del file da aprire. La `CWinApp` routine di implementazione `DoPromptFileName` Visualizza la finestra di dialogo standard di FileOpen e la compila con le estensioni di file ottenute dai modelli di documento correnti.

   Una personalizzazione comune di ID_FILE_OPEN consiste nel personalizzare la finestra di dialogo FileOpen o aggiungere altri filtri di file. Il metodo consigliato per personalizzare questa operazione consiste nel sostituire l'implementazione predefinita con la finestra di dialogo FileOpen e chiamare `CWinApp::OpenDocumentFile` con il nome del file o del percorso del documento. Non è necessario chiamare la classe di base.

- ID_FILE_CLOSE chiude il documento attualmente aperto.

   `CDocument::OnFileClose` chiama `CDocument::SaveModified` per richiedere all'utente di salvare il documento se è stato modificato, quindi chiama `OnCloseDocument` . Tutta la logica di chiusura, inclusa la distruzione del documento, viene eseguita nella `OnCloseDocument` routine.

    > [!NOTE]
    >  ID_FILE_CLOSE agisce in modo diverso da un messaggio di WM_CLOSE o da un comando di sistema SC_CLOSE inviato alla finestra cornice documenti. Chiudendo una finestra si chiuderà il documento solo se si tratta dell'ultima finestra cornice che mostra il documento. Chiudendo il documento con ID_FILE_CLOSE non solo si chiude il documento ma si chiuderanno tutte le finestre cornice che visualizzano il documento.

- ID_FILE_SAVE salva il documento corrente.

   L'implementazione utilizza una routine di supporto `CDocument::DoSave` che viene utilizzata sia per che per `OnFileSave` `OnFileSaveAs` . Se si salva un documento che non è stato salvato in precedenza (ovvero, non ha un nome di percorso, come nel caso di FileNew) o che è stato letto da un documento di sola lettura, la `OnFileSave` logica fungerà da ID_FILE_SAVE_AS comando e chiederà all'utente di specificare un nuovo nome file. Il processo effettivo di apertura del file e di salvataggio viene eseguito tramite la funzione virtuale `OnSaveDocument` .

   Esistono due motivi comuni per personalizzare ID_FILE_SAVE. Per i documenti che non vengono salvati, è sufficiente rimuovere le voci di menu ID_FILE_SAVE e i pulsanti della barra degli strumenti dall'interfaccia utente. Assicurarsi inoltre che il documento non venga mai modificato (ovvero non chiamare mai `CDocument::SetModifiedFlag` ) e il Framework non provocherà mai il salvataggio del documento. Per i documenti che si salvano in un altro posto rispetto a un file su disco, definire un nuovo comando per l'operazione.

   Nel caso di un `COleServerDoc` , ID_FILE_SAVE viene usato sia per il salvataggio di file (per i documenti normali) che per l'aggiornamento dei file (per i documenti incorporati).

   Se i dati del documento sono archiviati in singoli file su disco, ma non si vuole usare l' `CDocument` implementazione di serializzazione predefinita, è necessario eseguire l'override `CDocument::OnSaveDocument` di anziché di `OnFileSave` .

- ID_FILE_SAVE_AS Salva il documento corrente con un nome file diverso.

   L' `CDocument::OnFileSaveAs` implementazione di usa la stessa `CDocument::DoSave` routine di supporto di `OnFileSave` . Il `OnFileSaveAs` comando viene gestito esattamente come ID_FILE_SAVE se i documenti non hanno un nome di file prima del salvataggio. `COleServerDoc::OnFileSaveAs` implementa la logica per salvare un file di dati del documento normale o per salvare un documento server che rappresenta un oggetto OLE incorporato in un'altra applicazione come file separato.

   Se si Personalizza la logica di ID_FILE_SAVE, è probabile che si desideri personalizzare ID_FILE_SAVE_AS in modo analogo o che l'operazione di "Salva con nome" potrebbe non essere applicabile al documento. Se non è necessario, è possibile rimuovere la voce di menu dalla barra dei menu.

- ID_FILE_SAVE_COPY_AS salva un documento di copia corrente con un nuovo nome.

   L' `COleServerDoc::OnFileSaveCopyAs` implementazione è molto simile a `CDocument::OnFileSaveAs` , ad eccezione del fatto che l'oggetto documento non è "collegato" al file sottostante dopo il salvataggio. Ovvero, se il documento in memoria è stato "modificato" prima del salvataggio, è ancora "modificato". Inoltre, questo comando non ha alcun effetto sul nome del percorso o sul titolo archiviato nel documento.

- ID_FILE_UPDATE notifica al contenitore di salvare un documento incorporato.

   L' `COleServerDoc::OnUpdateDocument` implementazione notifiies semplicemente il contenitore in cui deve essere salvato l'incorporamento. Il contenitore chiama quindi le API OLE appropriate per salvare l'oggetto incorporato.

- ID_FILE_PAGE_SETUP richiama una finestra di dialogo di configurazione/layout della pagina specifica dell'applicazione.

   Attualmente non è disponibile alcun standard per questa finestra di dialogo e il Framework non dispone di un'implementazione predefinita di questo comando.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_FILE_PRINT_SETUP richiamare la finestra di dialogo di installazione di stampa standard.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   Questo comando richiama la finestra di dialogo di installazione di stampa standard che consente all'utente di personalizzare la stampante e le impostazioni di stampa per almeno questo documento o al massimo tutti i documenti dell'applicazione. È necessario utilizzare il pannello di controllo per modificare le impostazioni predefinite della stampante per l'intero sistema.

   `CWinApp::OnFilePrintSetup` dispone di un'implementazione molto semplice per la creazione di un `CPrintDialog` oggetto e la chiamata della `CWinApp::DoPrintDialog` funzione di implementazione. Questa operazione consente di impostare la stampante predefinita per l'applicazione.

   La necessità comune di personalizzare questo comando consiste nel consentire le impostazioni della stampante per documento, che devono essere archiviate con il documento al momento del salvataggio. A tale scopo, è necessario aggiungere un gestore della mappa messaggi nella `CDocument` classe che crea un `CPrintDialog` oggetto, inizializzarlo con gli attributi della stampante appropriati (in genere *hDevMode* e *hDevNames*), chiamare `CPrintDialog::DoModal` e salvare le impostazioni della stampante modificate. Per un'implementazione affidabile, è necessario esaminare l'implementazione di `CWinApp::DoPrintDialog` per rilevare gli errori e `CWinApp::UpdatePrinterSelection` per gestire le impostazioni predefinite ragionevoli e tenere traccia delle modifiche della stampante a livello di sistema.

- ID_FILE_PRINT stampa standard del documento corrente

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CView` mappa messaggi della classe derivata da.

   Questo comando stampa il documento corrente o più correttamente, avvia il processo di stampa, che richiede la chiamata della finestra di dialogo stampa standard e l'esecuzione del motore di stampa.

   `CView::OnFilePrint` implementa questo comando e il ciclo di stampa principale. Chiama il virtuale `CView::OnPreparePrinting` per richiedere all'utente la finestra di dialogo Stampa. Prepara quindi il controller di dominio di output per accedere alla stampante, Visualizza la finestra di dialogo dello stato di stampa (AFX_IDD_PRINTDLG) e invia l' `StartDoc` escape alla stampante. `CView::OnFilePrint` contiene inoltre il ciclo di stampa principale orientato alla pagina. Per ogni pagina, chiama il virtuale `CView::OnPrepareDC` seguito da un carattere di `StartPage` escape e chiamando il virtuale `CView::OnPrint` per la pagina. Al termine, viene chiamato il metodo virtuale `CView::OnEndPrinting` e la finestra di dialogo stato di stampa viene chiusa.

   L'architettura di stampa MFC è progettata per l'hook in molti modi diversi per la stampa e l'anteprima di stampa. In genere si trovano le varie `CView` funzioni sottoponibili a override appropriate per tutte le attività di stampa orientate alle pagine. Solo nel caso di un'applicazione che usa la stampante per l'output non orientato alle pagine, è necessario sostituire l'implementazione del ID_FILE_PRINT.

- ID_FILE_PRINT_PREVIEW immettere la modalità di anteprima di stampa per il documento corrente.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CView` mappa messaggi della classe derivata da.

   `CView::OnFilePrintPreview` avvia la modalità di anteprima di stampa chiamando la funzione di supporto documentata `CView::DoPrintPreview` . `CView::DoPrintPreview` è il motore principale del ciclo di anteprima di stampa, così come `OnFilePrint` il motore principale per il ciclo di stampa.

   L'operazione di anteprima di stampa può essere personalizzata in diversi modi passando parametri diversi a `DoPrintPreview` . Consultare la [Nota tecnica 30](../mfc/tn030-customizing-printing-and-print-preview.md), che illustra alcuni dettagli dell'anteprima di stampa e come personalizzarlo.

- ID_FILE_MRU_FILE1... FILE16 un intervallo di ID di comando per l' **elenco** di file MRU.

   `CWinApp::OnUpdateRecentFileMenu` è un gestore dell'interfaccia utente del comando di aggiornamento che è uno degli usi più avanzati del meccanismo di ON_UPDATE_COMMAND_UI. Nella risorsa di menu è necessario definire solo una singola voce di menu con ID ID_FILE_MRU_FILE1. Questa voce di menu rimane inizialmente disabilitata.

   Man mano che l'elenco MRU cresce, vengono aggiunte altre voci di menu all'elenco. `CWinApp`Per impostazione predefinita, l'implementazione standard è il limite standard dei quattro file usati più di recente. È possibile modificare l'impostazione predefinita chiamando `CWinApp::LoadStdProfileSettings` con un valore più grande o più piccolo. L'elenco MRU viene archiviato nell'applicazione. File INI. L'elenco viene caricato nella funzione dell'applicazione `InitInstance` se si chiama `LoadStdProfileSettings` e viene salvato quando l'applicazione viene chiusa. Il gestore dell'interfaccia utente del comando di aggiornamento MRU convertirà inoltre i percorsi assoluti in percorsi relativi per la visualizzazione nel menu file.

   `CWinApp::OnOpenRecentFile` è il gestore ON_COMMAND che esegue il comando effettivo. Ottiene semplicemente il nome file dall'elenco MRU e chiama `CWinApp::OpenDocumentFile` , che consente di aprire il file e aggiornare l'elenco MRU.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_EDIT_CLEAR Cancella la selezione corrente

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando utilizzando `CEdit::Clear` . Se non è presente alcuna selezione corrente, il comando è disabilitato.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_CLEAR_ALL cancella l'intero documento.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando. Per un'implementazione di esempio, vedere [l'esempio di](../overview/visual-cpp-samples.md) esercitazione MFC.

- ID_EDIT_COPY copia la selezione corrente negli Appunti.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che copia il testo attualmente selezionato negli Appunti come CF_TEXT utilizzando `CEdit::Copy` . Se non è presente alcuna selezione corrente, il comando è disabilitato.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_CUT taglia la selezione corrente negli Appunti.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che taglia il testo attualmente selezionato negli Appunti come CF_TEXT utilizzando `CEdit::Cut` . Se non è presente alcuna selezione corrente, il comando è disabilitato.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_FIND avvia l'operazione di ricerca, Visualizza la finestra di dialogo di ricerca non modale.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione helper di implementazione `OnEditFindReplace` per usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. La `CFindReplaceDialog` classe viene usata per gestire la finestra di dialogo non modale per chiedere conferma all'utente.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_PASTE inserisce il contenuto degli appunti corrente.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che copia i dati degli Appunti correnti sostituendo il testo selezionato usando `CEdit::Paste` . Il comando è disabilitato se non è presente alcuna **CF_TEXT** negli Appunti.

   `COleClientDoc` fornisce solo un gestore dell'interfaccia utente del comando Update per questo comando. Se gli Appunti non contengono un oggetto/elemento OLE incorporabile, il comando verrà disabilitato. L'utente è responsabile della scrittura del gestore del comando effettivo per eseguire l'operazione di incollamento effettivo. Se l'applicazione OLE può anche incollare altri formati, è necessario fornire il proprio gestore dell'interfaccia utente del comando di aggiornamento nella vista o nel documento (ovvero, in un punto qualsiasi prima `COleClientDoc` nel routing della destinazione del comando).

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

   Per la sostituzione dell'implementazione OLE standard, utilizzare `COleClientItem::CanPaste` .

- ID_EDIT_PASTE_LINK inserisce un collegamento dal contenuto degli appunti corrente.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `COleDocument` fornisce solo un gestore dell'interfaccia utente del comando Update per questo comando. Se gli Appunti non contengono elementi OLE o oggetti collegabili, il comando verrà disabilitato. L'utente è responsabile della scrittura del gestore del comando effettivo per eseguire l'operazione di incollamento effettivo. Se l'applicazione OLE può anche incollare altri formati, è necessario fornire il proprio gestore dell'interfaccia utente del comando di aggiornamento nella vista o nel documento (ovvero, in un punto qualsiasi prima `COleDocument` nel routing della destinazione del comando).

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

   Per la sostituzione dell'implementazione OLE standard, utilizzare `COleClientItem::CanPasteLink` .

- ID_EDIT_PASTE_SPECIAL inserisce il contenuto degli appunti corrente con le opzioni.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da. MFC non fornisce questa finestra di dialogo.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_REPEAT ripete l'ultima operazione.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando per ripetere l'ultima operazione di ricerca. Vengono utilizzate le variabili di implementazione privata per l'ultima ricerca. Il comando è disabilitato se non è possibile tentare una ricerca.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_REPLACE avvia l'operazione di sostituzione, Visualizza la finestra di dialogo Sostituisci non modale.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione helper di implementazione `OnEditFindReplace` per usare e archiviare le impostazioni di ricerca/sostituzione precedenti nelle variabili di implementazione privata. La `CFindReplaceDialog` classe viene utilizzata per gestire la finestra di dialogo non modale che richiede all'utente.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_SELECT_ALL seleziona l'intero documento.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, che seleziona tutto il testo nel documento. Se non è presente alcun testo da selezionare, il comando è disabilitato.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_UNDO Annulla l'ultima operazione.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   `CEditView` fornisce un'implementazione di questo comando, usando `CEdit::Undo` . Il comando è disabilitato se `CEdit::CanUndo` restituisce false.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_EDIT_REDO esegue nuovamente l'ultima operazione.

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo per ogni `CView` classe derivata da.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_WINDOW_NEW apre un'altra finestra nel documento attivo.

   `CMDIFrameWnd::OnWindowNew` implementa questa potente funzionalità usando il modello di documento del documento corrente per creare un altro frame contenente un'altra visualizzazione del documento corrente.

   Come la maggior parte dei comandi del menu della finestra interfaccia a documenti multipli (MDI), il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   Non è consigliabile personalizzare questo gestore di comandi. Se si desidera fornire un comando per la creazione di visualizzazioni aggiuntive o finestre cornice, probabilmente sarà meglio inventare il proprio comando. È possibile clonare il codice da `CMDIFrameWnd::OnWindowNew` e modificarlo nel frame specifico e visualizzare le classi di propria preferenza.

- ID_WINDOW_ARRANGE dispone le icone nella parte inferiore di una finestra MDI.

   `CMDIFrameWnd` implementa questo comando MDI standard in una funzione helper di implementazione `OnMDIWindowCmd` . Questo helper esegue il mapping degli ID comando ai messaggi di Windows MDI e pertanto può condividere una grande quantità di codice.

   Come la maggior parte dei comandi di menu della finestra MDI, il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_WINDOW_CASCADE le finestre a cascata in modo che si sovrappongano.

   `CMDIFrameWnd` implementa questo comando MDI standard in una funzione helper di implementazione `OnMDIWindowCmd` . Questo helper esegue il mapping degli ID comando ai messaggi di Windows MDI e pertanto può condividere una grande quantità di codice.

   Come la maggior parte dei comandi di menu della finestra MDI, il comando è disabilitato se non è presente alcuna finestra figlio MDI attiva.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_WINDOW_TILE_HORZ le finestre riquadri orizzontalmente.

   Questo comando viene implementato in `CMDIFrameWnd` proprio come ID_WINDOW_CASCADE, ad eccezione del fatto che per l'operazione viene usato un messaggio di Windows MDI diverso.

   È necessario selezionare l'orientamento predefinito del riquadro per l'applicazione. Questa operazione può essere eseguita modificando l'ID della voce di menu "Tile" della finestra in ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- ID_WINDOW_TILE_VERT le finestre riquadri verticalmente.

   Questo comando viene implementato in `CMDIFrameWnd` proprio come ID_WINDOW_CASCADE, ad eccezione del fatto che per l'operazione viene usato un messaggio di Windows MDI diverso.

   È necessario selezionare l'orientamento predefinito del riquadro per l'applicazione. Questa operazione può essere eseguita modificando l'ID della voce di menu "Tile" della finestra in ID_WINDOW_TILE_HORZ o ID_WINDOW_TILE_VERT.

- ID_WINDOW_SPLIT interfaccia della tastiera per la barra di divisione.

   `CView` gestisce questo comando per l' `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::DoKeyboardSplit` . In questo modo la barra di divisione viene posizionata in una modalità che consente agli utenti della tastiera di dividere o separare una finestra con separatore.

   Questo comando è disabilitato se la vista non si trova in una barra di divisione.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_APP_ABOUT richiama la finestra di dialogo informazioni su.

   Non è disponibile alcuna implementazione standard per la finestra informazioni su un'applicazione. L'applicazione predefinita creata da Creazione guidata applicazioni creerà una classe di finestre di dialogo personalizzate per l'applicazione e la utilizzerà come casella informazioni su. Creazione guidata applicazioni scriverà anche il gestore di comandi Trivial che gestisce il comando e richiama la finestra di dialogo.

   Il comando verrà implementato quasi sempre.

- ID_APP_EXIT uscire dall'applicazione.

   `CWinApp::OnAppExit` gestisce questo comando inviando un messaggio di WM_CLOSE alla finestra principale dell'applicazione. L'arresto standard dell'applicazione (richiesta di file Dirty e così via) viene gestito dall' `CFrameWnd` implementazione di.

   Non è consigliabile personalizzare questo gestore di comandi. `CWinApp::SaveAllModified`È consigliabile eseguire l'override di o la `CFrameWnd` logica di chiusura.

   Se si sceglie di implementare questo comando, si consiglia di usare questo ID di comando.

- ID_HELP_INDEX elenca gli argomenti della guida da. File HLP.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnHelpIndex` gestisce questo comando eseguendo una chiamata Trivial `CWinApp::WinHelp` .

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_HELP_USING Visualizza la guida su come utilizzare la Guida di.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnHelpUsing` gestisce questo comando eseguendo una chiamata Trivial `CWinApp::WinHelp` .

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_CONTEXT_HELP viene attivata la modalità della Guida SHIFT-F1.

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnContextHelp` gestisce questo comando impostando il cursore in modalità guida, immettendo un ciclo modale e attendendo che l'utente selezioni una finestra per ottenere la guida. Per ulteriori informazioni sull'implementazione della guida MFC, fare riferimento alla [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) .

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_HELP fornisce informazioni sul contesto corrente

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   `CWinApp::OnHelp` gestisce questo comando ottenendo il contesto della Guida corretto per il contesto dell'applicazione corrente. Questo consente di gestire la semplice guida sensibile al contesto, le finestre di messaggio e così via. Per ulteriori informazioni sull'implementazione della guida MFC, fare riferimento alla [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) .

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_DEFAULT_HELP Visualizza la guida predefinita per il contesto

    > [!NOTE]
    >  Per abilitare questa funzionalità, è necessario connettersi alla `CWinApp` mappa messaggi della classe derivata da.

   Questo comando viene in genere mappato a `CWinApp::OnHelpIndex` .

   È possibile specificare un gestore di comando diverso se è necessaria una distinzione tra la guida predefinita e l'indice della guida.

- ID_NEXT_PANE passa al riquadro successivo

   `CView` gestisce questo comando per l' `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::OnNextPaneCmd` . In questo modo la visualizzazione attiva viene spostata nel riquadro successivo della barra di divisione.

   Questo comando è disabilitato se la vista non si trova in una barra di divisione o non è presente alcun riquadro successivo a cui passare.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_PREV_PANE passare al riquadro precedente

   `CView` gestisce questo comando per l' `CSplitterWnd` implementazione. Se la vista fa parte di una finestra con separatore, questo comando delegherà alla funzione di implementazione `CSplitterWnd::OnNextPaneCmd` . Questa operazione sposterà la visualizzazione attiva nel riquadro precedente della barra di divisione.

   Questo comando è disabilitato se la vista non si trova in una barra di divisione o non è presente alcun riquadro precedente a cui passare.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_OLE_INSERT_NEW inserisce un nuovo oggetto OLE

   Attualmente non sono disponibili implementazioni standard per questo comando. È necessario implementare questo oggetto affinché la `CView` classe derivata da inserisca un nuovo elemento/oggetto OLE in corrispondenza della selezione corrente.

   Tutte le applicazioni client OLE devono implementare questo comando. Creazione guidata applicazioni, con l'opzione OLE, creerà un'implementazione Skeleton di `OnInsertObject` nella classe di visualizzazione che sarà necessario completare.

   Per un'implementazione completa di questo comando, vedere l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) .

- ID_OLE_EDIT_LINKS modifica i collegamenti OLE

   `COleDocument` gestisce questo comando usando l'implementazione fornita da MFC della finestra di dialogo dei collegamenti OLE standard. È possibile accedere all'implementazione di questa finestra di dialogo tramite la `COleLinksDialog` classe. Se il documento corrente non contiene alcun collegamento, il comando è disabilitato.

   Non è consigliabile personalizzare questo gestore di comandi.

- ID_OLE_VERB_FIRST... ULTIMO intervallo ID per verbi OLE

   `COleDocument` utilizza questo intervallo di ID comando per i verbi supportati dall'elemento/oggetto OLE attualmente selezionato. Deve trattarsi di un intervallo poiché un determinato tipo elemento/oggetto OLE può supportare zero o più verbi personalizzati. Nel menu dell'applicazione dovrebbe essere presente una voce di menu con l'ID ID_OLE_VERB_FIRST. Quando il programma viene eseguito, il menu viene aggiornato con la descrizione del verbo di menu appropriata (o menu a comparsa con molti verbi). La gestione del menu OLE viene gestita da `AfxOleSetEditMenu` , eseguita nel gestore dell'interfaccia utente del comando Update per questo comando.

   Non sono disponibili gestori di comandi espliciti per la gestione di ogni ID di comando in questo intervallo. `COleDocument::OnCmdMsg` viene sottoposto a override per intercettare tutti gli ID di comando in questo intervallo, trasformarli in numeri di verbi in base zero e avviare il server per il verbo (usando `COleClientItem::DoVerb` ).

   Non è consigliabile personalizzare o usare questo intervallo di ID di comando.

- ID_VIEW_TOOLBAR attiva o disattiva la barra degli strumenti

   `CFrameWnd` gestisce questo comando e il gestore dell'interfaccia utente Update-Command per impostare lo stato visibile della barra degli strumenti. La barra degli strumenti deve essere una finestra figlio del frame con ID finestra figlio di AFX_IDW_TOOLBAR. Il gestore di comandi consente di disabilitare la visibilità della finestra della barra degli strumenti. `CFrameWnd::RecalcLayout` viene utilizzato per ricreare la finestra cornice con la barra degli strumenti nello stato nuovo. Il gestore dell'interfaccia utente di Update-Command controlla la voce di menu quando la barra degli strumenti è visibile.

   Non è consigliabile personalizzare questo gestore di comandi. Se si desidera aggiungere altre barre degli strumenti, è possibile clonare e modificare il gestore dei comandi e il gestore dell'interfaccia utente Update-Command per questo comando.

- ID_VIEW_STATUS_BAR attiva o disattiva la barra di stato

   Questo comando viene implementato in `CFrameWnd` proprio come ID_VIEW_TOOLBAR, ad eccezione del fatto che viene utilizzato un ID di finestra figlio diverso (AFX_IDW_STATUS_BAR).

## <a name="update-only-command-handlers"></a>Gestori di comandi di Update-Only

Diversi ID di comando standard vengono usati come indicatori nelle barre di stato. Questi utilizzano lo stesso meccanismo di gestione dell'interfaccia utente di Update-Command per visualizzare lo stato di visualizzazione corrente durante il tempo di inattività dell'applicazione. Poiché non possono essere selezionati dall'utente, ovvero non è possibile eseguire il push di un riquadro della barra di stato, non è sensato avere un gestore ON_COMMAND per questi ID comando.

- ID_INDICATOR_CAPS: indicatore di blocco CAP.

- ID_INDICATOR_NUM: NUM indicatore di blocco.

- ID_INDICATOR_SCRL: indicatore di blocco BLOC SCORR.

- ID_INDICATOR_KANA: indicatore di blocco KANA (applicabile solo ai sistemi giapponesi).

Tutte e tre sono implementate in `CFrameWnd::OnUpdateKeyIndicator` , un helper di implementazione che usa l'ID di comando per eseguire il mapping alla chiave virtuale appropriata. Un'implementazione comune Abilita o Disabilita (per i riquadri di stato disabilitato = nessun testo) l' `CCmdUI` oggetto a seconda che la chiave virtuale appropriata sia attualmente bloccata.

Non è consigliabile personalizzare questo gestore di comandi.

- ID_INDICATOR_EXT: indicatore Extended Select.

- ID_INDICATOR_OVR: indicatore di sovrascrittura.

- ID_INDICATOR_REC: indicatore di registrazione.

Attualmente non sono disponibili implementazioni standard per questi indicatori.

Se si sceglie di implementare questi indicatori, si consiglia di usare questi ID indicatore e di mantenere l'ordine degli indicatori nella barra di stato (ovvero, in questo ordine: EXT, CAP, NUM, BLOC SCORR, OVR, REC).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
