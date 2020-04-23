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
ms.openlocfilehash: 171038ebaaed815aa687c200fe3210bde8000be3
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753585"
---
# <a name="clistbox-class"></a>Classe CListBox

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
|[CListBox::CharToItem](#chartoitem)|Eseguire l'override per fornire una gestione del WM_CHAR personalizzato per le caselle di riepilogo che edificano dal proprietario che non dispongono di stringhe.|
|[CListBox::CompareItem](#compareitem)|Chiamato dal framework per determinare la posizione di un nuovo elemento in una casella di riepilogo ordinata disegnata dal proprietario.|
|[CListBox::Create](#create)|Crea la casella di riepilogo Windows `CListBox` e la associa all'oggetto.|
|[CListBox::DeleteItem](#deleteitem)|Chiamato dal framework quando l'utente elimina un elemento da una casella di riepilogo di disegno dal proprietario.|
|[CListBox::DeleteString](#deletestring)|Elimina una stringa da una casella di riepilogo.|
|[CListBox::Dir](#dir)|Aggiunge nomi di file, unità o entrambi dalla directory corrente a una casella di riepilogo.|
|[CListBox::DrawItem](#drawitem)|Chiamato dal framework quando viene modificato un aspetto visivo di una casella di riepilogo disegnata dal proprietario.|
|[CListBox::FindString](#findstring)|Cerca una stringa in una casella di riepilogo.|
|[CListBox::FindStringExact](#findstringexact)|Trova la prima stringa della casella di riepilogo che corrisponde a una stringa specificata.|
|[CListBox::GetAnchorIndex](#getanchorindex)|Recupera l'indice in base zero dell'elemento di ancoraggio corrente in una casella di riepilogo.|
|[CListBox::GetCaretIndex](#getcaretindex)|Determina l'indice dell'elemento con il rettangolo di attivazione in una casella di riepilogo a selezione multipla.|
|[CListBox::GetCount](#getcount)|Restituisce il numero di stringhe in una casella di riepilogo.|
|[CListBox::GetCurSel](#getcursel)|Restituisce l'indice in base zero della stringa attualmente selezionata in una casella di riepilogo.|
|[CListBox::GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel di cui è possibile scorrere orizzontalmente una casella di riepilogo.|
|[CListBox::GetItemData](#getitemdata)|Restituisce un valore associato all'elemento della casella di riepilogo.|
|[CListBox::GetItemDataPtrCListBox::GetItemDataPtr](#getitemdataptr)|Restituisce un puntatore a un elemento della casella di riepilogo.|
|[CListBox::GetItemHeight](#getitemheight)|Determina l'altezza degli elementi in una casella di riepilogo.|
|[CListBox::GetItemRect](#getitemrect)|Restituisce il rettangolo di delimitazione dell'elemento casella di riepilogo così come è attualmente visualizzato.|
|[CListBox::GetListBoxInfo](#getlistboxinfo)|Recupera il numero di elementi per colonna.|
|[CListBox::GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox::GetSel](#getsel)|Restituisce lo stato di selezione di un elemento della casella di riepilogo.|
|[CListBox::GetSelCount](#getselcount)|Restituisce il numero di stringhe attualmente selezionate in una casella di riepilogo a selezione multipla.|
|[CListBox::GetSelItems](#getselitems)|Restituisce gli indici delle stringhe attualmente selezionate in una casella di riepilogo.|
|[CListBox::GetText](#gettext)|Copia un elemento della casella di riepilogo in un buffer.|
|[CListBox::GetTextLen](#gettextlen)|Restituisce la lunghezza in byte di un elemento della casella di riepilogo.|
|[CListBox::GetTopIndex](#gettopindex)|Restituisce l'indice della prima stringa visibile in una casella di riepilogo.|
|[CListBox::InitStorage](#initstorage)|Prealloca blocchi di memoria per gli elementi della casella di riepilogo e le stringhe.|
|[CListBox::InsertString](#insertstring)|Inserisce una stringa in una posizione specifica in una casella di riepilogo.|
|[CListBox::ItemFromPoint](#itemfrompoint)|Restituisce l'indice dell'elemento della casella di riepilogo più vicino a un punto.|
|[CListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo di disegno dal proprietario per determinare le dimensioni della casella di riepilogo.|
|[CListBox::ResetContent](#resetcontent)|Cancella tutte le voci da una casella di riepilogo.|
|[CListBox::SelectString](#selectstring)|Cerca e seleziona una stringa in una casella di riepilogo a selezione singola.|
|[CListBox::SelItemRange](#selitemrange)|Seleziona o deseleziona un intervallo di stringhe in una casella di riepilogo a selezione multipla.|
|[CListBox::SetAnchorIndex](#setanchorindex)|Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.|
|[CListBox::SetCaretIndex](#setcaretindex)|Imposta il rettangolo di attivazione sull'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.|
|[CListBox::SetColumnWidth](#setcolumnwidth)|Imposta la larghezza della colonna di una casella di riepilogo a più colonne.|
|[CListBox::SetCurSel](#setcursel)|Seleziona una stringa della casella di riepilogo.|
|[CListBox::SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel per cui è possibile scorrere orizzontalmente una casella di riepilogo.|
|[CListBox::SetItemData](#setitemdata)|Imposta un valore associato all'elemento della casella di riepilogo.|
|[CListBox::SetItemDataPtrCListBox::SetItemDataPtr](#setitemdataptr)|Imposta un puntatore all'elemento della casella di riepilogo.|
|[CListBox::SetItemAltezz](#setitemheight)|Imposta l'altezza degli elementi in una casella di riepilogo.|
|[CListBox::SetLocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella di riepilogo.|
|[CListBox::SetSel](#setsel)|Seleziona o deseleziona un elemento della casella di riepilogo in una casella di riepilogo a selezione multipla.|
|[CListBox::SetTabStops](#settabstops)|Imposta le posizioni delle tabulazioni in una casella di riepilogo.|
|[CListBox::SetTopIndex](#settopindex)|Imposta l'indice in base zero della prima stringa visibile in una casella di riepilogo.|
|[CListBox::VKeyToItem](#vkeytoitem)|Eseguire l'override per fornire una gestione del WM_KEYDOWN personalizzato per le caselle di riepilogo con il set di stili LBS_WANTKEYBOARDINPUT.|

## <a name="remarks"></a>Osservazioni

Una casella di riepilogo visualizza un elenco di elementi, ad esempio i nomi di file, che l'utente può visualizzare e selezionare.

In una casella di riepilogo a selezione singola, l'utente può selezionare un solo elemento. In una casella di riepilogo a selezione multipla è possibile selezionare un intervallo di elementi. Quando l'utente seleziona un elemento, questo viene evidenziato e la casella di riepilogo invia un messaggio di notifica alla finestra padre.

È possibile creare una casella di riepilogo da un modello di finestra di dialogo o direttamente nel codice. Per crearlo direttamente, `CListBox` costruire l'oggetto, quindi chiamare il [Create](#create) funzione membro per `CListBox` creare il Windows controllo casella di riepilogo e associarlo all'oggetto. Per usare una casella di riepilogo in un modello di finestra di `DDX_Control` dialogo, dichiarare una `DoDataExchange` variabile casella di riepilogo nella classe della finestra di dialogo, quindi usare la funzione della classe della finestra di dialogo per connettere la variabile membro al controllo. Questa operazione viene eseguita automaticamente quando si aggiunge una variabile di controllo alla classe della finestra di dialogo.

La costruzione può essere un processo in `CListBox`un solo passaggio in una classe derivata da . Scrivere un costruttore per `Create` la classe derivata e chiamare dall'interno del costruttore.

Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo all'elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una voce della mappa messaggi e una funzione membro del gestore messaggi alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il seguente formato:

`ON_Notification( id, memberFxn )`

dove `id` specifica l'ID di finestra figlio del controllo `memberFxn` casella di riepilogo che invia la notifica ed è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione dell'elemento padre è il seguente:

`afx_msg void memberFxn( );`

Di seguito è riportato un elenco di potenziali voci della mappa messaggi e una descrizione dei casi in cui verrebbero inviate all'elemento padre:

- ON_LBN_DBLCLK L'utente fa doppio clic su una stringa in una casella di riepilogo. Solo una casella di riepilogo con lo stile [LBS_NOTIFY](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) invierà questo messaggio di notifica.

- ON_LBN_ERRSPACE La casella di riepilogo non è in grado di allocare memoria sufficiente per soddisfare la richiesta.

- ON_LBN_KILLFOCUS La casella di riepilogo perde lo stato attivo per l'input.

- ON_LBN_SELCANCEL La selezione della casella di riepilogo corrente viene annullata. Questo messaggio viene inviato solo quando uno stile di LBS_NOTIFY di una casella di riepilogo.

- ON_LBN_SELCHANGE La selezione nella casella di riepilogo è cambiata. Questa notifica non viene inviata se la selezione viene modificata dalla funzione membro [CListBox::SetCurSel](#setcursel) . Questa notifica si applica solo a una casella di riepilogo con lo stile LBS_NOTIFY. Il messaggio di notifica LBN_SELCHANGE viene inviato per una casella di riepilogo a selezione multipla ogni volta che l'utente preme un tasto di direzione, anche se la selezione non viene modificata.

- ON_LBN_SETFOCUS La casella di riepilogo riceve lo stato attivo per l'input.

- ON_WM_CHARTOITEM una casella di riepilogo disegnata dal proprietario senza stringhe riceve un messaggio di WM_CHAR.

- ON_WM_VKEYTOITEM Una casella di riepilogo con lo stile LBS_WANTKEYBOARDINPUT riceve un messaggio di WM_KEYDOWN.

Se si `CListBox` crea un oggetto all'interno di `CListBox` una finestra di dialogo (tramite una risorsa finestra di dialogo), l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CListBox` crea un oggetto all'interno di `CListBox` una finestra, potrebbe essere necessario eliminare l'oggetto. Se si `CListBox` crea l'oggetto nello stack, viene eliminato automaticamente. Se si `CListBox` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo quando l'utente chiude la finestra padre.

Se si alloca `CListBox` memoria nell'oggetto, eseguire l'override del `CListBox` distruttore per eliminare l'allocazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CListBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="clistboxaddstring"></a><a name="addstring"></a>CListBox::AddString

Aggiunge una stringa a una casella di riepilogo.

```
int AddString(LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*lpszItem (elemento di gruppo)*<br/>
Punta alla stringa con terminazione null da aggiungere.

### <a name="return-value"></a>Valore restituito

Indice in base zero della stringa nella casella di riepilogo. Il valore restituito viene LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo non è stata creata con lo stile [LBS_SORT,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco viene ordinato. Se la casella di riepilogo è stata creata con lo stile LBS_SORT ma non `CompareItem` lo stile [LBS_HASSTRINGS,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) il framework ordina l'elenco in base a una o più chiamate alla funzione membro.

Utilizzare [InsertString](#insertstring) per inserire una stringa in una posizione specifica all'interno della casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#3](../../mfc/codesnippet/cpp/clistbox-class_1.cpp)]

## <a name="clistboxchartoitem"></a><a name="chartoitem"></a>CListBox::CharToItem

Chiamato dal framework quando la finestra padre della casella di riepilogo riceve un messaggio di WM_CHARTOITEM dalla casella di riepilogo.

```
virtual int CharToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nChiave*<br/>
Il codice ANSI del carattere digitato dall'utente.

*nIndex*<br/>
Posizione corrente del livello di inserimento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce - 1 o 2 per nessuna ulteriore azione o un numero non negativo per specificare un indice di un elemento della casella di riepilogo su cui eseguire l'azione predefinita per la sequenza di tasti. L'implementazione predefinita restituisce - 1.The default implementation returns - 1.

### <a name="remarks"></a>Osservazioni

Il messaggio WM_CHARTOITEM viene inviato dalla casella di riepilogo quando riceve un messaggio di WM_CHAR, ma solo se la casella di riepilogo soddisfa tutti questi criteri:

- È una casella di riepilogo disegnata dal proprietario.

- Non è impostato lo stile [LBS_HASSTRINGS.](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

- Contiene almeno un elemento.

Non chiamare mai questa funzione manualmente. Eseguire l'override di questa funzione per fornire la gestione personalizzata dei messaggi della tastiera.

Nell'override, è necessario restituire un valore per indicare al framework l'azione eseguita. Un valore restituito pari a - 1 o 2 indica che sono stati gestiti tutti gli aspetti della selezione dell'elemento e non richiede ulteriori azioni da parte della casella di riepilogo. Prima di restituire - 1 o - 2, è possibile impostare la selezione o spostare il punto di inserimento o entrambi. Per impostare la selezione, utilizzare [SetCurSel](#setcursel) o [SetSel](#setsel). Per spostare il postazione di inserimento, utilizzare [SetCaretIndex](#setcaretindex).

Un valore restituito pari a 0 o superiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti sull'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#4](../../mfc/codesnippet/cpp/clistbox-class_2.cpp)]

## <a name="clistboxclistbox"></a><a name="clistbox"></a>CListBox::CListBox

Costruisce un oggetto `CListBox`.

```
CListBox();
```

### <a name="remarks"></a>Osservazioni

Costruire un `CListBox` oggetto in due passaggi. Chiamare innanzitutto `ClistBox` il costruttore e quindi chiamare `Create`, che inizializza la `CListBox`casella di riepilogo di Windows e la associa all'oggetto .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#1](../../mfc/codesnippet/cpp/clistbox-class_3.cpp)]

## <a name="clistboxcompareitem"></a><a name="compareitem"></a>CListBox::CompareItem

Chiamato dal framework per determinare la posizione relativa di un nuovo elemento in una casella di riepilogo ordinata disegnata dal proprietario.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### <a name="parameters"></a>Parametri

*LpCompareItemStruct (struttura in cui è stato possibile utilizzare lpCompareItem*<br/>
Puntatore lungo `COMPAREITEMSTRUCT` a una struttura.

### <a name="return-value"></a>Valore restituito

Indica la posizione relativa dei due elementi descritti nella struttura [COMPAREITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-compareitemstruct) Può essere uno dei seguenti valori:

|valore|Significato|
|-----------|-------------|
|-1|L'articolo 1 viene ordinato prima dell'articolo 2.|
|0|L'elemento 1 e l'elemento 2 hanno lo stesso modo.|
|1|L'articolo 1 viene ordinato dopo l'articolo 2.|

Vedere [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) per una `COMPAREITEMSTRUCT` descrizione della struttura.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella di riepilogo di disegno dal proprietario con lo stile LBS_SORT, è necessario eseguire l'override di questa funzione membro per facilitare il framework nell'ordinamento di nuovi elementi aggiunti alla casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#5](../../mfc/codesnippet/cpp/clistbox-class_4.cpp)]

## <a name="clistboxcreate"></a><a name="create"></a>CListBox::Create

Crea la casella di riepilogo Windows `CListBox` e la associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della casella di riepilogo. Applicare qualsiasi combinazione di stili di casella di [riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) alla casella.

*Rect*<br/>
Specifica le dimensioni e la posizione della casella di riepilogo. Può essere `CRect` un oggetto `RECT` o una struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre della casella `CDialog` di riepilogo (in genere un oggetto). Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CListBox` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che inizializza la `CListBox` casella di riepilogo di Windows e la associa all'oggetto.

Quando `Create` viene eseguito, Windows invia i messaggi [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) [, WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) al controllo casella di riepilogo.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), `CWnd` [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe base. Per estendere la gestione dei messaggi `CListBox`predefinita, derivare una classe da , aggiungere una mappa messaggi alla nuova classe ed eseguire l'override delle funzioni membro del gestore messaggi precedenti. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare gli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo casella di riepilogo.

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

- WS_VSCROLL Per aggiungere una barra di scorrimento verticale

- WS_HSCROLL Per aggiungere una barra di scorrimento orizzontale

- WS_GROUP A raggruppare i controlli

- WS_TABSTOP Per consentire la tabulazione a questo controllo

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#2](../../mfc/codesnippet/cpp/clistbox-class_5.cpp)]

## <a name="clistboxdeleteitem"></a><a name="deleteitem"></a>CListBox::DeleteItem

Chiamato dal framework quando l'utente elimina un `CListBox` elemento da un oggetto di disegno del proprietario o elimina la casella di riepilogo.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDeleteItemStruct (informazioni in due)*<br/>
Puntatore lungo a una struttura [DELETEITEMSTRUCT di](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) Windows che contiene informazioni sull'elemento eliminato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ridisegnare una casella di riepilogo di disegno del proprietario in base alle esigenze.

Vedere [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) per una `DELETEITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#6](../../mfc/codesnippet/cpp/clistbox-class_6.cpp)]

## <a name="clistboxdeletestring"></a><a name="deletestring"></a>CListBox::DeleteString

Elimina l'elemento nella posizione *nIndex* dalla casella di riepilogo.

```
int DeleteString(UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa da eliminare.

### <a name="return-value"></a>Valore restituito

Conteggio delle stringhe rimanenti nell'elenco. Il valore restituito viene LB_ERR se *nIndex* specifica un indice maggiore del numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nIndex* ora si spostano verso il basso di una posizione. Ad esempio, se una casella di riepilogo contiene due elementi, l'eliminazione del primo elemento farà sì che l'elemento rimanente sia ora nella prima posizione. *nIndice*0 per l'elemento in prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#7](../../mfc/codesnippet/cpp/clistbox-class_7.cpp)]

## <a name="clistboxdir"></a><a name="dir"></a>CListBox::Dir

Aggiunge un elenco di nomi di file, unità o entrambi a una casella di riepilogo.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### <a name="parameters"></a>Parametri

*Attr*<br/>
Può essere qualsiasi combinazione dei valori `CFile::GetStatu` **di enumerazione** descritti in [s](../../mfc/reference/cfile-class.md#getstatus)o qualsiasi combinazione dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|0x0000|Il file può essere letto o scritto.|
|0x0001|Il file può essere letto ma non scritto.|
|0x0002|Il file è nascosto e non viene visualizzato in un elenco di directory.|
|0x0004|File è un file di sistema.|
|0x0010|Il nome specificato da *lpszWildCard* specifica una directory.|
|0x0020|Il file è stato archiviato.|
|0x4000|Includere tutte le unità che corrispondono al nome specificato da *lpszWildCard*.|
|0x8000|Bandiera esclusiva. Se è impostato il flag esclusivo, vengono elencati solo i file del tipo specificato. In caso contrario, i file del tipo specificato vengono elencati in aggiunta ai file "normali".|

*lpszWildCard*<br/>
Punta a una stringa di specifica del file. La stringa può contenere caratteri jolly\*(ad esempio, . ).

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'ultimo nome file aggiunto all'elenco. Il valore restituito viene LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare le nuove stringhe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#8](../../mfc/codesnippet/cpp/clistbox-class_8.cpp)]

## <a name="clistboxdrawitem"></a><a name="drawitem"></a>CListBox::DrawItem

Chiamato dal framework quando viene modificato un aspetto visivo di una casella di riepilogo disegnata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore long a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

I `itemAction` `itemState` membri e `DRAWITEMSTRUCT` della struttura definiscono l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione `CListBox` membro per implementare il disegno per un oggetto di disegno del proprietario. L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro termini.

Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una `DRAWITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#9](../../mfc/codesnippet/cpp/clistbox-class_9.cpp)]

## <a name="clistboxfindstring"></a><a name="findstring"></a>CListBox::FindString

Trova la prima stringa in una casella di riepilogo che contiene il prefisso specificato senza modificare la selezione della casella di riepilogo.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszItem) const;
```

### <a name="parameters"></a>Parametri

*nInizioDopo*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se *nStartAfter* è -1, la ricerca viene eseguita dall'intera casella di riepilogo dall'inizio.

*lpszItem (elemento di gruppo)*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da cercare. La ricerca è indipendente da maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento corrispondente oppure LB_ERR se la ricerca non è riuscita.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione membro [SelectString](#selectstring) per trovare e selezionare una stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#10](../../mfc/codesnippet/cpp/clistbox-class_10.cpp)]

## <a name="clistboxfindstringexact"></a><a name="findstringexact"></a>CListBox::FindStringExact

Trova la prima stringa della casella di riepilogo che corrisponde alla stringa specificata in *lpszFind*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### <a name="parameters"></a>Parametri

*nIndexInizio*<br/>
Specifica l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nIndexStart*. Se *nIndexStart* è -1, la ricerca viene eseguita dall'intera casella di riepilogo dall'inizio.

*lpszTrova*<br/>
Punta alla stringa con terminazione null da cercare. Questa stringa può contenere un nome file completo, inclusa l'estensione. La ricerca non fa distinzione tra maiuscole e minuscole, pertanto la stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento corrispondente o LB_ERR se la ricerca non è riuscita.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo è stata creata con uno `FindStringExact` stile di disegno del proprietario ma senza lo stile [LBS_HASSTRINGS,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) la funzione membro tenta di confrontare il valore doubleword con il valore di *lpszFind*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#11](../../mfc/codesnippet/cpp/clistbox-class_11.cpp)]

## <a name="clistboxgetanchorindex"></a><a name="getanchorindex"></a>CListBox::GetAnchorIndex

Recupera l'indice in base zero dell'elemento di ancoraggio corrente nella casella di riepilogo.

```
int GetAnchorIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice dell'elemento di ancoraggio corrente, se ha esito positivo; altrimenti LB_ERR.

### <a name="remarks"></a>Osservazioni

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o l'ultimo elemento di un blocco di elementi selezionati contigui.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::SetAnchorIndex](#setanchorindex).

## <a name="clistboxgetcaretindex"></a><a name="getcaretindex"></a>CListBox::GetCaretIndex

Determina l'indice dell'elemento con il rettangolo di attivazione in una casella di riepilogo a selezione multipla.

```
int GetCaretIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento con il rettangolo di attivazione in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è l'indice dell'elemento selezionato, se presente.

### <a name="remarks"></a>Osservazioni

L'articolo può essere selezionato o meno.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::SetCaretIndex](#setcaretindex).

## <a name="clistboxgetcount"></a><a name="getcount"></a>CListBox::GetCount

Recupera il numero di elementi in una casella di riepilogo.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella casella di riepilogo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il conteggio restituito è maggiore di uno rispetto al valore di indice dell'ultimo elemento (l'indice è in base zero).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#12](../../mfc/codesnippet/cpp/clistbox-class_12.cpp)]

## <a name="clistboxgetcursel"></a><a name="getcursel"></a>CListBox::GetCurSel

Recupera l'indice in base zero dell'elemento attualmente selezionato, se presente, in una casella di riepilogo a selezione singola.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento attualmente selezionato se si tratta di una casella di riepilogo a selezione singola. È LB_ERR se non è attualmente selezionato alcun elemento.

In una casella di riepilogo a selezione multipla, indice dell'elemento con lo stato attivo.

### <a name="remarks"></a>Osservazioni

Non chiamare `GetCurSel` una casella di riepilogo a selezione multipla. Utilizzare [invece CListBox::GetSelItems.](#getselitems)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#13](../../mfc/codesnippet/cpp/clistbox-class_13.cpp)]

## <a name="clistboxgethorizontalextent"></a><a name="gethorizontalextent"></a>CListBox::GetHorizontalExtent

Recupera dalla casella di riepilogo la larghezza in pixel in base alla quale è possibile scorrere orizzontalmente.

```
int GetHorizontalExtent() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza scorrevole della casella di riepilogo, in pixel.

### <a name="remarks"></a>Osservazioni

Ciò è applicabile solo se la casella di riepilogo ha una barra di scorrimento orizzontale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#14](../../mfc/codesnippet/cpp/clistbox-class_14.cpp)]

## <a name="clistboxgetitemdata"></a><a name="getitemdata"></a>CListBox::GetItemData

Recupera il valore doubleword fornito dall'applicazione associato all'elemento della casella di riepilogo specificato.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Valore associato all'elemento o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il valore doubleword è il parametro *dwItemData* di una chiamata [SetItemData.](#setitemdata)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#15](../../mfc/codesnippet/cpp/clistbox-class_15.cpp)]

## <a name="clistboxgetitemdataptr"></a><a name="getitemdataptr"></a>CListBox::GetItemDataPtrCListBox::GetItemDataPtr

Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento della casella di riepilogo specificato come puntatore (**void** <strong>\*</strong>).

```cpp
void* GetItemDataPtr(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Recupera un puntatore o -1 se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#16](../../mfc/codesnippet/cpp/clistbox-class_16.cpp)]

## <a name="clistboxgetitemheight"></a><a name="getitemheight"></a>CListBox::GetItemHeight

Determina l'altezza degli elementi in una casella di riepilogo.

```
int GetItemHeight(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, degli elementi nella casella di riepilogo. Se la casella di riepilogo ha lo stile [LBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) il valore restituito è l'altezza dell'elemento specificato da *nIndex*. Se si verifica un errore, il valore restituito viene LB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#17](../../mfc/codesnippet/cpp/clistbox-class_17.cpp)]

## <a name="clistboxgetitemrect"></a><a name="getitemrect"></a>CListBox::GetItemRect

Recupera le dimensioni del rettangolo che delimita un elemento della casella di riepilogo così come viene attualmente visualizzato nella finestra della casella di riepilogo.

```
int GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*Lprect*<br/>
Specifica un puntatore lungo a una [struttura RECT](/windows/win32/api/windef/ns-windef-rect) che riceve le coordinate client della casella di riepilogo dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#18](../../mfc/codesnippet/cpp/clistbox-class_18.cpp)]

## <a name="clistboxgetlistboxinfo"></a><a name="getlistboxinfo"></a>CListBox::GetListBoxInfo

Recupera il numero di elementi per colonna.

```
DWORD GetListBoxInfo() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi per `CListBox` colonna dell'oggetto.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [LB_GETLISTBOXINFO,](/windows/win32/Controls/lb-getlistboxinfo) come descritto in Windows SDK.

## <a name="clistboxgetlocale"></a><a name="getlocale"></a>CListBox::GetLocale

Recupera le impostazioni locali utilizzate dalla casella di riepilogo.

```
LCID GetLocale() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) per le stringhe nella casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Le impostazioni locali vengono utilizzate, ad esempio, per determinare l'ordinamento delle stringhe in una casella di riepilogo ordinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::SetLocale](#setlocale).

## <a name="clistboxgetsel"></a><a name="getsel"></a>CListBox::GetSel

Recupera lo stato di selezione di un elemento.

```
int GetSel(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

### <a name="return-value"></a>Valore restituito

Un numero positivo se l'elemento specificato è selezionato; in caso contrario, è 0. Il valore restituito è LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro funziona sia con caselle di riepilogo a selezione singola che con selezioni multiple.

Per recuperare l'indice dell'elemento della casella di riepilogo attualmente selezionato, utilizzare [CListBox::GetCurSel](#getcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#19](../../mfc/codesnippet/cpp/clistbox-class_19.cpp)]

## <a name="clistboxgetselcount"></a><a name="getselcount"></a>CListBox::GetSelCount

Recupera il numero totale di elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi selezionati in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito viene LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::GetSelItems](#getselitems).

## <a name="clistboxgetselitems"></a><a name="getselitems"></a>CListBox::GetSelItems

Riempie un buffer con una matrice di numeri interi che specifica il numero di elementi degli elementi selezionati in una casella di riepilogo a selezione multipla.

```
int GetSelItems(
    int nMaxItems,
    LPINT rgIndex) const;
```

### <a name="parameters"></a>Parametri

*nMaxElementi*<br/>
Specifica il numero massimo di elementi selezionati i cui numeri di articolo devono essere inseriti nel buffer.

*RgIndice*<br/>
Specifica un puntatore a un buffer sufficientemente grande per il numero di numeri interi specificato da *nMaxItems*.

### <a name="return-value"></a>Valore restituito

Numero effettivo di elementi inseriti nel buffer. Se la casella di riepilogo è una casella `LB_ERR`di riepilogo a selezione singola, il valore restituito è .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#20](../../mfc/codesnippet/cpp/clistbox-class_20.cpp)]

## <a name="clistboxgettext"></a><a name="gettext"></a>CListBox::GetText

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

*buffer lpsz*<br/>
Punta al buffer che riceve la stringa. Il buffer deve avere spazio sufficiente per la stringa e un carattere di terminazione null. La dimensione della stringa può essere determinata `GetTextLen` in anticipo chiamando la funzione membro.

*rStringa*<br/>
Riferimento a un oggetto `CString`.

### <a name="return-value"></a>Valore restituito

Lunghezza (in byte) della stringa, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito viene LB_ERR.

### <a name="remarks"></a>Osservazioni

Il secondo form di questa `CString` funzione membro riempie un oggetto con il testo della stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#21](../../mfc/codesnippet/cpp/clistbox-class_21.cpp)]

## <a name="clistboxgettextlen"></a><a name="gettextlen"></a>CListBox::GetTextLen

Ottiene la lunghezza di una stringa in un elemento della casella di riepilogo.

```
int GetTextLen(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della stringa.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa in caratteri, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito viene LB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::GetText](#gettext).

## <a name="clistboxgettopindex"></a><a name="gettopindex"></a>CListBox::GetTopIndex

Recupera l'indice in base zero del primo elemento visibile in una casella di riepilogo.

```
int GetTopIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo elemento visibile in una casella di riepilogo in caso di esito positivo, LB_ERR in caso contrario.

### <a name="remarks"></a>Osservazioni

Inizialmente, l'elemento 0 si trova nella parte superiore della casella di riepilogo, ma se la casella di riepilogo viene scoriata, un altro elemento potrebbe trovarsi nella parte superiore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#22](../../mfc/codesnippet/cpp/clistbox-class_22.cpp)]

## <a name="clistboxinitstorage"></a><a name="initstorage"></a>CListBox::InitStorage

Alloca memoria per l'archiviazione degli elementi della casella di riepilogo.

```
int InitStorage(
    int nItems,
    UINT nBytes);
```

### <a name="parameters"></a>Parametri

*nElementi*<br/>
Specifica il numero di elementi da aggiungere.

*nByte*<br/>
Specifica la quantità di memoria, in byte, da allocare per le stringhe dell'elemento.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, è necessario il numero massimo di elementi che la casella di riepilogo può archiviare prima che sia necessaria una riallocazione della memoria, altrimenti LB_ERRSPACE, ovvero memoria insufficiente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione prima di aggiungere `CListBox`un numero elevato di elementi a un oggetto .

Questa funzione consente di velocizzare l'inizializzazione delle caselle di riepilogo con un numero elevato di elementi (più di 100). Prealloca la quantità di memoria specificata in modo che le funzioni [AddString](#addstring), [InsertString](#insertstring)e [Dir](#dir) successive occupino il tempo più breve possibile. È possibile utilizzare le stime per i parametri. Se si sovrastima, viene allocata memoria aggiuntiva; se si sottovaluta, l'allocazione normale viene utilizzata per gli articoli che superano l'importo preallocato.

Solo Windows 95/98: il parametro *nItems* è limitato a valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere più di 32.767 elementi. Anche se il numero di elementi è limitato, la dimensione totale degli elementi in una casella di riepilogo è limitata solo dalla memoria disponibile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#23](../../mfc/codesnippet/cpp/clistbox-class_23.cpp)]

## <a name="clistboxinsertstring"></a><a name="insertstring"></a>CListBox::InsertString

Inserisce una stringa nella casella di riepilogo.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero della posizione in cui inserire la stringa. Se questo parametro è -1, la stringa viene aggiunta alla fine dell'elenco.

*lpszItem (elemento di gruppo)*<br/>
Punta a una stringa con terminazione null da inserire.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione in cui è stata inserita la stringa. Il valore restituito viene LB_ERR se si verifica un errore; il valore restituito è LB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

A differenza della funzione `InsertString` membro [AddString,](#addstring) non determina l'ordinamento di un elenco con lo stile [LBS_SORT.](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#24](../../mfc/codesnippet/cpp/clistbox-class_24.cpp)]

## <a name="clistboxitemfrompoint"></a><a name="itemfrompoint"></a>CListBox::ItemFromPoint

Determina l'elemento della casella di riepilogo più vicino al punto specificato in *pt*.

```
UINT ItemFromPoint(
    CPoint pt,
    BOOL& bOutside) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Punto per il quale trovare l'elemento più vicino, specificato rispetto all'angolo superiore sinistro dell'area client della casella di riepilogo.

*bAll'esterno*<br/>
Riferimento a una variabile BOOL che verrà impostata su TRUE se *pt* si trova all'esterno dell'area client della casella di riepilogo, FALSE se *pt* si trova all'interno dell'area client della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento più vicino al punto specificato in *pt*.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa funzione per determinare su quale elemento della casella di riepilogo si sposta il cursore del mouse.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CListBox::SetAnchorIndex](#setanchorindex).

## <a name="clistboxmeasureitem"></a><a name="measureitem"></a>CListBox::MeasureItem

Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct (oggetto LpMeasureItemStruct)*<br/>
Puntatore lungo a una struttura [MEASUREITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-measureitemstruct)

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di `MEASUREITEMSTRUCT` questa funzione membro e compilare la struttura per informare Windows delle dimensioni della casella di riepilogo. Se la casella di riepilogo viene creata con lo stile [LBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

Per ulteriori informazioni sull'utilizzo dello stile [LBS_OWNERDRAWFIXED](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) in `SubclassDlgItem` una casella `CWnd`di riepilogo disegnata dal proprietario creata con la funzione membro di , vedere la discussione nella [nota tecnica 14](../../mfc/tn014-custom-controls.md).

Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una `MEASUREITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#25](../../mfc/codesnippet/cpp/clistbox-class_25.cpp)]

## <a name="clistboxresetcontent"></a><a name="resetcontent"></a>CListBox::ResetContent

Rimuove tutti gli elementi da una casella di riepilogo.

```cpp
void ResetContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#26](../../mfc/codesnippet/cpp/clistbox-class_26.cpp)]

## <a name="clistboxselectstring"></a><a name="selectstring"></a>CListBox::SelectString

Cerca un elemento della casella di riepilogo che corrisponde alla stringa specificata e, se viene trovato un elemento corrispondente, seleziona l'elemento.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszItem);
```

### <a name="parameters"></a>Parametri

*nInizioDopo*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se *nStartAfter* è -1, la ricerca viene eseguita dall'intera casella di riepilogo dall'inizio.

*lpszItem (elemento di gruppo)*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da cercare. La ricerca è indipendente da maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento selezionato se la ricerca ha avuto esito positivo. Se la ricerca non è riuscita, il valore restituito viene LB_ERR e la selezione corrente non viene modificata.

### <a name="remarks"></a>Osservazioni

La casella di riepilogo viene scorrota, se necessario, per visualizzare l'elemento selezionato.

Questa funzione membro non può essere utilizzata con una casella di riepilogo con lo stile [LBS_MULTIPLESEL.](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

Un elemento viene selezionato solo se i caratteri iniziali (dal punto iniziale) corrispondono ai caratteri della stringa specificata da *lpszItem*.

Utilizzare `FindString` la funzione membro per trovare una stringa senza selezionare l'elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#27](../../mfc/codesnippet/cpp/clistbox-class_27.cpp)]

## <a name="clistboxselitemrange"></a><a name="selitemrange"></a>CListBox::SelItemRange

Seleziona più elementi consecutivi in una casella di riepilogo a selezione multipla.

```
int SelItemRange(
    BOOL bSelect,
    int nFirstItem,
    int nLastItem);
```

### <a name="parameters"></a>Parametri

*bSelezionare*<br/>
Specifica come impostare la selezione. Se *bSelect* è TRUE, la stringa viene selezionata ed evidenziata; se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata.

*nFirstItem (elemento)*<br/>
Specifica l'indice in base zero del primo elemento da impostare.

*nLastItem (in cui è stato necessario un elemento*<br/>
Specifica l'indice in base zero dell'ultimo elemento da impostare.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo con caselle di riepilogo a selezione multipla. Se è necessario selezionare un solo elemento in una casella di riepilogo a selezione multipla, ovvero se *nFirstItem* è uguale a *nLastItem,* chiamare invece la funzione membro [SetSel.](#setsel)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#28](../../mfc/codesnippet/cpp/clistbox-class_28.cpp)]

## <a name="clistboxsetanchorindex"></a><a name="setanchorindex"></a>CListBox::SetAnchorIndex

Imposta l'ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.

```cpp
void SetAnchorIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento casella di riepilogo che sarà l'ancoraggio.

### <a name="remarks"></a>Osservazioni

In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o l'ultimo elemento di un blocco di elementi selezionati contigui.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#29](../../mfc/codesnippet/cpp/clistbox-class_29.cpp)]

## <a name="clistboxsetcaretindex"></a><a name="setcaretindex"></a>CListBox::SetCaretIndex

Imposta il rettangolo di attivazione sull'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.

```
int SetCaretIndex(
    int nIndex,
    BOOL bScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento per ricevere il rettangolo di attivazione nella casella di riepilogo.

*bScorrimento*<br/>
Se questo valore è 0, l'elemento viene fatto scorrere fino a quando non è completamente visibile. Se questo valore è diverso da 0, l'elemento viene fatto scorrere fino a quando non è almeno parzialmente visibile.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Se l'elemento non è visibile, viene fatto scorrere nella visualizzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#30](../../mfc/codesnippet/cpp/clistbox-class_30.cpp)]

## <a name="clistboxsetcolumnwidth"></a><a name="setcolumnwidth"></a>CListBox::SetColumnWidth

Imposta la larghezza in pixel di tutte le colonne in una casella di riepilogo a più colonne (creata con lo stile [LBS_MULTICOLUMN).](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

```cpp
void SetColumnWidth(int cxWidth);
```

### <a name="parameters"></a>Parametri

*CxWidth (larghezza incx)*<br/>
Specifica la larghezza in pixel di tutte le colonne.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#31](../../mfc/codesnippet/cpp/clistbox-class_31.cpp)]

## <a name="clistboxsetcursel"></a><a name="setcursel"></a>CListBox::SetCurSel

Seleziona una stringa e la scorre nella visualizzazione, se necessario.

```
int SetCurSel(int nSelect);
```

### <a name="parameters"></a>Parametri

*nSelezionare*<br/>
Specifica l'indice in base zero della stringa da selezionare. Se *nSelect* è -1, la casella di riepilogo è impostata per non avere alcuna selezione.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Quando viene selezionata la nuova stringa, la casella di riepilogo rimuove l'evidenziazione dalla stringa selezionata in precedenza.

Utilizzare questa funzione membro solo con caselle di riepilogo a selezione singola.

Per impostare o rimuovere una selezione in una casella di riepilogo a selezione multipla, utilizzare [CListBox::SetSel](#setsel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#32](../../mfc/codesnippet/cpp/clistbox-class_32.cpp)]

## <a name="clistboxsethorizontalextent"></a><a name="sethorizontalextent"></a>CListBox::SetHorizontalExtent

Imposta la larghezza, in pixel, in base alla quale è possibile scorrere orizzontalmente una casella di riepilogo.

```cpp
void SetHorizontalExtent(int cxExtent);
```

### <a name="parameters"></a>Parametri

*CxExtent (informazioni in base alla semein*<br/>
Specifica il numero di pixel in base al quale è possibile scorrere orizzontalmente la casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Se le dimensioni della casella di riepilogo sono inferiori a questo valore, la barra di scorrimento orizzontale scorrerà orizzontalmente gli elementi nella casella di riepilogo. Se la casella di riepilogo è grande o maggiore di questo valore, la barra di scorrimento orizzontale è nascosta.

Per rispondere a `SetHorizontalExtent`una chiamata a , è necessario che la casella di riepilogo sia stata definita con lo stile [WS_HSCROLL.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

Questa funzione membro non è utile per le caselle di riepilogo a più colonne. Per le caselle di `SetColumnWidth` riepilogo a più colonne, chiamare la funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#33](../../mfc/codesnippet/cpp/clistbox-class_33.cpp)]

## <a name="clistboxsetitemdata"></a><a name="setitemdata"></a>CListBox::SetItemData

Imposta un valore associato all'elemento specificato in una casella di riepilogo.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*dwItemData (dati dwItemData)*<br/>
Specifica il valore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#34](../../mfc/codesnippet/cpp/clistbox-class_34.cpp)]

## <a name="clistboxsetitemdataptr"></a><a name="setitemdataptr"></a>CListBox::SetItemDataPtrCListBox::SetItemDataPtr

Imposta il valore a 32 bit associato all'elemento specificato in una casella di riepilogo in modo che sia il puntatore specificato ( **void** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento.

*pDati*<br/>
Specifica il puntatore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo puntatore rimane valido per la durata della casella di riepilogo, anche se la posizione relativa dell'elemento all'interno della casella di riepilogo potrebbe cambiare man mano che vengono aggiunti o rimossi elementi. Di conseguenza, l'indice dell'elemento all'interno della casella può cambiare, ma il puntatore rimane affidabile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#35](../../mfc/codesnippet/cpp/clistbox-class_35.cpp)]

## <a name="clistboxsetitemheight"></a><a name="setitemheight"></a>CListBox::SetItemAltezz

Imposta l'altezza degli elementi in una casella di riepilogo.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha lo stile LBS_OWNERDRAWVARIABLE; in caso contrario, deve essere impostato su 0.

*cyItemHeight (altezza)*<br/>
Specifica l'altezza, in pixel, dell'elemento.

### <a name="return-value"></a>Valore restituito

LB_ERR se l'indice o l'altezza non è valida.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo ha lo stile [LBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) questa funzione imposta l'altezza dell'elemento specificato da *nIndex*. In caso contrario, questa funzione imposta l'altezza di tutti gli elementi nella casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#36](../../mfc/codesnippet/cpp/clistbox-class_36.cpp)]

## <a name="clistboxsetlocale"></a><a name="setlocale"></a>CListBox::SetLocale

Imposta l'identificatore delle impostazioni locali per questa casella di riepilogo.

```
LCID SetLocale(LCID nNewLocale);
```

### <a name="parameters"></a>Parametri

*nNewLocale (in inglese)*<br/>
Valore del nuovo identificatore delle impostazioni locali (LCID) da impostare per la casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) precedente per questa casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Se `SetLocale` non viene chiamato, le impostazioni locali predefinite vengono ottenute dal sistema. Le impostazioni locali predefinite del sistema possono essere modificate utilizzando l'applicazione Regionale (o Internazionale) del Pannello di controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#37](../../mfc/codesnippet/cpp/clistbox-class_37.cpp)]

## <a name="clistboxsetsel"></a><a name="setsel"></a>CListBox::SetSel

Seleziona una stringa in una casella di riepilogo a selezione multipla.

```
int SetSel(
    int nIndex,
    BOOL bSelect = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa da impostare. Se -1, la selezione viene aggiunta o rimossa da tutte le stringhe, a seconda del valore di *bSelect*.

*bSelezionare*<br/>
Specifica come impostare la selezione. Se *bSelect* è TRUE, la stringa viene selezionata ed evidenziata; se FALSE, l'evidenziazione viene rimossa e la stringa non è più selezionata. La stringa specificata è selezionata ed evidenziata per impostazione predefinita.

### <a name="return-value"></a>Valore restituito

LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro solo con caselle di riepilogo a selezione multipla.

Per selezionare un elemento da una casella di riepilogo a selezione singola, utilizzare [CListBox::SetCurSel](#setcursel).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#38](../../mfc/codesnippet/cpp/clistbox-class_38.cpp)]

## <a name="clistboxsettabstops"></a><a name="settabstops"></a>CListBox::SetTabStops

Imposta le posizioni delle tabulazioni in una casella di riepilogo.

```cpp
void SetTabStops();
BOOL SetTabStops(const int& cxEachStop);

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops);
```

### <a name="parameters"></a>Parametri

*cxEachStop*<br/>
Le tabulazioni vengono impostate a tutte le unità della finestra di dialogo *cxEachStop.* Vedere *rgTabStops* per una descrizione di un'unità di dialogo.

*nTabStop*<br/>
Specifica il numero di tabulazioni da avere nella casella di riepilogo.

*rgTabStop*<br/>
Punta al primo membro di una matrice di numeri interi contenente le posizioni delle tabulazioni in unità di dialogo. Un'unità di dialogo è una distanza orizzontale o verticale. Un'unità di finestra di dialogo orizzontale è uguale a un quarto dell'unità di larghezza di base della finestra di dialogo corrente e un'unità verticale della finestra di dialogo è uguale a un ottavo dell'unità di altezza di base della finestra di dialogo corrente. Le unità di base della finestra di dialogo vengono calcolate in base all'altezza e alla larghezza del tipo di carattere di sistema corrente. La `GetDialogBaseUnits` funzione Windows restituisce le unità di base della finestra di dialogo corrente in pixel. Le tabulazioni devono essere ordinate in ordine crescente; le schede posteriori non sono consentite.

### <a name="return-value"></a>Valore restituito

Diverso da zero se tutte le schede sono state impostate; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per impostare le tabulazioni alla dimensione predefinita di 2 unità della finestra di dialogo, chiamare la versione senza parametri di questa funzione membro. Per impostare le tabulazioni su una dimensione diversa da 2, chiamare la versione con l'argomento *cxEachStop.*

Per impostare le tabulazioni su una matrice di dimensioni, utilizzare la versione con gli argomenti *rgTabStops* e *nTabStops.* Verrà impostata una tabulazione per ogni valore in *rgTabStops*, fino al numero specificato da *nTabStops*.

Per rispondere a una `SetTabStops` chiamata alla funzione membro, la casella di riepilogo deve essere stata creata con lo stile [LBS_USETABSTOPS.](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#39](../../mfc/codesnippet/cpp/clistbox-class_39.cpp)]

## <a name="clistboxsettopindex"></a><a name="settopindex"></a>CListBox::SetTopIndex

Assicura che un particolare elemento della casella di riepilogo sia visibile.

```
int SetTopIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

zero se ha esito positivo o LB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il sistema scorre la casella di riepilogo finché non viene visualizzato l'elemento specificato da *nIndex* nella parte superiore della casella di riepilogo o non viene raggiunto l'intervallo di scorrimento massimo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#40](../../mfc/codesnippet/cpp/clistbox-class_40.cpp)]

## <a name="clistboxvkeytoitem"></a><a name="vkeytoitem"></a>CListBox::VKeyToItem

Chiamato dal framework quando la finestra padre della casella di riepilogo riceve un messaggio di WM_VKEYTOITEM dalla casella di riepilogo.

```
virtual int VKeyToItem(
    UINT nKey,
    UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nChiave*<br/>
Codice tasto virtuale del tasto premuto dall'utente. Per un elenco dei codici tasto virtuali standard, vedere Winuser.h

*nIndex*<br/>
Posizione corrente del livello di inserimento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Restituisce 2 per nessuna ulteriore azione, - 1 per l'azione predefinita o un numero non negativo per specificare un indice di un elemento della casella di riepilogo su cui eseguire l'azione predefinita per la sequenza di tasti.

### <a name="remarks"></a>Osservazioni

Il messaggio WM_VKEYTOITEM viene inviato dalla casella di riepilogo quando riceve un messaggio WM_KEYDOWN, ma solo se la casella di riepilogo soddisfa entrambi gli elementi seguenti:

- Ha il set di stili [LBS_WANTKEYBOARDINPUT.](../../mfc/reference/styles-used-by-mfc.md#list-box-styles)

- Contiene almeno un elemento.

Non chiamare mai questa funzione manualmente. Eseguire l'override di questa funzione per fornire la gestione personalizzata dei messaggi della tastiera.

È necessario restituire un valore per indicare al framework l'azione eseguita dall'override. Un valore restituito pari a - 2 indica che l'applicazione ha gestito tutti gli aspetti della selezione dell'elemento e non richiede ulteriori azioni da parte della casella di riepilogo. Prima di tornare - 2, è possibile impostare la selezione o spostare il punto di inserimento o entrambi. Per impostare la selezione, utilizzare [SetCurSel](#setcursel) o [SetSel](#setsel). Per spostare il postazione di inserimento, utilizzare [SetCaretIndex](#setcaretindex).

Un valore restituito di - 1 indica che la casella di riepilogo deve eseguire l'azione predefinita in risposta alla sequenza di tasti. L'implementazione predefinita restituisce - 1.The default implementation returns - 1.

Un valore restituito pari a 0 o superiore specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti sull'elemento specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CListBox#41](../../mfc/codesnippet/cpp/clistbox-class_41.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CComboBox](../../mfc/reference/ccombobox-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)
