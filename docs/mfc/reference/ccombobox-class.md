---
title: Classe CComboBox
ms.date: 11/04/2016
f1_keywords:
- CComboBox
- AFXWIN/CComboBox
- AFXWIN/CComboBox::CComboBox
- AFXWIN/CComboBox::AddString
- AFXWIN/CComboBox::Clear
- AFXWIN/CComboBox::CompareItem
- AFXWIN/CComboBox::Copy
- AFXWIN/CComboBox::Create
- AFXWIN/CComboBox::Cut
- AFXWIN/CComboBox::DeleteItem
- AFXWIN/CComboBox::DeleteString
- AFXWIN/CComboBox::Dir
- AFXWIN/CComboBox::DrawItem
- AFXWIN/CComboBox::FindString
- AFXWIN/CComboBox::FindStringExact
- AFXWIN/CComboBox::GetComboBoxInfo
- AFXWIN/CComboBox::GetCount
- AFXWIN/CComboBox::GetCueBanner
- AFXWIN/CComboBox::GetCurSel
- AFXWIN/CComboBox::GetDroppedControlRect
- AFXWIN/CComboBox::GetDroppedState
- AFXWIN/CComboBox::GetDroppedWidth
- AFXWIN/CComboBox::GetEditSel
- AFXWIN/CComboBox::GetExtendedUI
- AFXWIN/CComboBox::GetHorizontalExtent
- AFXWIN/CComboBox::GetItemData
- AFXWIN/CComboBox::GetItemDataPtr
- AFXWIN/CComboBox::GetItemHeight
- AFXWIN/CComboBox::GetLBText
- AFXWIN/CComboBox::GetLBTextLen
- AFXWIN/CComboBox::GetLocale
- AFXWIN/CComboBox::GetMinVisible
- AFXWIN/CComboBox::GetTopIndex
- AFXWIN/CComboBox::InitStorage
- AFXWIN/CComboBox::InsertString
- AFXWIN/CComboBox::LimitText
- AFXWIN/CComboBox::MeasureItem
- AFXWIN/CComboBox::Paste
- AFXWIN/CComboBox::ResetContent
- AFXWIN/CComboBox::SelectString
- AFXWIN/CComboBox::SetCueBanner
- AFXWIN/CComboBox::SetCurSel
- AFXWIN/CComboBox::SetDroppedWidth
- AFXWIN/CComboBox::SetEditSel
- AFXWIN/CComboBox::SetExtendedUI
- AFXWIN/CComboBox::SetHorizontalExtent
- AFXWIN/CComboBox::SetItemData
- AFXWIN/CComboBox::SetItemDataPtr
- AFXWIN/CComboBox::SetItemHeight
- AFXWIN/CComboBox::SetLocale
- AFXWIN/CComboBox::SetMinVisibleItems
- AFXWIN/CComboBox::SetTopIndex
- AFXWIN/CComboBox::ShowDropDown
helpviewer_keywords:
- CComboBox [MFC], CComboBox
- CComboBox [MFC], AddString
- CComboBox [MFC], Clear
- CComboBox [MFC], CompareItem
- CComboBox [MFC], Copy
- CComboBox [MFC], Create
- CComboBox [MFC], Cut
- CComboBox [MFC], DeleteItem
- CComboBox [MFC], DeleteString
- CComboBox [MFC], Dir
- CComboBox [MFC], DrawItem
- CComboBox [MFC], FindString
- CComboBox [MFC], FindStringExact
- CComboBox [MFC], GetComboBoxInfo
- CComboBox [MFC], GetCount
- CComboBox [MFC], GetCueBanner
- CComboBox [MFC], GetCurSel
- CComboBox [MFC], GetDroppedControlRect
- CComboBox [MFC], GetDroppedState
- CComboBox [MFC], GetDroppedWidth
- CComboBox [MFC], GetEditSel
- CComboBox [MFC], GetExtendedUI
- CComboBox [MFC], GetHorizontalExtent
- CComboBox [MFC], GetItemData
- CComboBox [MFC], GetItemDataPtr
- CComboBox [MFC], GetItemHeight
- CComboBox [MFC], GetLBText
- CComboBox [MFC], GetLBTextLen
- CComboBox [MFC], GetLocale
- CComboBox [MFC], GetMinVisible
- CComboBox [MFC], GetTopIndex
- CComboBox [MFC], InitStorage
- CComboBox [MFC], InsertString
- CComboBox [MFC], LimitText
- CComboBox [MFC], MeasureItem
- CComboBox [MFC], Paste
- CComboBox [MFC], ResetContent
- CComboBox [MFC], SelectString
- CComboBox [MFC], SetCueBanner
- CComboBox [MFC], SetCurSel
- CComboBox [MFC], SetDroppedWidth
- CComboBox [MFC], SetEditSel
- CComboBox [MFC], SetExtendedUI
- CComboBox [MFC], SetHorizontalExtent
- CComboBox [MFC], SetItemData
- CComboBox [MFC], SetItemDataPtr
- CComboBox [MFC], SetItemHeight
- CComboBox [MFC], SetLocale
- CComboBox [MFC], SetMinVisibleItems
- CComboBox [MFC], SetTopIndex
- CComboBox [MFC], ShowDropDown
ms.assetid: 4e73b5df-0d2e-4658-9706-38133fb10513
ms.openlocfilehash: df935bb924c7d8908b1166852dc553a73fc71ff3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369516"
---
# <a name="ccombobox-class"></a>Classe CComboBox

Fornisce la funzionalità di una casella combinata di Windows.

## <a name="syntax"></a>Sintassi

```
class CComboBox : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBox::CComboBox](#ccombobox)|Costruisce un oggetto `CComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBox::AddString](#addstring)|Aggiunge una stringa alla fine dell'elenco nella casella di riepilogo di una casella combinata o nella posizione ordinata per le caselle di riepilogo con lo stile CBS_SORT.|
|[CComboBox::Cancella](#clear)|Elimina (cancella) la selezione corrente, se presente, nel controllo di modifica.|
|[CComboBox::CompareItem](#compareitem)|Chiamato dal framework per determinare la posizione relativa di una nuova voce di elenco in una casella combinata ordinata disegnata dal proprietario.|
|[CComboBox::Copia](#copy)|Copia la selezione corrente, se presente, negli Appunti in formato CF_TEXT.|
|[CComboBox::Creare](#create)|Crea la casella combinata e la `CComboBox` associa all'oggetto.|
|[CComboBox::Tagliare](#cut)|Elimina (taglia) la selezione corrente, se presente, nel controllo di modifica e copia il testo eliminato negli Appunti in formato CF_TEXT.|
|[CComboBox::DeleteItem](#deleteitem)|Chiamato dal framework quando un elemento dell'elenco viene eliminato da una casella combinata disegnata dal proprietario.|
|[CComboBox::DeleteString](#deletestring)|Elimina una stringa dalla casella di riepilogo di una casella combinata.|
|[CComboBox::Dir](#dir)|Aggiunge un elenco di nomi di file alla casella di riepilogo di una casella combinata.|
|[CComboBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di una casella combinata disegnata dal proprietario viene modificato.|
|[CComboBox::FindString](#findstring)|Trova la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.|
|[CComboBox::FindStringExact](#findstringexact)|Trova la prima stringa della casella di riepilogo (in una casella combinata) che corrisponde alla stringa specificata.|
|[CComboBox::GetComboBoxInfo](#getcomboboxinfo)|Recupera informazioni sull'oggetto. `CComboBox`|
|[CComboBox::GetCount](#getcount)|Recupera il numero di elementi nella casella di riepilogo di una casella combinata.|
|[CComboBox::GetCueBanner](#getcuebanner)|Ottiene il testo del segnale visualizzato per un controllo casella combinata.|
|[CComboBox::GetCurSel](#getcursel)|Recupera l'indice dell'elemento attualmente selezionato, se presente, nella casella di riepilogo di una casella combinata.|
|[CComboBox::GetDroppedControlRect](#getdroppedcontrolrect)|Recupera le coordinate dello schermo della casella di riepilogo visibile (rilasciata verso il basso) di una casella combinata a discesa.|
|[CComboBox::GetDroppedState](#getdroppedstate)|Determina se la casella di riepilogo di una casella combinata a discesa è visibile (barrata).|
|[CComboBox::GetDroppedWidth](#getdroppedwidth)|Recupera la larghezza minima consentita per la parte casella di riepilogo a discesa di una casella combinata.|
|[CComboBox::GetEditSel](#geteditsel)|Ottiene le posizioni dei caratteri iniziale e finale della selezione corrente nel controllo di modifica di una casella combinata.|
|[CComboBox::GetExtendedUI](#getextendedui)|Determina se una casella combinata dispone dell'interfaccia utente predefinita o dell'interfaccia utente estesa.|
|[CComboBox::GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel che la parte casella di riepilogo della casella combinata può essere fatta scorrere orizzontalmente.|
|[CComboBox::GetItemData](#getitemdata)|Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.|
|[CComboBox::GetItemDataPtr](#getitemdataptr)|Recupera il puntatore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.|
|[CComboBox::GetItemHeight](#getitemheight)|Recupera l'altezza degli elementi di elenco in una casella combinata.|
|[CComboBox::GetLBText](#getlbtext)|Ottiene una stringa dalla casella di riepilogo di una casella combinata.|
|[CComboBox::GetLBTextLen](#getlbtextlen)|Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox::GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella combinata.|
|[CComboBox::GetMinVisibile](#getminvisible)|Ottiene il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|
|[CComboBox::GetTopIndex](#gettopindex)|Restituisce l'indice del primo elemento visibile nella parte casella di riepilogo della casella combinata.|
|[CComboBox::InitStorage](#initstorage)|Prealloca blocchi di memoria per elementi e stringhe nella parte casella di riepilogo della casella combinata.|
|[CComboBox::InsertString](#insertstring)|Inserisce una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox::LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere nel controllo di modifica di una casella combinata.|
|[CComboBox::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni della casella combinata quando viene creata una casella combinata disegnata dal proprietario.|
|[CComboBox::Paste](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione corrente del cursore. I dati vengono inseriti solo se gli Appunti contengono dati in formato CF_TEXT.|
|[CComboBox::ResetContent](#resetcontent)|Rimuove tutti gli elementi dalla casella di riepilogo e modifica il controllo di una casella combinata.|
|[CComboBox::SelectString](#selectstring)|Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e copia la stringa nel controllo di modifica.|
|[CComboBox::SetCueBanner](#setcuebanner)|Imposta il testo del segnale visualizzato per un controllo casella combinata.|
|[CComboBox::SetCurSel](#setcursel)|Seleziona una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox::SetDroppedWidth](#setdroppedwidth)|Imposta la larghezza minima consentita per la parte casella di riepilogo a discesa di una casella combinata.|
|[CComboBox::SetEditSel](#seteditsel)|Seleziona i caratteri nel controllo di modifica di una casella combinata.|
|[CComboBox::SetExtendedUI](#setextendedui)|Consente di selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.|
|[CComboBox::SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel di cui è possibile scorrere orizzontalmente la parte casella di riepilogo della casella combinata.|
|[CComboBox::SetItemData](#setitemdata)|Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.|
|[CComboBox::SetItemDataPtrCComboBox::SetItemDataPtr](#setitemdataptr)|Imposta il puntatore a 32 bit associato all'elemento specificato in una casella combinata.|
|[CComboBox::SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte di controllo di modifica (o testo statico) di una casella combinata.|
|[CComboBox::SetLocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella combinata.|
|[CComboBox::SetMinVisibleItems](#setminvisibleitems)|Imposta il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|
|[CComboBox::SetTopIndex](#settopindex)|Indica alla parte casella di riepilogo della casella combinata di visualizzare l'elemento con l'indice specificato nella parte superiore.|
|[CComboBox::ShowDropDown](#showdropdown)|Mostra o nasconde la casella di riepilogo di una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.|

## <a name="remarks"></a>Osservazioni

Una casella combinata è costituita da una casella di riepilogo combinata con un controllo statico o un controllo di modifica. La parte casella di riepilogo del controllo può essere visualizzata in qualsiasi momento o può essere visualizzata solo quando l'utente seleziona la freccia a discesa accanto al controllo.

L'elemento attualmente selezionato (se presente) nella casella di riepilogo viene visualizzato nel controllo statico o di modifica. Inoltre, se la casella combinata ha lo stile di elenco a discesa, l'utente può digitare il carattere iniziale di una delle voci nell'elenco e la casella di riepilogo, se visibile, evidenzierà l'elemento successivo con tale carattere iniziale.

Nella tabella seguente vengono confrontati i tre [stili](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)di casella combinata .

|Style|Quando è visibile la casella di riepilogoWhen is list box visible|Controllo statico o di modifica|
|-----------|-------------------------------|-----------------------------|
|Semplice|Sempre|Modifica|
|Drop-down|Quando è caduto giù|Modifica|
|Elenco a discesa|Quando è caduto giù|Statico|

È possibile `CComboBox` creare un oggetto da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, `CComboBox` chiamare `CComboBox` prima il costruttore per costruire l'oggetto; quindi chiamare il [Create](#create) funzione membro per creare `CComboBox` il controllo e associarlo all'oggetto.

Se si desidera gestire i messaggi di notifica di Windows inviati `CDialog`da una casella combinata al relativo elemento padre (in genere una classe derivata da ), aggiungere una voce della mappa messaggi e una funzione membro del gestore messaggi alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il seguente formato:

_Notifica_ **ON\_** **(** _id_, _memberFxn_ **)**

dove `id` specifica l'ID della finestra figlio del controllo `memberFxn` casella combinata che invia la notifica ed è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione dell'elemento padre è il seguente:

**afx_msg** `void` afx_msg `memberFxn` **( );**

L'ordine in cui verranno inviate determinate notifiche non può essere previsto. In particolare, una notifica CBN_SELCHANGE può verificarsi prima o dopo una notifica di CBN_CLOSEUP.

Le potenziali voci della mappa messaggi sono le seguenti:

- ON_CBN_CLOSEUP (Windows 3.1 e versioni successive). La casella di riepilogo di una casella combinata è stata chiusa. Questo messaggio di notifica non viene inviato per una casella combinata con lo stile [CBS_SIMPLE.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

- ON_CBN_DBLCLK L'utente fa doppio clic su una stringa nella casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato solo per una casella combinata con lo stile CBS_SIMPLE. Per una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) non è possibile eseguire un doppio clic perché un singolo clic nasconde la casella di riepilogo.

- ON_CBN_DROPDOWN La casella di riepilogo di una casella combinata sta per essere e-giù (essere reso visibile). Questo messaggio di notifica può essere visualizzato solo per una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.

- ON_CBN_EDITCHANGE L'utente ha eseguito un'azione che potrebbe aver modificato il testo nella parte di controllo di modifica di una casella combinata. A differenza del messaggio di CBN_EDITUPDATE, questo messaggio viene inviato dopo l'aggiornamento dello schermo da parte di Windows. Non viene inviato se la casella combinata ha lo stile CBS_DROPDOWNLIST.

- ON_CBN_EDITUPDATE La parte di controllo di modifica di una casella combinata sta per visualizzare il testo modificato. Questo messaggio di notifica viene inviato dopo che il controllo ha formattato il testo ma prima di visualizzare il testo. Non viene inviato se la casella combinata ha lo stile CBS_DROPDOWNLIST.

- ON_CBN_ERRSPACE La casella combinata non è in grado di allocare memoria sufficiente per soddisfare una richiesta specifica.

- ON_CBN_SELENDCANCEL (Windows 3.1 e versioni successive). Indica che la selezione dell'utente deve essere annullata. L'utente fa clic su un elemento e quindi fa clic su un'altra finestra o controllo per nascondere la casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato prima del CBN_CLOSEUP messaggio di notifica per indicare che la selezione dell'utente deve essere ignorata. Il messaggio di notifica CBN_SELENDCANCEL o CBN_SELENDOK viene inviato anche se il messaggio di notifica CBN_CLOSEUP non viene inviato (come nel caso di una casella combinata con lo stile CBS_SIMPLE).

- ON_CBN_SELENDOK L'utente seleziona un elemento e quindi preme il tasto INVIO o fare clic sul tasto freccia giù per nascondere la casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato prima del messaggio di CBN_CLOSEUP per indicare che la selezione dell'utente deve essere considerata valida. Il messaggio di notifica CBN_SELENDCANCEL o CBN_SELENDOK viene inviato anche se il messaggio di notifica CBN_CLOSEUP non viene inviato (come nel caso di una casella combinata con lo stile CBS_SIMPLE).

- ON_CBN_KILLFOCUS La casella combinata perde lo stato attivo per l'input.

- ON_CBN_SELCHANGE La selezione nella casella di riepilogo di una casella combinata sta per essere modificata in seguito all'utente facendo clic nella casella di riepilogo o modificando la selezione utilizzando i tasti di direzione. Durante l'elaborazione di questo messaggio, il testo nel `GetLBText` controllo di modifica della casella combinata può essere recuperato solo tramite o un'altra funzione simile. `GetWindowText`non può essere utilizzato.

- ON_CBN_SETFOCUS La casella combinata riceve lo stato attivo per l'input.

Se si `CComboBox` crea un oggetto all'interno di `CComboBox` una finestra di dialogo (tramite una risorsa finestra di dialogo), l'oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si `CComboBox` incorpora un oggetto all'interno di un altro oggetto finestra, non è necessario distruggerlo. Se si `CComboBox` crea l'oggetto nello stack, viene eliminato automaticamente. Se si `CComboBox` crea l'oggetto nell'heap utilizzando la **nuova** funzione, è necessario chiamare **delete** sull'oggetto per eliminarlo quando la casella combinata di Windows viene eliminata.

**Nota:** Se si desidera gestire WM_KEYDOWN e WM_CHAR messaggi, è necessario creare una sottoclasse dei `CEdit` `CListBox`controlli di modifica e casella di riepilogo della casella combinata, derivare le classi da e e aggiungere gestori per tali messaggi alle classi derivate. Per ulteriori informazioni, vedere [CWnd::SubclassWindow](../../mfc/reference/cwnd-class.md#subclasswindow).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CComboBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="ccomboboxaddstring"></a><a name="addstring"></a>CComboBox::AddString

Aggiunge una stringa alla casella di riepilogo di una casella combinata.

```
int AddString(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString (stringhe)*<br/>
Punta alla stringa con terminazione null da aggiungere.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero della stringa nella casella di riepilogo. Il valore restituito viene CB_ERR se si verifica un errore; il valore restituito è CB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo non è stata creata con lo stile [CBS_SORT,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco viene ordinato.

> [!NOTE]
> Questa funzione non è `ComboBoxEx` supportata dal controllo Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](/windows/win32/Controls/comboboxex-controls) in Windows SDK.

Per inserire una stringa in una posizione specifica all'interno dell'elenco, utilizzare il [InsertString](#insertstring) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#3](../../mfc/reference/codesnippet/cpp/ccombobox-class_1.cpp)]

## <a name="ccomboboxccombobox"></a><a name="ccombobox"></a>CComboBox::CComboBox

Costruisce un oggetto `CComboBox`.

```
CComboBox();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_2.cpp)]

## <a name="ccomboboxclear"></a><a name="clear"></a>CComboBox::Cancella

Elimina (cancella) la selezione corrente, se presente, nel controllo di modifica della casella combinata.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

Per eliminare la selezione corrente e inserire il contenuto eliminato negli Appunti, utilizzare la funzione membro [Taglia.](#cut)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#4](../../mfc/reference/codesnippet/cpp/ccombobox-class_3.cpp)]

## <a name="ccomboboxcompareitem"></a><a name="compareitem"></a>CComboBox::CompareItem

Chiamato dal framework per determinare la posizione relativa di un nuovo elemento nella parte casella di riepilogo di una casella combinata ordinata disegnata dal proprietario.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### <a name="parameters"></a>Parametri

*LpCompareItemStruct (struttura in cui è stato possibile utilizzare lpCompareItem*<br/>
Puntatore long a una struttura [COMPAREITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-compareitemstruct)

### <a name="return-value"></a>Valore restituito

Indica la posizione relativa dei due `COMPAREITEMSTRUCT` elementi descritti nella struttura. Può essere uno dei valori seguenti:

|Valore|Significato|
|-----------|-------------|
|- 1|L'articolo 1 viene ordinato prima dell'articolo 2.|
|0|L'elemento 1 e l'elemento 2 hanno lo stesso modo.|
|1|L'articolo 1 viene ordinato dopo l'articolo 2.|

Vedere [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) per `COMPAREITEMSTRUCT`una descrizione di .

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella combinata con disegno del proprietario con lo stile di LBS_SORT, è necessario eseguire l'override di questa funzione membro per facilitare il framework nell'ordinamento di nuovi elementi aggiunti alla casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#5](../../mfc/reference/codesnippet/cpp/ccombobox-class_4.cpp)]

## <a name="ccomboboxcopy"></a><a name="copy"></a>CComboBox::Copia

Copia la selezione corrente, se presente, nel controllo di modifica della casella combinata negli Appunti in formato CF_TEXT.

```
void Copy();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#6](../../mfc/reference/codesnippet/cpp/ccombobox-class_5.cpp)]

## <a name="ccomboboxcreate"></a><a name="create"></a>CComboBox::Creare

Crea la casella combinata e la `CComboBox` associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile della casella combinata. Applicare qualsiasi combinazione di [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) alla casella.

*Rect*<br/>
Punta alla posizione e alle dimensioni della casella combinata. Può essere una struttura `CRect` [RECT](/windows/win32/api/windef/ns-windef-rect) o un oggetto.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre della casella `CDialog`combinata (in genere un oggetto ). Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo della casella combinata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CComboBox` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CComboBox` la casella combinata di Windows e la associa all'oggetto.

Quando `Create` viene eseguito, Windows invia i messaggi [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) alla casella combinata.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), `CWnd` [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe base. Per estendere la gestione dei messaggi `CComboBox`predefinita, derivare una classe da , aggiungere una mappa messaggi alla nuova classe ed eseguire l'override delle funzioni membro del gestore messaggi precedenti. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare gli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo casella combinata. :

- WS_CHILD sempre

- WS_VISIBLE di solito

- WS_DISABLED Raramente

- WS_VSCROLL Per aggiungere lo scorrimento verticale per la casella di riepilogo nella casella combinata

- WS_HSCROLL Per aggiungere lo scorrimento orizzontale per la casella di riepilogo nella casella combinata

- WS_GROUP A raggruppare i controlli

- WS_TABSTOP Per includere la casella combinata nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_6.cpp)]

## <a name="ccomboboxcut"></a><a name="cut"></a>CComboBox::Tagliare

Elimina (taglia) la selezione corrente, se presente, nel controllo di modifica della casella combinata e copia il testo eliminato negli Appunti in formato CF_TEXT.

```
void Cut();
```

### <a name="remarks"></a>Osservazioni

Per eliminare la selezione corrente senza inserire il testo eliminato negli Appunti, chiamare il [Cancella](#clear) funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#7](../../mfc/reference/codesnippet/cpp/ccombobox-class_7.cpp)]

## <a name="ccomboboxdeleteitem"></a><a name="deleteitem"></a>CComboBox::DeleteItem

Chiamato dal framework quando l'utente elimina un `CComboBox` elemento da un oggetto di disegno del proprietario o elimina la casella combinata.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDeleteItemStruct (informazioni in due)*<br/>
Puntatore lungo a una struttura [DELETEITEMSTRUCT di](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) Windows che contiene informazioni sull'elemento eliminato. Vedere [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) per una descrizione di questa struttura.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ridisegnare la casella combinata in base alle esigenze.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#8](../../mfc/reference/codesnippet/cpp/ccombobox-class_8.cpp)]

## <a name="ccomboboxdeletestring"></a><a name="deletestring"></a>CComboBox::DeleteString

Elimina l'elemento nella posizione *nIndex* dalla casella combinata.

```
int DeleteString(UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice della stringa da eliminare.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è un conteggio delle stringhe rimanenti nell'elenco. Il valore restituito viene CB_ERR se *nIndex* specifica un indice maggiore del numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nIndex* ora si spostano verso il basso di una posizione. Ad esempio, se una casella combinata contiene due elementi, l'eliminazione del primo elemento farà sì che l'elemento rimanente sia ora nella prima posizione. *nIndice*0 per l'elemento in prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#9](../../mfc/reference/codesnippet/cpp/ccombobox-class_9.cpp)]

## <a name="ccomboboxdir"></a><a name="dir"></a>CComboBox::Dir

Aggiunge un elenco di nomi di file o unità alla casella di riepilogo di una casella combinata.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### <a name="parameters"></a>Parametri

*Attr*<br/>
Può essere qualsiasi combinazione dei valori **di enumerazione** descritti in [CFile::GetStatus](../../mfc/reference/cfile-class.md#getstatus) o qualsiasi combinazione dei valori seguenti:

- DDL_READWRITE File può essere letto o scritto.

- DDL_READONLY File può essere letto ma non scritto.

- DDL_HIDDEN il file è nascosto e non viene visualizzato in un elenco di directory.

- DDL_SYSTEM File è un file di sistema.

- DDL_DIRECTORY Il nome specificato da *lpszWildCard* specifica una directory.

- DDL_ARCHIVE file è stato archiviato.

- DDL_DRIVES Includere tutte le unità che corrispondono al nome specificato da *lpszWildCard*.

- DDL_EXCLUSIVE bandiera Esclusiva. Se è impostato il flag esclusivo, vengono elencati solo i file del tipo specificato. In caso contrario, i file del tipo specificato vengono elencati in aggiunta ai file "normali".

*lpszWildCard*<br/>
Punta a una stringa di specifica del file. La stringa può contenere caratteri jolly\*(ad esempio, . ).

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero dell'ultimo nome file aggiunto all'elenco. Il valore restituito viene CB_ERR se si verifica un errore; il valore restituito è CB_ERRSPACE se non è disponibile spazio sufficiente per archiviare le nuove stringhe.

### <a name="remarks"></a>Osservazioni

Questa funzione non è `ComboBoxEx` supportata dal controllo Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](/windows/win32/Controls/comboboxex-controls) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#10](../../mfc/reference/codesnippet/cpp/ccombobox-class_10.cpp)]

## <a name="ccomboboxdrawitem"></a><a name="drawitem"></a>CComboBox::DrawItem

Chiamato dal framework quando un aspetto visivo di una casella combinata disegnata dal proprietario viene modificato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire. Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione di questa struttura.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione `CComboBox` membro per implementare il disegno per un oggetto di disegno del proprietario. Prima che questa funzione membro termini, l'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#11](../../mfc/reference/codesnippet/cpp/ccombobox-class_11.cpp)]

## <a name="ccomboboxfindstring"></a><a name="findstring"></a>CComboBox::FindString

Trova, ma non seleziona, la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszString) const;
```

### <a name="parameters"></a>Parametri

*nInizioDopo*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se -1, la ricerca dell'intera casella di riepilogo viene eseguita dall'inizio.

*lpszString (stringhe)*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da cercare. La ricerca è indipendente da maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero dell'elemento corrispondente. Viene CB_ERR se la ricerca non è riuscita.

### <a name="remarks"></a>Osservazioni

Questa funzione non è `ComboBoxEx` supportata dal controllo Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](/windows/win32/Controls/comboboxex-controls) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#12](../../mfc/reference/codesnippet/cpp/ccombobox-class_12.cpp)]

## <a name="ccomboboxfindstringexact"></a><a name="findstringexact"></a>CComboBox::FindStringExact

Chiamare `FindStringExact` la funzione membro per trovare la prima stringa della casella di riepilogo (in una casella combinata) che corrisponde alla stringa specificata in *lpszFind*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### <a name="parameters"></a>Parametri

*nIndexInizio*<br/>
Specifica l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nIndexStart*. Se *nIndexStart* è -1, la ricerca viene eseguita dall'intera casella di riepilogo dall'inizio.

*lpszTrova*<br/>
Punta alla stringa con terminazione null da cercare. Questa stringa può contenere un nome file completo, inclusa l'estensione. La ricerca non fa distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento corrispondente oppure CB_ERR se la ricerca ha avuto esito negativo.

### <a name="remarks"></a>Osservazioni

Se la casella combinata è stata creata con uno `FindStringExact` stile di disegno del proprietario ma senza lo stile [CBS_HASSTRINGS,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) tenta di confrontare il valore doubleword con il valore di *lpszFind*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#13](../../mfc/reference/codesnippet/cpp/ccombobox-class_13.cpp)]

## <a name="ccomboboxgetcomboboxinfo"></a><a name="getcomboboxinfo"></a>CComboBox::GetComboBoxInfo

Recupera informazioni per `CComboBox` l'oggetto.

```
BOOL GetComboBoxInfo(PCOMBOBOXINFO pcbi) const;
```

### <a name="parameters"></a>Parametri

*pcbi*<br/>
Puntatore alla struttura [COMBOBOXINFO.](/windows/win32/api/winuser/ns-winuser-comboboxinfo)

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [di CB_GETCOMBOBOXINFO,](/windows/win32/Controls/cb-getcomboboxinfo) come descritto in Windows SDK.

## <a name="ccomboboxgetcount"></a><a name="getcount"></a>CComboBox::GetCount

Chiamare questa funzione membro per recuperare il numero di elementi nella parte casella di riepilogo di una casella combinata.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi. Il conteggio restituito è maggiore di uno rispetto al valore di indice dell'ultimo elemento (l'indice è in base zero). Viene CB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#14](../../mfc/reference/codesnippet/cpp/ccombobox-class_14.cpp)]

## <a name="ccomboboxgetcuebanner"></a><a name="getcuebanner"></a>CComboBox::GetCueBanner

Ottiene il testo del segnale visualizzato per un controllo casella combinata.

```
CString GetCueBanner() const;

BOOL GetCueBanner(
    LPTSTR lpszText,
    int cchText) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszText*|[fuori] Puntatore a un buffer che riceve il testo dell'intestazione cue.|
|*cchText*|[in] Dimensione del buffer a cui punta il parametro *lpszText.*|

### <a name="return-value"></a>Valore restituito

Nel primo overload, un [CString](../../atl-mfc-shared/using-cstring.md) oggetto che contiene il testo dell'intestazione cue se esiste; in caso `CString` contrario, un oggetto di lunghezza pari a zero.

-oppure-

Nel secondo overload, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il testo della pila è un messaggio visualizzato nell'area di input del controllo casella combinata. Il testo del segnale viene visualizzato fino a quando l'utente non fornisce l'input.

Questo metodo invia il [messaggio CB_GETCUEBANNER,](/windows/win32/Controls/cb-getcuebanner) descritto in Windows SDK.

## <a name="ccomboboxgetcursel"></a><a name="getcursel"></a>CComboBox::GetCurSel

Chiamare questa funzione membro per determinare quale elemento nella casella combinata è selezionato.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento attualmente selezionato nella casella di riepilogo di una casella combinata oppure CB_ERR se non è selezionato alcun elemento.

### <a name="remarks"></a>Osservazioni

`GetCurSel`restituisce un indice nell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#15](../../mfc/reference/codesnippet/cpp/ccombobox-class_15.cpp)]

## <a name="ccomboboxgetdroppedcontrolrect"></a><a name="getdroppedcontrolrect"></a>CComboBox::GetDroppedControlRect

Chiamare `GetDroppedControlRect` la funzione membro per recuperare le coordinate dello schermo della casella di riepilogo visibile (rilasciata) di una casella combinata a discesa.

```
void GetDroppedControlRect(LPRECT lprect) const;
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta alla [struttura RECT](/windows/win32/api/windef/ns-windef-rect) che deve ricevere le coordinate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#16](../../mfc/reference/codesnippet/cpp/ccombobox-class_16.cpp)]

## <a name="ccomboboxgetdroppedstate"></a><a name="getdroppedstate"></a>CComboBox::GetDroppedState

Chiamare `GetDroppedState` la funzione membro per determinare se la casella di riepilogo di una casella combinata a discesa è visibile (rilasciata).

```
BOOL GetDroppedState() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la casella di riepilogo è visibile; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#17](../../mfc/reference/codesnippet/cpp/ccombobox-class_17.cpp)]

## <a name="ccomboboxgetdroppedwidth"></a><a name="getdroppedwidth"></a>CComboBox::GetDroppedWidth

Chiamare questa funzione per recuperare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.

```
int GetDroppedWidth() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, la larghezza minima consentita, in pixel; in caso contrario, CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione si applica solo alle caselle combinate con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. La larghezza minima consentita può essere impostata chiamando [SetDroppedWidth](#setdroppedwidth). Quando viene visualizzata la parte casella di riepilogo della casella combinata, la larghezza è maggiore della larghezza minima consentita o la larghezza della casella combinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [SetDroppedWidth](#setdroppedwidth).

## <a name="ccomboboxgeteditsel"></a><a name="geteditsel"></a>CComboBox::GetEditSel

Ottiene le posizioni dei caratteri iniziale e finale della selezione corrente nel controllo di modifica di una casella combinata.

```
DWORD GetEditSel() const;
```

### <a name="return-value"></a>Valore restituito

Valore a 32 bit che contiene la posizione iniziale nella parola meno in ordine e la posizione del primo carattere non selezionato dopo la fine della selezione nella parola più in ordine elevato. Se questa funzione viene utilizzata in una casella combinata senza un controllo di modifica, viene restituito CB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#18](../../mfc/reference/codesnippet/cpp/ccombobox-class_18.cpp)]

## <a name="ccomboboxgetextendedui"></a><a name="getextendedui"></a>CComboBox::GetExtendedUI

Chiamare `GetExtendedUI` la funzione membro per determinare se una casella combinata dispone dell'interfaccia utente predefinita o dell'interfaccia utente estesa.

```
BOOL GetExtendedUI() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la casella combinata ha l'interfaccia utente estesa; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'interfaccia utente estesa può essere identificata nei seguenti modi:

- Facendo clic sul controllo statico viene visualizzata la casella di riepilogo solo per le caselle combinate con lo stile [CBS_DROPDOWNLIST.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

- Premendo il tasto freccia giù viene visualizzata la casella di riepilogo (F4 è disabilitato).

Lo scorrimento nel controllo statico è disabilitato quando l'elenco di elementi non è visibile (i tasti di direzione sono disabilitati).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#19](../../mfc/reference/codesnippet/cpp/ccombobox-class_19.cpp)]

## <a name="ccomboboxgethorizontalextent"></a><a name="gethorizontalextent"></a>CComboBox::GetHorizontalExtent

Recupera dalla casella combinata la larghezza in pixel in base alla quale è possibile scorrere orizzontalmente la parte casella di riepilogo della casella combinata.

```
UINT GetHorizontalExtent() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza scorrevole della parte casella di riepilogo della casella combinata, in pixel.

### <a name="remarks"></a>Osservazioni

Ciò è applicabile solo se la parte casella di riepilogo della casella combinata ha una barra di scorrimento orizzontale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#20](../../mfc/reference/codesnippet/cpp/ccombobox-class_20.cpp)]

## <a name="ccomboboxgetitemdata"></a><a name="getitemdata"></a>CComboBox::GetItemData

Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.

### <a name="return-value"></a>Valore restituito

Valore a 32 bit associato all'elemento o CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il valore a 32 bit può essere impostato con il parametro *dwItemData* di una chiamata di funzione membro [SetItemData.](#setitemdata) Utilizzare `GetItemDataPtr` la funzione membro se il valore a 32 bit da recuperare è un puntatore (**void** <strong>\*</strong>).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#21](../../mfc/reference/codesnippet/cpp/ccombobox-class_21.cpp)]

## <a name="ccomboboxgetitemdataptr"></a><a name="getitemdataptr"></a>CComboBox::GetItemDataPtr

Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato come puntatore (**void** <strong>\*</strong>).

```
void* GetItemDataPtr(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.

### <a name="return-value"></a>Valore restituito

Recupera un puntatore o -1 se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#22](../../mfc/reference/codesnippet/cpp/ccombobox-class_22.cpp)]

## <a name="ccomboboxgetitemheight"></a><a name="getitemheight"></a>CComboBox::GetItemHeight

Chiamare `GetItemHeight` la funzione membro per recuperare l'altezza degli elementi dell'elenco in una casella combinata.

```
int GetItemHeight(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica il componente della casella combinata di cui deve essere recuperata l'altezza. Se il *nIndex* parametro è -1, viene recuperata l'altezza della parte di controllo di modifica (o testo statico) della casella combinata. Se lo stile della casella combinata è [CBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) *nIndex* specifica l'indice in base zero della voce di elenco la cui altezza deve essere recuperata. In caso contrario, nIndex deve essere impostato su 0.Otherwise, *nIndex* should be set to 0.

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, dell'elemento specificato in una casella combinata. Se si verifica un errore, il valore restituito è CB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#23](../../mfc/reference/codesnippet/cpp/ccombobox-class_23.cpp)]

## <a name="ccomboboxgetlbtext"></a><a name="getlbtext"></a>CComboBox::GetLBText

Ottiene una stringa dalla casella di riepilogo di una casella combinata.

```
int GetLBText(
    int nIndex,
    LPTSTR lpszText) const;

void GetLBText(
    int nIndex,
    CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa della casella di riepilogo da copiare.

*lpszText*<br/>
Punta a un buffer che deve ricevere la stringa. Il buffer deve avere spazio sufficiente per la stringa e un carattere di terminazione null.

*rStringa*<br/>
Riferimento a una classe `CString`.

### <a name="return-value"></a>Valore restituito

Lunghezza (in byte) della stringa, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito viene CB_ERR.

### <a name="remarks"></a>Osservazioni

Il secondo form di questa `CString` funzione membro riempie un oggetto con il testo dell'elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#24](../../mfc/reference/codesnippet/cpp/ccombobox-class_24.cpp)]

## <a name="ccomboboxgetlbtextlen"></a><a name="getlbtextlen"></a>CComboBox::GetLBTextLen

Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.

```
int GetLBTextLen(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa in byte, escluso il carattere di terminazione null. Se *nIndex* non specifica un indice valido, il valore restituito viene CB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox::GetLBText](#getlbtext).

## <a name="ccomboboxgetlocale"></a><a name="getlocale"></a>CComboBox::GetLocale

Recupera le impostazioni locali utilizzate dalla casella combinata.

```
LCID GetLocale() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) per le stringhe nella casella combinata.

### <a name="remarks"></a>Osservazioni

Le impostazioni locali vengono utilizzate, ad esempio, per determinare l'ordinamento delle stringhe in una casella combinata ordinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox::SetLocale](#setlocale).

## <a name="ccomboboxgetminvisible"></a><a name="getminvisible"></a>CComboBox::GetMinVisibile

Ottiene il numero minimo di elementi visibili nell'elenco a discesa del controllo casella combinata corrente.

```
int GetMinVisible() const;
```

### <a name="return-value"></a>Valore restituito

Numero minimo di elementi visibili nell'elenco a discesa corrente.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio CB_GETMINVISIBLE,](/windows/win32/Controls/cb-setminvisible) descritto in Windows SDK.

## <a name="ccomboboxgettopindex"></a><a name="gettopindex"></a>CComboBox::GetTopIndex

Recupera l'indice in base zero del primo elemento visibile nella parte casella di riepilogo della casella combinata.

```
int GetTopIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo elemento visibile nella parte casella di riepilogo della casella combinata in caso di esito positivo CB_ERR in caso contrario.

### <a name="remarks"></a>Osservazioni

Inizialmente, l'elemento 0 si trova nella parte superiore della casella di riepilogo, ma se la casella di riepilogo viene scoriata, un altro elemento potrebbe trovarsi nella parte superiore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#25](../../mfc/reference/codesnippet/cpp/ccombobox-class_25.cpp)]

## <a name="ccomboboxinitstorage"></a><a name="initstorage"></a>CComboBox::InitStorage

Alloca memoria per l'archiviazione degli elementi della casella di riepilogo nella parte casella di riepilogo della casella combinata.

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

In caso di esito positivo, il numero massimo di elementi che la parte casella di riepilogo della casella combinata può archiviare prima che sia necessaria una riallocazione di memoria, altrimenti CB_ERRSPACE, ovvero non è disponibile memoria sufficiente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione prima di aggiungere un numero elevato `CComboBox`di elementi alla parte casella di riepilogo di .

Solo Windows 95/98: il parametro *wParam* è limitato a valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere più di 32.767 elementi. Anche se il numero di elementi è limitato, la dimensione totale degli elementi in una casella di riepilogo è limitata solo dalla memoria disponibile.

Questa funzione consente di velocizzare l'inizializzazione delle caselle di riepilogo con un numero elevato di elementi (più di 100). Prealloca la quantità di memoria specificata in modo che le funzioni [AddString](#addstring), [InsertString](#insertstring)e [Dir](#dir) successive occupino il tempo più breve possibile. È possibile utilizzare le stime per i parametri. Se si sovrastima, viene allocata memoria aggiuntiva; se si sottovaluta, l'allocazione normale viene utilizzata per gli articoli che superano l'importo preallocato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#26](../../mfc/reference/codesnippet/cpp/ccombobox-class_26.cpp)]

## <a name="ccomboboxinsertstring"></a><a name="insertstring"></a>CComboBox::InsertString

Inserisce una stringa nella casella di riepilogo di una casella combinata.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della posizione nella casella di riepilogo che riceverà la stringa. Se questo parametro è -1, la stringa viene aggiunta alla fine dell'elenco.

*lpszString (stringhe)*<br/>
Punta a una stringa con terminazione null da inserire.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione in cui è stata inserita la stringa. Se si verifica un errore, il valore restituito è CB_ERR. Se non è disponibile spazio sufficiente per archiviare la nuova stringa, il valore restituito è CB_ERRSPACE.

### <a name="remarks"></a>Osservazioni

A differenza della funzione membro [AddString](#addstring) , la funzione membro `InsertString` non genera un elenco con lo stile [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) da ordinare.

> [!NOTE]
> Questa funzione non è `ComboBoxEx` supportata dal controllo Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](/windows/win32/Controls/comboboxex-controls) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#27](../../mfc/reference/codesnippet/cpp/ccombobox-class_27.cpp)]

## <a name="ccomboboxlimittext"></a><a name="limittext"></a>CComboBox::LimitText

Limita la lunghezza in byte del testo che l'utente può immettere nel controllo di modifica di una casella combinata.

```
BOOL LimitText(int nMaxChars);
```

### <a name="parameters"></a>Parametri

*nMaxChars*<br/>
Specifica la lunghezza (in byte) del testo che l'utente può immettere. Se questo parametro è 0, la lunghezza del testo è impostata su 65.535 byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo. Se viene chiamato per una casella combinata con lo stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o per una casella combinata senza un controllo di modifica, il valore restituito viene CB_ERR.

### <a name="remarks"></a>Osservazioni

Se la casella combinata non ha lo stile [CBS_AUTOHSCROLL](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles), l'impostazione del limite di testo in modo che sia maggiore delle dimensioni del controllo di modifica non avrà alcun effetto.

`LimitText`limita solo il testo che l'utente può immettere. Non ha alcun effetto sul testo già presente nel controllo di modifica quando il messaggio viene inviato, né influisce sulla lunghezza del testo copiato nel controllo di modifica quando viene selezionata una stringa nella casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#28](../../mfc/reference/codesnippet/cpp/ccombobox-class_28.cpp)]

## <a name="ccomboboxmeasureitem"></a><a name="measureitem"></a>CComboBox::MeasureItem

Chiamato dal framework quando viene creata una casella combinata con uno stile di disegno del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct (oggetto LpMeasureItemStruct)*<br/>
Puntatore lungo a una struttura [MEASUREITEMSTRUCT.](/windows/win32/api/winuser/ns-winuser-measureitemstruct)

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di `MEASUREITEMSTRUCT` questa funzione membro e compilare la struttura per informare Windows delle dimensioni della casella di riepilogo nella casella combinata. Se la casella combinata viene creata con lo stile [di CBS_OWNERDRAWVARIABLE,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

L'utilizzo dello stile CBS_OWNERDRAWFIXED in una casella combinata di disegno dal `CWnd` proprietario creata con la funzione membro [SubclassDlgItem](../../mfc/reference/cwnd-class.md#subclassdlgitem) di implica ulteriori considerazioni sulla programmazione. Vedere la discussione nella [nota tecnica 14](../../mfc/tn014-custom-controls.md).

Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una `MEASUREITEMSTRUCT` descrizione della struttura.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#29](../../mfc/reference/codesnippet/cpp/ccombobox-class_29.cpp)]

## <a name="ccomboboxpaste"></a><a name="paste"></a>CComboBox::Paste

Inserisce i dati dagli Appunti nel controllo di modifica della casella combinata nella posizione corrente del cursore.

```
void Paste();
```

### <a name="remarks"></a>Osservazioni

I dati vengono inseriti solo se gli Appunti contengono dati in formato CF_TEXT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#30](../../mfc/reference/codesnippet/cpp/ccombobox-class_30.cpp)]

## <a name="ccomboboxresetcontent"></a><a name="resetcontent"></a>CComboBox::ResetContent

Rimuove tutti gli elementi dalla casella di riepilogo e modifica il controllo di una casella combinata.

```
void ResetContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#31](../../mfc/reference/codesnippet/cpp/ccombobox-class_31.cpp)]

## <a name="ccomboboxselectstring"></a><a name="selectstring"></a>CComboBox::SelectString

Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e la copia nel controllo di modifica.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*nInizioDopo*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento in cui eseguire la ricerca. Quando la ricerca raggiunge la parte inferiore della casella di riepilogo, continua dall'inizio della casella di riepilogo fino all'elemento specificato da *nStartAfter*. Se -1, la ricerca dell'intera casella di riepilogo viene eseguita dall'inizio.

*lpszString (stringhe)*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da cercare. La ricerca è indipendente da maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento selezionato se la stringa è stata trovata. Se la ricerca non è riuscita, il valore restituito è CB_ERR e la selezione corrente non viene modificata.

### <a name="remarks"></a>Osservazioni

Una stringa viene selezionata solo se i caratteri iniziali (dal punto iniziale) corrispondono ai caratteri nella stringa di prefisso.

Si noti che le `SelectString` funzioni membro e `FindString` trovano entrambe una stringa, ma la `SelectString` funzione membro seleziona anche la stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#32](../../mfc/reference/codesnippet/cpp/ccombobox-class_32.cpp)]

## <a name="ccomboboxsetcuebanner"></a><a name="setcuebanner"></a>CComboBox::SetCueBanner

Imposta il testo del segnale visualizzato per un controllo casella combinata.

```
BOOL SetCueBanner(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszText*|[in] Puntatore a un buffer con terminazione null che contiene il testo del segnale.|

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il testo della pila è un messaggio visualizzato nell'area di input del controllo casella combinata. Il testo del segnale viene visualizzato fino a quando l'utente non fornisce l'input.

Questo metodo invia il messaggio [di CB_SETCUEBANNER,](/windows/win32/Controls/cb-setcuebanner) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile *m_combobox*, utilizzata per accedere a livello di codice al controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene impostato l'intestazione del segnale per il controllo casella combinata.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

## <a name="ccomboboxsetcursel"></a><a name="setcursel"></a>CComboBox::SetCurSel

Seleziona una stringa nella casella di riepilogo di una casella combinata.

```
int SetCurSel(int nSelect);
```

### <a name="parameters"></a>Parametri

*nSelezionare*<br/>
Specifica l'indice in base zero della stringa da selezionare. Se -1, qualsiasi selezione corrente nella casella di riepilogo viene rimossa e il controllo di modifica viene cancellato.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento selezionato se il messaggio ha esito positivo. Il valore restituito è CB_ERR se *nSelect* è maggiore del numero di elementi nell'elenco o se *nSelect* è impostato su -1, che cancella la selezione.

### <a name="remarks"></a>Osservazioni

Se necessario, la casella di riepilogo scorre la stringa nella visualizzazione (se la casella di riepilogo è visibile). Il testo nel controllo di modifica della casella combinata viene modificato per riflettere la nuova selezione. Qualsiasi selezione precedente nella casella di riepilogo viene rimossa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#33](../../mfc/reference/codesnippet/cpp/ccombobox-class_35.cpp)]

## <a name="ccomboboxsetdroppedwidth"></a><a name="setdroppedwidth"></a>CComboBox::SetDroppedWidth

Chiamare questa funzione per impostare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.

```
int SetDroppedWidth(UINT nWidth);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Larghezza minima consentita della parte casella di riepilogo della casella combinata, in pixel.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, la nuova larghezza della casella di riepilogo, in caso contrario CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione si applica solo alle caselle combinate con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. Quando viene visualizzata la parte casella di riepilogo della casella combinata, la larghezza è maggiore della larghezza minima consentita o la larghezza della casella combinata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#34](../../mfc/reference/codesnippet/cpp/ccombobox-class_36.cpp)]

## <a name="ccomboboxseteditsel"></a><a name="seteditsel"></a>CComboBox::SetEditSel

Seleziona i caratteri nel controllo di modifica di una casella combinata.

```
BOOL SetEditSel(
    int nStartChar,
    int nEndChar);
```

### <a name="parameters"></a>Parametri

*nInizioChar (inizio)*<br/>
Specifica la posizione iniziale. Se la posizione iniziale è impostata su -1, qualsiasi selezione esistente viene rimossa.

*nEndChar (in modo infuso)*<br/>
Specifica la posizione finale. Se la posizione finale è impostata su -1, viene selezionato tutto il testo dalla posizione iniziale all'ultimo carattere nel controllo di modifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione membro ha esito positivo; in caso contrario 0. È CB_ERR `CComboBox` se ha lo stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o non dispone di una casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Le posizioni sono in base zero. Per selezionare il primo carattere del controllo di modifica, specificare una posizione iniziale pari a 0. La posizione finale è per il carattere subito dopo l'ultimo carattere da selezionare. Ad esempio, per selezionare i primi quattro caratteri del controllo di modifica, è necessario utilizzare una posizione iniziale pari a 0 e una posizione finale pari a 4.

> [!NOTE]
> Questa funzione non è `ComboBoxEx` supportata dal controllo Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](/windows/win32/Controls/comboboxex-controls) in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox::GetEditSel](#geteditsel).

## <a name="ccomboboxsetextendedui"></a><a name="setextendedui"></a>CComboBox::SetExtendedUI

Chiamare `SetExtendedUI` la funzione membro per selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

```
int SetExtendedUI(BOOL bExtended = TRUE);
```

### <a name="parameters"></a>Parametri

*bEstensione*<br/>
Specifica se la casella combinata deve utilizzare l'interfaccia utente estesa o l'interfaccia utente predefinita. Il valore TRUE seleziona l'interfaccia utente estesa; il valore FALSE seleziona l'interfaccia utente standard.

### <a name="return-value"></a>Valore restituito

CB_OKAY se l'operazione ha esito positivo o CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

L'interfaccia utente estesa può essere identificata nei seguenti modi:

- Facendo clic sul controllo statico viene visualizzata la casella di riepilogo solo per le caselle combinate con lo stile CBS_DROPDOWNLIST.

- Premendo il tasto freccia giù viene visualizzata la casella di riepilogo (F4 è disabilitato).

Lo scorrimento nel controllo statico è disabilitato quando l'elenco di elementi non è visibile (i tasti di direzione sono disabilitati).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox::GetExtendedUI](#getextendedui).

## <a name="ccomboboxsethorizontalextent"></a><a name="sethorizontalextent"></a>CComboBox::SetHorizontalExtent

Imposta la larghezza, in pixel, in base alla quale è possibile scorrere orizzontalmente la parte casella di riepilogo della casella combinata.

```
void SetHorizontalExtent(UINT nExtent);
```

### <a name="parameters"></a>Parametri

*nExtent (informazioni in stato indue*<br/>
Specifica il numero di pixel in base al quale è possibile scorrere orizzontalmente la parte casella di riepilogo della casella combinata.

### <a name="remarks"></a>Osservazioni

Se la larghezza della casella di riepilogo è inferiore a questo valore, la barra di scorrimento orizzontale scorrerà orizzontalmente gli elementi nella casella di riepilogo. Se la larghezza della casella di riepilogo è uguale o maggiore di questo valore, la barra di scorrimento orizzontale è nascosta o, se la casella combinata ha lo stile [CBS_DISABLENOSCROLL,](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) disabilitata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#35](../../mfc/reference/codesnippet/cpp/ccombobox-class_37.cpp)]

## <a name="ccomboboxsetitemdata"></a><a name="setitemdata"></a>CComboBox::SetItemData

Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene un indice in base zero all'elemento da impostare.

*dwItemData (dati dwItemData)*<br/>
Contiene il nuovo valore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Utilizzare `SetItemDataPtr` la funzione membro se l'elemento a 32 bit deve essere un puntatore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#36](../../mfc/reference/codesnippet/cpp/ccombobox-class_38.cpp)]

## <a name="ccomboboxsetitemdataptr"></a><a name="setitemdataptr"></a>CComboBox::SetItemDataPtrCComboBox::SetItemDataPtr

Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata come puntatore specificato (**void** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene un indice in base zero per l'elemento.

*pDati*<br/>
Contiene il puntatore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo puntatore rimane valido per la durata della casella combinata, anche se la posizione relativa dell'elemento all'interno della casella combinata potrebbe cambiare man mano che vengono aggiunti o rimossi elementi. Di conseguenza, l'indice dell'elemento all'interno della casella può cambiare, ma il puntatore rimane affidabile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#37](../../mfc/reference/codesnippet/cpp/ccombobox-class_39.cpp)]

## <a name="ccomboboxsetitemheight"></a><a name="setitemheight"></a>CComboBox::SetItemHeight

Chiamare `SetItemHeight` la funzione membro per impostare l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte di controllo di modifica (o testo statico) di una casella combinata.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica se è impostata l'altezza degli elementi dell'elenco o l'altezza della parte di controllo di modifica (o testo statico) della casella combinata.

Se lo stile [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) della casella combinata, *nIndex* specifica l'indice in base zero della voce di elenco la cui altezza deve essere impostata; in caso contrario, *nIndex* deve essere 0 e verrà impostata l'altezza di tutte le voci dell'elenco.

Se *nIndex* è -1, l'altezza della parte di controllo di modifica o di testo statico della casella combinata deve essere impostata.

*cyItemHeight (altezza)*<br/>
Specifica l'altezza, in pixel, del componente casella combinata identificato da *nIndex*.

### <a name="return-value"></a>Valore restituito

CB_ERR se l'indice o l'altezza non è valida; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'altezza della parte della casella combinata di controllo di modifica (o testo statico) viene impostata indipendentemente dall'altezza degli elementi dell'elenco. Un'applicazione deve garantire che l'altezza della parte di controllo di modifica (o testo statico) non sia inferiore all'altezza di un particolare elemento della casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#38](../../mfc/reference/codesnippet/cpp/ccombobox-class_40.cpp)]

## <a name="ccomboboxsetlocale"></a><a name="setlocale"></a>CComboBox::SetLocale

Imposta l'identificatore delle impostazioni locali per questa casella combinata.

```
LCID SetLocale(LCID nNewLocale);
```

### <a name="parameters"></a>Parametri

*nNewLocale (in inglese)*<br/>
Nuovo valore dell'identificatore delle impostazioni locali (LCID) da impostare per la casella combinata.

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) precedente per questa casella combinata.

### <a name="remarks"></a>Osservazioni

Se `SetLocale` non viene chiamato, le impostazioni locali predefinite vengono ottenute dal sistema. Le impostazioni locali predefinite del sistema possono essere modificate utilizzando l'applicazione Regionale (o Internazionale) del Pannello di controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#39](../../mfc/reference/codesnippet/cpp/ccombobox-class_41.cpp)]

## <a name="ccomboboxsetminvisibleitems"></a><a name="setminvisibleitems"></a>CComboBox::SetMinVisibleItems

Imposta il numero minimo di elementi visibili nell'elenco a discesa del controllo casella combinata corrente.

```
BOOL SetMinVisibleItems(int iMinVisible);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iMinVisibile*|[in] Specifica il numero minimo di elementi visibili.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di CB_SETMINVISIBLE,](/windows/win32/Controls/cb-setminvisible) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile *m_combobox*, utilizzata per accedere a livello di codice al controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito vengono inseriti 20 elementi nell'elenco a discesa di un controllo casella combinata. Specifica quindi che devono essere visualizzati almeno 10 elementi quando un utente preme la freccia a discesa.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

## <a name="ccomboboxsettopindex"></a><a name="settopindex"></a>CComboBox::SetTopIndex

Assicura che un determinato elemento sia visibile nella parte casella di riepilogo della casella combinata.

```
int SetTopIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

zero se ha esito positivo o CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il sistema scorre la casella di riepilogo finché non viene visualizzato l'elemento specificato da *nIndex* nella parte superiore della casella di riepilogo o non viene raggiunto l'intervallo di scorrimento massimo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#40](../../mfc/reference/codesnippet/cpp/ccombobox-class_42.cpp)]

## <a name="ccomboboxshowdropdown"></a><a name="showdropdown"></a>CComboBox::ShowDropDown

Mostra o nasconde la casella di riepilogo di una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

```
void ShowDropDown(BOOL bShowIt = TRUE);
```

### <a name="parameters"></a>Parametri

*bMostra*<br/>
Specifica se la casella di riepilogo a discesa deve essere visualizzata o nascosta. Il valore TRUE mostra la casella di riepilogo. Il valore FALSE nasconde la casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, una casella combinata di questo stile mostrerà la casella di riepilogo.

Questa funzione membro non ha alcun effetto su una casella combinata creata con lo stile [CBS_SIMPLE.](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox::GetDroppedState](#getdroppedstate).

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
