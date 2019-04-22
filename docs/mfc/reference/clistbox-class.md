---
title: CListBox (classe)
ms.date: 11/04/2016
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
ms.openlocfilehash: b448f725bac68c2b67dc44d660c664c075aa86da
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58778767"
---
# <a name="clistbox-class"></a>CListBox (classe)

Fornisce la funzionalità di una casella di riepilogo di Windows.

## <a name="syntax"></a>Sintassi

```
class CListBox : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListBox::CListBox](#clistbox)|Costruisce un oggetto `CListBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CListBox::AddString](#addstring)|Aggiunge una stringa a una casella di riepilogo.|
|[CListBox::CharToItem](#chartoitem)|Eseguire l'override per fornire WM_CHAR personalizzato gestito per le caselle di riepilogo di disegno che non hanno le stringhe.|
|[CListBox::CompareItem](#compareitem)|Chiamato dal framework per determinare la posizione di un nuovo elemento in una casella di riepilogo di disegno ordinato.|
|[CListBox::Create](#create)|Crea la casella di riepilogo di Windows e lo collega al `CListBox` oggetto.|
|[CListBox::DeleteItem](#deleteitem)|Chiamato dal framework quando l'utente elimina un elemento da una casella di riepilogo di disegno.|
|[CListBox::DeleteString](#deletestring)|Elimina una stringa da una casella di riepilogo.|
|[CListBox::Dir](#dir)|Aggiunge i nomi file, le unità o entrambi dalla directory corrente per una casella di riepilogo.|
|[CListBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di una casella Cambia elenco creato dal proprietario.|
|[CListBox::FindString](#findstring)|Cerca una stringa in una casella di riepilogo.|
|[CListBox::FindStringExact](#findstringexact)|Trova la prima stringa di casella di riepilogo che corrisponde a una stringa specificata.|
|[CListBox::GetAnchorIndex](#getanchorindex)|Recupera l'indice in base zero dell'elemento di ancoraggio corrente in una casella di riepilogo.|
|[CListBox::GetCaretIndex](#getcaretindex)|Determina l'indice dell'elemento che contiene il rettangolo di attivazione in una casella di riepilogo a selezione multipla.|
|[CListBox::GetCount](#getcount)|Restituisce il numero di stringhe in una casella di riepilogo.|
|[CListBox::GetCurSel](#getcursel)|Restituisce l'indice in base zero della stringa attualmente selezionata in una casella di riepilogo.|
|[CListBox::GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel che una casella di riepilogo è possibile scorrere orizzontalmente.|
|[CListBox::GetItemData](#getitemdata)|Restituisce il valore a 32 bit associato con l'elemento casella di riepilogo.|
|[CListBox::GetItemDataPtr](#getitemdataptr)|Restituisce un puntatore a un elemento di casella di riepilogo.|
|[CListBox::GetItemHeight](#getitemheight)|Determina l'altezza degli elementi in una casella di riepilogo.|
|[CListBox::GetItemRect](#getitemrect)|Restituisce il rettangolo di delimitazione dell'elemento casella di riepilogo che è attualmente visualizzato.|
|[CListBox::GetListBoxInfo](#getlistboxinfo)|Recupera il numero di elementi per ogni colonna.|
|[CListBox::GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox::GetSel](#getsel)|Restituisce lo stato di selezione di un elemento di casella di riepilogo.|
|[CListBox::GetSelCount](#getselcount)|Restituisce il numero di stringhe attualmente selezionato in una casella di riepilogo a selezione multipla.|
|[CListBox::GetSelItems](#getselitems)|Restituisce gli indici delle stringhe attualmente selezionate in una casella di riepilogo.|
|[CListBox::GetText](#gettext)|Copia un elemento della casella di riepilogo in un buffer.|
|[CListBox::GetTextLen](#gettextlen)|Restituisce la lunghezza in byte di un elemento di casella di riepilogo.|
|[CListBox::GetTopIndex](#gettopindex)|Restituisce l'indice della prima stringa visibile in una casella di riepilogo.|
|[CListBox::InitStorage](#initstorage)|Prealloca blocchi di memoria per elementi casella di riepilogo e le stringhe.|
|[CListBox::InsertString](#insertstring)|Inserisce una stringa in una posizione specifica in una casella di riepilogo.|
|[CListBox::ItemFromPoint](#itemfrompoint)|Restituisce l'indice dell'elemento più vicino al punto di un casella di riepilogo.|
|[CListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo di disegno per determinare le dimensioni di caselle di riepilogo.|
|[CListBox::ResetContent](#resetcontent)|Cancella tutte le voci da una casella di riepilogo.|
|[CListBox::SelectString](#selectstring)|Cerca e seleziona una stringa in una casella di riepilogo a selezione singola.|
|[CListBox::SelItemRange](#selitemrange)|Seleziona o deseleziona un intervallo di stringhe in una casella di riepilogo a selezione multipla.|
|[CListBox::SetAnchorIndex](#setanchorindex)|Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.|
|[CListBox::SetCaretIndex](#setcaretindex)|Imposta il rettangolo di attivazione per l'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.|
|[CListBox::SetColumnWidth](#setcolumnwidth)|Imposta la larghezza della colonna di una casella di riepilogo a più colonne.|
|[CListBox::SetCurSel](#setcursel)|Seleziona una stringa di casella di riepilogo.|
|[CListBox::SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel che una casella di riepilogo è possibile scorrere orizzontalmente.|
|[CListBox::SetItemData](#setitemdata)|Imposta il valore a 32 bit associato con l'elemento casella di riepilogo.|
|[CListBox::SetItemDataPtr](#setitemdataptr)|Imposta un puntatore all'elemento casella di riepilogo.|
|[CListBox::SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi in una casella di riepilogo.|
|[CListBox::SetLocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox::SetSel](#setsel)|Seleziona o deseleziona un elemento della casella di riepilogo in una casella di riepilogo a selezione multipla.|
|[CListBox::SetTabStops](#settabstops)|Imposta le posizioni di tabulazione in una casella di riepilogo.|
|[CListBox::SetTopIndex](#settopindex)|Imposta l'indice in base zero della prima stringa visibile in una casella di riepilogo.|
|[CListBox::VKeyToItem](#vkeytoitem)|Eseguire l'override per fornire WM_KEYDOWN personalizzato gestito per le caselle di riepilogo con il set di stili LBS_WANTKEYBOARDINPUT.|

## <a name="remarks"></a>Note

Una casella di riepilogo Visualizza un elenco di elementi, ad esempio i nomi file, che l'utente può visualizzare e selezionare.

In una casella di riepilogo a selezione singola, l'utente può selezionare un solo elemento. In una casella di riepilogo a selezione multipla, è possibile selezionare un intervallo di elementi. Quando l'utente seleziona un elemento, viene evidenziato e la casella di riepilogo Invia un messaggio di notifica alla finestra padre.

È possibile creare una casella di riepilogo da un modello di finestra di dialogo o direttamente nel codice. Per creare direttamente, costruire il `CListBox` dell'oggetto, quindi chiamare il [Create](#create) funzione membro per creare il controllo casella di riepilogo di Windows e associarlo al `CListBox` oggetto. Per usare una casella di riepilogo in un modello di finestra di dialogo, dichiarare una variabile di casella di riepilogo nella classe finestra di dialogo, quindi usare `DDX_Control` nella classe della finestra di dialogo `DoDataExchange` funzione per la connessione la variabile membro per il controllo. (ciò viene eseguito per l'utente automaticamente quando si aggiunge una variabile di controllo per la classe di finestra di dialogo.)

Costruzione può essere un processo in un passaggio in una classe derivata da `CListBox`. Scrivere un costruttore per la classe derivata e chiamare `Create` all'interno del costruttore.

Se si desidera gestire i messaggi di notifica Windows inviati da una casella di riepilogo per il relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.

Ogni voce nella mappa messaggi assume il formato seguente:

`ON_Notification( id, memberFxn )`

in cui `id` specifica l'ID della finestra figlio del controllo casella di riepilogo che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.

Prototipo di funzione dell'elemento padre è il seguente:

`afx_msg void memberFxn( );`

Seguito è riportato un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui verrà inviate all'elemento padre:

- ON_LBN_DBLCLK l'utente fa doppio clic su una stringa in una casella di riepilogo. Solo una casella di riepilogo con i [LBS_NOTIFY](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile verrà inviato questo messaggio di notifica.

- ON_LBN_ERRSPACE la casella di riepilogo non è possibile allocare memoria sufficiente per soddisfare la richiesta.

- La casella di riepilogo ON_LBN_KILLFOCUS sta per perdere lo stato attivo.

- ON_LBN_SELCANCEL la selezione della casella di riepilogo corrente viene annullata. Questo messaggio viene inviato solo quando lo stile LBS_NOTIFY dispone di una casella di riepilogo.

- ON_LBN_SELCHANGE la selezione nella casella di riepilogo è stato modificato. Questa notifica non viene inviata se la selezione viene modificata mediante il [CListBox::SetCurSel](#setcursel) funzione membro. Questa notifica si applica solo a una casella di riepilogo con lo stile LBS_NOTIFY. Il messaggio di notifica LBN_SELCHANGE viene inviato per una casella di riepilogo a selezione multipla ogni volta che l'utente preme un tasto di direzione, anche se la selezione rimane invariato.

- La casella di riepilogo ON_LBN_SETFOCUS riceve lo stato attivo.

- Una casella di riepilogo di disegno con nessuna limitazione ON_WM_CHARTOITEM riceve un messaggio WM_CHAR.

- Casella di riepilogo A ON_WM_VKEYTOITEM con lo stile LBS_WANTKEYBOARDINPUT riceve un messaggio WM_KEYDOWN.

Se si crea una `CListBox` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CListBox` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si crea una `CListBox` oggetto all'interno di una finestra, potrebbe essere necessario eliminare definitivamente il `CListBox` oggetto. Se si crea il `CListBox` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CListBox` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarla definitivamente quando l'utente chiude la finestra padre.

Se si alloca alcuna memoria nel `CListBox` dell'oggetto, eseguire l'override di `CListBox` distruttore per l'eliminazione dell'allocazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="addstring"></a>  CListBox::AddString

Aggiunge una stringa a una casella di riepilogo.

```
int AddString(LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*lpszItem*<br/>
Punta a una stringa con terminazione null che deve essere aggiunto.

### <a name="return-value"></a>Valore restituito

Indice a base zero per la stringa nella casella di riepilogo. Il valore restituito è LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non c'è spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Note

Se la casella di riepilogo non è stata creata con il [LBS_SORT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile, la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco è ordinato. Se la casella di riepilogo è stata creata con lo stile LBS_SORT ma non la [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile di visualizzazione, il framework Ordina l'elenco da uno o più chiamate al `CompareItem` funzione membro.

Uso [InsertString](#insertstring) per inserire una stringa in una posizione specifica all'interno della casella di elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#3](../../mfc/codesnippet/cpp/clistbox-class_1.cpp)]

##  <a name="chartoitem"></a>  CListBox::CharToItem

Chiamato dal framework quando finestra padre della casella di riepilogo riceve un messaggio WM_CHARTOITEM dalla casella di riepilogo.

```
virtual int CharToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nKey*<br/>
Il codice ANSI del carattere digitato dall'utente.

*nIndex*<br/>
La posizione corrente del punto di inserimento di caselle di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce - 1 o - 2 per alcuna altra azione o un numero non negativo per specificare un indice di un elemento della casella di riepilogo in cui eseguire l'azione predefinita per la sequenza di tasti. L'implementazione predefinita restituisce - 1.

### <a name="remarks"></a>Note

Quando viene ricevuto un messaggio WM_CHAR, ma solo se la casella di riepilogo soddisfa tutti questi criteri, dalla casella di riepilogo viene inviato il messaggio WM_CHARTOITEM:

- È una casella di riepilogo di disegno.

- Non è il [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) set di stili.

- Dispone di almeno un elemento.

Mai chiamare questa funzione manualmente. Eseguire l'override di questa funzione per la propria gestione personalizzata dei messaggi della tastiera.

Nell'override, deve restituire un valore per indicare al framework quali l'azione eseguita. Valore restituito di - 1 o - 2 indica che è gestito tutti gli aspetti di selezionando l'elemento e non richiede alcuna azione ulteriore dalla casella di riepilogo. Prima di restituire - 1 o - 2, si è stato possibile impostare la selezione o Sposta il punto di inserimento o entrambi. Per impostare la selezione, usare [SetCurSel](#setcursel) oppure [funzione membro SetSel](#setsel). Per spostare il punto di inserimento, usare [SetCaretIndex](#setcaretindex).

Valore restituito pari a 0 o maggiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti dell'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#4](../../mfc/codesnippet/cpp/clistbox-class_2.cpp)]

##  <a name="clistbox"></a>  CListBox::CListBox

Costruisce un oggetto `CListBox`.

```
CListBox();
```

### <a name="remarks"></a>Note

Si costruisce un `CListBox` oggetto in due passaggi. In primo luogo, chiamare il costruttore `ClistBox` e quindi chiamare `Create`, che inizializza la casella di riepilogo di Windows e lo collega al `CListBox`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#1](../../mfc/codesnippet/cpp/clistbox-class_3.cpp)]

##  <a name="compareitem"></a>  CListBox::CompareItem

Chiamato dal framework per determinare la posizione relativa di un nuovo elemento in una casella di riepilogo di disegno ordinato.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### <a name="parameters"></a>Parametri

*lpCompareItemStruct*<br/>
Un puntatore di tipo long a un `COMPAREITEMSTRUCT` struttura.

### <a name="return-value"></a>Valore restituito

Indica la posizione relativa dei due elementi descritti nel [COMPAREITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagcompareitemstruct) struttura. Potrebbe essere uno qualsiasi dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|-1|Elemento 1 precede l'elemento 2.|
|0|Item 1 e item 2 è lo stesso ordine.|
|1|Elemento 1 ordinato alfabeticamente dopo l'elemento 2.|

Visualizzare [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) per una descrizione del `COMPAREITEMSTRUCT` struttura.

### <a name="remarks"></a>Note

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella di riepilogo di disegno con lo stile LBS_SORT, è necessario eseguire l'override di questa funzione membro per facilitare il framework per l'ordinamento dei nuovi elementi aggiunti alla casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#5](../../mfc/codesnippet/cpp/clistbox-class_4.cpp)]

##  <a name="create"></a>  CListBox::Create

Crea la casella di riepilogo di Windows e lo collega al `CListBox` oggetto.

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
Specifica le dimensioni di caselle di riepilogo e la posizione. Può essere un' `CRect` oggetto o un `RECT` struttura.

*pParentWnd*<br/>
Specifica una finestra padre della casella di riepilogo (in genere un `CDialog` oggetto). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo. della casella di riepilogo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CListBox` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che inizializza la casella di riepilogo di Windows e lo collega al `CListBox` oggetto.

Quando `Create` viene eseguito, invia Windows la [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messaggi per il controllo casella di riepilogo.

Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) funzioni membro nel `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CListBox`, aggiungere una mappa messaggi per la nuova classe e sostituire le funzioni membro di gestione del messaggio precedente. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare la seguente istruzione [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo casella di riepilogo.

- WS_CHILD sempre

- In genere WS_VISIBLE

- WS_DISABLED raramente

- WS_VSCROLL per aggiungere una barra di scorrimento verticale

- WS_HSCROLL per aggiungere una barra di scorrimento orizzontale

- WS_GROUP ai controlli di gruppo

- WS_TABSTOP per consentire la tabulazione al controllo

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#2](../../mfc/codesnippet/cpp/clistbox-class_5.cpp)]

##  <a name="deleteitem"></a>  CListBox::DeleteItem

Chiamato dal framework quando l'utente elimina un elemento da un disegno `CListBox` dell'oggetto o distrugge la casella di riepilogo.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDeleteItemStruct*<br/>
Un puntatore di tipo long a un Windows [DELETEITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdeleteitemstruct) struttura che contiene informazioni sull'elemento eliminato.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ridisegnare una casella di riepilogo di disegno in base alle esigenze.

Visualizzare [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) per una descrizione del `DELETEITEMSTRUCT` struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#6](../../mfc/codesnippet/cpp/clistbox-class_6.cpp)]

##  <a name="deletestring"></a>  CListBox::DeleteString

Elimina l'elemento nella posizione *nIndex* dalla casella di riepilogo.

```
int DeleteString(UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa deve essere eliminato.

### <a name="return-value"></a>Valore restituito

Conteggio delle stringhe rimanenti nell'elenco. Il valore restituito è LB_ERR se *nIndex* specifica un indice maggiore del numero di elementi nell'elenco.

### <a name="remarks"></a>Note

Tutti gli elementi segue *nIndex* ora spostare verso il basso di una posizione. Ad esempio, se una casella di riepilogo contiene due elementi, l'eliminazione il primo elemento causerà l'elemento rimanente in questo modo la prima posizione. *nIndex*= 0 per l'elemento nella prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#7](../../mfc/codesnippet/cpp/clistbox-class_7.cpp)]

##  <a name="dir"></a>  CListBox::Dir

Aggiunge un elenco di nomi di file, unità o entrambi per una casella di riepilogo.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### <a name="parameters"></a>Parametri

*attr*<br/>
Può essere qualsiasi combinazione dei **enum** i valori descritti nella `CFile::GetStatu` [s](../../mfc/reference/cfile-class.md#getstatus), o qualsiasi combinazione dei valori seguenti:

|Value|Significato|
|-----------|-------------|
|0x0000|File può essere letti da o scritti.|
|0x0001|File può essere letto da ma non scritto.|
|0x0002|File è nascosta e non viene visualizzata nell'elenco delle directory.|
|0x0004|File è un file di sistema.|
|0x0010|Il nome specificato da *lpszWildCard* specifica una directory.|
|0x0020|È stati archiviati i file.|
|0x4000|Includere tutte le unità che corrispondono al nome specificato da *lpszWildCard*.|
|0x8000|Flag Exclusive. Se è impostato il flag exclusive, vengono elencati solo i file del tipo specificato. In caso contrario, sono elencati i file del tipo specificato oltre ai file "normali".|

*lpszWildCard*<br/>
Punta a una stringa specifica di file. La stringa può contenere i caratteri jolly (ad esempio, *.\*).

### <a name="return-value"></a>Valore restituito

Indice a base zero del nome del file ultimo aggiunto all'elenco. Il valore restituito è LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non c'è spazio sufficiente per archiviare le nuove stringhe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#8](../../mfc/codesnippet/cpp/clistbox-class_8.cpp)]

##  <a name="drawitem"></a>  CListBox::DrawItem

Chiamato dal framework quando un aspetto visivo di una casella Cambia elenco creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore di tipo long a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che contiene informazioni sul tipo di disegno necessaria.

### <a name="remarks"></a>Note

Il `itemAction` e `itemState` i membri del `DRAWITEMSTRUCT` struttura definire l'azione di disegno che deve essere eseguita.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CListBox` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima di questo membro funzione termina.

Visualizzare [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#9](../../mfc/codesnippet/cpp/clistbox-class_9.cpp)]

##  <a name="findstring"></a>  CListBox::FindString

Trova la prima stringa in una casella di riepilogo che contiene il prefisso specificato senza modificare la selezione della casella di riepilogo.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszItem) const;
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento che precede il primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se *nStartAfter* è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.

*lpszItem*<br/>
Punta alla stringa con terminazione null che contiene il prefisso per la ricerca. La ricerca avviene indipendenti, in modo che questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice a base zero dell'elemento corrispondente oppure LB_ERR se la ricerca ha esito negativo.

### <a name="remarks"></a>Note

Usare la [SelectString](#selectstring) funzione membro sia trovare e selezionare una stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#10](../../mfc/codesnippet/cpp/clistbox-class_10.cpp)]

##  <a name="findstringexact"></a>  CListBox::FindStringExact

Trova la prima stringa di casella di riepilogo che corrisponde alla stringa specificata nella *lpszFind*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### <a name="parameters"></a>Parametri

*nIndexStart*<br/>
Specifica l'indice in base zero dell'elemento che precede il primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da *nIndexStart*. Se *nIndexStart* è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.

*lpszFind*<br/>
Punta alla stringa con terminazione null da cercare. Questa stringa può contenere un nome di file completo, inclusa l'estensione. La ricerca non viene fatta distinzione tra maiuscole e minuscole, in modo che la stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento corrispondente, o LB_ERR se la ricerca ha esito negativo.

### <a name="remarks"></a>Note

Se la casella di riepilogo è stata creata con uno stile di disegno, ma senza il [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile di visualizzazione, il `FindStringExact` tenta corrisponde al valore di parola doppia rispetto al valore di funzione membro *lpszFind*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#11](../../mfc/codesnippet/cpp/clistbox-class_11.cpp)]

##  <a name="getanchorindex"></a>  CListBox::GetAnchorIndex

Recupera l'indice in base zero dell'elemento di ancoraggio corrente nella casella di riepilogo.

```
int GetAnchorIndex() const;
```

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento di ancoraggio corrente, se ha esito positivo. in caso contrario LB_ERR.

### <a name="remarks"></a>Note

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o all'ultimo elemento in un blocco degli elementi selezionati contigui.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::SetAnchorIndex](#setanchorindex).

##  <a name="getcaretindex"></a>  CListBox::GetCaretIndex

Determina l'indice dell'elemento che contiene il rettangolo di attivazione in una casella di riepilogo a selezione multipla.

```
int GetCaretIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice a base zero dell'elemento che contiene il rettangolo di attivazione in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è l'indice dell'elemento selezionato, se presente.

### <a name="remarks"></a>Note

L'elemento può o non può essere selezionato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::SetCaretIndex](#setcaretindex).

##  <a name="getcount"></a>  CListBox::GetCount

Recupera il numero di elementi in una casella di riepilogo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella casella di riepilogo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Il conteggio restituito è una maggiore del valore di indice dell'ultimo elemento (l'indice è in base zero).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#12](../../mfc/codesnippet/cpp/clistbox-class_12.cpp)]

##  <a name="getcursel"></a>  CListBox::GetCurSel

Recupera l'indice in base zero dell'elemento attualmente selezionato, se presente, in una casella di riepilogo a selezione singola.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice a base zero dell'elemento attualmente selezionato se si tratta di una casella di riepilogo a selezione singola. È LB_ERR se è attualmente selezionato alcun elemento.

In una casella di riepilogo a selezione multipla, l'indice dell'elemento con lo stato attivo.

### <a name="remarks"></a>Note

Non chiamare `GetCurSel` per una casella di riepilogo a selezione multipla. Uso [CListBox::GetSelItems](#getselitems) invece.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#13](../../mfc/codesnippet/cpp/clistbox-class_13.cpp)]

##  <a name="gethorizontalextent"></a>  CListBox::GetHorizontalExtent

Recupera dalla casella di riepilogo la larghezza in pixel mediante il quale è possibile scorrere orizzontalmente.

```
int GetHorizontalExtent() const;
```

### <a name="return-value"></a>Valore restituito

Scorrevole larghezza della casella di riepilogo, in pixel.

### <a name="remarks"></a>Note

Questo è applicabile solo se la casella di riepilogo possiede una barra di scorrimento orizzontale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#14](../../mfc/codesnippet/cpp/clistbox-class_14.cpp)]

##  <a name="getitemdata"></a>  CListBox::GetItemData

Recupera il valore Double Word fornita dall'applicazione associato all'elemento casella di riepilogo specificata.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Il valore a 32 bit associato con l'elemento o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Il valore Double Word è stata la *dwItemData* parametro di un [SetItemData](#setitemdata) chiamare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#15](../../mfc/codesnippet/cpp/clistbox-class_15.cpp)]

##  <a name="getitemdataptr"></a>  CListBox::GetItemDataPtr

Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento casella di riepilogo specificata come indicatore di misura (**void** <strong>\*</strong>).

```
void* GetItemDataPtr(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Recupera un puntatore o -1 se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#16](../../mfc/codesnippet/cpp/clistbox-class_16.cpp)]

##  <a name="getitemheight"></a>  CListBox::GetItemHeight

Determina l'altezza degli elementi in una casella di riepilogo.

```
int GetItemHeight(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, degli elementi nella casella di riepilogo. Se la casella di riepilogo contiene le [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile di visualizzazione, il valore restituito è l'altezza dell'elemento specificato da *nIndex*. Se si verifica un errore, il valore restituito è LB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#17](../../mfc/codesnippet/cpp/clistbox-class_17.cpp)]

##  <a name="getitemrect"></a>  CListBox::GetItemRect

Recupera le dimensioni del rettangolo di tale elemento di una casella di riepilogo dei limiti che è attualmente visualizzato nella finestra della casella di riepilogo.

```
int GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*lpRect*<br/>
Specifica un puntatore di tipo long a un [struttura RECT](/windows/desktop/api/windef/ns-windef-tagrect) che riceve le coordinate del client di casella di riepilogo dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#18](../../mfc/codesnippet/cpp/clistbox-class_18.cpp)]

##  <a name="getlistboxinfo"></a>  CListBox::GetListBoxInfo

Recupera il numero di elementi per ogni colonna.

```
DWORD GetListBoxInfo() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi per ogni colonna del `CListBox` oggetto.

### <a name="remarks"></a>Note

Questa funzione membro emula la funzionalità dei [LB_GETLISTBOXINFO](/windows/desktop/Controls/lb-getlistboxinfo) del messaggio, come descritto nel SDK di Windows.

##  <a name="getlocale"></a>  CListBox::GetLocale

Recupera le impostazioni locali utilizzate per la casella di riepilogo.

```
LCID GetLocale() const;
```

### <a name="return-value"></a>Valore restituito

Il valore dell'identificatore (LCID) delle impostazioni locali per le stringhe nella casella di riepilogo.

### <a name="remarks"></a>Note

Le impostazioni locali viene utilizzata, ad esempio, per determinare l'ordinamento delle stringhe in un elenco ordinato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::SetLocale](#setlocale).

##  <a name="getsel"></a>  CListBox::GetSel

Recupera lo stato di selezione di un elemento.

```
int GetSel(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

### <a name="return-value"></a>Valore restituito

Un numero positivo se l'elemento specificato è selezionato; in caso contrario, è 0. Il valore restituito è LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Questa funzione membro funziona con entrambe le caselle di riepilogo a selezione multipla e singola.

Per recuperare l'indice dell'elemento della casella elenco attualmente selezionato, usare [CListBox::GetCurSel](#getcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#19](../../mfc/codesnippet/cpp/clistbox-class_19.cpp)]

##  <a name="getselcount"></a>  CListBox::GetSelCount

Recupera il numero totale di elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi selezionati in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::GetSelItems](#getselitems).

##  <a name="getselitems"></a>  CListBox::GetSelItems

Riempie un buffer con una matrice di interi che specifica i numeri degli elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelItems(
    int nMaxItems,
    LPINT rgIndex) const;
```

### <a name="parameters"></a>Parametri

*nMaxItems*<br/>
Specifica il numero massimo di elementi selezionati numeri degli elementi di cui devono essere inseriti nel buffer.

*rgIndex*<br/>
Specifica un puntatore a un buffer sufficiente per il numero di numeri interi specificata da *nMaxItems*.

### <a name="return-value"></a>Valore restituito

Il numero effettivo di elementi inseriti nel buffer. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è `LB_ERR`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#20](../../mfc/codesnippet/cpp/clistbox-class_20.cpp)]

##  <a name="gettext"></a>  CListBox::GetText

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
Punta al buffer che riceve la stringa. Il buffer deve avere spazio sufficiente per la stringa e un carattere di terminazione null. La dimensione della stringa può essere determinata anticipo chiamando il `GetTextLen` funzione membro.

*rString*<br/>
Riferimento a un oggetto `CString`.

### <a name="return-value"></a>Valore restituito

La lunghezza (in byte) della stringa, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito è LB_ERR.

### <a name="remarks"></a>Note

La seconda forma di questo membro funzione riempie un `CString` oggetto con il testo della stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#21](../../mfc/codesnippet/cpp/clistbox-class_21.cpp)]

##  <a name="gettextlen"></a>  CListBox::GetTextLen

Ottiene la lunghezza di una stringa in un elemento di casella di riepilogo.

```
int GetTextLen(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa.

### <a name="return-value"></a>Valore restituito

La lunghezza della stringa in caratteri, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito è LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::GetText](#gettext).

##  <a name="gettopindex"></a>  CListBox::GetTopIndex

Recupera l'indice in base zero del primo elemento visibile in una casella di riepilogo.

```
int GetTopIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice a base zero del primo elemento visibile nel caso di esito positivo, una casella di riepilogo LB_ERR in caso contrario.

### <a name="remarks"></a>Note

Inizialmente, l'elemento 0 è nella parte superiore della casella di riepilogo, ma se si scorre la casella di riepilogo, un altro elemento potrebbe essere nella parte superiore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#22](../../mfc/codesnippet/cpp/clistbox-class_22.cpp)]

##  <a name="initstorage"></a>  CListBox::InitStorage

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

Se ha esito positivo, il numero massimo di elementi che possono essere archiviati la casella di riepilogo prima una riallocazione della memoria è necessario, in caso contrario LB_ERRSPACE, vale a dire non è disponibile memoria sufficiente.

### <a name="remarks"></a>Note

Chiamare questa funzione prima di aggiungere un numero elevato di elementi da un `CListBox`.

Questa funzione consente di velocizzare l'inizializzazione di caselle di riepilogo che hanno un numero elevato di elementi (più di 100). Prealloca la quantità di memoria in modo che le successive specificata [AddString](#addstring), [InsertString](#insertstring), e [Dir](#dir) funzioni accettano il minor tempo possibile. È possibile usare le stime per i parametri. Se sovrastima, alcuni memoria aggiuntiva viene allocata; Se si sottostima, l'allocazione normale viene utilizzato per gli elementi che superano la quantità preallocata.

Windows 95 o 98 solo: Il *nItems* parametro è limitato a valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere elementi oltre 32.767. Anche se il numero di elementi è limitato, le dimensioni totali degli elementi in una casella di riepilogo sono limitata solo dalla memoria disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#23](../../mfc/codesnippet/cpp/clistbox-class_23.cpp)]

##  <a name="insertstring"></a>  CListBox::InsertString

Inserisce una stringa nella casella di riepilogo.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della posizione per inserire la stringa. Se questo parametro è -1, la stringa viene aggiunta alla fine dell'elenco.

*lpszItem*<br/>
Punta a una stringa con terminazione null da inserire.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione in cui è stata inserita la stringa. Il valore restituito è LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non c'è spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Note

A differenza di [AddString](#addstring) funzione membro, `InsertString` non genera un elenco con il [LBS_SORT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile di visualizzazione da ordinare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#24](../../mfc/codesnippet/cpp/clistbox-class_24.cpp)]

##  <a name="itemfrompoint"></a>  CListBox::ItemFromPoint

Determina l'elemento casella di riepilogo più vicino al punto specificato in *pt*.

```
UINT ItemFromPoint(
    CPoint pt,
    BOOL& bOutside) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Punto per cui trovare l'elemento più vicino, specificato rispetto all'angolo superiore sinistro dell'area client della casella di riepilogo.

*bOutside*<br/>
Fare riferimento alla variabile BOOL che verrà impostata su TRUE se *pt* è di fuori dell'area client di elemento di casella di riepilogo più vicino, FALSE se *pt* si trova all'interno dell'area client di elemento di casella di riepilogo più vicino.

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento più vicino al punto specificato nel *pt*.

### <a name="remarks"></a>Note

È possibile utilizzare questa funzione per determinare quale elemento casella di riepilogo viene passato il cursore del mouse.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CListBox::SetAnchorIndex](#setanchorindex).

##  <a name="measureitem"></a>  CListBox::MeasureItem

Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Un puntatore di tipo long a un [MEASUREITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagmeasureitemstruct) struttura.

### <a name="remarks"></a>Note

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura informa Windows delle dimensioni della casella di riepilogo. Se la casella di riepilogo viene creata con il [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile, il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

Per ulteriori informazioni sull'uso di [LBS_OWNERDRAWFIXED](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile in una casella di riepilogo di disegno creato con il `SubclassDlgItem` funzione membro di `CWnd`, vedere la discussione nella [tecnica nota 14](../../mfc/tn014-custom-controls.md).

Visualizzare [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#25](../../mfc/codesnippet/cpp/clistbox-class_25.cpp)]

##  <a name="resetcontent"></a>  CListBox::ResetContent

Rimuove tutti gli elementi da una casella di riepilogo.

```
void ResetContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#26](../../mfc/codesnippet/cpp/clistbox-class_26.cpp)]

##  <a name="selectstring"></a>  CListBox::SelectString

Le ricerche per un elemento della casella di riepilogo che corrisponde alla stringa specificata e se viene trovato un elemento corrisponda, viene selezionato l'elemento.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento che precede il primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se *nStartAfter* è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.

*lpszItem*<br/>
Punta alla stringa con terminazione null che contiene il prefisso per la ricerca. La ricerca avviene indipendenti, in modo che questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

L'indice dell'elemento selezionato se la ricerca ha avuto esito positivo. Se la ricerca ha esito negativo, il valore restituito è LB_ERR e non viene modificata la selezione corrente.

### <a name="remarks"></a>Note

La casella di riepilogo viene eseguito lo scorrimento, se necessario, per portare l'elemento selezionato nella visualizzazione.

Questa funzione membro non può essere usata con una casella di riepilogo con i [LBS_MULTIPLESEL](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile.

Un elemento è selezionato solo se caratteri sull'estremità iniziale (dal punto di partenza) corrisponde ai caratteri nella stringa specificata da *lpszItem*.

Usare il `FindString` funzione membro per trovare una stringa senza selezionare l'elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#27](../../mfc/codesnippet/cpp/clistbox-class_27.cpp)]

##  <a name="selitemrange"></a>  CListBox::SelItemRange

Consente di selezionare più elementi consecutivi in una casella di riepilogo a selezione multipla.

```
int SelItemRange(
    BOOL bSelect,
    int nFirstItem,
    int nLastItem);
```

### <a name="parameters"></a>Parametri

*bSelect*<br/>
Specifica la modalità di selezione del set. Se *bSelezionare* è TRUE, la stringa è selezionata ed evidenziata; se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata.

*nFirstItem*<br/>
Specifica l'indice in base zero del primo elemento da impostare.

*nLastItem*<br/>
Specifica l'indice in base zero dell'ultimo elemento da impostare.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Usare questa funzione membro solo con le caselle di riepilogo a selezione multipla. Se è necessario selezionare un solo elemento in una casella di riepilogo a selezione multipla, vale a dire, se *nFirstItem* è uguale a *nLastItem* , chiamare il [funzione membro SetSel](#setsel) membro funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#28](../../mfc/codesnippet/cpp/clistbox-class_28.cpp)]

##  <a name="setanchorindex"></a>  CListBox::SetAnchorIndex

Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.

```
void SetAnchorIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento casella di riepilogo che sarà il punto di ancoraggio.

### <a name="remarks"></a>Note

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o all'ultimo elemento in un blocco degli elementi selezionati contigui.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#29](../../mfc/codesnippet/cpp/clistbox-class_29.cpp)]

##  <a name="setcaretindex"></a>  CListBox::SetCaretIndex

Imposta il rettangolo di attivazione per l'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.

```
int SetCaretIndex(
    int nIndex,
    BOOL bScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento per ricevere il rettangolo di attivazione nella casella di riepilogo.

*bScroll*<br/>
Se questo valore è 0, l'elemento è necessario scorrere fino a quando non è completamente visibile. Se questo valore non è 0, l'elemento è necessario scorrere fino a quando non è presente almeno parzialmente visibile.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Se l'elemento non è visibile, lo scorrimento nella visualizzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#30](../../mfc/codesnippet/cpp/clistbox-class_30.cpp)]

##  <a name="setcolumnwidth"></a>  CListBox::SetColumnWidth

Imposta la larghezza in pixel di tutte le colonne in una casella di riepilogo a più colonne (creata con il [LBS_MULTICOLUMN](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile).

```
void SetColumnWidth(int cxWidth);
```

### <a name="parameters"></a>Parametri

*cxWidth*<br/>
Specifica la larghezza in pixel di tutte le colonne.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#31](../../mfc/codesnippet/cpp/clistbox-class_31.cpp)]

##  <a name="setcursel"></a>  CListBox::SetCurSel

Seleziona una stringa e si scorre all'interno della visualizzazione, se necessario.

```
int SetCurSel(int nSelect);
```

### <a name="parameters"></a>Parametri

*nSelect*<br/>
Specifica l'indice in base zero della stringa di selezione. Se *nSelezionare* è -1, la casella di riepilogo è impostata su Nessuna opzione di selezione.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Quando è selezionata la nuova stringa, l'evidenziazione della casella di riepilogo rimuove dalla stringa selezionata in precedenza.

Usare questa funzione membro solo con le caselle di riepilogo a selezione singola.

Per impostare o rimuovere una selezione in una casella di riepilogo a selezione multipla, usare [CListBox::SetSel](#setsel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#32](../../mfc/codesnippet/cpp/clistbox-class_32.cpp)]

##  <a name="sethorizontalextent"></a>  CListBox::SetHorizontalExtent

Imposta la larghezza, in pixel, mediante il quale una casella di riepilogo può essere necessario scorrere orizzontalmente.

```
void SetHorizontalExtent(int cxExtent);
```

### <a name="parameters"></a>Parametri

*cxExtent*<br/>
Specifica il numero di pixel mediante il quale la casella di riepilogo può essere necessario scorrere orizzontalmente.

### <a name="remarks"></a>Note

Se le dimensioni della casella di riepilogo sono inferiore a questo valore, la barra di scorrimento orizzontale scorrerà orizzontalmente elementi nella casella di riepilogo. Se la casella di riepilogo è di dimensioni equivalenti o superiori rispetto a questo valore, viene nascosta la barra di scorrimento orizzontale.

Per rispondere a una chiamata a `SetHorizontalExtent`, la casella di riepilogo sono stata definita con la [WS_HSCROLL](../../mfc/reference/styles-used-by-mfc.md#window-styles) stile.

Questa funzione membro non è utile per le caselle di riepilogo a più colonne. Per le caselle di riepilogo a più colonne, chiamare il `SetColumnWidth` funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#33](../../mfc/codesnippet/cpp/clistbox-class_33.cpp)]

##  <a name="setitemdata"></a>  CListBox::SetItemData

Imposta un valore a 32 bit associato con l'elemento specificato in una casella di riepilogo.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*dwItemData*<br/>
Specifica il valore da associare l'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#34](../../mfc/codesnippet/cpp/clistbox-class_34.cpp)]

##  <a name="setitemdataptr"></a>  CListBox::SetItemDataPtr

Imposta il valore a 32 bit associato con l'elemento specificato in una casella di riepilogo sia il puntatore specificato ( **void** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*pData*<br/>
Specifica il puntatore del mouse per essere associato all'articolo.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Questo puntatore rimane valido per tutta la durata della casella di riepilogo, anche se la posizione dell'elemento relativo all'interno della casella di elenco può cambiare man mano gli elementi vengono aggiunti o rimossi. Di conseguenza, l'indice dell'elemento all'interno della casella è possibile modificare, ma il puntatore rimane affidabile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#35](../../mfc/codesnippet/cpp/clistbox-class_35.cpp)]

##  <a name="setitemheight"></a>  CListBox::SetItemHeight

Imposta l'altezza degli elementi in una casella di riepilogo.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

*cyItemHeight*<br/>
Specifica l'altezza, in pixel, dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se l'indice o dell'altezza non è valido.

### <a name="remarks"></a>Note

Se la casella di riepilogo contiene le [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile di visualizzazione, la funzione imposta l'altezza dell'elemento specificato da *nIndex*. In caso contrario, la funzione imposta l'altezza di tutti gli elementi nella casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#36](../../mfc/codesnippet/cpp/clistbox-class_36.cpp)]

##  <a name="setlocale"></a>  CListBox::SetLocale

Imposta l'identificatore delle impostazioni locali per questa casella di riepilogo.

```
LCID SetLocale(LCID nNewLocale);
```

### <a name="parameters"></a>Parametri

*nNewLocale*<br/>
Il nuovo valore identifier (LCID) di impostazioni locali da impostare per la casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Il precedente valore identifier (LCID) delle impostazioni locali per questa casella di riepilogo.

### <a name="remarks"></a>Note

Se `SetLocale` non viene chiamato, il valore predefinito delle impostazioni locali vengano ottenuta dal sistema. Queste impostazioni locali predefinite di sistema possono essere modificata da Pannello di controllo applicazione internazionali (o internazionale).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#37](../../mfc/codesnippet/cpp/clistbox-class_37.cpp)]

##  <a name="setsel"></a>  CListBox::SetSel

Seleziona una stringa in una casella di riepilogo a selezione multipla.

```
int SetSel(
    int nIndex,
    BOOL bSelect = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa da impostare. Se -1, la selezione viene aggiunto o rimosso da tutte le stringhe, in base al valore *bSelezionare*.

*bSelect*<br/>
Specifica la modalità di selezione del set. Se *bSelezionare* è TRUE, la stringa è selezionata ed evidenziata; se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata. La stringa specificata viene selezionata ed evidenziata per impostazione predefinita.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Usare questa funzione membro solo con le caselle di riepilogo a selezione multipla.

Per selezionare un elemento da una casella di riepilogo a selezione singola, usare [CListBox::SetCurSel](#setcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#38](../../mfc/codesnippet/cpp/clistbox-class_38.cpp)]

##  <a name="settabstops"></a>  CListBox::SetTabStops

Imposta le posizioni di tabulazione in una casella di riepilogo.

```
void SetTabStops();
BOOL SetTabStops(const int& cxEachStop);

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops);
```

### <a name="parameters"></a>Parametri

*cxEachStop*<br/>
Punti di tabulazione vengono impostate a ogni *cxEachStop* DLU. Visualizzare *rgTabStops* per una descrizione di un'unità di finestra di dialogo.

*nTabStops*<br/>
Specifica il numero di punti di tabulazione per avere nella casella di riepilogo.

*rgTabStops*<br/>
Punta al primo membro di una matrice di interi che contiene le posizioni di tabulazione in unità di misura della finestra. Una DLU rappresenta la distanza orizzontale o verticale. Una DLU orizzontali è uguale a un quarto di unità di base larghezza della finestra corrente e un'unità di finestra di dialogo verticale è uguale a un ottavo dell'unità di base altezza della finestra corrente. Le unità di base di finestra di dialogo vengano calcolate in base l'altezza e la larghezza del tipo di carattere del sistema corrente. Il `GetDialogBaseUnits` Windows funzione restituisce la finestra di dialogo corrente le unità di base in pixel. I punti di tabulazione devono essere ordinati in senso crescente; non sono consentite le tabulazioni.

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le schede sono state impostate; in caso contrario 0.

### <a name="remarks"></a>Note

Per impostare punti di tabulazione per la dimensione predefinita di 2 unità di finestra di dialogo, chiamare la versione di questa funzione membro senza parametri. Per impostare punti di tabulazione su una dimensione diversa da 2, chiamare la versione con il *cxEachStop* argomento.

Per impostare punti di tabulazione in una matrice di dimensioni, usare la versione con il *rgTabStops* e *nTabStops* argomenti. Verrà impostato per ogni valore in un punto di tabulazione *rgTabStops*, fino al numero specificato da *nTabStops*.

Per rispondere a una chiamata ai `SetTabStops` funzione membro, la casella di riepilogo deve essere stata creata con il [LBS_USETABSTOPS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#39](../../mfc/codesnippet/cpp/clistbox-class_39.cpp)]

##  <a name="settopindex"></a>  CListBox::SetTopIndex

Assicura che un elemento specifico della casella di riepilogo è visibile.

```
int SetTopIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Zero se ha esito positivo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Note

Il sistema consente di scorrere la casella di riepilogo finché entrambi l'elemento specificato dalla *nIndex* viene visualizzata nella parte superiore dell'elenco casella o l'intervallo di scorrimento massimo viene raggiunto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#40](../../mfc/codesnippet/cpp/clistbox-class_40.cpp)]

##  <a name="vkeytoitem"></a>  CListBox::VKeyToItem

Chiamato dal framework quando finestra padre della casella di riepilogo riceve un messaggio WM_VKEYTOITEM dalla casella di riepilogo.

```
virtual int VKeyToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nKey*<br/>
Il codice tasto virtuale del tasto premuto dall'utente. Per un elenco di codici di tasti virtuali standard, vedere winuser. h

*nIndex*<br/>
La posizione corrente del punto di inserimento di caselle di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce - 2 per alcuna ulteriore azione, - 1 per l'azione predefinita o un numero non negativo per specificare un indice di un elemento della casella di riepilogo in cui eseguire l'azione predefinita per la sequenza di tasti.

### <a name="remarks"></a>Note

Il messaggio WM_VKEYTOITEM viene inviato dalla casella di riepilogo quando riceve un messaggio WM_KEYDOWN, ma solo se la casella di riepilogo soddisfa entrambe le operazioni seguenti:

- Ha il [LBS_WANTKEYBOARDINPUT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) set di stili.

- Dispone di almeno un elemento.

Mai chiamare questa funzione manualmente. Eseguire l'override di questa funzione per la propria gestione personalizzata dei messaggi della tastiera.

È necessario restituire un valore per indicare al framework quale azione eseguita l'override. Valore restituito di - 2 indica che l'applicazione gestita di tutti gli aspetti di selezionando l'elemento e non richiede alcuna azione ulteriore dalla casella di riepilogo. Prima di restituire - 2, è possibile impostare la selezione o Sposta il punto di inserimento o entrambi. Per impostare la selezione, usare [SetCurSel](#setcursel) oppure [funzione membro SetSel](#setsel). Per spostare il punto di inserimento, usare [SetCaretIndex](#setcaretindex).

Valore restituito di - 1 indica che la casella di riepilogo deve eseguire l'azione predefinita nella risposta per la sequenza di tasti. L'implementazione predefinita restituisce - 1.

Valore restituito pari a 0 o maggiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti dell'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#41](../../mfc/codesnippet/cpp/clistbox-class_41.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)
