---
title: Classe CListBox
description: Descrizione della classe CListBox MFC e delle relative funzioni membro.
ms.date: 01/22/2020
f1_keywords:
- CListBox
- AFXWIN/CListBox
- AFXWIN/CListBox::CListBox
- AFXWIN/CListBox::AddString
- AFXWIN/CListBox::CharToItem
- AFXWIN/CListBox::CompareItem
- AFXWIN/CListBox::Create
- AFXWIN/CListBox::DeleteItem
- AFXWIN/CListBox::DeleteString
- AFXWIN/CListBox::Dir
- AFXWIN/CListBox::DrawItem
- AFXWIN/CListBox::FindString
- AFXWIN/CListBox::FindStringExact
- AFXWIN/CListBox::GetAnchorIndex
- AFXWIN/CListBox::GetCaretIndex
- AFXWIN/CListBox::GetCount
- AFXWIN/CListBox::GetCurSel
- AFXWIN/CListBox::GetHorizontalExtent
- AFXWIN/CListBox::GetItemData
- AFXWIN/CListBox::GetItemDataPtr
- AFXWIN/CListBox::GetItemHeight
- AFXWIN/CListBox::GetItemRect
- AFXWIN/CListBox::GetListBoxInfo
- AFXWIN/CListBox::GetLocale
- AFXWIN/CListBox::GetSel
- AFXWIN/CListBox::GetSelCount
- AFXWIN/CListBox::GetSelItems
- AFXWIN/CListBox::GetText
- AFXWIN/CListBox::GetTextLen
- AFXWIN/CListBox::GetTopIndex
- AFXWIN/CListBox::InitStorage
- AFXWIN/CListBox::InsertString
- AFXWIN/CListBox::ItemFromPoint
- AFXWIN/CListBox::MeasureItem
- AFXWIN/CListBox::ResetContent
- AFXWIN/CListBox::SelectString
- AFXWIN/CListBox::SelItemRange
- AFXWIN/CListBox::SetAnchorIndex
- AFXWIN/CListBox::SetCaretIndex
- AFXWIN/CListBox::SetColumnWidth
- AFXWIN/CListBox::SetCurSel
- AFXWIN/CListBox::SetHorizontalExtent
- AFXWIN/CListBox::SetItemData
- AFXWIN/CListBox::SetItemDataPtr
- AFXWIN/CListBox::SetItemHeight
- AFXWIN/CListBox::SetLocale
- AFXWIN/CListBox::SetSel
- AFXWIN/CListBox::SetTabStops
- AFXWIN/CListBox::SetTopIndex
- AFXWIN/CListBox::VKeyToItem
helpviewer_keywords:
- CListBox [MFC], CListBox
- CListBox [MFC], AddString
- CListBox [MFC], CharToItem
- CListBox [MFC], CompareItem
- CListBox [MFC], Create
- CListBox [MFC], DeleteItem
- CListBox [MFC], DeleteString
- CListBox [MFC], Dir
- CListBox [MFC], DrawItem
- CListBox [MFC], FindString
- CListBox [MFC], FindStringExact
- CListBox [MFC], GetAnchorIndex
- CListBox [MFC], GetCaretIndex
- CListBox [MFC], GetCount
- CListBox [MFC], GetCurSel
- CListBox [MFC], GetHorizontalExtent
- CListBox [MFC], GetItemData
- CListBox [MFC], GetItemDataPtr
- CListBox [MFC], GetItemHeight
- CListBox [MFC], GetItemRect
- CListBox [MFC], GetListBoxInfo
- CListBox [MFC], GetLocale
- CListBox [MFC], GetSel
- CListBox [MFC], GetSelCount
- CListBox [MFC], GetSelItems
- CListBox [MFC], GetText
- CListBox [MFC], GetTextLen
- CListBox [MFC], GetTopIndex
- CListBox [MFC], InitStorage
- CListBox [MFC], InsertString
- CListBox [MFC], ItemFromPoint
- CListBox [MFC], MeasureItem
- CListBox [MFC], ResetContent
- CListBox [MFC], SelectString
- CListBox [MFC], SelItemRange
- CListBox [MFC], SetAnchorIndex
- CListBox [MFC], SetCaretIndex
- CListBox [MFC], SetColumnWidth
- CListBox [MFC], SetCurSel
- CListBox [MFC], SetHorizontalExtent
- CListBox [MFC], SetItemData
- CListBox [MFC], SetItemDataPtr
- CListBox [MFC], SetItemHeight
- CListBox [MFC], SetLocale
- CListBox [MFC], SetSel
- CListBox [MFC], SetTabStops
- CListBox [MFC], SetTopIndex
- CListBox [MFC], VKeyToItem
ms.assetid: 7ba3c699-c286-4cd9-9066-532c41ec05d1
ms.openlocfilehash: 5c3337641dcfc720a5f9fbccf5bb0614e97c3b54
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420337"
---
# <a name="clistbox-class"></a>Classe CListBox

Fornisce la funzionalità di una casella di riepilogo di Windows.

## <a name="syntax"></a>Sintassi

```
class CListBox : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListBox:: CListBox](#clistbox)|Costruisce un oggetto `CListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListBox::AddString](#addstring)|Aggiunge una stringa a una casella di riepilogo.|
|[CListBox:: CharToItem](#chartoitem)|Eseguire l'override di per fornire la gestione personalizzata dei WM_CHAR per le caselle di riepilogo con il proprietario, che non hanno stringhe.|
|[CListBox:: CompareItem](#compareitem)|Chiamato dal Framework per determinare la posizione di un nuovo elemento in una casella di riepilogo ordinata dal proprietario.|
|[CListBox:: create](#create)|Crea la casella di riepilogo di Windows e la collega all'oggetto `CListBox`.|
|[CListBox::D eleteItem](#deleteitem)|Chiamata eseguita dal framework quando l'utente elimina un elemento da una casella di riepilogo creata dal proprietario.|
|[CListBox::D eleteString](#deletestring)|Elimina una stringa da una casella di riepilogo.|
|[CListBox::D IR](#dir)|Aggiunge nomi di file, unità o entrambi dalla directory corrente a una casella di riepilogo.|
|[CListBox::D rawItem](#drawitem)|Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella di riepilogo creata dal proprietario.|
|[CListBox:: FindString](#findstring)|Cerca una stringa in una casella di riepilogo.|
|[CListBox:: FindExactString](#findstringexact)|Trova la prima stringa della casella di riepilogo che corrisponde a una stringa specificata.|
|[CListBox:: GetAnchorIndex](#getanchorindex)|Recupera l'indice in base zero dell'elemento di ancoraggio corrente in una casella di riepilogo.|
|[CListBox:: GetCaretIndex](#getcaretindex)|Determina l'indice dell'elemento con il rettangolo di attivazione in una casella di riepilogo a selezione multipla.|
|[CListBox:: GetCount](#getcount)|Restituisce il numero di stringhe in una casella di riepilogo.|
|[CListBox:: GetCurSel](#getcursel)|Restituisce l'indice in base zero della stringa attualmente selezionata in una casella di riepilogo.|
|[CListBox:: GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel a cui è possibile scorrere orizzontalmente una casella di riepilogo.|
|[CListBox:: GetItemData](#getitemdata)|Restituisce un valore associato all'elemento della casella di riepilogo.|
|[CListBox:: GetItemDataPtr](#getitemdataptr)|Restituisce un puntatore a un elemento della casella di riepilogo.|
|[CListBox:: GetItemHeight](#getitemheight)|Determina l'altezza degli elementi in una casella di riepilogo.|
|[CListBox:: GetItemRect](#getitemrect)|Restituisce il rettangolo di delimitazione dell'elemento della casella di riepilogo come attualmente visualizzato.|
|[CListBox:: GetListBoxInfo](#getlistboxinfo)|Recupera il numero di elementi per colonna.|
|[CListBox:: GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox:: GetSel](#getsel)|Restituisce lo stato di selezione di un elemento della casella di riepilogo.|
|[CListBox:: GetSelCount](#getselcount)|Restituisce il numero di stringhe attualmente selezionate in una casella di riepilogo a selezione multipla.|
|[CListBox:: GetSelItems](#getselitems)|Restituisce gli indici delle stringhe attualmente selezionate in una casella di riepilogo.|
|[CListBox:: GetText](#gettext)|Copia un elemento della casella di riepilogo in un buffer.|
|[CListBox:: GetTextLen](#gettextlen)|Restituisce la lunghezza in byte di un elemento della casella di riepilogo.|
|[CListBox:: GetTopIndex](#gettopindex)|Restituisce l'indice della prima stringa visibile in una casella di riepilogo.|
|[CListBox:: InitStorage](#initstorage)|Prealloca i blocchi di memoria per gli elementi e le stringhe della casella di riepilogo.|
|[CListBox::InsertString](#insertstring)|Inserisce una stringa in una posizione specifica in una casella di riepilogo.|
|[CListBox:: ItemFromPoint](#itemfrompoint)|Restituisce l'indice dell'elemento della casella di riepilogo più vicino a un punto.|
|[CListBox:: MeasureItem](#measureitem)|Chiamata eseguita dal framework quando viene creata una casella di riepilogo creata dal proprietario per determinare le dimensioni della casella di riepilogo.|
|[CListBox:: ResetContent](#resetcontent)|Cancella tutte le voci da una casella di riepilogo.|
|[CListBox:: SelectString](#selectstring)|Cerca e seleziona una stringa in una casella di riepilogo a selezione singola.|
|[CListBox:: SelItemRange](#selitemrange)|Seleziona o deseleziona un intervallo di stringhe in una casella di riepilogo a selezione multipla.|
|[CListBox:: SetAnchorIndex](#setanchorindex)|Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.|
|[CListBox:: SetCaretIndex](#setcaretindex)|Imposta il rettangolo di attivazione sull'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.|
|[CListBox:: SetColumnWidth](#setcolumnwidth)|Imposta la larghezza della colonna di una casella di riepilogo a più colonne.|
|[CListBox:: CurSel](#setcursel)|Seleziona una stringa della casella di riepilogo.|
|[CListBox:: SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel a cui è possibile scorrere orizzontalmente una casella di riepilogo.|
|[CListBox:: SetItemData](#setitemdata)|Imposta un valore associato all'elemento della casella di riepilogo.|
|[CListBox:: SetItemDataPtr](#setitemdataptr)|Imposta un puntatore all'elemento della casella di riepilogo.|
|[CListBox:: SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi in una casella di riepilogo.|
|[CListBox:: setlocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox:: SetSel](#setsel)|Seleziona o deseleziona un elemento casella di riepilogo in una casella di riepilogo a selezione multipla.|
|[CListBox:: SetTabStops](#settabstops)|Imposta le posizioni di interruzione di tabulazione in una casella di riepilogo.|
|[CListBox:: SetTopIndex](#settopindex)|Imposta l'indice in base zero della prima stringa visibile in una casella di riepilogo.|
|[CListBox:: VKeyToItem](#vkeytoitem)|Eseguire l'override di per fornire la gestione WM_KEYDOWN personalizzata per le caselle di riepilogo con il set di stili di LBS_WANTKEYBOARDINPUT.|

## <a name="remarks"></a>Osservazioni

In una casella di riepilogo viene visualizzato un elenco di elementi, ad esempio i nomi file, che l'utente può visualizzare e selezionare.

In una casella di riepilogo a selezione singola, l'utente può selezionare un solo elemento. In una casella di riepilogo a selezione multipla è possibile selezionare un intervallo di elementi. Quando l'utente seleziona un elemento, viene evidenziato e la casella di riepilogo Invia un messaggio di notifica alla finestra padre.

È possibile creare una casella di riepilogo da un modello di finestra di dialogo o direttamente nel codice. Per crearla direttamente, costruire l'oggetto `CListBox`, quindi chiamare la funzione membro [create](#create) per creare il controllo casella di riepilogo di Windows e collegarlo all'oggetto `CListBox`. Per utilizzare una casella di riepilogo in un modello di finestra di dialogo, dichiarare una variabile della casella di riepilogo nella classe della finestra di dialogo, quindi utilizzare `DDX_Control` nella funzione `DoDataExchange` della classe della finestra di dialogo per connettere la variabile membro al controllo. Questa operazione viene eseguita automaticamente quando si aggiunge una variabile di controllo alla classe della finestra di dialogo.

La costruzione può essere un processo in un unico passaggio in una classe derivata da `CListBox`. Scrivere un costruttore per la classe derivata e chiamare `Create` dall'interno del costruttore.

Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore del messaggio alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il formato seguente:

`ON_Notification( id, memberFxn )`

dove `id` specifica l'ID della finestra figlio del controllo casella di riepilogo che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione del padre è il seguente:

`afx_msg void memberFxn( );`

Di seguito è riportato un elenco di potenziali voci della mappa messaggi e una descrizione dei case in cui verrebbero inviati al padre:

- ON_LBN_DBLCLK l'utente fa doppio clic su una stringa in una casella di riepilogo. Questo messaggio di notifica viene inviato solo a una casella di riepilogo con lo stile [LBS_NOTIFY](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) .

- ON_LBN_ERRSPACE la casella di riepilogo non può allocare memoria sufficiente per soddisfare la richiesta.

- ON_LBN_KILLFOCUS la casella di riepilogo sta perdendo lo stato attivo per l'input.

- ON_LBN_SELCANCEL la selezione della casella di riepilogo corrente viene annullata. Questo messaggio viene inviato solo quando una casella di riepilogo dispone dello stile LBS_NOTIFY.

- ON_LBN_SELCHANGE la selezione nella casella di riepilogo è stata modificata. Questa notifica non viene inviata se la selezione viene modificata dalla funzione membro [CListBox:: cursel](#setcursel) . Questa notifica si applica solo a una casella di riepilogo con lo stile LBS_NOTIFY. Il messaggio di notifica LBN_SELCHANGE viene inviato per una casella di riepilogo a selezione multipla ogni volta che l'utente preme un tasto di direzione, anche se la selezione non cambia.

- ON_LBN_SETFOCUS la casella di riepilogo riceve lo stato attivo per l'input.

- ON_WM_CHARTOITEM una casella di riepilogo creata dal proprietario priva di stringhe riceve un messaggio di WM_CHAR.

- ON_WM_VKEYTOITEM una casella di riepilogo con lo stile LBS_WANTKEYBOARDINPUT riceve un messaggio di WM_KEYDOWN.

Se si crea un oggetto `CListBox` in una finestra di dialogo (tramite una risorsa della finestra di dialogo), l'oggetto `CListBox` viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea un oggetto `CListBox` all'interno di una finestra, potrebbe essere necessario eliminare l'oggetto `CListBox`. Se si crea l'oggetto `CListBox` nello stack, questo viene eliminato automaticamente. Se si crea l'oggetto `CListBox` nell'heap usando la **nuova** funzione, è necessario chiamare **Delete** nell'oggetto per eliminarlo quando l'utente chiude la finestra padre.

Se si alloca memoria nell'oggetto `CListBox`, eseguire l'override del distruttore `CListBox` per eliminare l'allocazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="addstring"></a>CListBox:: AddString

Aggiunge una stringa a una casella di riepilogo.

```
int AddString(LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*lpszItem*<br/>
Punta alla stringa con terminazione null da aggiungere.

### <a name="return-value"></a>Valore restituito

Indice in base zero della stringa nella casella di riepilogo. Il valore restituito è LB_ERR se si verifica un errore. il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo non è stata creata con lo stile [LBS_SORT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco viene ordinato. Se la casella di riepilogo è stata creata con lo stile LBS_SORT ma non con lo stile [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , il framework ordina l'elenco in base a una o più chiamate alla funzione membro `CompareItem`.

Usare [InsertString](#insertstring) per inserire una stringa in una posizione specifica all'interno della casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#3](../../mfc/codesnippet/cpp/clistbox-class_1.cpp)]

##  <a name="chartoitem"></a>CListBox:: CharToItem

Chiamata eseguita dal framework quando la finestra padre della casella di riepilogo riceve un messaggio di WM_CHARTOITEM dalla casella di riepilogo.

```
virtual int CharToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Codice ANSI del carattere digitato dall'utente.

*nIndex*<br/>
Posizione corrente del punto di inserimento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce-1 o-2 per nessuna ulteriore azione o un numero non negativo per specificare un indice di un elemento della casella di riepilogo in cui eseguire l'azione predefinita per la sequenza di tasti. L'implementazione predefinita restituisce-1.

### <a name="remarks"></a>Osservazioni

Il messaggio WM_CHARTOITEM viene inviato dalla casella di riepilogo quando riceve un messaggio di WM_CHAR, ma solo se la casella di riepilogo soddisfa tutti i criteri seguenti:

- Casella di riepilogo creata dal proprietario.

- Lo stile del [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) non è impostato.

- Contiene almeno un elemento.

Questa funzione non deve mai essere chiamata manualmente. Eseguire l'override di questa funzione per fornire la gestione personalizzata dei messaggi della tastiera.

Nella sostituzione è necessario restituire un valore per indicare al Framework l'azione eseguita. Il valore restituito-1 o-2 indica che sono stati gestiti tutti gli aspetti della selezione dell'elemento e non sono necessarie ulteriori azioni da parte della casella di riepilogo. Prima di restituire-1 o-2, è possibile impostare la selezione o spostare il punto di inserimento o entrambi. Per impostare la selezione [, utilizzare](#setcursel) [SetSel](#setsel). Per spostare il punto di inserimento, usare [SetCaretIndex](#setcaretindex).

Un valore restituito pari a 0 o superiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti sull'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#4](../../mfc/codesnippet/cpp/clistbox-class_2.cpp)]

##  <a name="clistbox"></a>CListBox:: CListBox

Costruisce un oggetto `CListBox`.

```
CListBox();
```

### <a name="remarks"></a>Osservazioni

Si costruisce un oggetto `CListBox` in due passaggi. Chiamare innanzitutto il costruttore `ClistBox` e quindi chiamare `Create`, che inizializza la casella di riepilogo di Windows e la collega al `CListBox`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#1](../../mfc/codesnippet/cpp/clistbox-class_3.cpp)]

##  <a name="compareitem"></a>CListBox:: CompareItem

Chiamata eseguita dal Framework per determinare la posizione relativa di un nuovo elemento in una casella di riepilogo ordinata dal proprietario.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### <a name="parameters"></a>Parametri

*lpCompareItemStruct*<br/>
Puntatore long a una struttura `COMPAREITEMSTRUCT`.

### <a name="return-value"></a>Valore restituito

Indica la posizione relativa dei due elementi descritti nella struttura [COMPAREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-compareitemstruct) . Può trattarsi di uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|-1|L'elemento 1 Ordina prima dell'elemento 2.|
|0|Gli elementi 1 e 2 vengono ordinati allo stesso modo.|
|1|L'elemento 1 Ordina dopo l'elemento 2.|

Per una descrizione della struttura `COMPAREITEMSTRUCT`, vedere [CWnd:: OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) .

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella di riepilogo creata dal proprietario con lo stile LBS_SORT, è necessario eseguire l'override di questa funzione membro per supportare il Framework nell'ordinamento dei nuovi elementi aggiunti alla casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#5](../../mfc/codesnippet/cpp/clistbox-class_4.cpp)]

##  <a name="create"></a>CListBox:: create

Crea la casella di riepilogo di Windows e la collega all'oggetto `CListBox`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della casella di riepilogo. Applicare qualsiasi combinazione di [stili di casella di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) alla casella.

*rect*<br/>
Specifica la posizione e le dimensioni della casella di riepilogo. Può essere un oggetto `CRect` o una struttura `RECT`.

*pParentWnd*<br/>
Specifica la finestra padre della casella di riepilogo (in genere un oggetto `CDialog`). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un oggetto `CListBox` in due passaggi. Chiamare prima di tutto il costruttore, quindi chiamare `Create`, che inizializza la casella di riepilogo di Windows e la collega all'oggetto `CListBox`.

Quando `Create` viene eseguito, Windows invia i messaggi di [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) al controllo casella di riepilogo.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe di base `CWnd`. Per estendere la gestione dei messaggi predefinita, derivare una classe da `CListBox`, aggiungere una mappa messaggi alla nuova classe ed eseguire l'override delle funzioni membro del gestore di messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo casella di riepilogo.

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_VSCROLL aggiungere una barra di scorrimento verticale

- WS_HSCROLL aggiungere una barra di scorrimento orizzontale

- WS_GROUP ai controlli di gruppo

- WS_TABSTOP per consentire la tabulazione a questo controllo

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#2](../../mfc/codesnippet/cpp/clistbox-class_5.cpp)]

##  <a name="deleteitem"></a>CListBox::D eleteItem

Chiamata eseguita dal framework quando l'utente elimina un elemento da un oggetto `CListBox` di traccia del proprietario o Elimina la casella di riepilogo.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDeleteItemStruct*<br/>
Puntatore long a una struttura [DELETEITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) di Windows che contiene informazioni sull'elemento eliminato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ricreare una casella di riepilogo creata dal proprietario in base alle esigenze.

Per una descrizione della struttura `DELETEITEMSTRUCT`, vedere [CWnd:: OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#6](../../mfc/codesnippet/cpp/clistbox-class_6.cpp)]

##  <a name="deletestring"></a>CListBox::D eleteString

Elimina l'elemento nella posizione *nIndex* dalla casella di riepilogo.

```
int DeleteString(UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa da eliminare.

### <a name="return-value"></a>Valore restituito

Conteggio delle stringhe rimaste nell'elenco. Il valore restituito è LB_ERR se *nIndex* specifica un indice maggiore del numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nIndex* ora si spostano verso il basso di una posizione. Se, ad esempio, una casella di riepilogo contiene due elementi, l'eliminazione del primo elemento comporterà la prima posizione dell'elemento rimanente. *nIndex*= 0 per l'elemento nella prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#7](../../mfc/codesnippet/cpp/clistbox-class_7.cpp)]

##  <a name="dir"></a>CListBox::D IR

Aggiunge un elenco di nomi file, unità o entrambi a una casella di riepilogo.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### <a name="parameters"></a>Parametri

*attr*<br/>
Può essere qualsiasi combinazione dei valori **enum** descritti in `CFile::GetStatu`[s](../../mfc/reference/cfile-class.md#getstatus)o qualsiasi combinazione dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|0x0000|Il file può essere letto o scritto.|
|0x0001|Il file può essere letto, ma non scritto in.|
|0x0002|Il file è nascosto e non viene visualizzato in un elenco di directory.|
|0x0004|Il file è un file di sistema.|
|0x0010|Il nome specificato da *lpszWildCard* specifica una directory.|
|0x0020|Il file è stato archiviato.|
|0x4000|Includere tutte le unità che corrispondono al nome specificato da *lpszWildCard*.|
|0x8000|Flag esclusivo. Se viene impostato il flag exclusive, vengono elencati solo i file del tipo specificato. In caso contrario, i file del tipo specificato vengono elencati oltre ai file "normali".|

*lpszWildCard*<br/>
Punta a una stringa di specifica del file. La stringa può contenere caratteri jolly (ad esempio *.\*).

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'ultimo nome file aggiunto all'elenco. Il valore restituito è LB_ERR se si verifica un errore. il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare le nuove stringhe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#8](../../mfc/codesnippet/cpp/clistbox-class_8.cpp)]

##  <a name="drawitem"></a>CListBox::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella di riepilogo creata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) contenente informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Osservazioni

I membri `itemAction` e `itemState` della struttura `DRAWITEMSTRUCT` definiscono l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto `CListBox` di disegno del proprietario. L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro venga terminata.

Per una descrizione della struttura `DRAWITEMSTRUCT`, vedere [CWnd:: OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#9](../../mfc/codesnippet/cpp/clistbox-class_9.cpp)]

##  <a name="findstring"></a>CListBox:: FindString

Trova la prima stringa in una casella di riepilogo contenente il prefisso specificato senza modificare la selezione della casella di riepilogo.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszItem) const;
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nStartAfter*. Se *nStartAfter* è-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszItem*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da ricercare. La ricerca è indipendente dalla distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento corrispondente o LB_ERR se la ricerca ha avuto esito negativo.

### <a name="remarks"></a>Osservazioni

Usare la funzione membro [SelectString](#selectstring) per trovare e selezionare una stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#10](../../mfc/codesnippet/cpp/clistbox-class_10.cpp)]

##  <a name="findstringexact"></a>CListBox:: FindExactString

Trova la prima stringa della casella di riepilogo che corrisponde alla stringa specificata in *lpszFind*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### <a name="parameters"></a>Parametri

*nIndexStart*<br/>
Specifica l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nIndexStart*. Se *nIndexStart* è-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszFind*<br/>
Punta alla stringa con terminazione null da cercare. Questa stringa può contenere un nome file completo, inclusa l'estensione. Per la ricerca non viene fatta distinzione tra maiuscole e minuscole, quindi la stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento corrispondente o LB_ERR se la ricerca ha avuto esito negativo.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo è stata creata con uno stile di creazione del proprietario ma senza lo stile [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , la funzione membro `FindStringExact` tenta di trovare una corrispondenza tra il valore di parola doppia e il valore di *lpszFind*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#11](../../mfc/codesnippet/cpp/clistbox-class_11.cpp)]

##  <a name="getanchorindex"></a>CListBox:: GetAnchorIndex

Recupera l'indice in base zero dell'elemento di ancoraggio corrente nella casella di riepilogo.

```
int GetAnchorIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice dell'elemento di ancoraggio corrente, se ha esito positivo; in caso contrario LB_ERR.

### <a name="remarks"></a>Osservazioni

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o l'ultimo elemento in un blocco di elementi selezionati contigui.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: SetAnchorIndex](#setanchorindex).

##  <a name="getcaretindex"></a>CListBox:: GetCaretIndex

Determina l'indice dell'elemento con il rettangolo di attivazione in una casella di riepilogo a selezione multipla.

```
int GetCaretIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento con il rettangolo di attivazione in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è l'indice dell'elemento selezionato, se disponibile.

### <a name="remarks"></a>Osservazioni

L'elemento può essere selezionato o meno.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: SetCaretIndex](#setcaretindex).

##  <a name="getcount"></a>CListBox:: GetCount

Recupera il numero di elementi in una casella di riepilogo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella casella di riepilogo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il conteggio restituito è maggiore di uno rispetto al valore di indice dell'ultimo elemento (l'indice è in base zero).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#12](../../mfc/codesnippet/cpp/clistbox-class_12.cpp)]

##  <a name="getcursel"></a>CListBox:: GetCurSel

Recupera l'indice in base zero dell'elemento attualmente selezionato, se presente, in una casella di riepilogo a selezione singola.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento attualmente selezionato se si tratta di una casella di riepilogo a selezione singola. Viene LB_ERR se non è attualmente selezionato alcun elemento.

In una casella di riepilogo a selezione multipla, l'indice dell'elemento con lo stato attivo.

### <a name="remarks"></a>Osservazioni

Non chiamare `GetCurSel` per una casella di riepilogo a selezione multipla. Usare invece [CListBox:: GetSelItems](#getselitems) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#13](../../mfc/codesnippet/cpp/clistbox-class_13.cpp)]

##  <a name="gethorizontalextent"></a>CListBox:: GetHorizontalExtent

Recupera dalla casella di riepilogo la larghezza in pixel in base alla quale è possibile scorrere orizzontalmente.

```
int GetHorizontalExtent() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza scorrevole della casella di riepilogo, in pixel.

### <a name="remarks"></a>Osservazioni

Questa operazione è applicabile solo se la casella di riepilogo presenta una barra di scorrimento orizzontale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#14](../../mfc/codesnippet/cpp/clistbox-class_14.cpp)]

##  <a name="getitemdata"></a>CListBox:: GetItemData

Recupera il valore parola doppia fornito dall'applicazione associato all'elemento della casella di riepilogo specificato.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Valore associato all'elemento o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il valore parola doppia è il parametro *dwItemData* di una chiamata [SetItemData](#setitemdata) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#15](../../mfc/codesnippet/cpp/clistbox-class_15.cpp)]

##  <a name="getitemdataptr"></a>CListBox:: GetItemDataPtr

Recupera il valore di 32 bit fornito dall'applicazione associato all'elemento della casella di riepilogo specificato come puntatore (**void** <strong>\*</strong>).

```
void* GetItemDataPtr(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Recupera un puntatore, oppure-1 se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#16](../../mfc/codesnippet/cpp/clistbox-class_16.cpp)]

##  <a name="getitemheight"></a>CListBox:: GetItemHeight

Determina l'altezza degli elementi in una casella di riepilogo.

```
int GetItemHeight(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo presenta lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, degli elementi nella casella di riepilogo. Se la casella di riepilogo presenta lo stile [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , il valore restituito è l'altezza dell'elemento specificato da *nIndex*. Se si verifica un errore, il valore restituito viene LB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#17](../../mfc/codesnippet/cpp/clistbox-class_17.cpp)]

##  <a name="getitemrect"></a>CListBox:: GetItemRect

Recupera le dimensioni del rettangolo che delimita un elemento della casella di riepilogo come attualmente visualizzato nella finestra di riepilogo.

```
int GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*lpRect*<br/>
Specifica un puntatore lungo a una [struttura Rect](/windows/win32/api/windef/ns-windef-rect) che riceve le coordinate client della casella di riepilogo dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#18](../../mfc/codesnippet/cpp/clistbox-class_18.cpp)]

##  <a name="getlistboxinfo"></a>CListBox:: GetListBoxInfo

Recupera il numero di elementi per colonna.

```
DWORD GetListBoxInfo() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi per colonna dell'oggetto `CListBox`.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [LB_GETLISTBOXINFO](/windows/win32/Controls/lb-getlistboxinfo) , come descritto nel Windows SDK.

##  <a name="getlocale"></a>CListBox:: GetLocale

Recupera le impostazioni locali utilizzate dalla casella di riepilogo.

```
LCID GetLocale() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) per le stringhe nella casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Le impostazioni locali vengono utilizzate, ad esempio, per determinare l'ordinamento delle stringhe in una casella di riepilogo ordinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: setlocale](#setlocale).

##  <a name="getsel"></a>CListBox:: GetSel

Recupera lo stato di selezione di un elemento.

```
int GetSel(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

### <a name="return-value"></a>Valore restituito

Numero positivo se l'elemento specificato è selezionato; in caso contrario, è 0. Il valore restituito è LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro funziona con caselle di riepilogo sia a selezione singola che a selezione multipla.

Per recuperare l'indice dell'elemento della casella di riepilogo attualmente selezionato, utilizzare [CListBox:: GetCurSel](#getcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#19](../../mfc/codesnippet/cpp/clistbox-class_19.cpp)]

##  <a name="getselcount"></a>CListBox:: GetSelCount

Recupera il numero totale di elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi selezionati in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito sarà LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: GetSelItems](#getselitems).

##  <a name="getselitems"></a>CListBox:: GetSelItems

Riempie un buffer con una matrice di Integer che specifica i numeri degli elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelItems(
    int nMaxItems,
    LPINT rgIndex) const;
```

### <a name="parameters"></a>Parametri

*nMaxItems*<br/>
Specifica il numero massimo di elementi selezionati i cui numeri di elemento devono essere inseriti nel buffer.

*rgIndex*<br/>
Specifica un puntatore a un buffer sufficientemente grande per il numero di numeri interi specificati da *nMaxItems*.

### <a name="return-value"></a>Valore restituito

Numero effettivo di elementi inseriti nel buffer. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito sarà `LB_ERR`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#20](../../mfc/codesnippet/cpp/clistbox-class_20.cpp)]

##  <a name="gettext"></a>CListBox:: GetText

Ottiene una stringa da una casella di riepilogo.

```
int GetText(
    int nIndex,
    LPTSTR lpszBuffer) const;

void GetText(
    int nIndex,
    CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa da recuperare.

*lpszBuffer*<br/>
Punta al buffer che riceve la stringa. Il buffer deve contenere spazio sufficiente per la stringa e un carattere null di terminazione. La dimensione della stringa può essere determinata in anticipo chiamando la funzione membro `GetTextLen`.

*rString*<br/>
Riferimento a un oggetto `CString`.

### <a name="return-value"></a>Valore restituito

Lunghezza, in byte, della stringa, escluso il carattere null di terminazione. Se *nIndex* non specifica un indice valido, il valore restituito viene LB_ERR.

### <a name="remarks"></a>Osservazioni

Il secondo formato di questa funzione membro compila un oggetto `CString` con il testo della stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#21](../../mfc/codesnippet/cpp/clistbox-class_21.cpp)]

##  <a name="gettextlen"></a>CListBox:: GetTextLen

Ottiene la lunghezza di una stringa in un elemento della casella di riepilogo.

```
int GetTextLen(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa in caratteri, escluso il carattere null di terminazione. Se *nIndex* non specifica un indice valido, il valore restituito viene LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: GetText](#gettext).

##  <a name="gettopindex"></a>CListBox:: GetTopIndex

Recupera l'indice in base zero del primo elemento visibile in una casella di riepilogo.

```
int GetTopIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo elemento visibile in una casella di riepilogo in caso di esito positivo, LB_ERR in caso contrario.

### <a name="remarks"></a>Osservazioni

Inizialmente, l'elemento 0 si trova nella parte superiore della casella di riepilogo, ma se viene eseguito lo scorrimento della casella di riepilogo, è possibile che un altro elemento si trovi nella parte superiore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#22](../../mfc/codesnippet/cpp/clistbox-class_22.cpp)]

##  <a name="initstorage"></a>CListBox:: InitStorage

Alloca memoria per archiviare gli elementi della casella di riepilogo.

```
int InitStorage(
    int nItems,
    UINT nBytes);
```

### <a name="parameters"></a>Parametri

*nItems*<br/>
Specifica il numero di elementi da aggiungere.

*nBytes*<br/>
Specifica la quantità di memoria, in byte, da allocare per le stringhe di elemento.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, il numero massimo di elementi che la casella di riepilogo può archiviare prima che sia necessaria una riallocazione della memoria, in caso contrario LB_ERRSPACE, ovvero non è disponibile memoria sufficiente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione prima di aggiungere un numero elevato di elementi a un `CListBox`.

Questa funzione consente di velocizzare l'inizializzazione di caselle di riepilogo con un numero elevato di elementi (più di 100). Viene preallocata la quantità di memoria specificata in modo che le funzioni [AddString](#addstring), [InsertString](#insertstring)e [dir](#dir) successive importino il tempo più breve possibile. È possibile utilizzare le stime per i parametri. Se si esegue la sovrastima, viene allocata una memoria aggiuntiva; Se si sottovaluta, l'allocazione normale viene utilizzata per gli elementi che superano la quantità preallocata.

Solo Windows 95/98: il parametro *nItems* è limitato ai valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere più di 32.767 elementi. Sebbene il numero di elementi sia limitato, le dimensioni totali degli elementi in una casella di riepilogo sono limitate solo dalla memoria disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#23](../../mfc/codesnippet/cpp/clistbox-class_23.cpp)]

##  <a name="insertstring"></a>CListBox:: InsertString

Inserisce una stringa nella casella di riepilogo.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della posizione in cui inserire la stringa. Se questo parametro è-1, la stringa viene aggiunta alla fine dell'elenco.

*lpszItem*<br/>
Punta a una stringa con terminazione null da inserire.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione in cui è stata inserita la stringa. Il valore restituito è LB_ERR se si verifica un errore. il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

A differenza della funzione membro [AddString](#addstring) , `InsertString` non determina l'ordinamento di un elenco con lo stile [LBS_SORT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#24](../../mfc/codesnippet/cpp/clistbox-class_24.cpp)]

##  <a name="itemfrompoint"></a>CListBox:: ItemFromPoint

Determina l'elemento della casella di riepilogo più vicino al punto specificato in *PT*.

```
UINT ItemFromPoint(
    CPoint pt,
    BOOL& bOutside) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Punto per il quale trovare l'elemento più vicino, specificato in relazione all'angolo superiore sinistro dell'area client della casella di riepilogo.

*bOutside*<br/>
Riferimento a una variabile BOOL che verrà impostata su TRUE se *PT* si trova all'esterno dell'area client della casella di riepilogo, false se *PT* si trova all'interno dell'area client della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento più vicino al punto specificato in *PT*.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa funzione per determinare l'elemento della casella di riepilogo su cui si sposta il cursore del mouse.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox:: SetAnchorIndex](#setanchorindex).

##  <a name="measureitem"></a>CListBox:: MeasureItem

Chiamata eseguita dal framework quando viene creata una casella di riepilogo con uno stile di creazione del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Puntatore long a una struttura [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct) .

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare la struttura `MEASUREITEMSTRUCT` per informare le finestre delle dimensioni della casella di riepilogo. Se la casella di riepilogo viene creata con lo stile [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , il Framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

Per ulteriori informazioni sull'utilizzo dello stile [LBS_OWNERDRAWFIXED](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) in una casella di riepilogo creata dal proprietario con la funzione membro `SubclassDlgItem` di `CWnd`, vedere la discussione nella [Nota tecnica 14](../../mfc/tn014-custom-controls.md).

Per una descrizione della struttura `MEASUREITEMSTRUCT`, vedere [CWnd:: OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#25](../../mfc/codesnippet/cpp/clistbox-class_25.cpp)]

##  <a name="resetcontent"></a>CListBox:: ResetContent

Rimuove tutti gli elementi da una casella di riepilogo.

```
void ResetContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#26](../../mfc/codesnippet/cpp/clistbox-class_26.cpp)]

##  <a name="selectstring"></a>CListBox:: SelectString

Cerca un elemento casella di riepilogo corrispondente alla stringa specificata e, se viene trovato un elemento corrispondente, seleziona l'elemento.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nStartAfter*. Se *nStartAfter* è-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszItem*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da ricercare. La ricerca è indipendente dalla distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento selezionato se la ricerca ha avuto esito positivo. Se la ricerca ha avuto esito negativo, il valore restituito è LB_ERR e la selezione corrente non viene modificata.

### <a name="remarks"></a>Osservazioni

Se necessario, viene visualizzata la casella di riepilogo per visualizzare l'elemento selezionato.

Questa funzione membro non può essere usata con una casella di riepilogo con lo stile [LBS_MULTIPLESEL](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) .

Un elemento viene selezionato solo se i caratteri iniziali (dal punto iniziale) corrispondono ai caratteri nella stringa specificata da *lpszItem*.

Usare la funzione membro `FindString` per trovare una stringa senza selezionare l'elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#27](../../mfc/codesnippet/cpp/clistbox-class_27.cpp)]

##  <a name="selitemrange"></a>CListBox:: SelItemRange

Seleziona più elementi consecutivi in una casella di riepilogo a selezione multipla.

```
int SelItemRange(
    BOOL bSelect,
    int nFirstItem,
    int nLastItem);
```

### <a name="parameters"></a>Parametri

*bSelect*<br/>
Specifica come impostare la selezione. Se *bSelect* è true, la stringa viene selezionata e evidenziata; Se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata.

*nFirstItem*<br/>
Specifica l'indice in base zero del primo elemento da impostare.

*nLastItem*<br/>
Specifica l'indice in base zero dell'ultimo elemento da impostare.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Usare questa funzione membro solo con caselle di riepilogo a selezione multipla. Se è necessario selezionare un solo elemento in una casella di riepilogo a selezione multipla, ovvero se *nFirstItem* è uguale a *nLastItem* , chiamare invece la funzione membro [SetSel](#setsel) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#28](../../mfc/codesnippet/cpp/clistbox-class_28.cpp)]

##  <a name="setanchorindex"></a>CListBox:: SetAnchorIndex

Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.

```
void SetAnchorIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento della casella di riepilogo che sarà l'ancoraggio.

### <a name="remarks"></a>Osservazioni

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o l'ultimo elemento in un blocco di elementi selezionati contigui.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#29](../../mfc/codesnippet/cpp/clistbox-class_29.cpp)]

##  <a name="setcaretindex"></a>CListBox:: SetCaretIndex

Imposta il rettangolo di attivazione sull'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.

```
int SetCaretIndex(
    int nIndex,
    BOOL bScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento per ricevere il rettangolo di attivazione nella casella di riepilogo.

*bScroll*<br/>
Se questo valore è 0, l'elemento viene spostato fino a quando non è completamente visibile. Se questo valore è diverso da 0, l'elemento viene spostato fino a quando non è visibile almeno parzialmente.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Se l'elemento non è visibile, viene spostato nella visualizzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#30](../../mfc/codesnippet/cpp/clistbox-class_30.cpp)]

##  <a name="setcolumnwidth"></a>CListBox:: SetColumnWidth

Imposta la larghezza in pixel di tutte le colonne in una casella di riepilogo a più colonne (creata con lo stile [LBS_MULTICOLUMN](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) ).

```
void SetColumnWidth(int cxWidth);
```

### <a name="parameters"></a>Parametri

*cxWidth*<br/>
Specifica la larghezza in pixel di tutte le colonne.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#31](../../mfc/codesnippet/cpp/clistbox-class_31.cpp)]

##  <a name="setcursel"></a>CListBox:: CurSel

Seleziona una stringa e la scorre nella visualizzazione, se necessario.

```
int SetCurSel(int nSelect);
```

### <a name="parameters"></a>Parametri

*nSelezionare*<br/>
Specifica l'indice in base zero della stringa da selezionare. Se *nSelezionare* è-1, la casella di riepilogo è impostata su nessuna selezione.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Quando la nuova stringa è selezionata, la casella di riepilogo rimuove l'evidenziazione dalla stringa selezionata in precedenza.

Usare questa funzione membro solo con le caselle di riepilogo a selezione singola.

Per impostare o rimuovere una selezione in una casella di riepilogo a selezione multipla, utilizzare [CListBox:: SetSel](#setsel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#32](../../mfc/codesnippet/cpp/clistbox-class_32.cpp)]

##  <a name="sethorizontalextent"></a>CListBox:: SetHorizontalExtent

Imposta la larghezza, in pixel, in base alla quale è possibile scorrere orizzontalmente una casella di riepilogo.

```
void SetHorizontalExtent(int cxExtent);
```

### <a name="parameters"></a>Parametri

*cxExtent*<br/>
Specifica il numero di pixel in base al quale è possibile scorrere orizzontalmente la casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Se la dimensione della casella di riepilogo è inferiore a questo valore, la barra di scorrimento orizzontale scorre orizzontalmente gli elementi nella casella di riepilogo. Se la casella di riepilogo è di grandi dimensioni o maggiore di questo valore, la barra di scorrimento orizzontale viene nascosta.

Per rispondere a una chiamata a `SetHorizontalExtent`, è necessario che la casella di riepilogo sia stata definita con lo stile [WS_HSCROLL](../../mfc/reference/styles-used-by-mfc.md#window-styles) .

Questa funzione membro non è utile per le caselle di riepilogo a più colonne. Per le caselle di riepilogo a più colonne, chiamare la funzione membro `SetColumnWidth`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#33](../../mfc/codesnippet/cpp/clistbox-class_33.cpp)]

##  <a name="setitemdata"></a>CListBox:: SetItemData

Imposta un valore associato all'elemento specificato in una casella di riepilogo.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*dwItemData*<br/>
Specifica il valore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#34](../../mfc/codesnippet/cpp/clistbox-class_34.cpp)]

##  <a name="setitemdataptr"></a>CListBox:: SetItemDataPtr

Imposta il valore a 32 bit associato all'elemento specificato in una casella di riepilogo come puntatore specificato ( **void** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*pData*<br/>
Specifica il puntatore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo puntatore rimane valido per tutta la durata della casella di riepilogo, anche se la posizione relativa dell'elemento all'interno della casella di riepilogo potrebbe cambiare quando gli elementi vengono aggiunti o rimossi. Di conseguenza, l'indice dell'elemento all'interno della casella può essere modificato, ma il puntatore rimane affidabile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#35](../../mfc/codesnippet/cpp/clistbox-class_35.cpp)]

##  <a name="setitemheight"></a>CListBox:: SetItemHeight

Imposta l'altezza degli elementi in una casella di riepilogo.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo presenta lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

*cyItemHeight*<br/>
Specifica l'altezza, in pixel, dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se l'indice o l'altezza non è valido.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo dispone dello stile [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) , questa funzione imposta l'altezza dell'elemento specificato da *nIndex*. In caso contrario, questa funzione imposta l'altezza di tutti gli elementi nella casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#36](../../mfc/codesnippet/cpp/clistbox-class_36.cpp)]

##  <a name="setlocale"></a>CListBox:: setlocale

Imposta l'identificatore delle impostazioni locali per questa casella di riepilogo.

```
LCID SetLocale(LCID nNewLocale);
```

### <a name="parameters"></a>Parametri

*nNewLocale*<br/>
Nuovo valore dell'identificatore delle impostazioni locali (LCID) da impostare per la casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) precedente per questa casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Se `SetLocale` non viene chiamato, le impostazioni locali predefinite vengono ottenute dal sistema. Le impostazioni locali predefinite del sistema possono essere modificate tramite l'applicazione regionale (o internazionale) del pannello di controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#37](../../mfc/codesnippet/cpp/clistbox-class_37.cpp)]

##  <a name="setsel"></a>CListBox:: SetSel

Seleziona una stringa in una casella di riepilogo a selezione multipla.

```
int SetSel(
    int nIndex,
    BOOL bSelect = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa da impostare. Se-1, la selezione viene aggiunta o rimossa da tutte le stringhe, a seconda del valore di *bSelect*.

*bSelect*<br/>
Specifica come impostare la selezione. Se *bSelect* è true, la stringa viene selezionata e evidenziata; Se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata. La stringa specificata è selezionata ed evidenziata per impostazione predefinita.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Usare questa funzione membro solo con caselle di riepilogo a selezione multipla.

Per selezionare un elemento da una casella di riepilogo a selezione singola, usare [CListBox:: cursel](#setcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#38](../../mfc/codesnippet/cpp/clistbox-class_38.cpp)]

##  <a name="settabstops"></a>CListBox:: SetTabStops

Imposta le posizioni di interruzione di tabulazione in una casella di riepilogo.

```
void SetTabStops();
BOOL SetTabStops(const int& cxEachStop);

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops);
```

### <a name="parameters"></a>Parametri

*cxEachStop*<br/>
Le tabulazioni vengono impostate in ogni unità di dialogo *cxEachStop* . Per una descrizione di un'unità di dialogo, vedere *rgTabStops* .

*nTabStops*<br/>
Specifica il numero di tabulazioni da includere nella casella di riepilogo.

*rgTabStops*<br/>
Punta al primo membro di una matrice di numeri interi contenenti le posizioni di interruzione di tabulazione nelle unità di dialogo. Un'unità di dialogo è una distanza orizzontale o verticale. Un'unità della finestra di dialogo orizzontale è uguale a un quarto dell'unità di larghezza di base della finestra di dialogo corrente e un'unità di dialogo verticale è uguale a un ottavo dell'unità di altezza di base della finestra di dialogo corrente. Le unità di base della finestra di dialogo vengono calcolate in base all'altezza e alla larghezza del tipo di carattere del sistema corrente. La funzione `GetDialogBaseUnits` Windows restituisce le unità di base della finestra di dialogo correnti in pixel. Il numero di tabulazioni deve essere ordinato in ordine crescente. non sono consentite schede back.

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le schede sono state impostate; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per impostare le tabulazioni sulle dimensioni predefinite di 2 unità di dialogo, chiamare la versione senza parametri di questa funzione membro. Per impostare le tabulazioni su una dimensione diversa da 2, chiamare la versione con l'argomento *cxEachStop* .

Per impostare le tabulazioni su una matrice di dimensioni, usare la versione con gli argomenti *rgTabStops* e *nTabStops* . Verrà impostata una tabulazione per ogni valore in *rgTabStops*, fino al numero specificato da *nTabStops*.

Per rispondere a una chiamata alla funzione membro `SetTabStops`, è necessario che la casella di riepilogo sia stata creata con lo stile [LBS_USETABSTOPS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#39](../../mfc/codesnippet/cpp/clistbox-class_39.cpp)]

##  <a name="settopindex"></a>CListBox:: SetTopIndex

Assicura che un particolare elemento della casella di riepilogo sia visibile.

```
int SetTopIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il sistema scorre la casella di riepilogo finché l'elemento specificato da *nIndex* non viene visualizzato nella parte superiore della casella di riepilogo o se è stato raggiunto l'intervallo massimo di scorrimento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#40](../../mfc/codesnippet/cpp/clistbox-class_40.cpp)]

##  <a name="vkeytoitem"></a>CListBox:: VKeyToItem

Chiamata eseguita dal framework quando la finestra padre della casella di riepilogo riceve un messaggio di WM_VKEYTOITEM dalla casella di riepilogo.

```
virtual int VKeyToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nPer*<br/>
Codice della chiave virtuale della chiave che l'utente ha premuto. Per un elenco di codici chiave virtuali standard, vedere Winuser. h

*nIndex*<br/>
Posizione corrente del punto di inserimento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce-2 per nessuna azione ulteriore,-1 per l'azione predefinita o un numero non negativo per specificare un indice di un elemento della casella di riepilogo su cui eseguire l'azione predefinita per la sequenza di tasti.

### <a name="remarks"></a>Osservazioni

Il messaggio WM_VKEYTOITEM viene inviato dalla casella di riepilogo quando riceve un messaggio di WM_KEYDOWN, ma solo se la casella di riepilogo soddisfa i requisiti seguenti:

- Dispone del set di stili [LBS_WANTKEYBOARDINPUT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) .

- Contiene almeno un elemento.

Questa funzione non deve mai essere chiamata manualmente. Eseguire l'override di questa funzione per fornire la gestione personalizzata dei messaggi della tastiera.

È necessario restituire un valore per indicare al Framework l'azione eseguita dalla sostituzione. Un valore restituito pari a-2 indica che l'applicazione ha gestito tutti gli aspetti della selezione dell'elemento e non richiede ulteriori azioni da parte della casella di riepilogo. Prima di restituire-2, è possibile impostare la selezione o spostare il punto di inserimento o entrambi. Per impostare la selezione [, utilizzare](#setcursel) [SetSel](#setsel). Per spostare il punto di inserimento, usare [SetCaretIndex](#setcaretindex).

Un valore restituito-1 indica che la casella di riepilogo deve eseguire l'azione predefinita in risposta alla sequenza di tasti. L'implementazione predefinita restituisce-1.

Un valore restituito pari a 0 o superiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti sull'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#41](../../mfc/codesnippet/cpp/clistbox-class_41.cpp)]

## <a name="see-also"></a>Vedere anche

[CTRLTEST di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)
