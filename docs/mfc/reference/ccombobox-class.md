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
ms.openlocfilehash: b54a1913073ca0b23aeb17a57b16f589a074637b
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418818"
---
# <a name="ccombobox-class"></a>Classe CComboBox

Fornisce la funzionalità di una casella combinata di Windows.

## <a name="syntax"></a>Sintassi

```
class CComboBox : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBox:: CComboBox](#ccombobox)|Costruisce un oggetto `CComboBox`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComboBox::AddString](#addstring)|Aggiunge una stringa alla fine dell'elenco nella casella di riepilogo di una casella combinata o in corrispondenza della posizione ordinata per le caselle di riepilogo con lo stile CBS_SORT.|
|[CComboBox:: Clear](#clear)|Elimina (Cancella) la selezione corrente, se presente, nel controllo di modifica.|
|[CComboBox:: CompareItem](#compareitem)|Chiamata eseguita dal Framework per determinare la posizione relativa di un nuovo elemento elenco in una casella combinata creata dal proprietario.|
|[CComboBox:: Copy](#copy)|Copia la selezione corrente, se presente, negli Appunti nel formato CF_TEXT.|
|[CComboBox:: create](#create)|Crea la casella combinata e la collega all'oggetto `CComboBox`.|
|[CComboBox:: Cut](#cut)|Elimina (taglia) la selezione corrente, se presente, nel controllo di modifica e copia il testo eliminato negli Appunti nel formato CF_TEXT.|
|[CComboBox::D eleteItem](#deleteitem)|Chiamata eseguita dal framework quando un elemento elenco viene eliminato da una casella combinata creata dal proprietario.|
|[CComboBox::D eleteString](#deletestring)|Elimina una stringa dalla casella di riepilogo di una casella combinata.|
|[CComboBox::D IR](#dir)|Aggiunge un elenco di nomi di file alla casella di riepilogo di una casella combinata.|
|[CComboBox::D rawItem](#drawitem)|Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella combinata creata dal proprietario.|
|[CComboBox:: FindString](#findstring)|Trova la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.|
|[CComboBox:: FindExactString](#findstringexact)|Trova la prima stringa della casella di riepilogo (in una casella combinata) che corrisponde alla stringa specificata.|
|[CComboBox:: GetComboBoxInfo](#getcomboboxinfo)|Recupera le informazioni sull'oggetto `CComboBox`.|
|[CComboBox:: GetCount](#getcount)|Recupera il numero di elementi nella casella di riepilogo di una casella combinata.|
|[CComboBox:: GetCueBanner](#getcuebanner)|Ottiene il testo cue visualizzato per un controllo casella combinata.|
|[CComboBox:: GetCurSel](#getcursel)|Recupera l'indice dell'elemento attualmente selezionato, se presente, nella casella di riepilogo di una casella combinata.|
|[CComboBox:: GetDroppedControlRect](#getdroppedcontrolrect)|Recupera le coordinate dello schermo della casella di riepilogo visibile (rilasciata) di una casella combinata a discesa.|
|[CComboBox:: GetDroppedState](#getdroppedstate)|Determina se la casella di riepilogo di una casella combinata a discesa è visibile (eliminata).|
|[CComboBox:: GetDroppedWidth](#getdroppedwidth)|Recupera la larghezza minima consentita per la parte della casella di riepilogo a discesa di una casella combinata.|
|[CComboBox:: GetEditSel](#geteditsel)|Ottiene le posizioni dei caratteri iniziali e finali della selezione corrente nel controllo di modifica di una casella combinata.|
|[CComboBox:: GetExtendedUI](#getextendedui)|Determina se una casella combinata dispone dell'interfaccia utente predefinita o dell'interfaccia utente estesa.|
|[CComboBox:: GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel a cui è possibile scorrere orizzontalmente la parte della casella combinata della casella combinata.|
|[CComboBox:: GetItemData](#getitemdata)|Recupera il valore di 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.|
|[CComboBox:: GetItemDataPtr](#getitemdataptr)|Recupera il puntatore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.|
|[CComboBox:: GetItemHeight](#getitemheight)|Recupera l'altezza degli elementi dell'elenco in una casella combinata.|
|[CComboBox:: GetLBText](#getlbtext)|Ottiene una stringa dalla casella di riepilogo di una casella combinata.|
|[CComboBox:: GetLBTextLen](#getlbtextlen)|Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox:: GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella combinata.|
|[CComboBox:: GetMinVisible](#getminvisible)|Ottiene il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|
|[CComboBox:: GetTopIndex](#gettopindex)|Restituisce l'indice del primo elemento visibile nella parte della casella di riepilogo della casella combinata.|
|[CComboBox:: InitStorage](#initstorage)|Prealloca i blocchi di memoria per gli elementi e le stringhe nella parte di casella di riepilogo della casella combinata.|
|[CComboBox::InsertString](#insertstring)|Inserisce una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox:: LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere nel controllo di modifica di una casella combinata.|
|[CComboBox:: MeasureItem](#measureitem)|Chiamata eseguita dal Framework per determinare le dimensioni della casella combinata quando viene creata una casella combinata creata dal proprietario.|
|[CComboBox::P incolla](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica in corrispondenza della posizione corrente del cursore. I dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.|
|[CComboBox:: ResetContent](#resetcontent)|Rimuove tutti gli elementi dalla casella di riepilogo e il controllo di modifica di una casella combinata.|
|[CComboBox:: SelectString](#selectstring)|Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e copia la stringa nel controllo di modifica.|
|[CComboBox:: SetCueBanner](#setcuebanner)|Imposta il testo cue visualizzato per un controllo casella combinata.|
|[CComboBox:: CurSel](#setcursel)|Seleziona una stringa nella casella di riepilogo di una casella combinata.|
|[CComboBox:: SetDroppedWidth](#setdroppedwidth)|Imposta la larghezza minima consentita per la parte della casella di riepilogo a discesa di una casella combinata.|
|[CComboBox:: SetEditSel](#seteditsel)|Seleziona i caratteri nel controllo di modifica di una casella combinata.|
|[CComboBox:: SetExtendedUI](#setextendedui)|Consente di selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.|
|[CComboBox:: SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel di cui è possibile scorrere orizzontalmente la parte della casella combinata della casella combinata.|
|[CComboBox:: SetItemData](#setitemdata)|Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.|
|[CComboBox:: SetItemDataPtr](#setitemdataptr)|Imposta il puntatore a 32 bit associato all'elemento specificato in una casella combinata.|
|[CComboBox:: SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte della casella combinata (o del testo statico) del controllo di modifica.|
|[CComboBox:: setlocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella combinata.|
|[CComboBox:: SetMinVisibleItems](#setminvisibleitems)|Imposta il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|
|[CComboBox:: SetTopIndex](#settopindex)|Indica alla parte della casella combinata di visualizzare l'elemento con l'indice specificato nella parte superiore.|
|[CComboBox:: ShowDropDown](#showdropdown)|Consente di visualizzare o nascondere la casella di riepilogo di una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.|

## <a name="remarks"></a>Osservazioni

Una casella combinata è costituita da una casella di riepilogo combinata con un controllo statico o un controllo di modifica. La parte della casella di riepilogo del controllo può essere visualizzata in qualsiasi momento o solo quando l'utente seleziona la freccia a discesa accanto al controllo.

L'elemento attualmente selezionato, se presente, nella casella di riepilogo viene visualizzato nel controllo statico o modifica. Inoltre, se la casella combinata dispone dello stile dell'elenco a discesa, l'utente può digitare il carattere iniziale di uno degli elementi nell'elenco e la casella di riepilogo, se visibile, evidenzia l'elemento successivo con tale carattere iniziale.

Nella tabella seguente vengono confrontati i tre [stili](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)della casella combinata.

|Style|Quando è visibile la casella di riepilogo|Controllo statico o di modifica|
|-----------|-------------------------------|-----------------------------|
|Semplice|Sempre|Modifica|
|Drop-down|Quando viene eliminato|Modifica|
|Elenco a discesa|Quando viene eliminato|Statico|

È possibile creare un oggetto `CComboBox` da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CComboBox` per costruire l'oggetto `CComboBox`; chiamare quindi la funzione membro [create](#create) per creare il controllo e collegarlo all'oggetto `CComboBox`.

Se si desidera gestire i messaggi di notifica di Windows inviati da una casella combinata al relativo elemento padre (in genere una classe derivata da `CDialog`), aggiungere una voce della mappa messaggi e una funzione membro del gestore del messaggio alla classe padre per ogni messaggio.

Ogni voce della mappa messaggi assume il formato seguente:

**Notifica\_** **(** _ID_, _memberFxn_ **)**

dove `id` specifica l'ID della finestra figlio del controllo casella combinata che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.

Il prototipo di funzione del padre è il seguente:

**afx_msg** `void` `memberFxn` **();**

Non è possibile prevedere l'ordine in cui verranno inviate determinate notifiche. In particolare, una notifica di CBN_SELCHANGE può verificarsi prima o dopo una notifica di CBN_CLOSEUP.

Le potenziali voci della mappa messaggi sono le seguenti:

- ON_CBN_CLOSEUP (Windows 3,1 e versioni successive) La casella di riepilogo di una casella combinata è stata chiusa. Questo messaggio di notifica non viene inviato per una casella combinata con lo stile [CBS_SIMPLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

- ON_CBN_DBLCLK l'utente fa doppio clic su una stringa nella casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato solo per una casella combinata con lo stile CBS_SIMPLE. Per una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , non può verificarsi un doppio clic perché un solo clic nasconde la casella di riepilogo.

- ON_CBN_DROPDOWN la casella di riepilogo di una casella combinata sta per essere visualizzata. Questo messaggio di notifica può verificarsi solo per una casella combinata con lo stile CBS_DROPDOWN o CBS_DROPDOWNLIST.

- ON_CBN_EDITCHANGE l'utente ha effettuato un'azione che potrebbe aver modificato il testo nella parte relativa al controllo di modifica di una casella combinata. A differenza del messaggio CBN_EDITUPDATE, questo messaggio viene inviato dopo che Windows aggiorna la schermata. Non viene inviato se lo stile della casella combinata è CBS_DROPDOWNLIST.

- ON_CBN_EDITUPDATE la parte relativa al controllo di modifica di una casella combinata sta per visualizzare il testo modificato. Questo messaggio di notifica viene inviato dopo che il controllo ha formattato il testo ma prima di visualizzare il testo. Non viene inviato se lo stile della casella combinata è CBS_DROPDOWNLIST.

- ON_CBN_ERRSPACE la casella combinata non può allocare memoria sufficiente per soddisfare una richiesta specifica.

- ON_CBN_SELENDCANCEL (Windows 3,1 e versioni successive) Indica che la selezione dell'utente deve essere annullata. L'utente fa clic su un elemento e quindi fa clic su un'altra finestra o controllo per nascondere la casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato prima del messaggio di notifica CBN_CLOSEUP per indicare che la selezione dell'utente deve essere ignorata. Il CBN_SELENDCANCEL o CBN_SELENDOK messaggio di notifica viene inviato anche se il messaggio di notifica CBN_CLOSEUP non viene inviato (come nel caso di una casella combinata con lo stile CBS_SIMPLE).

- ON_CBN_SELENDOK l'utente seleziona un elemento e quindi preme il tasto invio o fa clic sul tasto freccia giù per nascondere la casella di riepilogo di una casella combinata. Questo messaggio di notifica viene inviato prima del messaggio di CBN_CLOSEUP per indicare che la selezione dell'utente deve essere considerata valida. Il CBN_SELENDCANCEL o CBN_SELENDOK messaggio di notifica viene inviato anche se il messaggio di notifica CBN_CLOSEUP non viene inviato (come nel caso di una casella combinata con lo stile CBS_SIMPLE).

- ON_CBN_KILLFOCUS la casella combinata sta perdendo lo stato attivo per l'input.

- ON_CBN_SELCHANGE la selezione nella casella di riepilogo di una casella combinata sta per essere modificata a seguito dell'utente facendo clic nella casella di riepilogo o cambiando la selezione usando i tasti di direzione. Quando si elabora questo messaggio, il testo nel controllo di modifica della casella combinata può essere recuperato solo tramite `GetLBText` o un'altra funzione simile. Impossibile utilizzare `GetWindowText`.

- ON_CBN_SETFOCUS la casella combinata riceve lo stato attivo per l'input.

Se si crea un oggetto `CComboBox` in una finestra di dialogo (tramite una risorsa della finestra di dialogo), l'oggetto `CComboBox` viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.

Se si incorpora un oggetto `CComboBox` all'interno di un altro oggetto finestra, non è necessario eliminarlo. Se si crea l'oggetto `CComboBox` nello stack, questo viene eliminato automaticamente. Se si crea l'oggetto `CComboBox` nell'heap usando la **nuova** funzione, è necessario chiamare **Delete** nell'oggetto per eliminarlo quando la casella combinata di Windows viene distrutta.

**Nota** Se si desidera gestire WM_KEYDOWN e WM_CHAR i messaggi, è necessario creare una sottoclasse dei controlli di modifica e casella di riepilogo della casella combinata, derivare le classi da `CEdit` e `CListBox`e aggiungere gestori per tali messaggi alle classi derivate. Per ulteriori informazioni, vedere [CWnd:: SubclassWindow](../../mfc/reference/cwnd-class.md#subclasswindow).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CComboBox`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="addstring"></a>CComboBox:: AddString

Aggiunge una stringa alla casella di riepilogo di una casella combinata.

```
int AddString(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString*<br/>
Punta alla stringa con terminazione null da aggiungere.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero della stringa nella casella di riepilogo. Il valore restituito è CB_ERR se si verifica un errore. il valore restituito è CB_ERRSPACE se non è disponibile spazio sufficiente per archiviare la nuova stringa.

### <a name="remarks"></a>Osservazioni

Se la casella di riepilogo non è stata creata con lo stile [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco viene ordinato.

> [!NOTE]
>  Questa funzione non è supportata dal controllo `ComboBoxEx` di Windows. Per ulteriori informazioni su questo controllo, vedere [ComboBoxEx Controls](/windows/win32/Controls/comboboxex-controls) nella Windows SDK.

Per inserire una stringa in una posizione specifica all'interno dell'elenco, usare la funzione membro [InsertString](#insertstring) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#3](../../mfc/reference/codesnippet/cpp/ccombobox-class_1.cpp)]

##  <a name="ccombobox"></a>CComboBox:: CComboBox

Costruisce un oggetto `CComboBox`.

```
CComboBox();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_2.cpp)]

##  <a name="clear"></a>CComboBox:: Clear

Elimina (Cancella) la selezione corrente, se presente, nel controllo di modifica della casella combinata.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

Per eliminare la selezione corrente e inserire il contenuto eliminato sugli Appunti, usare la funzione membro [Cut](#cut) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#4](../../mfc/reference/codesnippet/cpp/ccombobox-class_3.cpp)]

##  <a name="compareitem"></a>CComboBox:: CompareItem

Chiamata eseguita dal Framework per determinare la posizione relativa di un nuovo elemento nella parte della casella di riepilogo di una casella combinata creata dal proprietario.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### <a name="parameters"></a>Parametri

*lpCompareItemStruct*<br/>
Puntatore long a una struttura [COMPAREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-compareitemstruct) .

### <a name="return-value"></a>Valore restituito

Indica la posizione relativa dei due elementi descritti nella struttura `COMPAREITEMSTRUCT`. Può essere uno dei valori seguenti:

|valore|Significato|
|-----------|-------------|
|- 1|L'elemento 1 Ordina prima dell'elemento 2.|
|0|Gli elementi 1 e 2 vengono ordinati allo stesso modo.|
|1|L'elemento 1 Ordina dopo l'elemento 2.|

Per una descrizione di `COMPAREITEMSTRUCT`, vedere [CWnd:: OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) .

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella combinata creata dal proprietario con lo stile LBS_SORT, è necessario eseguire l'override di questa funzione membro per supportare il Framework nell'ordinamento dei nuovi elementi aggiunti alla casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#5](../../mfc/reference/codesnippet/cpp/ccombobox-class_4.cpp)]

##  <a name="copy"></a>CComboBox:: Copy

Copia la selezione corrente, se presente, nel controllo di modifica della casella combinata negli Appunti nel formato CF_TEXT.

```
void Copy();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#6](../../mfc/reference/codesnippet/cpp/ccombobox-class_5.cpp)]

##  <a name="create"></a>CComboBox:: create

Crea la casella combinata e la collega all'oggetto `CComboBox`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile della casella combinata. Applicare qualsiasi combinazione di [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) alla casella.

*rect*<br/>
Punta alla posizione e alle dimensioni della casella combinata. Può essere una [struttura Rect](/windows/win32/api/windef/ns-windef-rect) o un oggetto `CRect`.

*pParentWnd*<br/>
Specifica la finestra padre della casella combinata (in genere un `CDialog`). Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo della casella combinata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si costruisce un oggetto `CComboBox` in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea la casella combinata di Windows e la collega all'oggetto `CComboBox`.

Quando `Create` viene eseguito, Windows invia i messaggi di [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) alla casella combinata.

Questi messaggi vengono gestiti per impostazione predefinita dalle funzioni membro [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) nella classe di base `CWnd`. Per estendere la gestione dei messaggi predefinita, derivare una classe da `CComboBox`, aggiungere una mappa messaggi alla nuova classe ed eseguire l'override delle funzioni membro del gestore di messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Applicare gli [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) seguenti a un controllo casella combinata. :

- WS_CHILD sempre

- WS_VISIBLE in genere

- WS_DISABLED raramente

- WS_VSCROLL aggiungere lo scorrimento verticale per la casella di riepilogo nella casella combinata

- WS_HSCROLL aggiungere lo scorrimento orizzontale per la casella di riepilogo nella casella combinata

- WS_GROUP ai controlli di gruppo

- WS_TABSTOP includere la casella combinata nell'ordine di tabulazione

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_6.cpp)]

##  <a name="cut"></a>CComboBox:: Cut

Elimina (taglia) la selezione corrente, se presente, nel controllo di modifica della casella combinata e copia il testo eliminato negli Appunti nel formato CF_TEXT.

```
void Cut();
```

### <a name="remarks"></a>Osservazioni

Per eliminare la selezione corrente senza inserire il testo eliminato sugli Appunti, chiamare la funzione membro [Clear](#clear) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#7](../../mfc/reference/codesnippet/cpp/ccombobox-class_7.cpp)]

##  <a name="deleteitem"></a>CComboBox::D eleteItem

Chiamata eseguita dal framework quando l'utente elimina un elemento da un oggetto `CComboBox` di traccia del proprietario o Elimina la casella combinata.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDeleteItemStruct*<br/>
Puntatore long a una struttura [DELETEITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) di Windows che contiene informazioni sull'elemento eliminato. Per una descrizione della struttura, vedere [CWnd:: OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) .

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ricreare la casella combinata in base alle esigenze.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#8](../../mfc/reference/codesnippet/cpp/ccombobox-class_8.cpp)]

##  <a name="deletestring"></a>CComboBox::D eleteString

Elimina l'elemento nella posizione *nIndex* dalla casella combinata.

```
int DeleteString(UINT nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice della stringa da eliminare.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è un conteggio delle stringhe rimaste nell'elenco. Il valore restituito è CB_ERR se *nIndex* specifica un indice maggiore del numero di elementi nell'elenco.

### <a name="remarks"></a>Osservazioni

Tutti gli elementi che seguono *nIndex* ora si spostano verso il basso di una posizione. Se, ad esempio, una casella combinata contiene due elementi, l'eliminazione del primo elemento comporterà la prima posizione dell'elemento rimanente. *nIndex*= 0 per l'elemento nella prima posizione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#9](../../mfc/reference/codesnippet/cpp/ccombobox-class_9.cpp)]

##  <a name="dir"></a>CComboBox::D IR

Aggiunge un elenco di nomi file o unità alla casella di riepilogo di una casella combinata.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### <a name="parameters"></a>Parametri

*attr*<br/>
Può essere una qualsiasi combinazione dei valori **enum** descritti in [CFile:: GetStatus](../../mfc/reference/cfile-class.md#getstatus) o qualsiasi combinazione dei valori seguenti:

- DDL_READWRITE file può essere letto o scritto.

- DDL_READONLY file può essere letto, ma non scritto in.

- DDL_HIDDEN file è nascosto e non viene visualizzato in un elenco di directory.

- DDL_SYSTEM file è un file di sistema.

- DDL_DIRECTORY il nome specificato da *lpszWildCard* specifica una directory.

- Il file di DDL_ARCHIVE è stato archiviato.

- DDL_DRIVES includere tutte le unità che corrispondono al nome specificato da *lpszWildCard*.

- DDL_EXCLUSIVE flag esclusivo. Se viene impostato il flag exclusive, vengono elencati solo i file del tipo specificato. In caso contrario, i file del tipo specificato vengono elencati oltre ai file "normali".

*lpszWildCard*<br/>
Punta a una stringa di specifica del file. La stringa può contenere caratteri jolly (ad esempio *.\*).

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero dell'ultimo nome file aggiunto all'elenco. Il valore restituito è CB_ERR se si verifica un errore. il valore restituito è CB_ERRSPACE se non è disponibile spazio sufficiente per archiviare le nuove stringhe.

### <a name="remarks"></a>Osservazioni

Questa funzione non è supportata dal controllo `ComboBoxEx` di Windows. Per ulteriori informazioni su questo controllo, vedere [ComboBoxEx Controls](/windows/win32/Controls/comboboxex-controls) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#10](../../mfc/reference/codesnippet/cpp/ccombobox-class_10.cpp)]

##  <a name="drawitem"></a>CComboBox::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di una casella combinata creata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Osservazioni

Il membro `itemAction` della struttura `DRAWITEMSTRUCT` definisce l'azione di disegno da eseguire. Per una descrizione della struttura, vedere [CWnd:: OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) .

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto `CComboBox` di disegno del proprietario. Prima che questa funzione membro termini, l'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#11](../../mfc/reference/codesnippet/cpp/ccombobox-class_11.cpp)]

##  <a name="findstring"></a>CComboBox:: FindString

Trova, ma non seleziona, la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszString) const;
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nStartAfter*. Se-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszString*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da ricercare. La ricerca è indipendente dalla distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero dell'elemento corrispondente. Viene CB_ERR se la ricerca ha avuto esito negativo.

### <a name="remarks"></a>Osservazioni

Questa funzione non è supportata dal controllo `ComboBoxEx` di Windows. Per ulteriori informazioni su questo controllo, vedere [ComboBoxEx Controls](/windows/win32/Controls/comboboxex-controls) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#12](../../mfc/reference/codesnippet/cpp/ccombobox-class_12.cpp)]

##  <a name="findstringexact"></a>CComboBox:: FindExactString

Chiamare la funzione membro `FindStringExact` per trovare la prima stringa della casella di riepilogo (in una casella combinata) che corrisponde alla stringa specificata in *lpszFind*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### <a name="parameters"></a>Parametri

*nIndexStart*<br/>
Specifica l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nIndexStart*. Se *nIndexStart* è-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszFind*<br/>
Punta alla stringa con terminazione null da cercare. Questa stringa può contenere un nome file completo, inclusa l'estensione. Per la ricerca non viene fatta distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento corrispondente o CB_ERR se la ricerca ha avuto esito negativo.

### <a name="remarks"></a>Osservazioni

Se la casella combinata è stata creata con uno stile di creazione del proprietario ma senza lo stile del [CBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , `FindStringExact` tenta di trovare una corrispondenza tra il valore di parola doppia e il valore di *lpszFind*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#13](../../mfc/reference/codesnippet/cpp/ccombobox-class_13.cpp)]

##  <a name="getcomboboxinfo"></a>CComboBox:: GetComboBoxInfo

Recupera le informazioni per l'oggetto `CComboBox`.

```
BOOL GetComboBoxInfo(PCOMBOBOXINFO pcbi) const;
```

### <a name="parameters"></a>Parametri

*pcbi*<br/>
Puntatore alla struttura [COMBOBOXINFO](/windows/win32/api/winuser/ns-winuser-comboboxinfo) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [CB_GETCOMBOBOXINFO](/windows/win32/Controls/cb-getcomboboxinfo) , come descritto nel Windows SDK.

##  <a name="getcount"></a>CComboBox:: GetCount

Chiamare questa funzione membro per recuperare il numero di elementi nella parte della casella di riepilogo di una casella combinata.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi. Il conteggio restituito è maggiore di uno rispetto al valore di indice dell'ultimo elemento (l'indice è in base zero). Viene CB_ERR se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#14](../../mfc/reference/codesnippet/cpp/ccombobox-class_14.cpp)]

##  <a name="getcuebanner"></a>CComboBox:: GetCueBanner

Ottiene il testo cue visualizzato per un controllo casella combinata.

```
CString GetCueBanner() const;

BOOL GetCueBanner(
    LPTSTR lpszText,
    int cchText) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszText*|out Puntatore a un buffer che riceve il testo del banner cue.|
|*cchText*|in Dimensioni del buffer a cui punta il parametro *lpszText* .|

### <a name="return-value"></a>Valore restituito

Nel primo overload, oggetto [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo del banner del suggerimento, se esistente. in caso contrario, un oggetto `CString` con lunghezza zero.

-oppure-

Nel secondo overload, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il testo cue è un prompt visualizzato nell'area di input del controllo casella combinata. Il testo della stecca viene visualizzato fino a quando l'utente non fornisce l'input.

Questo metodo invia il messaggio di [CB_GETCUEBANNER](/windows/win32/Controls/cb-getcuebanner) , descritto nel Windows SDK.

##  <a name="getcursel"></a>CComboBox:: GetCurSel

Chiamare questa funzione membro per determinare quale elemento della casella combinata è selezionato.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento attualmente selezionato nella casella di riepilogo di una casella combinata oppure CB_ERR se non è selezionato alcun elemento.

### <a name="remarks"></a>Osservazioni

`GetCurSel` restituisce un indice nell'elenco.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#15](../../mfc/reference/codesnippet/cpp/ccombobox-class_15.cpp)]

##  <a name="getdroppedcontrolrect"></a>CComboBox:: GetDroppedControlRect

Chiamare la funzione membro `GetDroppedControlRect` per recuperare le coordinate dello schermo della casella di riepilogo visibile (a discesa) di una casella combinata a discesa.

```
void GetDroppedControlRect(LPRECT lprect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta alla [struttura Rect](/windows/win32/api/windef/ns-windef-rect) che deve ricevere le coordinate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#16](../../mfc/reference/codesnippet/cpp/ccombobox-class_16.cpp)]

##  <a name="getdroppedstate"></a>CComboBox:: GetDroppedState

Chiamare la funzione membro `GetDroppedState` per determinare se la casella di riepilogo di una casella combinata a discesa è visibile (eliminata).

```
BOOL GetDroppedState() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la casella di riepilogo è visibile; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#17](../../mfc/reference/codesnippet/cpp/ccombobox-class_17.cpp)]

##  <a name="getdroppedwidth"></a>CComboBox:: GetDroppedWidth

Chiamare questa funzione per recuperare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.

```
int GetDroppedWidth() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, la larghezza minima consentita, in pixel; in caso contrario, CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione si applica solo alle caselle combinate con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. La larghezza minima consentita può essere impostata chiamando [SetDroppedWidth](#setdroppedwidth). Quando viene visualizzata la parte relativa alla casella di riepilogo della casella combinata, la larghezza è maggiore della larghezza minima consentita o della casella combinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [SetDroppedWidth](#setdroppedwidth).

##  <a name="geteditsel"></a>CComboBox:: GetEditSel

Ottiene le posizioni dei caratteri iniziali e finali della selezione corrente nel controllo di modifica di una casella combinata.

```
DWORD GetEditSel() const;
```

### <a name="return-value"></a>Valore restituito

Valore a 32 bit che contiene la posizione iniziale nella parola di ordine inferiore e la posizione del primo carattere non selezionato dopo la fine della selezione nella parola più significativa. Se questa funzione viene utilizzata in una casella combinata senza un controllo di modifica, viene restituito CB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#18](../../mfc/reference/codesnippet/cpp/ccombobox-class_18.cpp)]

##  <a name="getextendedui"></a>CComboBox:: GetExtendedUI

Chiamare la funzione membro `GetExtendedUI` per determinare se una casella combinata dispone dell'interfaccia utente predefinita o dell'interfaccia utente estesa.

```
BOOL GetExtendedUI() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la casella combinata dispone dell'interfaccia utente estesa; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'interfaccia utente estesa può essere identificata nei modi seguenti:

- Facendo clic sul controllo statico viene visualizzata la casella di riepilogo solo per le caselle combinate con lo stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

- Premendo il tasto freccia giù viene visualizzata la casella di riepilogo (F4 è disabilitato).

Lo scorrimento nel controllo statico viene disabilitato quando l'elenco di elementi non è visibile (i tasti di direzione sono disabilitati).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#19](../../mfc/reference/codesnippet/cpp/ccombobox-class_19.cpp)]

##  <a name="gethorizontalextent"></a>CComboBox:: GetHorizontalExtent

Recupera dalla casella combinata la larghezza in pixel in base alla quale è possibile scorrere orizzontalmente la parte della casella combinata della casella combinata.

```
UINT GetHorizontalExtent() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza scorrevole della parte della casella di riepilogo della casella combinata, in pixel.

### <a name="remarks"></a>Osservazioni

Questa operazione è applicabile solo se la parte relativa alla casella di riepilogo della casella combinata presenta una barra di scorrimento orizzontale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#20](../../mfc/reference/codesnippet/cpp/ccombobox-class_20.cpp)]

##  <a name="getitemdata"></a>CComboBox:: GetItemData

Recupera il valore di 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.

### <a name="return-value"></a>Valore restituito

Valore a 32 bit associato all'elemento o CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il valore a 32 bit può essere impostato con il parametro *dwItemData* di una chiamata di funzione membro [SetItemData](#setitemdata) . Utilizzare la funzione membro `GetItemDataPtr` se il valore 32 bit da recuperare è un puntatore (**void** <strong>\*</strong>).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#21](../../mfc/reference/codesnippet/cpp/ccombobox-class_21.cpp)]

##  <a name="getitemdataptr"></a>CComboBox:: GetItemDataPtr

Recupera il valore a 32 bit fornito dall'applicazione associato all'elemento della casella combinata specificato come puntatore (**void** <strong>\*</strong>).

```
void* GetItemDataPtr(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.

### <a name="return-value"></a>Valore restituito

Recupera un puntatore, oppure-1 se si verifica un errore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#22](../../mfc/reference/codesnippet/cpp/ccombobox-class_22.cpp)]

##  <a name="getitemheight"></a>CComboBox:: GetItemHeight

Chiamare la funzione membro `GetItemHeight` per recuperare l'altezza degli elementi dell'elenco in una casella combinata.

```
int GetItemHeight(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica il componente della casella combinata di cui è necessario recuperare l'altezza. Se il parametro *nIndex* è-1, viene recuperata l'altezza della parte relativa alla modifica del controllo (o del testo statico) della casella combinata. Se lo stile della casella combinata è [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , *nIndex* specifica l'indice in base zero dell'elemento dell'elenco di cui deve essere recuperato l'altezza. In caso contrario, *nIndex* deve essere impostato su 0.

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, dell'elemento specificato in una casella combinata. Se si verifica un errore, il valore restituito è CB_ERR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#23](../../mfc/reference/codesnippet/cpp/ccombobox-class_23.cpp)]

##  <a name="getlbtext"></a>CComboBox:: GetLBText

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
Punta a un buffer che riceverà la stringa. Il buffer deve contenere spazio sufficiente per la stringa e un carattere null di terminazione.

*rString*<br/>
Riferimento a un oggetto `CString`.

### <a name="return-value"></a>Valore restituito

Lunghezza, in byte, della stringa, escluso il carattere null di terminazione. Se *nIndex* non specifica un indice valido, il valore restituito viene CB_ERR.

### <a name="remarks"></a>Osservazioni

Il secondo formato di questa funzione membro compila un oggetto `CString` con il testo dell'elemento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#24](../../mfc/reference/codesnippet/cpp/ccombobox-class_24.cpp)]

##  <a name="getlbtextlen"></a>CComboBox:: GetLBTextLen

Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.

```
int GetLBTextLen(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della stringa della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa in byte, escluso il carattere null di terminazione. Se *nIndex* non specifica un indice valido, il valore restituito viene CB_ERR.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox:: GetLBText](#getlbtext).

##  <a name="getlocale"></a>CComboBox:: GetLocale

Recupera le impostazioni locali utilizzate dalla casella combinata.

```
LCID GetLocale() const;
```

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) per le stringhe nella casella combinata.

### <a name="remarks"></a>Osservazioni

Le impostazioni locali vengono utilizzate, ad esempio, per determinare l'ordinamento delle stringhe in una casella combinata ordinata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox:: setlocale](#setlocale).

##  <a name="getminvisible"></a>CComboBox:: GetMinVisible

Ottiene il numero minimo di elementi visibili nell'elenco a discesa del controllo casella combinata corrente.

```
int GetMinVisible() const;
```

### <a name="return-value"></a>Valore restituito

Numero minimo di elementi visibili nell'elenco a discesa corrente.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [CB_GETMINVISIBLE](/windows/win32/Controls/cb-setminvisible) , descritto nel Windows SDK.

##  <a name="gettopindex"></a>CComboBox:: GetTopIndex

Recupera l'indice in base zero del primo elemento visibile nella parte della casella di riepilogo della casella combinata.

```
int GetTopIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero del primo elemento visibile nella parte della casella combinata della casella combinata, se ha esito positivo, CB_ERR in caso contrario.

### <a name="remarks"></a>Osservazioni

Inizialmente, l'elemento 0 si trova nella parte superiore della casella di riepilogo, ma se viene eseguito lo scorrimento della casella di riepilogo, è possibile che un altro elemento si trovi nella parte superiore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#25](../../mfc/reference/codesnippet/cpp/ccombobox-class_25.cpp)]

##  <a name="initstorage"></a>CComboBox:: InitStorage

Alloca memoria per archiviare gli elementi della casella di riepilogo nella parte della casella combinata.

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

In caso di esito positivo, il numero massimo di elementi che la parte della casella combinata della casella combinata può archiviare prima che sia necessaria una riallocazione della memoria, in caso contrario CB_ERRSPACE, ovvero non è disponibile memoria sufficiente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione prima di aggiungere un numero elevato di elementi alla parte della casella di riepilogo della `CComboBox`.

Solo Windows 95/98: il parametro *wParam* è limitato ai valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere più di 32.767 elementi. Sebbene il numero di elementi sia limitato, le dimensioni totali degli elementi in una casella di riepilogo sono limitate solo dalla memoria disponibile.

Questa funzione consente di velocizzare l'inizializzazione di caselle di riepilogo con un numero elevato di elementi (più di 100). Viene preallocata la quantità di memoria specificata in modo che le funzioni [AddString](#addstring), [InsertString](#insertstring)e [dir](#dir) successive importino il tempo più breve possibile. È possibile utilizzare le stime per i parametri. Se si esegue la sovrastima, viene allocata una memoria aggiuntiva; Se si sottovaluta, l'allocazione normale viene utilizzata per gli elementi che superano la quantità preallocata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#26](../../mfc/reference/codesnippet/cpp/ccombobox-class_26.cpp)]

##  <a name="insertstring"></a>CComboBox:: InsertString

Inserisce una stringa nella casella di riepilogo di una casella combinata.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene l'indice in base zero della posizione nella casella di riepilogo che riceverà la stringa. Se questo parametro è-1, la stringa viene aggiunta alla fine dell'elenco.

*lpszString*<br/>
Punta a una stringa con terminazione null da inserire.

### <a name="return-value"></a>Valore restituito

Indice in base zero della posizione in cui è stata inserita la stringa. Se si verifica un errore, il valore restituito è CB_ERR. Se non è disponibile spazio sufficiente per archiviare la nuova stringa, il valore restituito è CB_ERRSPACE.

### <a name="remarks"></a>Osservazioni

A differenza della funzione membro [AddString](#addstring) , la funzione membro `InsertString` non genera un elenco con lo stile [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) da ordinare.

> [!NOTE]
>  Questa funzione non è supportata dal controllo `ComboBoxEx` di Windows. Per ulteriori informazioni su questo controllo, vedere [ComboBoxEx Controls](/windows/win32/Controls/comboboxex-controls) nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#27](../../mfc/reference/codesnippet/cpp/ccombobox-class_27.cpp)]

##  <a name="limittext"></a>CComboBox:: LimitText

Limita la lunghezza in byte del testo che l'utente può immettere nel controllo di modifica di una casella combinata.

```
BOOL LimitText(int nMaxChars);
```

### <a name="parameters"></a>Parametri

*nMaxChars*<br/>
Specifica la lunghezza (in byte) del testo che l'utente può immettere. Se questo parametro è 0, la lunghezza del testo viene impostata su 65.535 byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. Se viene chiamato per una casella combinata con lo stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o per una casella combinata senza un controllo di modifica, il valore restituito è CB_ERR.

### <a name="remarks"></a>Osservazioni

Se la casella combinata non dispone del [CBS_AUTOHSCROLL](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles)di stile, l'impostazione del limite di testo maggiore rispetto a quella del controllo di modifica non avrà alcun effetto.

`LimitText` limita solo il testo che l'utente può immettere. Non ha alcun effetto sui testi già presenti nel controllo di modifica quando il messaggio viene inviato, né sulla lunghezza del testo copiato nel controllo di modifica quando viene selezionata una stringa nella casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#28](../../mfc/reference/codesnippet/cpp/ccombobox-class_28.cpp)]

##  <a name="measureitem"></a>CComboBox:: MeasureItem

Chiamata eseguita dal framework quando viene creata una casella combinata con uno stile di creazione del proprietario.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### <a name="parameters"></a>Parametri

*lpMeasureItemStruct*<br/>
Puntatore long a una struttura [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct) .

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare la struttura `MEASUREITEMSTRUCT` per informare le finestre delle dimensioni della casella di riepilogo nella casella combinata. Se la casella combinata viene creata con lo stile [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , il Framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.

L'uso dello stile CBS_OWNERDRAWFIXED in una casella combinata creata dal proprietario creato con la funzione membro [SubclassDlgItem](../../mfc/reference/cwnd-class.md#subclassdlgitem) di `CWnd` comporta ulteriori considerazioni sulla programmazione. Vedere la discussione nella [Nota tecnica 14](../../mfc/tn014-custom-controls.md).

Per una descrizione della struttura `MEASUREITEMSTRUCT`, vedere [CWnd:: OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#29](../../mfc/reference/codesnippet/cpp/ccombobox-class_29.cpp)]

##  <a name="paste"></a>CComboBox::P incolla

Inserisce i dati dagli Appunti nel controllo di modifica della casella combinata in corrispondenza della posizione corrente del cursore.

```
void Paste();
```

### <a name="remarks"></a>Osservazioni

I dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#30](../../mfc/reference/codesnippet/cpp/ccombobox-class_30.cpp)]

##  <a name="resetcontent"></a>CComboBox:: ResetContent

Rimuove tutti gli elementi dalla casella di riepilogo e il controllo di modifica di una casella combinata.

```
void ResetContent();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#31](../../mfc/reference/codesnippet/cpp/ccombobox-class_31.cpp)]

##  <a name="selectstring"></a>CComboBox:: SelectString

Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e la copia nel controllo di modifica.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*nStartAfter*<br/>
Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo all'elemento specificato da *nStartAfter*. Se-1, viene eseguita la ricerca dell'intera casella di riepilogo dall'inizio.

*lpszString*<br/>
Punta alla stringa con terminazione null che contiene il prefisso da ricercare. La ricerca è indipendente dalla distinzione tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento selezionato se è stata trovata la stringa. Se la ricerca ha avuto esito negativo, il valore restituito è CB_ERR e la selezione corrente non viene modificata.

### <a name="remarks"></a>Osservazioni

Viene selezionata una stringa solo se i caratteri iniziali (dal punto iniziale) corrispondono ai caratteri nella stringa di prefisso.

Si noti che le funzioni membro `SelectString` e `FindString` trovano entrambe una stringa, ma la funzione membro `SelectString` seleziona anche la stringa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#32](../../mfc/reference/codesnippet/cpp/ccombobox-class_32.cpp)]

##  <a name="setcuebanner"></a>CComboBox:: SetCueBanner

Imposta il testo cue visualizzato per un controllo casella combinata.

```
BOOL SetCueBanner(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*lpszText*|in Puntatore a un buffer con terminazione null che contiene il testo del suggerimento.|

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il testo cue è un prompt visualizzato nell'area di input del controllo casella combinata. Il testo della stecca viene visualizzato fino a quando l'utente non fornisce l'input.

Questo metodo invia il messaggio di [CB_SETCUEBANNER](/windows/win32/Controls/cb-setcuebanner) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_combobox*, utilizzata per accedere a livello di codice al controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostato il banner cue per il controllo casella combinata.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

##  <a name="setcursel"></a>CComboBox:: CurSel

Seleziona una stringa nella casella di riepilogo di una casella combinata.

```
int SetCurSel(int nSelect);
```

### <a name="parameters"></a>Parametri

*nSelezionare*<br/>
Specifica l'indice in base zero della stringa da selezionare. Se-1, qualsiasi selezione corrente nella casella di riepilogo viene rimossa e il controllo di modifica viene cancellato.

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento selezionato se il messaggio ha esito positivo. Il valore restituito è CB_ERR se *nSelezionare* è maggiore del numero di elementi nell'elenco oppure se *nSelezionare* è impostato su-1, il quale cancella la selezione.

### <a name="remarks"></a>Osservazioni

Se necessario, la casella di riepilogo scorre la stringa in visualizzazione (se la casella di riepilogo è visibile). Il testo nel controllo di modifica della casella combinata viene modificato per riflettere la nuova selezione. Qualsiasi selezione precedente nella casella di riepilogo viene rimossa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#33](../../mfc/reference/codesnippet/cpp/ccombobox-class_35.cpp)]

##  <a name="setdroppedwidth"></a>CComboBox:: SetDroppedWidth

Chiamare questa funzione per impostare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.

```
int SetDroppedWidth(UINT nWidth);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
Larghezza minima consentita della parte della casella di riepilogo della casella combinata, in pixel.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, la nuova larghezza della casella di riepilogo, in caso contrario CB_ERR.

### <a name="remarks"></a>Osservazioni

Questa funzione si applica solo alle caselle combinate con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. Quando viene visualizzata la parte relativa alla casella di riepilogo della casella combinata, la larghezza è maggiore della larghezza minima consentita o della casella combinata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#34](../../mfc/reference/codesnippet/cpp/ccombobox-class_36.cpp)]

##  <a name="seteditsel"></a>CComboBox:: SetEditSel

Seleziona i caratteri nel controllo di modifica di una casella combinata.

```
BOOL SetEditSel(
    int nStartChar,
    int nEndChar);
```

### <a name="parameters"></a>Parametri

*nStartChar*<br/>
Specifica la posizione iniziale. Se la posizione iniziale è impostata su-1, viene rimossa qualsiasi selezione esistente.

*nEndChar*<br/>
Specifica la posizione finale. Se la posizione finale è impostata su-1, viene selezionato tutto il testo dalla posizione iniziale fino all'ultimo carattere del controllo di modifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione membro ha esito positivo; in caso contrario, 0. Viene CB_ERR se `CComboBox` dispone dello stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o non include una casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Le posizioni sono in base zero. Per selezionare il primo carattere del controllo di modifica, è necessario specificare una posizione iniziale pari a 0. La posizione finale è per il carattere subito dopo l'ultimo carattere da selezionare. Per selezionare, ad esempio, i primi quattro caratteri del controllo di modifica, utilizzare una posizione iniziale pari a 0 e una posizione finale pari a 4.

> [!NOTE]
>  Questa funzione non è supportata dal controllo `ComboBoxEx` di Windows. Per ulteriori informazioni su questo controllo, vedere [ComboBoxEx Controls](/windows/win32/Controls/comboboxex-controls) nella Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox:: GetEditSel](#geteditsel).

##  <a name="setextendedui"></a>CComboBox:: SetExtendedUI

Chiamare la funzione membro `SetExtendedUI` per selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

```
int SetExtendedUI(BOOL bExtended = TRUE);
```

### <a name="parameters"></a>Parametri

*bExtended*<br/>
Specifica se la casella combinata deve usare l'interfaccia utente estesa o l'interfaccia utente predefinita. Il valore TRUE seleziona l'interfaccia utente estesa; il valore FALSE consente di selezionare l'interfaccia utente standard.

### <a name="return-value"></a>Valore restituito

CB_OKAY se l'operazione ha esito positivo oppure CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

L'interfaccia utente estesa può essere identificata nei modi seguenti:

- Facendo clic sul controllo statico viene visualizzata la casella di riepilogo solo per le caselle combinate con lo stile CBS_DROPDOWNLIST.

- Premendo il tasto freccia giù viene visualizzata la casella di riepilogo (F4 è disabilitato).

Lo scorrimento nel controllo statico viene disabilitato quando l'elenco di elementi non è visibile (i tasti di direzione sono disabilitati).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox:: GetExtendedUI](#getextendedui).

##  <a name="sethorizontalextent"></a>CComboBox:: SetHorizontalExtent

Imposta la larghezza, in pixel, in base alla quale è possibile scorrere orizzontalmente la parte della casella combinata della casella combinata.

```
void SetHorizontalExtent(UINT nExtent);
```

### <a name="parameters"></a>Parametri

*nExtent*<br/>
Specifica il numero di pixel in base al quale è possibile scorrere orizzontalmente la parte della casella combinata della casella combinata.

### <a name="remarks"></a>Osservazioni

Se la larghezza della casella di riepilogo è inferiore a questo valore, la barra di scorrimento orizzontale scorre orizzontalmente gli elementi nella casella di riepilogo. Se la larghezza della casella di riepilogo è maggiore o uguale a questo valore, la barra di scorrimento orizzontale è nascosta o, se la casella combinata ha lo stile [CBS_DISABLENOSCROLL](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , disabilitato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#35](../../mfc/reference/codesnippet/cpp/ccombobox-class_37.cpp)]

##  <a name="setitemdata"></a>CComboBox:: SetItemData

Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene un indice in base zero dell'elemento da impostare.

*dwItemData*<br/>
Contiene il nuovo valore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione membro `SetItemDataPtr` se l'elemento a 32 bit deve essere un puntatore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#36](../../mfc/reference/codesnippet/cpp/ccombobox-class_38.cpp)]

##  <a name="setitemdataptr"></a>CComboBox:: SetItemDataPtr

Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata come puntatore specificato (**void** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Contiene un indice in base zero dell'elemento.

*pData*<br/>
Contiene il puntatore da associare all'elemento.

### <a name="return-value"></a>Valore restituito

CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo puntatore rimane valido per tutta la durata della casella combinata, anche se la posizione relativa dell'elemento all'interno della casella combinata potrebbe cambiare quando gli elementi vengono aggiunti o rimossi. Di conseguenza, l'indice dell'elemento all'interno della casella può essere modificato, ma il puntatore rimane affidabile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#37](../../mfc/reference/codesnippet/cpp/ccombobox-class_39.cpp)]

##  <a name="setitemheight"></a>CComboBox:: SetItemHeight

Chiamare la funzione membro `SetItemHeight` per impostare l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte di una casella combinata (o testo statico).

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica se è impostata l'altezza degli elementi dell'elenco o l'altezza della parte della casella combinata del controllo (o del testo statico).

Se lo stile della casella combinata è [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) , *nIndex* specifica l'indice in base zero dell'elemento dell'elenco di cui deve essere impostata l'altezza; in caso contrario, *nIndex* deve essere 0 e verrà impostata l'altezza di tutti gli elementi dell'elenco.

Se *nIndex* è-1, è necessario impostare l'altezza della parte del controllo di modifica o del testo statico della casella combinata.

*cyItemHeight*<br/>
Specifica l'altezza, in pixel, del componente della casella combinata identificato da *nIndex*.

### <a name="return-value"></a>Valore restituito

CB_ERR se l'indice o l'altezza non è valido; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'altezza della parte del controllo di modifica (o del testo statico) della casella combinata viene impostata indipendentemente dall'altezza degli elementi dell'elenco. Un'applicazione deve garantire che l'altezza della parte di modifica del controllo (o del testo statico) non sia minore dell'altezza di un particolare elemento della casella di riepilogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#38](../../mfc/reference/codesnippet/cpp/ccombobox-class_40.cpp)]

##  <a name="setlocale"></a>CComboBox:: setlocale

Imposta l'identificatore delle impostazioni locali per la casella combinata.

```
LCID SetLocale(LCID nNewLocale);
```

### <a name="parameters"></a>Parametri

*nNewLocale*<br/>
Nuovo valore dell'identificatore delle impostazioni locali (LCID) da impostare per la casella combinata.

### <a name="return-value"></a>Valore restituito

Valore dell'identificatore delle impostazioni locali (LCID) precedente per la casella combinata.

### <a name="remarks"></a>Osservazioni

Se `SetLocale` non viene chiamato, le impostazioni locali predefinite vengono ottenute dal sistema. Le impostazioni locali predefinite del sistema possono essere modificate tramite l'applicazione regionale (o internazionale) del pannello di controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#39](../../mfc/reference/codesnippet/cpp/ccombobox-class_41.cpp)]

##  <a name="setminvisibleitems"></a>CComboBox:: SetMinVisibleItems

Imposta il numero minimo di elementi visibili nell'elenco a discesa del controllo casella combinata corrente.

```
BOOL SetMinVisibleItems(int iMinVisible);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*non invisibile*|in Specifica il numero minimo di elementi visibili.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [CB_SETMINVISIBLE](/windows/win32/Controls/cb-setminvisible) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, *m_combobox*, utilizzata per accedere a livello di codice al controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente vengono inseriti 20 elementi nell'elenco a discesa di un controllo casella combinata. Quindi specifica che vengono visualizzati almeno 10 elementi quando un utente preme la freccia a discesa.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

##  <a name="settopindex"></a>CComboBox:: SetTopIndex

Garantisce che un particolare elemento sia visibile nella parte della casella di riepilogo della casella combinata.

```
int SetTopIndex(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Specifica l'indice in base zero dell'elemento della casella di riepilogo.

### <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo o CB_ERR se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Il sistema scorre la casella di riepilogo finché l'elemento specificato da *nIndex* non viene visualizzato nella parte superiore della casella di riepilogo o se è stato raggiunto l'intervallo massimo di scorrimento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CComboBox#40](../../mfc/reference/codesnippet/cpp/ccombobox-class_42.cpp)]

##  <a name="showdropdown"></a>CComboBox:: ShowDropDown

Consente di visualizzare o nascondere la casella di riepilogo di una casella combinata con lo stile [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

```
void ShowDropDown(BOOL bShowIt = TRUE);
```

### <a name="parameters"></a>Parametri

*bShowIt*<br/>
Specifica se la casella di riepilogo a discesa deve essere visualizzata o nascosta. Il valore TRUE Mostra la casella di riepilogo. Il valore FALSE nasconde la casella di riepilogo.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, in una casella combinata di questo stile verrà visualizzata la casella di riepilogo.

Questa funzione membro non ha alcun effetto su una casella combinata creata con lo stile [CBS_SIMPLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CComboBox:: GetDroppedState](#getdroppedstate).

## <a name="see-also"></a>Vedere anche

[CTRLBARS di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CButton](../../mfc/reference/cbutton-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[Classe CListBox](../../mfc/reference/clistbox-class.md)<br/>
[Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)<br/>
[Classe CStatic](../../mfc/reference/cstatic-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
