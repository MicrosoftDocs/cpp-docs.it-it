---
title: CToolBarCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CToolBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- CToolBarCtrl class
- Windows common controls [C++], CToolBarCtrl
- toolbar controls [MFC], CToolBarCtrl class
- tool tips [C++], notifications
ms.assetid: 8f2f8ad2-05d7-4975-8715-3f2eed795248
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 2d3ec23d6147299d9a615e9edb0d3f90680bbfac
ms.lasthandoff: 02/24/2017

---
# <a name="ctoolbarctrl-class"></a>CToolBarCtrl (classe)
Fornisce la funzionalità del controllo barra degli strumenti comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CToolBarCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBarCtrl::CToolBarCtrl](#ctoolbarctrl)|Costruisce un oggetto `CToolBarCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBarCtrl::AddBitmap](#addbitmap)|Aggiunge uno o più immagini dei pulsanti bitmap per l'elenco di immagini dei pulsanti disponibili per un controllo barra degli strumenti.|  
|[CToolBarCtrl::AddButtons](#addbuttons)|Aggiunge uno o più pulsanti a un controllo barra degli strumenti.|  
|[CToolBarCtrl::AddString](#addstring)|Aggiunge una nuova stringa, passata come un ID di risorsa, all'elenco interno della barra degli strumenti di stringhe.|  
|[CToolBarCtrl::AddStrings](#addstrings)|Aggiunge una nuova stringa o stringhe, passate come un puntatore a un buffer di stringhe separate da null, all'elenco interno della barra degli strumenti di stringhe.|  
|[CToolBarCtrl::AutoSize](#autosize)|Ridimensiona un controllo barra degli strumenti.|  
|[CToolBarCtrl::ChangeBitmap](#changebitmap)|Modifica la bitmap per un pulsante nel controllo della barra degli strumenti corrente.|  
|[CToolBarCtrl::CheckButton](#checkbutton)|Verifica o cancella un determinato pulsante in un controllo barra degli strumenti.|  
|[CToolBarCtrl::CommandToIndex](#commandtoindex)|Recupera l'indice in base zero del pulsante associato all'ID di comando specificato.|  
|[CToolBarCtrl:: Create](#create)|Crea un controllo barra degli strumenti e lo collega a un `CToolBarCtrl` oggetto.|  
|[CToolBarCtrl::CreateEx](#createex)|Crea un controllo barra degli strumenti con gli stili estesi di Windows specificati e lo collega a un `CToolBarCtrl` oggetto.|  
|[CToolBarCtrl::Customize](#customize)|Visualizza la finestra di dialogo Personalizza barra degli strumenti.|  
|[CToolBarCtrl::DeleteButton](#deletebutton)|Elimina un pulsante del controllo barra degli strumenti.|  
|[CToolBarCtrl::EnableButton](#enablebutton)|Abilita o disabilita il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetAnchorHighlight](#getanchorhighlight)|Recupera l'evidenziazione di ancoraggio impostazione per una barra degli strumenti.|  
|[CToolBarCtrl::GetBitmap](#getbitmap)|Recupera l'indice della bitmap associata a un pulsante in una barra degli strumenti.|  
|[CToolBarCtrl::GetBitmapFlags](#getbitmapflags)|Ottiene i flag associati all'immagine bitmap della barra degli strumenti.|  
|[CToolBarCtrl::GetButton](#getbutton)|Recupera le informazioni relative al pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetButtonCount](#getbuttoncount)|Recupera un conteggio dei pulsanti del controllo toolbar.|  
|[CToolBarCtrl::GetButtonInfo](#getbuttoninfo)|Recupera le informazioni per un pulsante in una barra degli strumenti.|  
|[CToolBarCtrl::GetButtonSize](#getbuttonsize)|Recupera la larghezza corrente e l'altezza dei pulsanti della barra degli strumenti, in pixel.|  
|[CToolBarCtrl::GetColorScheme](#getcolorscheme)|Recupera la combinazione di colori del controllo barra degli strumenti corrente.|  
|[CToolBarCtrl::GetDisabledImageList](#getdisabledimagelist)|Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti a pulsanti di visualizzazione disabilitata.|  
|[CToolBarCtrl::GetDropTarget](#getdroptarget)|Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi per un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetHotImageList](#gethotimagelist)|Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti per visualizzare i pulsanti "hot". Un pulsante attivo viene evidenziato quando il puntatore del mouse sopra di esso.|  
|[CToolBarCtrl::GetHotItem](#gethotitem)|Recupera l'indice dell'elemento attivo in una barra degli strumenti.|  
|[CToolBarCtrl::GetImageList](#getimagelist)|Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti per visualizzare pulsanti nello stato predefinito.|  
|[CToolBarCtrl::GetInsertMark](#getinsertmark)|Recupera il segno di inserimento corrente per la barra degli strumenti.|  
|[CToolBarCtrl::GetInsertMarkColor](#getinsertmarkcolor)|Recupera il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.|  
|[CToolBarCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione di un pulsante in un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetMaxSize](#getmaxsize)|Recupera le dimensioni totali di tutti i pulsanti visibili e i separatori nella barra degli strumenti.|  
|[CToolBarCtrl::GetMaxTextRows](#getmaxtextrows)|Recupera il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::GetMetrics](#getmetrics)|Recupera le metriche di un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetPadding](#getpadding)|Recupera la spaziatura orizzontale e verticale del controllo barra degli strumenti corrente.|  
|[CToolBarCtrl::GetPressedImageList](#getpressedimagelist)|Recupera l'elenco di immagini che il controllo barra degli strumenti corrente viene utilizzata per rappresentare pulsanti nello stato premuto.|  
|[CToolBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione per un pulsante della barra degli strumenti specificata.|  
|[CToolBarCtrl::GetRows](#getrows)|Recupera il numero di righe di pulsanti attualmente visualizzati nella barra degli strumenti.|  
|[CToolBarCtrl::GetState](#getstate)|Recupera le informazioni sullo stato del pulsante specificato in un controllo barra degli strumenti, ad esempio se è abilitata, premuto o selezionata.|  
|[CToolBarCtrl::GetString](#getstring)|Recupera una stringa sulla barra degli strumenti.|  
|[CToolBarCtrl::GetStyle](#getstyle)|Recupera gli stili attualmente in uso per un controllo barra degli strumenti.|  
|[CToolBarCtrl::GetToolTips](#gettooltips)|Recupera l'handle del controllo descrizione comandi, se presente, associato al controllo della barra degli strumenti.|  
|[CToolBarCtrl::HideButton](#hidebutton)|Visualizzare o nascondere il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::HitTest](#hittest)|Determina dove si trova un punto in un controllo barra degli strumenti.|  
|[CToolBarCtrl::Indeterminate](#indeterminate)|Imposta o Cancella lo stato indeterminato (grigio) del pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::InsertButton](#insertbutton)|Inserisce un pulsante in un controllo barra degli strumenti.|  
|[CToolBarCtrl::InsertMarkHitTest](#insertmarkhittest)|Recupera le informazioni di contrassegno di inserimento per un punto di una barra degli strumenti.|  
|[CToolBarCtrl::IsButtonChecked](#isbuttonchecked)|Indica se è selezionato il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::IsButtonEnabled](#isbuttonenabled)|Indica se è abilitato il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::IsButtonHidden](#isbuttonhidden)|Indica se il pulsante specificato in un controllo barra degli strumenti è nascosta.|  
|[CToolBarCtrl::IsButtonHighlighted](#isbuttonhighlighted)|Controlla lo stato di evidenziazione del pulsante della barra degli strumenti.|  
|[CToolBarCtrl::IsButtonIndeterminate](#isbuttonindeterminate)|Indica se lo stato del pulsante specificato in un controllo barra degli strumenti è indeterminato (grigio).|  
|[CToolBarCtrl::IsButtonPressed](#isbuttonpressed)|Indica se è premuto il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::LoadImages](#loadimages)|Carica bitmap nell'elenco di immagini del controllo barra degli strumenti.|  
|[CToolBarCtrl::MapAccelerator](#mapaccelerator)|Esegue il mapping di un carattere di tasti di scelta rapida a un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::MarkButton](#markbutton)|Imposta lo stato di evidenziazione di un determinato pulsante in un controllo barra degli strumenti.|  
|[CToolBarCtrl::MoveButton](#movebutton)|Sposta un pulsante da un indice a altro.|  
|[CToolBarCtrl::PressButton](#pressbutton)|Preme o rilascia il pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::ReplaceBitmap](#replacebitmap)|Sostituisce la bitmap esistente nel controllo della barra degli strumenti corrente con una nuova bitmap.|  
|[CToolBarCtrl::RestoreState](#restorestate)|Ripristina lo stato del controllo barra degli strumenti.|  
|[CToolBarCtrl::SaveState](#savestate)|Salva lo stato del controllo barra degli strumenti.|  
|[CToolBarCtrl::SetAnchorHighlight](#setanchorhighlight)|Imposta l'evidenziazione di ancoraggio impostazione per una barra degli strumenti.|  
|[CToolBarCtrl::SetBitmapSize](#setbitmapsize)|Imposta le dimensioni delle immagini bitmap da aggiungere a un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetButtonInfo](#setbuttoninfo)|Imposta le informazioni per un pulsante esistente in una barra degli strumenti.|  
|[CToolBarCtrl::SetButtonSize](#setbuttonsize)|Imposta la dimensione dei pulsanti per essere aggiunto a un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetButtonStructSize](#setbuttonstructsize)|Specifica la dimensione del `TBBUTTON` struttura.|  
|[CToolBarCtrl::SetButtonWidth](#setbuttonwidth)|Imposta la larghezza di minimo e massimo pulsante nel controllo della barra degli strumenti.|  
|[CToolBarCtrl::SetCmdID](#setcmdid)|Imposta l'identificatore di comando da inviare alla finestra proprietaria quando viene premuto il pulsante specificato.|  
|[CToolBarCtrl::SetColorScheme](#setcolorscheme)|Imposta la combinazione di colori del controllo barra degli strumenti corrente.|  
|[CToolBarCtrl::SetDisabledImageList](#setdisabledimagelist)|Imposta l'elenco di immagini che verrà utilizzato il controllo barra degli strumenti per i pulsanti di visualizzazione disabilitato.|  
|[CToolBarCtrl::SetDrawTextFlags](#setdrawtextflags)|Imposta i flag della funzione Win32 [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498), che viene utilizzato per disegnare il testo nel rettangolo specificato, formattato in base a come i flag sono impostati.|  
|[CToolBarCtrl::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetHotImageList](#sethotimagelist)|Imposta l'elenco di immagini che verrà utilizzato il controllo barra degli strumenti per visualizzare pulsanti "hot".|  
|[CToolBarCtrl::SetHotItem](#sethotitem)|Imposta l'elemento attivo in una barra degli strumenti.|  
|[CToolBarCtrl::SetImageList](#setimagelist)|Imposta l'elenco di immagini che utilizzerà la barra degli strumenti per visualizzare pulsanti che si trovano nello stato predefinito.|  
|[CToolBarCtrl::SetIndent](#setindent)|Imposta il rientro per il primo pulsante in un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetInsertMark](#setinsertmark)|Imposta il segno di inserimento corrente per la barra degli strumenti.|  
|[CToolBarCtrl::SetInsertMarkColor](#setinsertmarkcolor)|Imposta il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.|  
|[CToolBarCtrl::SetMaxTextRows](#setmaxtextrows)|Imposta il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.|  
|[CToolBarCtrl::SetMetrics](#setmetrics)|Imposta le metriche di un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetOwner](#setowner)|Imposta la finestra per ricevere i messaggi di notifica del controllo barra degli strumenti.|  
|[CToolBarCtrl::SetPadding](#setpadding)|Imposta la spaziatura orizzontale e verticale del controllo barra degli strumenti corrente.|  
|[CToolBarCtrl::SetPressedImageList](#setpressedimagelist)|Imposta l'elenco di immagini che il controllo barra degli strumenti corrente viene utilizzata per rappresentare pulsanti nello stato premuto.|  
|[CToolBarCtrl::SetRows](#setrows)|Imposta il numero di righe dei pulsanti visualizzati sulla barra degli strumenti.|  
|[CToolBarCtrl::SetState](#setstate)|Imposta lo stato del pulsante specificato in un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetStyle](#setstyle)|Imposta gli stili per un controllo barra degli strumenti.|  
|[CToolBarCtrl::SetToolTips](#settooltips)|Associa un controllo descrizione comando con il controllo barra degli strumenti.|  
|[CToolBarCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione di un controllo barra degli strumenti.|  
  
## <a name="remarks"></a>Note  
 Questo controllo (e pertanto la `CToolBarCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Un controllo comune barra degli strumenti di Windows è una finestra figlio rettangolare che contiene uno o più pulsanti. Questi pulsanti possono visualizzare un'immagine bitmap, una stringa o entrambi. Quando l'utente sceglie un pulsante, invia un messaggio di comando alla finestra proprietaria della barra degli strumenti. In genere, i pulsanti in una barra degli strumenti corrispondono agli elementi nel menu dell'applicazione. forniscono un modo più diretto per l'utente accedere ai comandi di un'applicazione.  
  
 `CToolBarCtrl`gli oggetti contengono diverse strutture di dati interno importante: un elenco delle immagini bitmap o un elenco di immagini, un elenco di stringhe per le etichette pulsante e un elenco di `TBBUTTON` le strutture e associare un'immagine e/o di stringa con la posizione, stile, lo stato e ID del pulsante di comando. Ognuno degli elementi di queste strutture di dati viene definito un indice in base zero. Prima di poter utilizzare un `CToolBarCtrl` dell'oggetto, è necessario configurare queste strutture di dati. L'elenco di stringhe è utilizzabile solo per le etichette di pulsante; è possibile recuperare le stringhe dalla barra degli strumenti.  
  
 Per utilizzare un oggetto `CToolBarCtrl`, in genere vengono effettuate le seguenti operazioni:  
  
1.  Costruire l'oggetto `CToolBarCtrl`.  
  
2.  Chiamare [crea](#create) per creare il controllo comune barra degli strumenti di Windows e associarlo al `CToolBarCtrl` oggetto. Indicano lo stile della barra degli strumenti mediante gli stili, ad esempio **TBSTYLE_TRANSPARENT** per una barra degli strumenti trasparente o **TBSTYLE_DROPDOWN** per una barra degli strumenti che supporta i pulsanti stile elenco a discesa.  
  
3.  Identificare come si desidera che i pulsanti sulla barra degli strumenti visualizzata:  
  
    -   Per utilizzare le immagini bitmap per i pulsanti, aggiungere la bitmap di pulsanti alla barra degli strumenti chiamando [AddBitmap](#addbitmap).  
  
    -   Per utilizzare le immagini visualizzate da un elenco di immagini per i pulsanti, specificare l'elenco di immagini chiamando [SetImageList](#setimagelist), [SetHotImageList](#sethotimagelist), o [SetDisabledImageList](#setdisabledimagelist).  
  
    -   Per utilizzare le etichette di stringa per i pulsanti, aggiungere le stringhe alla barra degli strumenti chiamando [AddString](#addstring) e/o [AddStrings](#addstrings).  
  
4.  Aggiungere le strutture di pulsanti alla barra degli strumenti chiamando [AddButtons](#addbuttons).  
  
5.  Se si desidera che le descrizioni comandi per un pulsante della barra degli strumenti in una finestra che non è un `CFrameWnd`, è necessario gestire il **TTN_NEEDTEXT** i messaggi nella finestra proprietaria della barra degli strumenti, come descritto in [strumento di gestione delle notifiche](../../mfc/handling-tool-tip-notifications.md). Se la finestra padre della barra degli strumenti è derivata da `CFrameWnd`, descrizioni comandi vengono visualizzate senza ulteriori interventi da parte dell'utente perché `CFrameWnd` fornisce un gestore predefinito.  
  
6.  Se si desidera che l'utente la possibilità di personalizzare la barra degli strumenti, gestire i messaggi di notifica personalizzazione nella finestra proprietaria come descritto in [gestione delle notifiche di personalizzazione](../../mfc/handling-customization-notifications.md).  
  
 È possibile utilizzare [SaveState](#savestate) per salvare lo stato corrente di un controllo barra degli strumenti nel Registro di sistema e [RestoreState](#restorestate) per ripristinare lo stato in base alle informazioni memorizzate in precedenza nel Registro di sistema. Oltre a salvare lo stato della barra degli strumenti tra utilizzi dell'applicazione, in genere applicazioni di archiviano lo stato prima che l'utente inizia a personalizzare la barra degli strumenti nel caso in cui l'utente desidera in un secondo momento ripristinare la barra degli strumenti allo stato originale.  
  
## <a name="support-for-internet-explorer-version-40-and-later"></a>Supporto per Internet Explorer versione 4.0 e versioni successive  
 Per supportare la funzionalità introdotta in Internet Explorer versione 4.0 e versioni successive, MFC fornisce supporto di elenchi immagini e stili flat e trasparenti per i controlli della barra degli strumenti.  
  
 Una barra degli strumenti trasparente consente al client sotto la barra degli strumenti visualizzata. Per creare una barra degli strumenti trasparente, utilizzare **TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** stili. Barre degli strumenti trasparenti funzionalità di intercettazione con il mouse; ovvero, quando il puntatore del mouse viene spostato su un pulsante attivo sulla barra degli strumenti, l'aspetto del pulsante Modifica. Barre degli strumenti create con il solo **TBSTYLE_FLAT** stile sarà contenuti pulsanti che non sono trasparenti.  
  
 Supporto di elenchi immagini un controllo maggiore flessibilità per il comportamento predefinito, le immagini a caldo e immagini disabilitate. Utilizzare [funzione membro GetImageList](#getimagelist), [GetHotImageList](#gethotimagelist), e [GetDisabledImageList](#getdisabledimagelist) con la barra degli strumenti trasparente per modificare l'immagine in base al relativo stato:  
  
 Per ulteriori informazioni sull'utilizzo di `CToolBarCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [utilizzando CToolBarCtrl](../../mfc/using-ctoolbarctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolBarCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-nameaddbitmapa--ctoolbarctrladdbitmap"></a><a name="addbitmap"></a>CToolBarCtrl::AddBitmap  
 Aggiunge uno o più immagini del pulsante per l'elenco delle immagini pulsante archiviato nel controllo della barra degli strumenti.  
  
```  
int AddBitmap(
    int nNumButtons,  
    UINT nBitmapID);

 
int AddBitmap(
    int nNumButtons,  
    CBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 `nNumButtons`  
 Numero di immagini del pulsante nella bitmap.  
  
 `nBitmapID`  
 Identificatore di risorsa della bitmap che contiene l'immagine del pulsante o immagini da aggiungere.  
  
 `pBitmap`  
 Puntatore a di `CBitmap` oggetto che contiene l'immagine del pulsante o le immagini da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della prima immagine nuovo caso di esito positivo; in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'API Windows [CreateMappedBitmap](http://msdn.microsoft.com/library/windows/desktop/bb787467) per mappare i colori prima di aggiungere la bitmap alla barra degli strumenti. Se si passa un puntatore a un **CBitMap** dell'oggetto, è necessario assicurarsi che la bitmap non viene eliminata fino a dopo che la barra degli strumenti viene eliminato.  
  
##  <a name="a-nameaddbuttonsa--ctoolbarctrladdbuttons"></a><a name="addbuttons"></a>CToolBarCtrl::AddButtons  
 Aggiunge uno o più pulsanti a un controllo barra degli strumenti.  
  
```  
BOOL AddButtons(
    int nNumButtons,  
    LPTBBUTTON lpButtons);
```  
  
### <a name="parameters"></a>Parametri  
 `nNumButtons`  
 Numero di pulsanti da aggiungere.  
  
 `lpButtons`  
 Indirizzo di una matrice di `TBBUTTON` strutture che contiene informazioni sui pulsanti da aggiungere. Deve esistere lo stesso numero di elementi nella matrice come pulsanti specificati da `nNumButtons`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Il `lpButtons` puntatore punta a una matrice di `TBBUTTON` strutture. Ogni `TBBUTTON` struttura associa il pulsante viene aggiunto con il pulsante stile, immagine e/o stringa, ID di comando, stato e dati definiti dall'utente:  
  
 `typedef struct _TBBUTTON {`  
  
 `int iBitmap;// zero-based index of button image`  
  
 `int idCommand;  // command to be sent when button pressed`  
  
 `BYTE fsState;   // button state--see below`  
  
 `BYTE fsStyle;   // button style--see below`  
  
 `DWORD dwData;   // application-defined value`  
  
 `int iString;// zero-based index of button label string`  
  
 `} TBBUTTON;`  
  
 I membri sono i seguenti:  
  
 **iBitmap**  
 Indice in base zero dell'immagine del pulsante, -1 se nessuna immagine del pulsante.  
  
 **idCommand**  
 Identificatore del comando associato al pulsante. Questo identificatore viene inviato un **WM_COMMAND** dei messaggi quando viene scelto il pulsante. Se il **fsStyle** membro dispone di `TBSTYLE_SEP` valore, questo membro deve essere zero.  
  
 **fsState**  
 Pulsante flag di stato. Può essere una combinazione di valori elencati di seguito:  
  
- `TBSTATE_CHECKED`Il pulsante ha il **TBSTYLE_CHECKED** di stile e viene premuto.  
  
- `TBSTATE_ENABLED`Il pulsante accetta l'input dell'utente. Un pulsante che non dispone di questo stato non accetta l'input dell'utente e diventa inattivo.  
  
- `TBSTATE_HIDDEN`Il pulsante non è visibile e non può ricevere l'input dell'utente.  
  
- `TBSTATE_INDETERMINATE`Il pulsante è attivo.  
  
- `TBSTATE_PRESSED`Questo pulsante.  
  
- `TBSTATE_WRAP`Un'interruzione di riga segue il pulsante. Il pulsante deve inoltre disporre di `TBSTATE_ENABLED` dello stato.  
  
 **fsStyle**  
 Stile del pulsante. Può essere una combinazione di valori elencati di seguito:  
  
- `TBSTYLE_BUTTON`Crea un pulsante standard.  
  
- `TBSTYLE_CHECK`Crea un pulsante che alterna tra gli stati selezionati e rilasciare ogni volta che viene selezionato dall'utente. Il pulsante ha un colore di sfondo differente quando è nello stato premuto.  
  
- `TBSTYLE_CHECKGROUP`Crea un pulsante di controllo che viene premuto fino a quando non viene premuto un altro pulsante nel gruppo.  
  
- `TBSTYLE_GROUP`Crea un pulsante che viene premuto fino a quando non viene premuto un altro pulsante nel gruppo.  
  
- `TBSTYLE_SEP`Crea un separatore, fornendo un breve intervallo tra i gruppi di pulsanti. Un pulsante con questo stile non riceve l'input dell'utente.  
  
 `dwData`  
 Dati definiti dall'utente.  
  
 **iString**  
 Indice in base zero della stringa da usare come pulsante per l'etichetta, -1 se è presente alcuna stringa di questo pulsante.  
  
 L'immagine e/o una stringa il cui indice è fornire deve essere già stato aggiunto al controllo della barra degli strumenti elenco tramite [AddBitmap](#addbitmap), [AddString](#addstring), e/o [AddStrings](#addstrings).  
  
##  <a name="a-nameaddstringa--ctoolbarctrladdstring"></a><a name="addstring"></a>CToolBarCtrl::AddString  
 Aggiunge una nuova stringa, passata come un ID di risorsa, all'elenco interno della barra degli strumenti di stringhe.  
  
```  
int AddString(UINT nStringID);
```  
  
### <a name="parameters"></a>Parametri  
 *nStringID*  
 Identificatore di risorsa della risorsa di stringa da aggiungere all'elenco di stringa del controllo barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero della prima stringa di nuovo aggiunta se ha esito positivo. in caso contrario-1.  
  
##  <a name="a-nameaddstringsa--ctoolbarctrladdstrings"></a><a name="addstrings"></a>CToolBarCtrl::AddStrings  
 Aggiunge una nuova stringa o le stringhe per l'elenco di stringhe disponibili per un controllo barra degli strumenti.  
  
```  
int AddStrings(LPCTSTR lpszStrings);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszStrings*  
 Indirizzo di un buffer che contiene uno o più stringhe con terminazione null da aggiungere all'elenco di stringa della barra degli strumenti. L'ultima stringa deve terminare con due caratteri null.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero della prima stringa di nuovo aggiunta se ha esito positivo. in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 Le stringhe nel buffer devono essere separate da un carattere null. È necessario assicurarsi che l'ultima stringa dispone di due caratteri di terminazione null. Per formattare correttamente una stringa costante, è possibile scrivere come:  
  
 [!code-cpp[NVC_MFCControlLadenDialog&#72;](../../mfc/codesnippet/cpp/ctoolbarctrl-class_1.cpp)]  
  
 oppure:  
  
 [!code-cpp[NVC_MFCControlLadenDialog&#73;](../../mfc/codesnippet/cpp/ctoolbarctrl-class_2.cpp)]  
  
 Non è necessario passare un `CString` oggetto a questa funzione perché non è possibile avere più di un carattere null in un `CString`.  
  
##  <a name="a-nameautosizea--ctoolbarctrlautosize"></a><a name="autosize"></a>CToolBarCtrl::AutoSize  
 Ridimensiona il controllo intera barra degli strumenti.  
  
```  
void AutoSize();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare questa funzione quando cambiano le dimensioni della finestra padre o la dimensione della barra degli strumenti (ad esempio, quando si imposta la dimensione di pulsante o una bitmap o aggiungere stringhe).  
  
##  <a name="a-namechangebitmapa--ctoolbarctrlchangebitmap"></a><a name="changebitmap"></a>CToolBarCtrl::ChangeBitmap  
 Modifica la bitmap per un pulsante nel controllo della barra degli strumenti corrente.  
  
```  
BOOL ChangeBitmap(
    int idButton,   
    int iBitmap);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `idButton`|Identificatore di comando del pulsante che deve ricevere una nuova bitmap.|  
|[in] `iBitmap`|Indice in base zero di un'immagine nell'elenco di immagini del controllo barra degli strumenti corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se questo metodo ha esito positivo, il sistema visualizza l'immagine specificata nel pulsante specificato.  
  
 Questo metodo invia il [TB_CHANGEBITMAP](http://msdn.microsoft.com/library/windows/desktop/bb787301) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente modifica la bitmap per la **Salva** pulsante per la bitmap per il **su** pulsante.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1 n.&1;](../../mfc/reference/codesnippet/cpp/ctoolbarctrl-class_3.cpp)]  
  
##  <a name="a-namecheckbuttona--ctoolbarctrlcheckbutton"></a><a name="checkbutton"></a>CToolBarCtrl::CheckButton  
 Verifica o cancella un determinato pulsante in un controllo barra degli strumenti.  
  
```  
BOOL CheckButton(
    int nID,  
    BOOL bCheck = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore del pulsante per selezionare o deselezionare il comando.  
  
 *bEsegui*  
 **TRUE** per selezionare il pulsante **FALSE** cancellarlo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Quando è stato selezionato un pulsante, viene visualizzato a è stato premuto. Se si desidera modificare lo stato di più di un pulsante, si consiglia di chiamare [SetState](#setstate) invece.  
  
##  <a name="a-namecommandtoindexa--ctoolbarctrlcommandtoindex"></a><a name="commandtoindex"></a>CToolBarCtrl::CommandToIndex  
 Recupera l'indice in base zero del pulsante associato all'ID di comando specificato.  
  
```  
UINT CommandToIndex(UINT nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 ID di comando il cui pulsante indice si desidera trovare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del pulsante associato all'ID di comando.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreatea--ctoolbarctrlcreate"></a><a name="create"></a>CToolBarCtrl:: Create  
 Crea un controllo barra degli strumenti e lo collega a un `CToolBarCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo barra degli strumenti. Barre degli strumenti deve disporre sempre di **WS_CHILD** stile. Inoltre, è possibile specificare qualsiasi combinazione di stili della barra degli strumenti e finestra come descritto in **osservazioni**.  
  
 `rect`  
 Facoltativamente Specifica dimensioni e la posizione del controllo barra degli strumenti. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Finestra padre del controllo barra degli strumenti. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Costruire un `CToolBarCtrl` in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare **crea**, che crea il controllo barra degli strumenti e lo collega a di `CToolBarCtrl` oggetto. Applicare gli stili di finestra seguenti a un controllo barra degli strumenti.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
 Vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una descrizione di stili di finestra.  
  
 Se si desidera, applicare una combinazione di [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Applicare una combinazione di stili della barra degli strumenti per il controllo o i pulsanti stessi. Gli stili sono descritti nell'argomento [controllo barra degli strumenti e gli stili di pulsante](http://msdn.microsoft.com/library/windows/desktop/bb760439) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per utilizzare gli stili estesi della barra degli strumenti, chiamare [SetExtendedStyle](#setextendedstyle) dopo la chiamata **crea**. Per creare una barra degli strumenti con stili finestra estesi, chiamare [CToolBarCtrl::CreateEx](#createex) anziché **crea**.  
  
 Il controllo barra degli strumenti imposta automaticamente le dimensioni e posizione della finestra degli strumenti. L'altezza è basata sull'altezza dei pulsanti della barra degli strumenti. La larghezza corrisponde alla larghezza dell'area client della finestra padre. Il `CCS_TOP` e `CCS_BOTTOM` stili consentono di determinare se la barra degli strumenti viene posizionato lungo il bordo superiore o inferiore dell'area client. Per impostazione predefinita, dispone di una barra degli strumenti di `CCS_TOP` stile.  
  
##  <a name="a-namecreateexa--ctoolbarctrlcreateex"></a><a name="createex"></a>CToolBarCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e lo associa a di `CToolBarCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo barra degli strumenti. Barre degli strumenti deve disporre sempre di **WS_CHILD** stile. Inoltre, è possibile specificare qualsiasi combinazione di stili della barra degli strumenti e finestra come descritto nel **osservazioni** sezione [crea](#create).  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) che descrive le dimensioni e posizione della finestra deve essere creata, in coordinate client della struttura `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**. **CreateEx** crea il controllo con gli stili estesi di Windows specificati da `dwExStyle`. Set specifico di un controllo utilizzando stili estesi [SetExtendedStyle](#setextendedstyle). Ad esempio, utilizzare `CreateEx` per impostare questi stili come **WS_EX_CONTEXTHELP**, ma utilizzare `SetExtendedStyle` per impostare questi stili come **TBSTYLE_EX_DRAWDDARROWS**. Per ulteriori informazioni, vedere gli stili descritti in [degli stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb760430) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namectoolbarctrla--ctoolbarctrlctoolbarctrl"></a><a name="ctoolbarctrl"></a>CToolBarCtrl::CToolBarCtrl  
 Costruisce un oggetto `CToolBarCtrl`.  
  
```  
CToolBarCtrl();
```  
  
### <a name="remarks"></a>Note  
 È necessario chiamare [crea](#create) per rendere la barra degli strumenti utilizzabile.  
  
##  <a name="a-namecustomizea--ctoolbarctrlcustomize"></a><a name="customize"></a>CToolBarCtrl::Customize  
 Visualizza la finestra di dialogo Personalizza barra degli strumenti.  
  
```  
void Customize();
```  
  
### <a name="remarks"></a>Note  
 Questa finestra di dialogo consente all'utente di personalizzare la barra degli strumenti aggiungendo ed eliminando i pulsanti. Per supportare la personalizzazione, la finestra padre della barra deve gestire i messaggi di notifica di personalizzazione come descritto in [gestione delle notifiche di personalizzazione](../../mfc/handling-customization-notifications.md). Barra degli strumenti deve essere creato con il `CCS_ADJUSTABLE` stile, come descritto in [CToolBarCtrl:: Create](#create).  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q241850: PRB: chiamata a CToolBarCtrl::Customize rimanga visibile finestra di dialogo Personalizza.  
  
##  <a name="a-namedeletebuttona--ctoolbarctrldeletebutton"></a><a name="deletebutton"></a>CToolBarCtrl::DeleteButton  
 Elimina un pulsante del controllo barra degli strumenti.  
  
```  
BOOL DeleteButton(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del pulsante da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenablebuttona--ctoolbarctrlenablebutton"></a><a name="enablebutton"></a>CToolBarCtrl::EnableButton  
 Abilita o disabilita il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL EnableButton(
    int nID,  
    BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante per attivare o disattivare.  
  
 `bEnable`  
 **TRUE** per abilitare il pulsante; **FALSE** per disattivare il pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Quando un pulsante è abilitato, può essere selezionato e selezionata. Se si desidera modificare lo stato di più di un pulsante, si consiglia di chiamare [SetState](#setstate) invece.  
  
##  <a name="a-namegetanchorhighlighta--ctoolbarctrlgetanchorhighlight"></a><a name="getanchorhighlight"></a>CToolBarCtrl::GetAnchorHighlight  
 Recupera l'evidenziazione di ancoraggio impostazione per una barra degli strumenti.  
  
```  
BOOL GetAnchorHighlight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se diverso da zero, l'evidenziazione di ancoraggio è abilitato. Se è zero, l'evidenziazione di ancoraggio è disabilitato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETANCHORHIGHLIGHT](http://msdn.microsoft.com/library/windows/desktop/bb787313), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetbitmapa--ctoolbarctrlgetbitmap"></a><a name="getbitmap"></a>CToolBarCtrl::GetBitmap  
 Recupera l'indice della bitmap associata a un pulsante in una barra degli strumenti.  
  
```  
int GetBitmap(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante il cui indice bitmap è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indice della bitmap se ha esito positivo o zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Implementa la funzionalità di [TB_GETBITMAP](http://msdn.microsoft.com/library/windows/desktop/bb787315) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetbitmapflagsa--ctoolbarctrlgetbitmapflags"></a><a name="getbitmapflags"></a>CToolBarCtrl::GetBitmapFlags  
 Recupera i flag di bitmap nella barra degli strumenti.  
  
```  
UINT GetBitmapFlags() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **UINT** che ha il **TBBF_LARGE** flag impostato se la visualizzazione in grado di supportare le bitmap di grandi dimensioni sulla barra degli strumenti, deselezionare in caso contrario.  
  
### <a name="remarks"></a>Note  
 È necessario chiamarlo dopo aver creato la barra degli strumenti, ma prima dell'aggiunta di bitmap alla barra degli strumenti. Il valore restituito indica se la visualizzazione supporta le bitmap grandi o meno. Se la visualizzazione supporta le bitmap grandi e se si sceglie di utilizzarli, chiamare [SetBitmapSize](#setbitmapsize) e [SetButtonSize](#setbuttonsize) prima di aggiungere la bitmap di grandi dimensioni utilizzando [AddBitmap](#addbitmap).  
  
##  <a name="a-namegetbuttona--ctoolbarctrlgetbutton"></a><a name="getbutton"></a>CToolBarCtrl::GetButton  
 Recupera le informazioni relative al pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL GetButton(
    int nIndex,  
    LPTBBUTTON lpButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del pulsante per il quale recuperare le informazioni.  
  
 `lpButton`  
 All'indirizzo di `TBBUTTON` struttura che deve ricevere una copia del pulsante. Vedere [CToolBarCtrl::AddButtons](#addbuttons) per informazioni di `TBBUTTON` struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
##  <a name="a-namegetbuttoncounta--ctoolbarctrlgetbuttoncount"></a><a name="getbuttoncount"></a>CToolBarCtrl::GetButtonCount  
 Recupera un conteggio dei pulsanti del controllo toolbar.  
  
```  
int GetButtonCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio dei pulsanti.  
  
##  <a name="a-namegetbuttoninfoa--ctoolbarctrlgetbuttoninfo"></a><a name="getbuttoninfo"></a>CToolBarCtrl::GetButtonInfo  
 Recupera le informazioni per un pulsante in una barra degli strumenti.  
  
```  
int GetButtonInfo(
    int nID,  
    TBBUTTONINFO* ptbbi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del pulsante.  
  
 `ptbbi`  
 Un puntatore a un [TBBUTTONINFO](http://msdn.microsoft.com/library/windows/desktop/bb760478) struttura che riceve le informazioni del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del pulsante, se ha esito positivo. in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETBUTTONINFO](http://msdn.microsoft.com/library/windows/desktop/bb787321), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetbuttonsizea--ctoolbarctrlgetbuttonsize"></a><a name="getbuttonsize"></a>CToolBarCtrl::GetButtonSize  
 Ottiene le dimensioni di un pulsante della barra degli strumenti.  
  
```  
DWORD GetButtonSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` contenente i valori di larghezza e altezza LOWORD e HIWORD, rispettivamente.  
  
##  <a name="a-namegetbuttontexta--ctoolbarctrlgetbuttontext"></a><a name="getbuttontext"></a>CToolBarCtrl::GetButtonText  
 Recupera il testo visualizzato di un pulsante specificato nel controllo della barra degli strumenti corrente.  
  
```  
CString GetButtonText(int idButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `idButton`|L'identificatore per il pulsante viene recuperato il cui testo di visualizzazione.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo del pulsante specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_GETBUTTONTEXT](http://msdn.microsoft.com/library/windows/desktop/bb787325) messaggio, che è descritta in Windows SDK.  
  
##  <a name="a-namegetcolorschemea--ctoolbarctrlgetcolorscheme"></a><a name="getcolorscheme"></a>CToolBarCtrl::GetColorScheme  
 Recupera la combinazione di colori del controllo barra degli strumenti corrente.  
  
```  
BOOL GetColorScheme(COLORSCHEME* lpColorScheme) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpColorScheme`|Puntatore a un [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura che riceve le informazioni di schema di colori. Quando termina, questo metodo la struttura descrive il colore di evidenziazione e il colore di ombreggiatura del controllo barra degli strumenti.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_GETCOLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb787327) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetdisabledimagelista--ctoolbarctrlgetdisabledimagelist"></a><a name="getdisabledimagelist"></a>CToolBarCtrl::GetDisabledImageList  
 Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti a pulsanti di visualizzazione disabilitata.  
  
```  
CImageList* GetDisabledImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto, o **NULL** se non è impostato alcun elenco di immagini disabilitato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETDISABLEDIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787329), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. L'implementazione MFC di `GetDisabledImageList` utilizza un `CImageList` immagini oggetto contenente il pulsante del controllo barra degli strumenti, anziché un handle per un elenco di immagini.  
  
##  <a name="a-namegetdroptargeta--ctoolbarctrlgetdroptarget"></a><a name="getdroptarget"></a>CToolBarCtrl::GetDropTarget  
 Recupera il [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) interfaccia per un controllo barra degli strumenti.  
  
```  
HRESULT GetDropTarget(IDropTarget** ppDropTarget) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppDropTarget`  
 Un puntatore a un [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679) puntatore a interfaccia. Se si verifica un errore, un **NULL** puntatore è posizionato in questo indirizzo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `HRESULT` valore che indica l'esito positivo o negativo dell'operazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787343), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetextendedstylea--ctoolbarctrlgetextendedstyle"></a><a name="getextendedstyle"></a>CToolBarCtrl::GetExtendedStyle  
 Recupera gli stili estesi per un controllo barra degli strumenti.  
  
```  
DWORD GetExtendedStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` che rappresenta gli stili estesi attualmente in uso per il controllo barra degli strumenti. Per un elenco di stili, vedere [degli stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb760430), nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb787331), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegethotimagelista--ctoolbarctrlgethotimagelist"></a><a name="gethotimagelist"></a>CToolBarCtrl::GetHotImageList  
 Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti per visualizzare i pulsanti "hot". Un pulsante attivo viene evidenziato quando il puntatore del mouse sopra di esso.  
  
```  
CImageList* GetHotImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto, o **NULL** se non è impostato alcun elenco di immagini disabilitato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETHOTIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787334), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Un pulsante attivo viene evidenziato quando il puntatore del mouse sopra di esso.  
  
##  <a name="a-namegethotitema--ctoolbarctrlgethotitem"></a><a name="gethotitem"></a>CToolBarCtrl::GetHotItem  
 Recupera l'indice dell'elemento attivo in una barra degli strumenti.  
  
```  
int GetHotItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento attivo in una barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETHOTITEM](http://msdn.microsoft.com/library/windows/desktop/bb787336), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetimagelista--ctoolbarctrlgetimagelist"></a><a name="getimagelist"></a>CToolBarCtrl::GetImageList  
 Recupera l'elenco di immagini che utilizza un controllo barra degli strumenti per visualizzare pulsanti nello stato predefinito.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto, o **NULL** se non è impostato alcun elenco di immagini.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787337), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetinsertmarka--ctoolbarctrlgetinsertmark"></a><a name="getinsertmark"></a>CToolBarCtrl::GetInsertMark  
 Recupera il segno di inserimento corrente per la barra degli strumenti.  
  
```  
void GetInsertMark(TBINSERTMARK* ptbim) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ptbim`  
 Un puntatore a un [TBINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb760480) struttura che riceve il segno di inserimento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb787338), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetinsertmarkcolora--ctoolbarctrlgetinsertmarkcolor"></a><a name="getinsertmarkcolor"></a>CToolBarCtrl::GetInsertMarkColor  
 Recupera il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.  
  
```  
COLORREF GetInsertMarkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **COLORREF** contenente il colore del segno di inserimento corrente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb787339), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetitemrecta--ctoolbarctrlgetitemrect"></a><a name="getitemrect"></a>CToolBarCtrl::GetItemRect  
 Recupera il rettangolo di delimitazione di un pulsante in un controllo barra degli strumenti.  
  
```  
BOOL GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del pulsante per il quale recuperare le informazioni.  
  
 `lpRect`  
 Indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che riceve le coordinate del rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione non recupera il rettangolo di delimitazione per i pulsanti del cui stato è impostato su `TBSTATE_HIDDEN`.  
  
##  <a name="a-namegetmaxsizea--ctoolbarctrlgetmaxsize"></a><a name="getmaxsize"></a>CToolBarCtrl::GetMaxSize  
 Recupera le dimensioni totali di tutti i pulsanti visibili e i separatori nella barra degli strumenti.  
  
```  
BOOL GetMaxSize(LPSIZE pSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pSize`  
 Un puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che riceve le dimensioni degli elementi.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETMAXSIZE](http://msdn.microsoft.com/library/windows/desktop/bb787341), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetmaxtextrowsa--ctoolbarctrlgetmaxtextrows"></a><a name="getmaxtextrows"></a>CToolBarCtrl::GetMaxTextRows  
 Recupera il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.  
  
```  
int GetMaxTextRows() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.  
  
##  <a name="a-namegetmetricsa--ctoolbarctrlgetmetrics"></a><a name="getmetrics"></a>CToolBarCtrl::GetMetrics  
 Recupera le metriche di `CToolBarCtrl` oggetto.  
  
```  
void GetMetrics(LPTBMETRICS ptbm) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ptbm`  
 Un puntatore al [TBMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb760482) della struttura di `CToolBarCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [TB_GETMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb787342) dei messaggi, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetpaddinga--ctoolbarctrlgetpadding"></a><a name="getpadding"></a>CToolBarCtrl::GetPadding  
 Recupera la spaziatura orizzontale e verticale del controllo barra degli strumenti corrente.  
  
```  
BOOL GetPadding(
    int* pnHorzPadding,   
    int* pnVertPadding) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `pnHorzPadding`|Valore integer che riceve la spaziatura orizzontale del controllo barra degli strumenti, in pixel.|  
|[out] `pnVertPadding`|Valore integer che riceve la spaziatura verticale del controllo barra degli strumenti, in pixel.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_GETPADDING](http://msdn.microsoft.com/library/windows/desktop/bb787344) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetpressedimagelista--ctoolbarctrlgetpressedimagelist"></a><a name="getpressedimagelist"></a>CToolBarCtrl::GetPressedImageList  
 Recupera l'elenco di immagini che il controllo barra degli strumenti corrente viene utilizzata per rappresentare pulsanti nello stato premuto.  
  
```  
CImageList* GetPressedImageList();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) che contiene l'elenco di immagini per il controllo corrente, o `NULL` se non è impostato alcun elenco di tali immagini.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_GETPRESSEDIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787345) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetrecta--ctoolbarctrlgetrect"></a><a name="getrect"></a>CToolBarCtrl::GetRect  
 Recupera il rettangolo di delimitazione per un pulsante della barra degli strumenti specificata.  
  
```  
BOOL GetRect(
    int nID,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del pulsante.  
  
 `lpRect`  
 Un puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura per ricevere le informazioni di rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb787346), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetrowsa--ctoolbarctrlgetrows"></a><a name="getrows"></a>CToolBarCtrl::GetRows  
 Recupera il numero di righe di pulsanti attualmente visualizzati dal controllo della barra degli strumenti.  
  
```  
int GetRows() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di righe di pulsanti attualmente visualizzati sulla barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Si noti che il numero di righe sarà sempre uno a meno che la barra degli strumenti è stata creata con il `TBSTYLE_WRAPABLE` stile.  
  
##  <a name="a-namegetstatea--ctoolbarctrlgetstate"></a><a name="getstate"></a>CToolBarCtrl::GetState  
 Recupera le informazioni sullo stato del pulsante specificato in un controllo barra degli strumenti, ad esempio se è abilitata, premuto o selezionata.  
  
```  
int GetState(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante per il quale recuperare le informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Le informazioni sullo stato pulsante se ha esito positivo o -1 in caso contrario. Le informazioni sullo stato pulsante possono essere una combinazione dei valori elencati [CToolBarCtrl::AddButtons](#addbuttons).  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile se si desidera recuperare più di uno degli Stati del pulsante. Per recuperare solo uno stato, utilizzare una delle seguenti funzioni membro: [IsButtonEnabled](#isbuttonenabled), [IsButtonChecked](#isbuttonchecked), [IsButtonPressed](#isbuttonpressed), [IsButtonHidden](#isbuttonhidden), o [IsButtonIndeterminate](#isbuttonindeterminate). Tuttavia, il `GetState` funzione membro è l'unico modo per rilevare il `TBSTATE_WRAP` pulsante stato.  
  
##  <a name="a-namegetstringa--ctoolbarctrlgetstring"></a><a name="getstring"></a>CToolBarCtrl::GetString  
 Recupera una stringa sulla barra degli strumenti.  
  
```  
int GetString(
    int nString,  
    LPTSTR lpstrString,  
    int cchMaxLen) const;  
  
int GetString(
    int nString,  
    CString& str) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nString*  
 Indice della stringa.  
  
 *lpstrString*  
 Puntatore a un buffer utilizzato per restituire la stringa.  
  
 *cchMaxLen*  
 Lunghezza del buffer in byte.  
  
 `str`  
 La stringa.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa in caso contrario, -1 se non.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_GETSTRING](http://msdn.microsoft.com/library/windows/desktop/bb787349), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetstylea--ctoolbarctrlgetstyle"></a><a name="getstyle"></a>CToolBarCtrl::GetStyle  
 Ottiene gli stili attualmente applicati a un controllo barra degli strumenti.  
  
```  
DWORD GetStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` contenente una combinazione di [degli stili del controllo barra degli strumenti](http://msdn.microsoft.com/library/windows/desktop/bb760439), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettooltipsa--ctoolbarctrlgettooltips"></a><a name="gettooltips"></a>CToolBarCtrl::GetToolTips  
 Recupera l'handle del controllo descrizione comandi, se presente, associato al controllo della barra degli strumenti.  
  
```  
CToolTipCtrl* GetToolTips() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto associato a questa barra degli strumenti o **NULL** se la barra degli strumenti non dispone di alcun controllo descrizione comandi associato.  
  
### <a name="remarks"></a>Note  
 Poiché il controllo barra degli strumenti in genere crea e gestisce il proprio controllo descrizione comandi, la maggior parte dei programmi non necessario chiamare questa funzione.  
  
##  <a name="a-namehittesta--ctoolbarctrlhittest"></a><a name="hittest"></a>CToolBarCtrl::HitTest  
 Determina dove si trova un punto in un controllo barra degli strumenti.  
  
```  
int HitTest(LPPOINT ppt) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppt`  
 Un puntatore a un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che contiene la coordinata x dell'hit test nel **x** membro e la coordinata y dell'hit test nel **y** membro. Le coordinate sono relative all'area client della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che indica la posizione di un punto su una barra degli strumenti. Se il valore è zero o un valore positivo, il valore restituito è l'indice in base zero dell'elemento nonseparator in cui si trova il punto.  
  
 Se il valore restituito è negativo, il punto non si trova all'interno di un pulsante. Il valore assoluto del valore restituito è l'indice di un elemento separatore o dell'elemento nonseparator più vicino.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb787360), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namehidebuttona--ctoolbarctrlhidebutton"></a><a name="hidebutton"></a>CToolBarCtrl::HideButton  
 Visualizzare o nascondere il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL HideButton(
    int nID,  
    BOOL bHide = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante per visualizzare o nascondere.  
  
 `bHide`  
 **TRUE** per nascondere il pulsante **FALSE** visualizzarla.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Se si desidera modificare lo stato di più di un pulsante, si consiglia di chiamare [SetState](#setstate) invece.  
  
##  <a name="a-nameindeterminatea--ctoolbarctrlindeterminate"></a><a name="indeterminate"></a>CToolBarCtrl::Indeterminate  
 Imposta o Cancella lo stato indeterminato del pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL Indeterminate(
    int nID,  
    BOOL bIndeterminate = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante il cui stato indeterminato è deve essere impostato o cancellato.  
  
 *bIndeterminate*  
 **TRUE** per impostare lo stato indeterminato per il pulsante specificato **FALSE** cancellarlo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Indeterminato pulsanti vengono visualizzati diventa inattivo, ad esempio sarebbe il modo pulsante Grassetto sulla barra degli strumenti di un elaboratore di testo quando il testo selezionato contiene caratteri in grassetto e normale. Se si desidera modificare lo stato di più di un pulsante, si consiglia di chiamare [SetState](#setstate) invece.  
  
##  <a name="a-nameinsertbuttona--ctoolbarctrlinsertbutton"></a><a name="insertbutton"></a>CToolBarCtrl::InsertButton  
 Inserisce un pulsante in un controllo barra degli strumenti.  
  
```  
BOOL InsertButton(
    int nIndex,  
    LPTBBUTTON lpButton);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero di un pulsante. Questa funzione consente di inserire il nuovo pulsante a sinistra di questo pulsante.  
  
 `lpButton`  
 Indirizzo di un `TBBUTTON` struttura contenente informazioni relative al pulsante da inserire. Vedere [CToolBarCtrl::AddButtons](#addbuttons) per una descrizione del `TBBUTTON` struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 L'immagine e/o una stringa il cui indice è fornire deve essere già stato aggiunto al controllo della barra degli strumenti elenco tramite [AddBitmap](#addbitmap), [AddString](#addstring), e/o [AddStrings](#addstrings).  
  
##  <a name="a-nameinsertmarkhittesta--ctoolbarctrlinsertmarkhittest"></a><a name="insertmarkhittest"></a>CToolBarCtrl::InsertMarkHitTest  
 Recupera le informazioni di contrassegno di inserimento per un punto di una barra degli strumenti.  
  
```  
BOOL InsertMarkHitTest(
    LPPOINT ppt,  
    LPTBINSERTMARK ptbim) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppt`  
 Un puntatore a un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) struttura che contiene l'hit test coordina, relativo all'area client della barra degli strumenti.  
  
 `ptbim`  
 Un puntatore a un [TBINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb760480) struttura che riceve le informazioni di contrassegno di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_INSERTMARKHITTEST](http://msdn.microsoft.com/library/windows/desktop/bb787367), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisbuttoncheckeda--ctoolbarctrlisbuttonchecked"></a><a name="isbuttonchecked"></a>CToolBarCtrl::IsButtonChecked  
 Determina se è selezionato il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL IsButtonChecked(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante nella barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante è selezionato; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si consiglia di chiamare [GetState](#getstate) se si desidera recuperare lo stato di più di un pulsante.  
  
##  <a name="a-nameisbuttonenableda--ctoolbarctrlisbuttonenabled"></a><a name="isbuttonenabled"></a>CToolBarCtrl::IsButtonEnabled  
 Determina se è abilitato il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL IsButtonEnabled(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante nella barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante è abilitato; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si consiglia di chiamare [GetState](#getstate) se si desidera recuperare lo stato di più di un pulsante.  
  
##  <a name="a-nameisbuttonhiddena--ctoolbarctrlisbuttonhidden"></a><a name="isbuttonhidden"></a>CToolBarCtrl::IsButtonHidden  
 Determina se il pulsante specificato in un controllo barra degli strumenti è nascosta.  
  
```  
BOOL IsButtonHidden(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante nella barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante è nascosto. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si consiglia di chiamare [GetState](#getstate) se si desidera recuperare lo stato di più di un pulsante.  
  
##  <a name="a-nameisbuttonhighlighteda--ctoolbarctrlisbuttonhighlighted"></a><a name="isbuttonhighlighted"></a>CToolBarCtrl::IsButtonHighlighted  
 Controlla lo stato di evidenziazione di un pulsante della barra degli strumenti.  
  
```  
BOOL IsButtonHighlighted(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 L'ID di comando per il pulsante della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Numero intero positivo se il pulsante è evidenziato, 0 se il pulsante non è evidenziato, oppure -1 se un errore si verifica.  
  
##  <a name="a-nameisbuttonindeterminatea--ctoolbarctrlisbuttonindeterminate"></a><a name="isbuttonindeterminate"></a>CToolBarCtrl::IsButtonIndeterminate  
 Determina se il pulsante specificato in un controllo barra degli strumenti è indeterminato.  
  
```  
BOOL IsButtonIndeterminate(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Identificatore di comando del pulsante nella barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Numero intero positivo se il pulsante è indeterminato, zero se il pulsante non è indeterminato, oppure -1 se un errore generato.  
  
### <a name="remarks"></a>Note  
 Indeterminato pulsanti vengono visualizzati in grigio, ad esempio il modo pulsante Grassetto sulla barra degli strumenti di un elaboratore di testo viene riprodotto il testo selezionato contiene caratteri in grassetto e normale. Si consiglia di chiamare [GetState](#getstate) se si desidera recuperare lo stato di più di un pulsante.  
  
##  <a name="a-nameisbuttonpresseda--ctoolbarctrlisbuttonpressed"></a><a name="isbuttonpressed"></a>CToolBarCtrl::IsButtonPressed  
 Determina se viene premuto il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL IsButtonPressed(int nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante nella barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se viene premuto il pulsante, zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Si consiglia di chiamare [GetState](#getstate) se si desidera recuperare lo stato di più di un pulsante.  
  
##  <a name="a-nameloadimagesa--ctoolbarctrlloadimages"></a><a name="loadimages"></a>CToolBarCtrl::LoadImages  
 Carica bitmap nell'elenco di immagini del controllo barra degli strumenti.  
  
```  
void LoadImages(
    int iBitmapID,  
    HINSTANCE hinst);
```  
  
### <a name="parameters"></a>Parametri  
 *iBitmapID*  
 ID della bitmap che contiene le immagini da caricare. Per specificare il proprio risorsa bitmap, impostare questo parametro per l'ID di una risorsa bitmap e impostare `hInst` a **NULL**. La risorsa bitmap verrà aggiunto all'elenco di immagini come una singola immagine. È possibile aggiungere immagini bitmap standard, definito dal sistema impostando *hinst* a **HINST_COMMCTRL** e impostando questo parametro su uno dei seguenti ID:  
  
|ID di bitmap|Descrizione|  
|---------------|-----------------|  
|IDB_HIST_LARGE_COLOR|Esplora le bitmap di grandi dimensioni|  
|IDB_HIST_SMALL_COLOR|Esplora le bitmap in dimensioni ridotte|  
|IDB_STD_LARGE_COLOR|Bitmap standard di grandi dimensioni|  
|IDB_STD_SMALL_COLOR|Bitmap standard in dimensioni ridotte|  
|IDB_VIEW_LARGE_COLOR|Visualizzazione di bitmap di grandi dimensioni|  
|IDB_VIEW_SMALL_COLOR|Visualizzazione di bitmap in dimensioni ridotte|  
  
 *hinst*  
 Handle di istanza programma all'applicazione chiamante. Questo parametro può essere **HINST_COMMCTRL** per caricare un elenco di immagini standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_LOADIMAGES](http://msdn.microsoft.com/library/windows/desktop/bb787381), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemapacceleratora--ctoolbarctrlmapaccelerator"></a><a name="mapaccelerator"></a>CToolBarCtrl::MapAccelerator  
 Esegue il mapping di un carattere di tasti di scelta rapida a un pulsante della barra degli strumenti.  
  
```  
BOOL MapAccelerator(
    TCHAR chAccel,  
    UINT* pIDBtn);
```  
  
### <a name="parameters"></a>Parametri  
 `chAccel`  
 Carattere di tasti di scelta rapida per eseguire il mapping. Questo è il carattere stesso sottolineata nel testo del pulsante.  
  
 *pIDBtn*  
 Un puntatore a un **UINT** che riceve l'identificatore di comando del pulsante corrispondente al tasto di scelta rapida specificato `chAccel`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_MAPACCELERATOR](http://msdn.microsoft.com/library/windows/desktop/bb787383), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemarkbuttona--ctoolbarctrlmarkbutton"></a><a name="markbutton"></a>CToolBarCtrl::MarkButton  
 Imposta lo stato di evidenziazione di un determinato pulsante in un controllo barra degli strumenti.  
  
```  
BOOL MarkButton(
    int nID,  
    BOOL fHighlight = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del pulsante.  
  
 `fHighlight`  
 Specifica lo stato di evidenziazione da impostare. Per impostazione predefinita, **TRUE**. Se impostato su **FALSE**, il pulsante viene impostato lo stato predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_MARKBUTTON](http://msdn.microsoft.com/library/windows/desktop/bb787385), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemovebuttona--ctoolbarctrlmovebutton"></a><a name="movebutton"></a>CToolBarCtrl::MoveButton  
 Sposta un pulsante da un indice a altro.  
  
```  
BOOL MoveButton(
    UINT nOldPos,  
    UINT nNewPos);
```  
  
### <a name="parameters"></a>Parametri  
 *nOldPos*  
 Indice in base zero del pulsante da spostare.  
  
 *nNewPos*  
 Indice in base zero della destinazione del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_MOVEBUTTON](http://msdn.microsoft.com/library/windows/desktop/bb787387), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namepressbuttona--ctoolbarctrlpressbutton"></a><a name="pressbutton"></a>CToolBarCtrl::PressButton  
 Preme o rilascia il pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL PressButton(int nID, BOOL bPress = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Identificatore di comando del pulsante premere o di rilascio.  
  
 [in] `bPress`  
 `true`Premere il pulsante specificato; `false` per rilasciare il pulsante specificato. Il valore predefinito è `true`.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il metodo ha esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se si desidera modificare lo stato di più di un pulsante, si consiglia di chiamare [SetState](#setstate) invece.  
  
 Questo metodo invia il [TB_PRESSBUTTON](http://msdn.microsoft.com/library/windows/desktop/bb787389) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namereplacebitmapa--ctoolbarctrlreplacebitmap"></a><a name="replacebitmap"></a>CToolBarCtrl::ReplaceBitmap  
 Sostituisce la bitmap esistente nel controllo della barra degli strumenti corrente con una nuova bitmap.  
  
```  
BOOL ReplaceBitmap(LPTBREPLACEBITMAP pReplaceBitmap);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pReplaceBitmap`|Puntatore a un [TBREPLACEBITMAP](http://msdn.microsoft.com/library/windows/desktop/bb760484) struttura che descrive la bitmap da sostituire e nuova bitmap.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_REPLACEBITMAP](http://msdn.microsoft.com/library/windows/desktop/bb787391) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente sostituisce la bitmap della barra degli strumenti standard con una bitmap diversa.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1 n.&2;](../../mfc/reference/codesnippet/cpp/ctoolbarctrl-class_4.cpp)]  
  
##  <a name="a-namerestorestatea--ctoolbarctrlrestorestate"></a><a name="restorestate"></a>CToolBarCtrl::RestoreState  
 Ripristina lo stato del controllo barra degli strumenti dal percorso del Registro di sistema specificati dai parametri.  
  
```  
void RestoreState(
    HKEY hKeyRoot,  
    LPCTSTR lpszSubKey,  
    LPCTSTR lpszValueName);
```  
  
### <a name="parameters"></a>Parametri  
 `hKeyRoot`  
 Identifica una chiave attualmente aperta nel Registro di sistema o uno dei valori predefiniti handle riservati seguenti:  
  
- **HKEY_CLASSES_ROOT.**  
  
- **HKEY_CURRENT_USER**  
  
- **HKEY_LOCAL_MACHINE**  
  
- **HKEY_USERS**  
  
 `lpszSubKey`  
 Punta a una stringa con terminazione null contenente il nome della sottochiave a cui è associato un valore. Questo parametro può essere null o un puntatore a una stringa vuota. Se il parametro è **NULL**, verrà aggiunto il valore della chiave identificate le `hKeyRoot` parametro.  
  
 `lpszValueName`  
 Punta a una stringa contenente il nome del valore da recuperare. Se un valore con questo nome non è già presente nella chiave, la funzione aggiunge la chiave.  
  
##  <a name="a-namesavestatea--ctoolbarctrlsavestate"></a><a name="savestate"></a>CToolBarCtrl::SaveState  
 Salva lo stato del controllo barra degli strumenti nella posizione specificata dai parametri del Registro di sistema.  
  
```  
void SaveState(
    HKEY hKeyRoot,  
    LPCTSTR lpszSubKey,  
    LPCTSTR lpszValueName);
```  
  
### <a name="parameters"></a>Parametri  
 `hKeyRoot`  
 Identifica una chiave attualmente aperta nel Registro di sistema o uno dei valori predefiniti handle riservati seguenti:  
  
- **HKEY_CLASSES_ROOT.**  
  
- **HKEY_CURRENT_USER**  
  
- **HKEY_LOCAL_MACHINE**  
  
- **HKEY_USERS**  
  
 `lpszSubKey`  
 Punta a una stringa con terminazione null contenente il nome della sottochiave a cui è associato un valore. Questo parametro può essere null o un puntatore a una stringa vuota. Se il parametro è **NULL**, verrà aggiunto il valore della chiave identificate le `hKeyRoot` parametro.  
  
 `lpszValueName`  
 Punta a una stringa contenente il nome del valore da impostare. Se un valore con questo nome non è già presente nella chiave, la funzione aggiunge la chiave.  
  
##  <a name="a-namesetanchorhighlighta--ctoolbarctrlsetanchorhighlight"></a><a name="setanchorhighlight"></a>CToolBarCtrl::SetAnchorHighlight  
 Imposta l'evidenziazione di ancoraggio impostazione per una barra degli strumenti.  
  
```  
BOOL SetAnchorHighlight(BOOL fAnchor = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `fAnchor`  
 Specifica se l'evidenziazione di ancoraggio è abilitato o disabilitato. Se questo valore è diverso da zero, verrà attivato l'evidenziazione di ancoraggio. Se questo valore è zero, l'evidenziazione di ancoraggio verrà disabilitata  
  
### <a name="return-value"></a>Valore restituito  
 L'impostazione di ancoraggio precedente. Se è stata abilitata l'evidenziazione, questo valore è diverso da zero. Se l'evidenziazione non è stato abilitato, questo valore è zero.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [TB_SETANCHORHIGHLIGHT](http://msdn.microsoft.com/library/windows/desktop/bb787396), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetbitmapsizea--ctoolbarctrlsetbitmapsize"></a><a name="setbitmapsize"></a>CToolBarCtrl::SetBitmapSize  
 Imposta le dimensioni delle immagini bitmap effettive da aggiungere a un controllo barra degli strumenti.  
  
```  
BOOL SetBitmapSize(CSize size);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Larghezza e altezza, in pixel, delle immagini bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo prima di aggiungere tutte le bitmap alla barra degli strumenti. Se l'applicazione non è impostata in modo esplicito le dimensioni di bitmap, valore predefinito è 16 per 15 pixel.  
  
##  <a name="a-namesetbuttoninfoa--ctoolbarctrlsetbuttoninfo"></a><a name="setbuttoninfo"></a>CToolBarCtrl::SetButtonInfo  
 Imposta le informazioni per un pulsante esistente in una barra degli strumenti.  
  
```  
BOOL SetButtonInfo(
    int nID,  
    TBBUTTONINFO* ptbbi);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del pulsante.  
  
 `ptbbi`  
 Un puntatore a un [TBBUTTONINFO](http://msdn.microsoft.com/library/windows/desktop/bb760478) struttura che riceve le informazioni del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La funzione membro implementa il comportamento del messaggio Win32 [TB_SETBUTTONINFO](http://msdn.microsoft.com/library/windows/desktop/bb787413), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetbuttonsizea--ctoolbarctrlsetbuttonsize"></a><a name="setbuttonsize"></a>CToolBarCtrl::SetButtonSize  
 Imposta la dimensione dei pulsanti del controllo barra degli strumenti.  
  
```  
BOOL SetButtonSize(CSize size);
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Larghezza e altezza, in pixel, dei pulsanti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Le dimensioni del pulsante devono sempre essere grande almeno come le dimensioni di bitmap che racchiude. Questa funzione deve essere chiamata solo prima di aggiungere tutte le bitmap alla barra degli strumenti. Se l'applicazione non è impostata in modo esplicito le dimensioni del pulsante, viene impostata automaticamente su 24 per 22 pixel.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CToolBar:: GetToolBarCtrl](../../mfc/reference/ctoolbar-class.md#gettoolbarctrl).  
  
##  <a name="a-namesetbuttonstructsizea--ctoolbarctrlsetbuttonstructsize"></a><a name="setbuttonstructsize"></a>CToolBarCtrl::SetButtonStructSize  
 Specifica la dimensione del `TBBUTTON` struttura.  
  
```  
void SetButtonStructSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 `nSize`  
 Dimensione, in byte, del `TBBUTTON` struttura.  
  
### <a name="remarks"></a>Note  
 Se si desidera archiviare dati aggiuntivi nel `TBBUTTON` struttura, è possibile derivare una nuova struttura da `TBBUTTON`, aggiunta di membri è necessaria o creare una nuova struttura che contiene un `TBBUTTON` struttura come primo membro. Per chiamare questa funzione per indicare le dimensioni della nuova struttura il controllo barra degli strumenti.  
  
 Vedere [CToolBarCtrl::AddButtons](#addbuttons) per ulteriori informazioni sui `TBBUTTON` struttura.  
  
##  <a name="a-namesetbuttonwidtha--ctoolbarctrlsetbuttonwidth"></a><a name="setbuttonwidth"></a>CToolBarCtrl::SetButtonWidth  
 Imposta la larghezza di minimo e massimo pulsante nel controllo della barra degli strumenti.  
  
```  
BOOL SetButtonWidth(
    int cxMin,  
    int cxMax);
```  
  
### <a name="parameters"></a>Parametri  
 `cxMin`  
 Larghezza del pulsante minima, in pixel. Pulsanti della barra degli strumenti non potranno mai essere inferiore a questo valore.  
  
 *cxMax*  
 Larghezza del pulsante massima, in pixel. Se il testo del pulsante è troppo grande, il controllo viene visualizzato con punti di puntini di sospensione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETBUTTONWIDTH](http://msdn.microsoft.com/library/windows/desktop/bb787417), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetcmdida--ctoolbarctrlsetcmdid"></a><a name="setcmdid"></a>CToolBarCtrl::SetCmdID  
 Imposta l'identificatore di comando che verrà inviato alla finestra proprietaria quando viene premuto il pulsante specificato.  
  
```  
BOOL SetCmdID(
    int nIndex,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del pulsante è necessario impostare il cui ID di comando.  
  
 `nID`  
 L'ID di comando per impostare il pulsante selezionato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero se ha esito positivo. in caso contrario, zero.  
  
##  <a name="a-namesetcolorschemea--ctoolbarctrlsetcolorscheme"></a><a name="setcolorscheme"></a>CToolBarCtrl::SetColorScheme  
 Imposta la combinazione di colori del controllo barra degli strumenti corrente.  
  
```  
void SetColorScheme(const COLORSCHEME* lpColorScheme);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `lpColorScheme`|Puntatore a un [COLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb775502) struttura che descrive il colore di evidenziazione e il colore di ombreggiatura del controllo barra degli strumenti.|  
  
### <a name="remarks"></a>Note  
 Questo metodo non ha effetto se un [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] tema è impostata.  
  
 Questo metodo invia il [TB_SETCOLORSCHEME](http://msdn.microsoft.com/library/windows/desktop/bb787421) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta la combinazione di colori per il controllo barra degli strumenti corrente. L'esempio di codice rende i bordi superiore e sinistro di ogni pulsante strumento rosso e i bordi inferiore e destro blu. Quando l'utente preme il pulsante, bordi rossi del pulsante blu e rosso bordi blu.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1 n.&3;](../../mfc/reference/codesnippet/cpp/ctoolbarctrl-class_5.cpp)]  
  
##  <a name="a-namesetdisabledimagelista--ctoolbarctrlsetdisabledimagelist"></a><a name="setdisabledimagelist"></a>CToolBarCtrl::SetDisabledImageList  
 Imposta l'elenco di immagini che verrà utilizzato il controllo barra degli strumenti per i pulsanti di visualizzazione disabilitato.  
  
```  
CImageList* SetDisabledImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto contenente le immagini da utilizzare per il controllo barra degli strumenti per le icone dei pulsanti di visualizzazione disabilitata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto utilizzato dal controllo della barra degli strumenti per le icone dei pulsanti di visualizzazione disabilitata.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETDISABLEDIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787423), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. L'implementazione MFC di `SetDisabledImageList` utilizza un `CImageList` pulsante disabilitato del controllo barra degli strumenti contenente immagini, anziché un handle per un elenco di immagini.  
  
##  <a name="a-namesetdrawtextflagsa--ctoolbarctrlsetdrawtextflags"></a><a name="setdrawtextflags"></a>CToolBarCtrl::SetDrawTextFlags  
 Imposta i flag della funzione Win32 [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498), che viene utilizzato per disegnare il testo nel rettangolo specificato, formattato in base a come i flag sono impostati.  
  
```  
DWORD SetDrawTextFlags(
    DWORD dwMask,  
    DWORD dwDTFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMask`  
 Una combinazione di uno o più flag DT_, specificati nella funzione Win32 [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498), che indica quale bit `dwDTFlags` verrà utilizzato durante la creazione del testo.  
  
 `dwDTFlags`  
 Una combinazione di uno o più flag DT_, specificati nella funzione Win32 `DrawText`, che indicano come verrà disegnato il testo del pulsante. Questo valore viene passato a `DrawText` quando viene disegnato il testo del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` contenente i flag di disegno di testo precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETDRAWTEXTFLAGS](http://msdn.microsoft.com/library/windows/desktop/bb787425), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Questa funzione membro imposta i flag della funzione Win32 `DrawText`, che disegna il testo nel rettangolo specificato, formattato in base a come i flag sono impostati.  
  
##  <a name="a-namesetextendedstylea--ctoolbarctrlsetextendedstyle"></a><a name="setextendedstyle"></a>CToolBarCtrl::SetExtendedStyle  
 Imposta gli stili estesi per un controllo barra degli strumenti.  
  
```  
DWORD SetExtendedStyle(DWORD dwExStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Un valore che specifica gli stili estesi nuovo. Questo parametro può essere una combinazione della barra degli strumenti stili estesi.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` che rappresenta il precedente stili estesi. Per un elenco di stili, vedere [degli stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb760430), nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETEXTENDEDSTYLE](http://msdn.microsoft.com/library/windows/desktop/bb787427), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesethotimagelista--ctoolbarctrlsethotimagelist"></a><a name="sethotimagelist"></a>CToolBarCtrl::SetHotImageList  
 Imposta l'elenco di immagini che verrà utilizzato il controllo barra degli strumenti per visualizzare pulsanti "hot".  
  
```  
CImageList* SetHotImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto contenente le immagini da utilizzare per il controllo barra degli strumenti per visualizzare immagini pulsante attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto che è stato precedentemente utilizzato dal controllo della barra degli strumenti per visualizzare immagini pulsante attivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETHOTIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787429), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 L'implementazione MFC di `SetHotImageList` utilizza un `CImageList` pulsante attivo del controllo barra degli strumenti contenente immagini, anziché un handle per un elenco di immagini. Un pulsante attivo viene evidenziato quando il puntatore si trova sopra di esso.  
  
##  <a name="a-namesethotitema--ctoolbarctrlsethotitem"></a><a name="sethotitem"></a>CToolBarCtrl::SetHotItem  
 Imposta l'elemento attivo in una barra degli strumenti.  
  
```  
int SetHotItem(int nHot);
```  
  
### <a name="parameters"></a>Parametri  
 *nHot*  
 Numero di indice in base zero dell'elemento che verrà apportata a caldo. Se questo valore è -1, nessuno degli elementi sarà attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento attivo precedente, oppure -1 se non vi sono elementi a caldo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETHOTITEM](http://msdn.microsoft.com/library/windows/desktop/bb787431), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetimagelista--ctoolbarctrlsetimagelist"></a><a name="setimagelist"></a>CToolBarCtrl::SetImageList  
 Imposta l'elenco di immagini che utilizzerà la barra degli strumenti per visualizzare pulsanti che si trovano nello stato predefinito.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto contenente le immagini da utilizzare per il controllo barra degli strumenti per visualizzare immagini pulsante nello stato predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto che è stato precedentemente utilizzato dal controllo della barra degli strumenti per visualizzare immagini pulsante nello stato predefinito.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787433), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 L'implementazione MFC di `SetImageList` utilizza un `CImageList` immagini oggetto contenente il pulsante del controllo barra degli strumenti, anziché un handle per un elenco di immagini.  
  
##  <a name="a-namesetindenta--ctoolbarctrlsetindent"></a><a name="setindent"></a>CToolBarCtrl::SetIndent  
 Imposta il rientro per il primo pulsante in un controllo barra degli strumenti.  
  
```  
BOOL SetIndent(int iIndent);
```  
  
### <a name="parameters"></a>Parametri  
 *Membro*  
 Il valore che specifica il rientro, in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
##  <a name="a-namesetinsertmarka--ctoolbarctrlsetinsertmark"></a><a name="setinsertmark"></a>CToolBarCtrl::SetInsertMark  
 Imposta il segno di inserimento corrente per la barra degli strumenti.  
  
```  
void SetInsertMark(TBINSERTMARK* ptbim);
```  
  
### <a name="parameters"></a>Parametri  
 `ptbim`  
 Un puntatore per il [TBINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb760480) struttura che contiene il segno di inserimento.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETINSERTMARK](http://msdn.microsoft.com/library/windows/desktop/bb787437), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetinsertmarkcolora--ctoolbarctrlsetinsertmarkcolor"></a><a name="setinsertmarkcolor"></a>CToolBarCtrl::SetInsertMarkColor  
 Imposta il colore utilizzato per disegnare il segno di inserimento per la barra degli strumenti.  
  
```  
COLORREF SetInsertMarkColor(COLORREF clrNew);
```  
  
### <a name="parameters"></a>Parametri  
 `clrNew`  
 Oggetto **COLORREF** contenente il nuovo colore del segno di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **COLORREF** contenente il colore del segno di inserimento precedente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [TB_SETINSERTMARKCOLOR](http://msdn.microsoft.com/library/windows/desktop/bb787439), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetmaxtextrowsa--ctoolbarctrlsetmaxtextrows"></a><a name="setmaxtextrows"></a>CToolBarCtrl::SetMaxTextRows  
 Imposta il numero massimo di righe di testo visualizzato su un pulsante della barra degli strumenti.  
  
```  
BOOL SetMaxTextRows(int iMaxRows);
```  
  
### <a name="parameters"></a>Parametri  
 *iMaxRows*  
 Numero massimo di righe da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
##  <a name="a-namesetmetricsa--ctoolbarctrlsetmetrics"></a><a name="setmetrics"></a>CToolBarCtrl::SetMetrics  
 Imposta le metriche di `CToolBarCtrl` oggetto.  
  
```  
void SetMetrics(LPTBMETRICS ptbm);
```  
  
### <a name="parameters"></a>Parametri  
 `ptbm`  
 Un puntatore al [TBMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb760482) della struttura di `CToolBarCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [TB_SETMETRICS](http://msdn.microsoft.com/library/windows/desktop/bb787446) dei messaggi, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetownera--ctoolbarctrlsetowner"></a><a name="setowner"></a>CToolBarCtrl::SetOwner  
 Imposta la finestra proprietaria per il controllo barra degli strumenti.  
  
```  
void SetOwner(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore al `CWnd` o `CWnd`-oggetto che sarà la nuova finestra proprietaria per il controllo toolbar derivato.  
  
### <a name="remarks"></a>Note  
 La finestra proprietaria è la finestra che riceve notifiche dalla barra degli strumenti.  
  
##  <a name="a-namesetpaddinga--ctoolbarctrlsetpadding"></a><a name="setpadding"></a>CToolBarCtrl::SetPadding  
 Imposta la spaziatura orizzontale e verticale del controllo barra degli strumenti corrente.  
  
```  
DWORD SetPadding(
    int nHorzPadding,   
    int nVertPadding);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nHorzPadding`|Specifica la spaziatura orizzontale del controllo barra degli strumenti, in pixel.|  
|[in] `nVertPadding`|Specifica la spaziatura verticale del controllo barra degli strumenti, in pixel.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` i cui word basso contiene il valore di spaziatura orizzontale precedente e il cui word superiore contiene il valore di spaziatura verticale precedente. I valori di riempimento vengono misurati in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_SETPADDING](http://msdn.microsoft.com/library/windows/desktop/bb787448) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta la spaziatura orizzontale e verticale del controllo barra degli strumenti corrente per 20 pixel.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1 n.&4;](../../mfc/reference/codesnippet/cpp/ctoolbarctrl-class_6.cpp)]  
  
##  <a name="a-namesetpressedimagelista--ctoolbarctrlsetpressedimagelist"></a><a name="setpressedimagelist"></a>CToolBarCtrl::SetPressedImageList  
 Imposta l'elenco di immagini che il controllo barra degli strumenti corrente viene utilizzata per rappresentare pulsanti nello stato premuto.  
  
```  
CImagelist* SetPressedImageList(
    int iImageID,   
    CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iImageID`|Indice in base zero dell'elenco immagini. Se si utilizza solo un elenco di immagini, impostare questo parametro su zero.|  
|[in] `pImageList`|Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) che contiene il nuovo elenco immagini.|  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) che contiene l'elenco di immagini precedente per il controllo corrente, o `NULL` se è stato impostato alcun elenco di tali immagini.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [TB_SETPRESSEDIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb787453) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta l'elenco di immagini premuto per essere lo stesso elenco di immagini predefinito.  
  
 [!code-cpp[NVC_MFC_CToolBarCtrl_s1 n.&5;](../../mfc/reference/codesnippet/cpp/ctoolbarctrl-class_7.cpp)]  
  
##  <a name="a-namesetrowsa--ctoolbarctrlsetrows"></a><a name="setrows"></a>CToolBarCtrl::SetRows  
 Richiede il controllo barra degli strumenti di ridimensionamento per il numero di righe richiesto.  
  
```  
void SetRows(
    int nRows,  
    BOOL bLarger,  
    LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `nRows`  
 Numero di righe richiesto.  
  
 `bLarger`  
 Indica se utilizzare più righe o meno righe se non è possibile ridimensionare la barra degli strumenti per il numero di righe richiesto.  
  
 `lpRect`  
 Indichi il [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceverà il nuovo rettangolo di delimitazione della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Se la barra degli strumenti non è ridimensionato automaticamente per il numero richiesto di righe, il ridimensionamento verrà una per il successiva più grande o successiva più piccoli dimensione valida, a seconda del valore di `bLarger`. Se `bLarger` è **TRUE**, il nuovo numero di righe sarà maggiore del numero richiesto. Se `bLarger` è **FALSE**, il nuovo numero di righe sarà inferiore al numero richiesto.  
  
 Un determinato numero di righe è valido per la barra degli strumenti se i pulsanti possono essere organizzati in modo che tutte le righe hanno lo stesso numero di pulsanti (ad eccezione forse l'ultima riga). Ad esempio, una barra degli strumenti che contiene quattro pulsanti potrebbe non essere ridimensionato a tre righe perché le ultime due righe devono essere più breve. Se si è tentato di ridimensionarlo a tre righe, si otterrebbe quattro righe `bLarger` era **TRUE** e due righe se `bLarger` era **FALSE**.  
  
 Se sono presenti separatori nella barra degli strumenti, le regole per l'utilizzo di un determinato numero di righe valido sono più complesse. Il layout viene calcolato in modo che i gruppi di pulsanti (pulsanti con un separatore prima del primo) e l'ultimo pulsante nel gruppo non sono mai suddivisi su più righe, a meno che il gruppo non può essere contenuta in una riga.  
  
 Se un gruppo non rientra in una riga, il gruppo successivo inizierà nella riga successiva anche se è possibile inserire nella riga in cui il gruppo di grandi dimensioni è terminato. Lo scopo di questa regola è rendere la separazione tra gruppi di grandi dimensioni più evidenti. I separatori verticali risultanti vengono conteggiati come righe.  
  
 Si noti inoltre che il `SetRows` funzione membro sempre verrà scelto il layout che determina le dimensioni minime della barra degli strumenti. Creazione di una barra degli strumenti con il `TBSTYLE_WRAPABLE` lo stile e il ridimensionamento del controllo applicherà semplicemente il metodo descritto in precedenza specificato la larghezza del controllo.  
  
 Questa funzione può essere chiamata solo per le barre degli strumenti che sono stati creati con il `TBSTYLE_WRAPABLE` stile.  
  
##  <a name="a-namesetstatea--ctoolbarctrlsetstate"></a><a name="setstate"></a>CToolBarCtrl::SetState  
 Imposta lo stato del pulsante specificato in un controllo barra degli strumenti.  
  
```  
BOOL SetState(
    int nID,  
    UINT nState);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore di comando del pulsante.  
  
 `nState`  
 Flag di stato. Può essere una combinazione dei valori elencati per stati dei pulsanti in [CToolBarCtrl::AddButtons](#addbuttons).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile se si desidera impostare più di uno degli Stati del pulsante. Per impostare solo uno stato, utilizzare una delle seguenti funzioni membro: [EnableButton](#enablebutton), [CheckButton](#checkbutton), [HideButton](#hidebutton), [indeterminato](#indeterminate), o [PressButton](#pressbutton).  
  
##  <a name="a-namesetstylea--ctoolbarctrlsetstyle"></a><a name="setstyle"></a>CToolBarCtrl::SetStyle  
 Imposta gli stili per un controllo barra degli strumenti.  
  
```  
void SetStyle(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Oggetto `DWORD` contenente una combinazione di [degli stili del controllo barra degli strumenti](http://msdn.microsoft.com/library/windows/desktop/bb760439), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesettooltipsa--ctoolbarctrlsettooltips"></a><a name="settooltips"></a>CToolBarCtrl::SetToolTips  
 Associa un controllo descrizione comandi a un controllo barra degli strumenti.  
  
```  
void SetToolTips(CToolTipCtrl* pTip);
```  
  
### <a name="parameters"></a>Parametri  
 *pTip*  
 Puntatore al [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) oggetto.  
  
##  <a name="a-namesetwindowthemea--ctoolbarctrlsetwindowtheme"></a><a name="setwindowtheme"></a>CToolBarCtrl::SetWindowTheme  
 Imposta lo stile di visualizzazione di `CToolBarCtrl` oggetto.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### <a name="parameters"></a>Parametri  
 `pszSubAppName`  
 Un puntatore a una stringa Unicode contenente lo stile di visualizzazione della barra degli strumenti per impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non viene utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [TB_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb787465) dei messaggi, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CMNCTRL1](../../visual-cpp-samples.md)   
 [Esempio di MFCIE MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar (classe)](../../mfc/reference/ctoolbar-class.md)

