---
title: "TN022: implementazione di comandi standard | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.commands"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi, standard"
  - "ID_APP_ABOUT (comando)"
  - "ID_APP_EXIT (comando)"
  - "ID_CONTEXT_HELP (comando)"
  - "ID_DEFAULT_HELP (comando)"
  - "ID_EDIT_CLEAR (comando)"
  - "ID_EDIT_CLEAR_ALL (comando)"
  - "ID_EDIT_COPY (comando)"
  - "ID_EDIT_CUT (comando)"
  - "ID_EDIT_FIND (comando)"
  - "ID_EDIT_PASTE (comando)"
  - "ID_EDIT_PASTE_LINK (comando)"
  - "ID_EDIT_PASTE_SPECIAL (comando)"
  - "ID_EDIT_REDO (comando)"
  - "ID_EDIT_REPEAT (comando)"
  - "ID_EDIT_REPLACE (comando)"
  - "ID_EDIT_SELECT_ALL (comando)"
  - "ID_EDIT_UNDO (comando)"
  - "ID_FILE_CLOSE (comando)"
  - "ID_FILE_NEW (comando)"
  - "ID_FILE_OPEN (comando)"
  - "ID_FILE_PAGE_SETUP (comando)"
  - "ID_FILE_PRINT (comando)"
  - "ID_FILE_PRINT_PREVIEW (comando)"
  - "ID_FILE_PRINT_SETUP (comando)"
  - "ID_FILE_SAVE (comando)"
  - "ID_FILE_SAVE_AS (comando)"
  - "ID_FILE_SAVE_COPY_AS (comando)"
  - "ID_FILE_UPDATE (comando)"
  - "ID_HELP (comando)"
  - "ID_HELP_INDEX (comando)"
  - "ID_HELP_USING (comando)"
  - "ID_INDICATOR_CAPS (comando)"
  - "ID_INDICATOR_EXT (comando)"
  - "ID_INDICATOR_KANA (comando)"
  - "ID_INDICATOR_NUM (comando)"
  - "ID_INDICATOR_OVR (comando)"
  - "ID_INDICATOR_REC (comando)"
  - "ID_INDICATOR_SCRL (comando)"
  - "ID_NEXT_PANE (comando)"
  - "ID_OLE_EDIT_LINKS (comando)"
  - "ID_OLE_INSERT_NEW (comando)"
  - "ID_OLE_VERB_FIRST (comando)"
  - "ID_PREV_PANE (comando)"
  - "ID_VIEW_STATUS_BAR (comando)"
  - "ID_VIEW_TOOLBAR (comando)"
  - "ID_WINDOW_ARRANGE (comando)"
  - "ID_WINDOW_CASCADE (comando)"
  - "ID_WINDOW_NEW (comando)"
  - "ID_WINDOW_SPLIT (comando)"
  - "ID_WINDOW_TILE_HORZ (comando)"
  - "ID_WINDOW_TILE_VERT (comando)"
  - "comandi standard"
  - "TN022"
ms.assetid: a7883b46-23f7-4870-ac3a-804aed9258b5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN022: implementazione di comandi standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota vengono descritte le implementazioni di comando standard fornite da MFC 2,0.  Leggere [Nota tecnica 21](../mfc/tn021-command-and-message-routing.md) per prima in quanto vengono descritti i meccanismi utilizzati per implementare molti dei controlli standard.  
  
 Questa descrizione si presuppone la conoscenza delle architetture MFC, API e di norma di programmazione corrente.  "Le API indicate nonché non documentati di implementazione solo" vengono descritti.  Questo non è un strumento per imparare a utilizzare le funzionalità o della programmazione in MFC.  Fare riferimento a Visual C\+\+ per ulteriori informazioni generali e per i dettagli di API indicate.  
  
## Il problema  
 MFC definisce molti ID di comando standard nel file di intestazione. AFXRES.H.  Il supporto di Framework a tali controlli varia.  Comprendere dove e le classi del framework gestisce questi controlli non solo viene illustrato come il framework funziona internamente ma fornite le informazioni utili su come personalizzare le implementazioni standard e insegnargli alcune tecniche per implementare gestori comandi.  
  
## Contenuto di questa nota tecnica  
 Ogni ID comando è descritto in due sezioni:  
  
-   Il titolo: il nome simbolico ID di comando, ad esempio **ID\_FILE\_SAVE**\) seguito dallo scopo di comando, ad esempio "salvare il documento corrente"\) separato da due punti.  
  
-   Descrizione di uno o più paragrafi quali classi implementano il comando e quali l'implementazione predefinita fa  
  
 La maggior parte delle implementazioni predefinite dei comandi sono prewired della mappa messaggi della classe base del framework.  Esistono alcune implementazioni di comandi che richiedono collegamenti espliciti nella classe derivata.  Questi sono descritti nella sezione delle note".  Se si sceglie corrette le opzioni in AppWizard, questi gestori predefiniti vengono collegate automaticamente nello scheletro di applicazione generato.  
  
## Convenzione di denominazione  
 I controlli standard seguono una convenzione di denominazione semplice che è consigliabile utilizzare se possibile.  La maggior parte dei controlli standard si trovano in posizioni standard nella barra dei menu di un'applicazione.  Il nome simbolico di comando inizia con "ID\_" seguito dal nome standard del menu di scelta rapida, seguito dal nome della voce di menu.  Il nome simbolico è in lettere maiuscole viene riportata a capo automaticamente con le interruzioni di sottolineatura.  Per i controlli che non dispongono di standard la voce di menu di denominazione, un nome del comando logico è avviare definito con "ID\_", ad esempio **ID\_NEXT\_PANE**\).  
  
 Utilizzare il prefisso "ID\_\) per indicare i controlli progettati per essere associati alle voci di menu, ai pulsanti della barra degli strumenti, o a un altro oggetto dell'interfaccia utente del comando.  I gestori controlli che gestiscono i controlli "di ID\_" devono utilizzare `ON_COMMAND` e i meccanismi di `ON_UPDATE_COMMAND_UI` di MFC comando architettura.  
  
 È consigliabile utilizzare il prefisso standard "IDM\_" per le voci di menu che non seguono l'architettura di comando e non necessitano di codice menu\- specifico di abilitarle e disabilitare.  Naturalmente il numero di controlli specifici del menu deve essere ridotto da seguire il comando di MFC l'architettura non solo dei gestori comandi più importanti poiché funzioneranno con le barre degli strumenti\) ma che rende il codice del gestore comando riutilizzabile.  
  
## Intervalli ID.  
 In alternativa fare riferimento a [Nota tecnica 20](../mfc/tn020-id-naming-and-numbering-conventions.md) per ulteriori informazioni sull'utilizzo degli intervalli di ID in MFC.  
  
 I controlli standard MFC incorrono nell'intervallo 0xE000 a 0xEFFF.  Non utilizzare nei valori specifici di questi ID poiché sono soggette a modifiche nelle versioni future della libreria.  
  
 L'applicazione deve definire i controlli nell'intervallo 0x8000 a 0xDFFF.  
  
## ID di comando standard  
 Per ogni ID di comando, è una stringa di richiesta standard della riga del messaggio che si trova nel file PROMPTS.RC.  ID stringa per la richiesta di menu deve essere uguale all'ID di comando  
  
-   ID\_FILE\_NEW crea un nuovo\/svuotato il documento.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnFileNew` implementa questo comando in modo diverso a seconda del numero dei modelli di documento nell'applicazione.  Se è presente solo un `CDocTemplate`, `CWinApp::OnFileNew` creerà un nuovo documento di quel tipo e la classe di visualizzazione corretta e frame.  
  
     Se c'è più di un `CDocTemplate`, `CWinApp::OnFileNew` richiederàutente una finestra di dialogo \(**AFX\_IDD\_NEWTYPEDLG**\) che li possibile selezionare il tipo di documento da utilizzare.  `CDocTemplate` selezionato viene utilizzato per creare il documento.  
  
     Una personalizzazione più comune di `ID_FILE_NEW` è fornire una scelta diverso e più grafica dei tipi di documento.  In questo caso è possibile implementare il proprio **CMyApp::OnFileNew** e inserirlo nella mappa messaggi anziché `CWinApp::OnFileNew`.  Non è necessario chiamare l'implementazione della classe base.  
  
     Un'altra personalizzazione comuni di `ID_FILE_NEW` è fornire a un comando separato per creare un documento di ogni tipo.  In questo caso è necessario definire nuovi ID di comando, ad esempio ID\_FILE\_NEW\_CHART e ID\_FILE\_NEW\_SHEET.  
  
-   ID\_FILE\_OPEN apre un documento esistente.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnFileOpen` dispone di un'implementazione molto semplice per chiamare **CWinApp::DoPromptFileName** seguito da `CWinApp::OpenDocumentFile` con il file o il nome del percorso del file da aprire.  L'implementazione **DoPromptFileName** della routine `CWinApp` richiamare la finestra di dialogo e riempimenti standard FileOpen a estensioni di file ottenute dai modelli di documento corrente.  
  
     Una personalizzazione più comune di `ID_FILE_OPEN` è la personalizzazione della finestra di dialogo FileOpen o di aggiungere filtri di file aggiuntivi.  La modalità consigliata personalizzare questo consente di sostituire l'implementazione predefinita con la propria finestra di dialogo FileOpen e la chiamata `CWinApp::OpenDocumentFile` con il file o il nome del percorso del documento.  Non è necessario chiamare la classe base.  
  
-   ID\_FILE\_CLOSE chiude attualmente il documento aperto.  
  
     **CDocument::OnFileClose** chiama `CDocument::SaveModified` dell'utente di salvare il documento se è stato modificato e quindi chiamare `OnCloseDocument`.  Tutta la logica di chiusura, inclusi eliminare il documento, viene effettuata nella routine di `OnCloseDocument`.  
  
    > [!NOTE]
    >  **ID\_FILE\_CLOSE** agisce in modo diverso da un messaggio di `WM_CLOSE` o da un comando di sistema di **SC\_CLOSE** inviato alla finestra cornice del documento.  Chiudere una finestra chiudere il documento solo se tale è l'ultima finestra cornice del documento.  Chiudere il documento con **ID\_FILE\_CLOSE** non solo chiudere il documento verso il basso ma chiudere tutte le finestre cornici che illustrano il documento.  
  
-   ID\_FILE\_SAVE salva il documento corrente.  
  
     L'implementazione utilizza un helper **CDocument::DoSave** di routine utilizzato sia per **OnFileSave** che **OnFileSaveAs**.  Se si salva un documento di cui non è stato salvato prima ovvero non si dispone di un pathname, come nel caso di FileNew\) o di cui è stato letto da un documento di sola lettura, la logica di **OnFileSave** interviene del comando di **ID\_FILE\_SAVE\_AS** e chiede all'utente di immettere un nuovo nome file.  Il processo effettivo di aprire il file ed eseguire il salvataggio viene ottenuto mediante la funzione virtuale `OnSaveDocument`.  
  
     Esistono due motivi comuni personalizzare **ID\_FILE\_SAVE**.  Per i documenti che non salvataggio, è sufficiente rimuovere le voci di menu e pulsanti della barra degli strumenti di **ID\_FILE\_SAVE** dall'interfaccia utente.  Assicurarsi inoltre che mai modificato il documento \(ovvero non chiama mai `CDocument::SetModifiedFlag`\) e il framework non viene mai il documento venga salvato.  Per i documenti che il salvataggio in un percorso diverso da quello di un file su disco, definire un nuovo comando di tale operazione.  
  
     Nel caso di `COleServerDoc`, **ID\_FILE\_SAVE** viene utilizzato sia per i salvataggio file \(per i documenti normali\) dell'aggiornamento del file \(per i documenti incorporati\).  
  
     Se i dati del documento vengono archiviati in singoli file su disco, ma non si desidera utilizzare **CDocument** predefinito serializzate l'implementazione, è necessario eseguire l'override di `CDocument::OnSaveDocument` anziché **OnFileSave**.  
  
-   ID\_FILE\_SAVE\_AS salva il documento corrente con un altro nome.  
  
     L'implementazione di **CDocument::OnFileSaveAs** utilizza la stessa routine di supporto di **CDocument::DoSave** di **OnFileSave**.  Il comando di **OnFileSaveAs** viene gestito come **ID\_FILE\_SAVE** se i documenti non dispongono di nome file prima del salvataggio.  **COleServerDoc::OnFileSaveAs** implementa la logica per salvare un file di dati di documento normale o per salvare un documento server che rappresenta un oggetto OLE incorporato in un'altra applicazione come file separato.  
  
     Se si personalizza la logica di **ID\_FILE\_SAVE**, è possibile personalizzare **ID\_FILE\_SAVE\_AS** in modo simile o "l'operazione di salvataggio come" impossibile applicare al documento.  È possibile rimuovere la voce di menu sulla barra dei menu se non è necessario.  
  
-   ID\_FILE\_SAVE\_COPY\_AS salva un documento corrente della copia con un nuovo nome.  
  
     L'implementazione di **COleServerDoc::OnFileSaveCopyAs** è molto simile a **CDocument::OnFileSaveAs**, con la differenza che l'oggetto documento non è "connesso" nel file sottostante dopo salva.  Ciò significa che se il documento in memoria "è stato modificato" prima che salva, ancora "non vengano modificati."  Inoltre, questo comando non influisce sul nome del tracciato o un titolo archiviato nel documento.  
  
-   ID\_FILE\_UPDATE notifica al contenitore per salvare un documento incorporato.  
  
     Di `COleServerDoc::OnUpdateDocument` di implementazione i notifiies semplicemente il contenitore che l'incorporamento deve essere salvato.  Il contenitore quindi chiama API OLE appropriati per salvare l'oggetto incorporato.  
  
-   ID\_FILE\_PAGE\_SETUP richiama una finestra di dialogo specifica dell'applicazione e l'impostazione di layout di pagina.  
  
     Attualmente non esiste standard per questa finestra di dialogo e il framework non dispone di implementazione predefinita di questo comando.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   Fare clic ID\_FILE\_PRINT\_SETUP la finestra di dialogo standard di installazione di stampa.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     Questo comando richiama la finestra di dialogo standard di impostazione di stampa che consente all'utente di personalizzare le impostazioni di stampa e della stampante per almeno questo documento o al massimo tutti i documenti nell'applicazione.  È necessario utilizzare il Pannello di controllo per modificare le impostazioni della stampante predefinita per l'intero sistema.  
  
     `CWinApp::OnFilePrintSetup` dispone di un'implementazione molto semplice che consente di creare un oggetto `CPrintDialog` e che chiama la funzione di implementazione di **CWinApp::DoPrintDialog**.  Ciò consente di impostare il valore della stampante predefinita dell'applicazione.  
  
     La necessità comune di personalizzare questo comando è di consentire le impostazioni della stampante per il singolo documento, che devono essere archiviate con il documento una volta salvato.  Per eseguire questa operazione che è necessario aggiungere un gestore della mappa messaggi nella classe di **CDocument** che consente di creare un oggetto `CPrintDialog`, viene inizializzato con gli attributi appropriati della stampante \(in genere **hDevMode** e **hDevNames**\), chiamate **CPrintDialog::DoModal,** e salvare le impostazioni della stampante modificate.  Per un'implementazione efficiente, è necessario esaminare l'implementazione di **CWinApp::DoPrintDialog** per rilevare gli errori e **CWinApp::UpdatePrinterSelection** per gestire le impostazioni predefinite alle modifiche e a livello di sistema printer di verifica.  
  
-   Stampa standard di ID\_FILE\_PRINT il documento corrente  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CView`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     Questo comando stampa il documento corrente, o più correttamente, viene avviato il processo di stampa, che include richiamare la finestra di dialogo e l'esecuzione standard di stampa il motore di stampa.  
  
     **CView::OnFilePrint** implementa questo comando e il ciclo principale di stampa.  Chiama `CView::OnPreparePrinting` virtuale della richiesta dell'utente mediante la finestra di dialogo stampa.  Scegliere prepara il controller di dominio di output per passare alla stampante, richiamare la finestra di dialogo stato di stampa \(**AFX\_IDD\_PRINTDLG**\) e invia la `StartDoc` escape della stampante.  **CView::OnFilePrint** contiene anche il ciclo orientato alla pagina principale di stampa.  Per ogni pagina, chiamare `CView::OnPrepareDC` virtuale seguito da una esecuzione di `StartPage` e dalla chiamata a `CView::OnPrint` virtuale per la pagina.  Al termine, `CView::OnEndPrinting` virtuale viene chiamato e la finestra di dialogo stato di stampa è chiusa.  
  
     L'architettura di stampa MFC è progettata per agganciare in molti modi diversi di stampa e anteprima di stampa.  In genere vengono fornite le varie funzioni sottoponibili a override di `CView` appropriate per tutte le attività a orientate a pagina di stampa.  Solo nel caso di un'applicazione che utilizza la stampante non di pagina è orientato l'output, se viene trovata la necessità di sostituire l'implementazione di **ID\_FILE\_PRINT**.  
  
-   ID\_FILE\_PRINT\_PREVIEW entrano in modalità anteprima di stampa del documento corrente.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CView`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     **CView::OnFilePrintPreview** inizia la modalità anteprima di stampa chiamando la funzione di supporto documentata **CView::DoPrintPreview**.  **CView::DoPrintPreview** dal motore principale del ciclo di anteprima di stampa, così come **OnFilePrint** dal motore principale del ciclo di stampa.  
  
     L'operazione di anteprima di stampa può essere personalizzata in diversi modi passaggio di parametri diversi a **DoPrintPreview**.  In alternativa fare riferimento a [Nota tecnica 30](../mfc/tn030-customizing-printing-and-print-preview.md), che vengono illustrati alcuni dei dettagli dell'anteprima di stampa e come personalizzarlo.  
  
-   Intervallo di**ID\_FILE\_MRU\_FILE1**...**FILE16** Agli ID di comando per il file utilizzato più di recente `list`.  
  
     **CWinApp::OnUpdateRecentFileMenu** è un gestore dell'interfaccia utente del comando di aggiornamento che è uno degli scopi più avanzati del meccanismo di `ON_UPDATE_COMMAND_UI`.  Nella risorsa menu, è sufficiente definire una sola voce di menu con ID **ID\_FILE\_MRU\_FILE1**.  Che la voce di menu inizialmente rimane disabilitato.  
  
     Quando l'elenco utilizzati di recente aumenta, più voci di menu vengono aggiunti all'elenco.  Le impostazioni predefinite di implementazione di `CWinApp` standard al limite standard dei quattro file utilizzati di recente.  È possibile modificare l'impostazione predefinita chiamando `CWinApp::LoadStdProfileSettings` con un valore più grande o valore più piccolo.  L'elenco utilizzati di recente viene memorizzato nel file di .INI dell'applicazione.  L'elenco viene caricato nella funzione di `InitInstance` dell'applicazione se si chiama `LoadStdProfileSettings` e salvato quando l'applicazione viene chiuso.  Il gestore dell'interfaccia utente del comando di aggiornamento utilizzati di recente anche convertirà i percorsi assoluti in percorsi relativi di visualizzazione dal menu File.  
  
     **CWinApp::OnOpenRecentFile** è il gestore di `ON_COMMAND` che esegue effettivamente comando.  Ottiene semplicemente il nome file dall'elenco utilizzati di recente e chiama `CWinApp::OpenDocumentFile`, che esegue tutte le operazioni di apertura del file e di aggiornare l'elenco utilizzati di recente.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_EDIT\_CLEAR annullata la selezione corrente  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando utilizzando `CEdit::Clear`.  Il comando è disabilitato in assenza di selezione corrente.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_CLEAR\_ALL rimuovere l'intero documento.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  Vedere a MFC l'implementazione dell'esercitazione di [SCRIBBLE](../top/visual-cpp-samples.md) di esempio per un esempio.  
  
-   ID\_EDIT\_COPY copia la selezione corrente negli Appunti.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, che copia il testo selezionato negli Appunti come CF\_TEXT utilizzando `CEdit::Copy`.  Il comando è disabilitato in assenza di selezione corrente.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_CUT taglia la selezione corrente negli Appunti.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, che consente di tagliare il testo selezionato negli Appunti come CF\_TEXT utilizzando `CEdit::Cut`.  Il comando è disabilitato in assenza di selezione corrente.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_FIND inizia l'operazione di ricerca, richiamare la finestra di dialogo non modale trova.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione di supporto **OnEditFindReplace** di implementazione per utilizzare e archiviare trova precedente\/impostazioni di sostituzione nelle variabili private di implementazione.  La classe di `CFindReplaceDialog` viene utilizzato per mantenere la finestra di dialogo non modale per richiedere all'utente.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_PASTE l'inserimento del ripristino degli Appunti.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, ossia copiare i dati degli Appunti correnti che sostituiscono il testo selezionato tramite `CEdit::Paste`.  Il comando è disabilitato se non esiste **CF\_TEXT** negli Appunti.  
  
     **COleClientDoc** fornisce solo un gestore dell'interfaccia utente del comando di aggiornamento per questo comando.  Se gli Appunti non contengono un elemento OLE\/oggetto integrabili, il comando sarà disabilitato.  È responsabile della scrittura di un gestore dell'effettivo comando venga effettivo inserire.  Se l'applicazione OLE può inoltre inserire altri formati, è necessario fornire al gestore dell'interfaccia utente del comando di aggiornamento nel punto di vista o documento \(ovvero posizionato prima di **COleClientDoc** nel routing di destinazione comando\).  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
     Per la sostituzione dell'implementazione OLE standard, utilizzare `COleClientItem::CanPaste`.  
  
-   ID\_EDIT\_PASTE\_LINK inserisce un collegamento dal ripristino degli Appunti.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `COleDocument` fornisce solo un gestore dell'interfaccia utente del comando di aggiornamento per questo comando.  Se gli Appunti contengono non l'elemento OLE\/oggetto collegabili, il comando sarà disabilitato.  È responsabile della scrittura di un gestore dell'effettivo comando venga effettivo inserire.  Se l'applicazione OLE può inoltre inserire altri formati, è necessario fornire al gestore dell'interfaccia utente del comando di aggiornamento nel punto di vista o documento \(ovvero posizionato prima di `COleDocument` nel routing di destinazione comando\).  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
     Per la sostituzione dell'implementazione OLE standard, utilizzare `COleClientItem::CanPasteLink`.  
  
-   ID\_EDIT\_PASTE\_SPECIAL l'inserimento del ripristino degli Appunti con opzioni.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  MFC non fornisce la finestra di dialogo.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_REPEAT ripetere l'ultima operazione.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando ripetere l'ultima operazione di ricerca.  Le variabili private di implementazione per l'ultimo ricerca vengono utilizzate.  Il comando è disabilitato se un'operazione cerca non sia tentato.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_REPLACE inizia l'operazione di sostituzione, richiamare la finestra di dialogo trova e sostituisci non modale.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, che chiama la funzione di supporto **OnEditFindReplace** di implementazione per utilizzare e archiviare trova precedente\/impostazioni di sostituzione nelle variabili private di implementazione.  La classe di `CFindReplaceDialog` viene utilizzato per mantenere la finestra di dialogo non modale che richiede all'utente.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_SELECT\_ALL selezionare l'intero documento.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, che seleziona tutto il testo nel documento.  Il comando è disabilitato se non è presente alcun testo da selezionare.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_UNDO annullare l'ultima operazione.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     `CEditView` fornisce un'implementazione di questo comando, utilizzando `CEdit::Undo`.  Il comando è disabilitato se `CEdit::CanUndo` restituisce FALSE.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_EDIT\_REDO ripetere l'ultima operazione.  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per ogni `CView`\- classe derivata.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_WINDOW\_NEW visualizzata un'altra finestra del documento attivo.  
  
     **CMDIFrameWnd::OnWindowNew** implementa questa caratteristica efficace tramite il modello del documento del documento corrente per creare un altro frame contenente un'altra visualizzazione del documento corrente.  
  
     Come la maggior parte dei comandi del menu finestra di multiple\-document interface \(MDI\), il comando viene disabilitato se non è disponibile alcuna finestra figlio MDI.  
  
     La personalizzazione del gestore comando non è consigliata.  Se si desidera fornire un comando che consente di creare visualizzazioni aggiuntive o le finestre, probabilmente sarà più ricco inventando il proprio comando.  È possibile usare il codice da **CMDIFrameWnd::OnWindowNew** e modificarlo al frame specifico e classi di visualizzazione del progettare.  
  
-   ID\_WINDOW\_ARRANGE le icone nella parte inferiore di una finestra MDI.  
  
     `CMDIFrameWnd` implementa questo comando standard MDI in una funzione di supporto **OnMDIWindowCmd**di implementazione.  Tale helper esegue il mapping degli ID di comandi per i messaggi delle finestre MDI e può quindi condividere molto codice.  
  
     Come la maggior parte dei comandi del menu finestra MDI, il comando viene disabilitato se non è disponibile alcuna finestra figlio MDI.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_WINDOW\_CASCADE sovrappone alle finestre in modo da si sovrappongono.  
  
     `CMDIFrameWnd` implementa questo comando standard MDI in una funzione di supporto **OnMDIWindowCmd**di implementazione.  Tale helper esegue il mapping degli ID di comandi per i messaggi delle finestre MDI e può quindi condividere molto codice.  
  
     Come la maggior parte dei comandi del menu finestra MDI, il comando viene disabilitato se non è disponibile alcuna finestra figlio MDI.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   Affiancare le finestre di ID\_WINDOW\_TILE\_HORZ orizzontalmente.  
  
     Questo comando è implementato in `CMDIFrameWnd` come **ID\_WINDOW\_CASCADE**, a meno che un messaggio diverso delle finestre MDI verrà utilizzata per l'operazione.  
  
     È necessario selezionare l'orientamento predefinito della sezione per l'applicazione.  Questo è possibile modificare l'id della voce di menu "section" della finestra da **ID\_WINDOW\_TILE\_HORZ** o a **ID\_WINDOW\_TILE\_VERT**.  
  
-   Affiancare le finestre di ID\_WINDOW\_TILE\_VERT verticalmente.  
  
     Questo comando è implementato in `CMDIFrameWnd` come **ID\_WINDOW\_CASCADE**, a meno che un messaggio diverso delle finestre MDI verrà utilizzata per l'operazione.  
  
     È necessario selezionare l'orientamento predefinito della sezione per l'applicazione.  Questo è possibile modificare l'id della voce di menu "section" della finestra da **ID\_WINDOW\_TILE\_HORZ** o a **ID\_WINDOW\_TILE\_VERT**.  
  
-   Interfaccia di tastiera di ID\_WINDOW\_SPLIT al separatore.  
  
     `CView` gestisce questo comando per l'implementazione di `CSplitterWnd`.  Se la visualizzazione fa parte di una finestra con separatore, questo comando delegherà la funzione `CSplitterWnd::DoKeyboardSplit`di implementazione.  Questo sarà la barra di divisione in una modalità che consenta agli utenti della tastiera a div o a unsplit una finestra con separatore.  
  
     Questo comando è disabilitato se la visualizzazione non è in una barra di divisione.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_APP\_ABOUT richiama la finestra di dialogo informazioni su.  
  
     Non esiste alcuna implementazione standard per un'applicazione sulla casella degli strumenti.  L'applicazione creata AppWizard\- predefinita creerà una classe personalizzata della finestra di dialogo dell'applicazione e si utilizzerà come sulla casella degli strumenti.  AppWizard si scriverà il gestore comando semplice che gestisce questo comando e richiama la finestra di dialogo.  
  
     Verrà implementato quasi sempre questo comando.  
  
-   Uscita di ID\_APP\_EXIT l'applicazione.  
  
     **CWinApp::OnAppExit** gestisce questo comando inviando un messaggio di `WM_CLOSE` alla finestra principale dell'applicazione.  L'arresto standard dell'applicazione \(obbligatorio per i file modificati e così via\) viene gestita dall'implementazione di `CFrameWnd`.  
  
     La personalizzazione del gestore comando non è consigliata.  Eseguire l'override `CWinApp::SaveAllModified` o `CFrameWnd` che consente di chiudere la logica è consigliato.  
  
     Se si decide di implementare questo comando, è consigliabile utilizzare questa ID di comando  
  
-   ID\_HELP\_INDEX vengono elencati gli argomenti della Guida dal file di .HLP.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnHelpIndex` gestisce questo comando in modo semplice chiamando `CWinApp::WinHelp`.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   Le visualizzazioni di ID\_HELP\_USING consentono sul relativo utilizzo.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnHelpUsing` gestisce questo comando in modo semplice chiamando `CWinApp::WinHelp`.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_CONTEXT\_HELP attiva la modalità guida SHIFT\-F1.  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnContextHelp` gestisce questo comando impostandone il cursore di modalità guida, fornendo un ciclo modale e dell'utente di selezionare una finestra per visualizzare le informazioni della guida in precedenza.  In alternativa fare riferimento a [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni sull'implementazione della guida MFC.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   Vengono fornite ID\_HELP aiuto nel contesto corrente  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     `CWinApp::OnHelp` gestisce questo comando ottenendo l'operando di contesto della guida del contesto dell'applicazione corrente.  In questo modo la Guida online semplice, guida sulle finestre di messaggio e così via.  In alternativa fare riferimento a [Nota tecnica 28](../mfc/tn028-context-sensitive-help-support.md) per ulteriori informazioni sull'implementazione della guida MFC.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   Guida di impostazione predefinita le visualizzazioni di ID\_DEFAULT\_HELP per il contesto  
  
    > [!NOTE]
    >  Questo è necessario connettersi al `CWinApp`\- la mappa messaggi della classe derivata per abilitare questa funzionalità.  
  
     Questo comando in genere mappato a `CWinApp::OnHelpIndex`.  
  
     Un gestore comando diverso è possibile fornire se una distinzione tra guida predefinita e l'indice della guida è desiderata.  
  
-   ID\_NEXT\_PANE passa al riquadro successivo  
  
     `CView` gestisce questo comando per l'implementazione di `CSplitterWnd`.  Se la visualizzazione fa parte di una finestra con separatore, questo comando delegherà la funzione **CSplitterWnd::OnNextPaneCmd**di implementazione.  Si sposterà la visualizzazione attiva nel riquadro successivo nella barra di divisione.  
  
     Questo comando è disabilitato se la visualizzazione non si trova in un separatore o non esiste riquadro successivo su cui spostarsi.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_PREV\_PANE passa al riquadro precedente  
  
     `CView` gestisce questo comando per l'implementazione di `CSplitterWnd`.  Se la visualizzazione fa parte di una finestra con separatore, questo comando delegherà la funzione **CSplitterWnd::OnNextPaneCmd**di implementazione.  Si sposterà la visualizzazione attiva nel riquadro precedente nella barra di divisione.  
  
     Questo comando è disabilitato se la visualizzazione non si trova in un separatore o non esiste riquadro precedente su cui spostarsi.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_OLE\_INSERT\_NEW inserisce un nuovo oggetto OLE  
  
     Attualmente non è un'implementazione standard per questo comando.  È necessario implementare questo per il `CView`\- classe derivata per inserire un nuovo elemento OLE\/oggetto alla selezione corrente.  
  
     Tutte le applicazioni client OLE devono implementare questo comando.  AppWizard, con l'opzione OLE, viene creata una struttura di implementazioni di **OnInsertObject** nella classe di visualizzazione che è necessario completare.  
  
     Vedere l'esempio di [OCLIENT](../top/visual-cpp-samples.md) di OLE MFC per l'implementazione completa del comando.  
  
-   ID\_OLE\_EDIT\_LINKS modifica i collegamenti OLE  
  
     `COleDocument` gestisce questo comando utilizzando MFC fornisce l'implementazione della finestra di dialogo OLE standard di collegamenti.  L'implementazione di questa finestra di dialogo si accede tramite la classe di `COleLinksDialog`.  Se il documento corrente non contiene alcun collegamenti, il comando è disabilitato.  
  
     La personalizzazione del gestore comando non è consigliata.  
  
-   ID\_OLE\_VERB\_FIRST... ULTIMO un intervallo di ID per i verbi OLE  
  
     `COleDocument` utilizza questo intervallo di ID di comando per i verbi supportati dall'elemento OLE\/oggetto attualmente selezionato.  Deve trattarsi di un intervallo come elemento OLE\/tipo di oggetto specificati può supportare zero o più verbi personalizzati.  Nel menu dell'applicazione, è necessario avere una voce di menu con l'id di **ID\_OLE\_VERB\_FIRST**.  Quando il programma viene eseguito, il menu verrà aggiornato con la descrizione appropriata del verbo di menu \(o il menu di scelta rapida ai verbi\).  La gestione del menu OLE è gestita da `AfxOleSetEditMenu`, effettuata nel gestore dell'interfaccia utente del comando di aggiornamento per questo comando.  
  
     Non esistono gestori comandi espliciti per gestire ogni ID di comando in questo intervallo.  **COleDocument::OnCmdMsg** a override per intercettare tutti gli ID di comando in questo intervallo, trasformarli nei numeri in base zero del verbo e per avviare il server per il verbo \(utilizzando `COleClientItem::DoVerb`\).  
  
     La personalizzazione o un altro utilizzo di questo intervallo di ID di comando non è consigliata.  
  
-   ID\_VIEW\_TOOLBAR passa la barra degli strumenti e disattivare  
  
     `CFrameWnd` gestisce questo comando e il gestore dell'interfaccia utente di aggiornamento\- comando passare lo stato visibile della barra degli strumenti.  La barra degli strumenti deve essere una finestra figlio del frame con la finestra figlio ID di `AFX_IDW_TOOLBAR`.  Il gestore comando effettivamente passa la visibilità della barra degli strumenti.  `CFrameWnd::RecalcLayout` viene utilizzato per ridisegnare la finestra cornice con la barra degli strumenti nel nuovo stato.  Il gestore dell'interfaccia utente di aggiornamento\- comando controlla la voce di menu nella barra degli strumenti è visibile.  
  
     La personalizzazione del gestore comando non è consigliata.  Se si desidera aggiungere le barre degli strumenti aggiuntive, sarà necessario duplicare e modificare il gestore comando e il gestore dell'interfaccia utente di aggiornamento\- comando per il comando.  
  
-   ID\_VIEW\_STATUS\_BAR passa la barra di stato e disattivare  
  
     Questo comando è implementato in `CFrameWnd` come **ID\_VIEW\_TOOLBAR**, a meno che una finestra figlio diverso ID \(**AFX\_IDW\_STATUS\_BAR**\) venga utilizzata.  
  
## Gestori dei comandi solo aggiornamento  
 Vari ID di comando standard vengono utilizzati come indicatori di barre di stato.  Questi utilizzano la stessa interfaccia utente di aggiornamento\- comando che gestisce il meccanismo per visualizzare lo stato di visualizzazione corrente durante il periodo di inattività di applicazione.  Poiché non possono essere selezionati dall'utente ovvero non è possibile inserire un riquadro della barra di stato\), non è opportuno utilizzare un gestore di `ON_COMMAND` per questi ID di comando.  
  
-   **ID\_INDICATOR\_CAPS** : Indicatore del blocco di MAIUSC.  
  
-   **ID\_INDICATOR\_NUM** : Indicatore del blocco NUM.  
  
-   **ID\_INDICATOR\_SCRL** : Indicatore del blocco di SCRL.  
  
-   **ID\_INDICATOR\_KANA** : Indicatore del blocco di KANA \(applicabile solo ai sistemi giapponese\).  
  
 Tutti e tre i vengono implementati in **CFrameWnd::OnUpdateKeyIndicator**, un helper di implementazione che utilizza l'id di comando per eseguire il mapping alla chiave virtuale appropriata.  Un'implementazione comune abilita o disabilita \(per i riquadri di stati disabilitati \= alcun testo\) l'oggetto di `CCmdUI` a seconda che la chiave virtuale appropriata attualmente è bloccata.  
  
 La personalizzazione del gestore comando non è consigliata.  
  
-   **ID\_INDICATOR\_EXT : EXT**è terminata indicatore selezionato.  
  
-   Indicatore della schermata riportata di**ID\_INDICATOR\_OVR : OV** e**R**.  
  
-   **ID\_INDICATOR\_REC : REC**che ording indicatore.  
  
 Attualmente non è un'implementazione standard per questi indicatori.  
  
 Se si decide di implementare questi indicatori, è consigliabile utilizzare questo l'indicatore ID e gestire l'ordine degli indicatori nella barra di stato \(ovvero in quest'ordine: JOIN, FINE, NUM, SCRL, OVR, REC\).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)