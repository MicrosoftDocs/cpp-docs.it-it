---
title: Classe CHeaderCtrl
ms.date: 11/04/2016
f1_keywords:
- CHeaderCtrl
- AFXCMN/CHeaderCtrl
- AFXCMN/CHeaderCtrl::CHeaderCtrl
- AFXCMN/CHeaderCtrl::ClearAllFilters
- AFXCMN/CHeaderCtrl::ClearFilter
- AFXCMN/CHeaderCtrl::Create
- AFXCMN/CHeaderCtrl::CreateDragImage
- AFXCMN/CHeaderCtrl::CreateEx
- AFXCMN/CHeaderCtrl::DeleteItem
- AFXCMN/CHeaderCtrl::DrawItem
- AFXCMN/CHeaderCtrl::EditFilter
- AFXCMN/CHeaderCtrl::GetBitmapMargin
- AFXCMN/CHeaderCtrl::GetFocusedItem
- AFXCMN/CHeaderCtrl::GetImageList
- AFXCMN/CHeaderCtrl::GetItem
- AFXCMN/CHeaderCtrl::GetItemCount
- AFXCMN/CHeaderCtrl::GetItemDropDownRect
- AFXCMN/CHeaderCtrl::GetItemRect
- AFXCMN/CHeaderCtrl::GetOrderArray
- AFXCMN/CHeaderCtrl::GetOverflowRect
- AFXCMN/CHeaderCtrl::HitTest
- AFXCMN/CHeaderCtrl::InsertItem
- AFXCMN/CHeaderCtrl::Layout
- AFXCMN/CHeaderCtrl::OrderToIndex
- AFXCMN/CHeaderCtrl::SetBitmapMargin
- AFXCMN/CHeaderCtrl::SetFilterChangeTimeout
- AFXCMN/CHeaderCtrl::SetFocusedItem
- AFXCMN/CHeaderCtrl::SetHotDivider
- AFXCMN/CHeaderCtrl::SetImageList
- AFXCMN/CHeaderCtrl::SetItem
- AFXCMN/CHeaderCtrl::SetOrderArray
helpviewer_keywords:
- CHeaderCtrl [MFC], CHeaderCtrl
- CHeaderCtrl [MFC], ClearAllFilters
- CHeaderCtrl [MFC], ClearFilter
- CHeaderCtrl [MFC], Create
- CHeaderCtrl [MFC], CreateDragImage
- CHeaderCtrl [MFC], CreateEx
- CHeaderCtrl [MFC], DeleteItem
- CHeaderCtrl [MFC], DrawItem
- CHeaderCtrl [MFC], EditFilter
- CHeaderCtrl [MFC], GetBitmapMargin
- CHeaderCtrl [MFC], GetFocusedItem
- CHeaderCtrl [MFC], GetImageList
- CHeaderCtrl [MFC], GetItem
- CHeaderCtrl [MFC], GetItemCount
- CHeaderCtrl [MFC], GetItemDropDownRect
- CHeaderCtrl [MFC], GetItemRect
- CHeaderCtrl [MFC], GetOrderArray
- CHeaderCtrl [MFC], GetOverflowRect
- CHeaderCtrl [MFC], HitTest
- CHeaderCtrl [MFC], InsertItem
- CHeaderCtrl [MFC], Layout
- CHeaderCtrl [MFC], OrderToIndex
- CHeaderCtrl [MFC], SetBitmapMargin
- CHeaderCtrl [MFC], SetFilterChangeTimeout
- CHeaderCtrl [MFC], SetFocusedItem
- CHeaderCtrl [MFC], SetHotDivider
- CHeaderCtrl [MFC], SetImageList
- CHeaderCtrl [MFC], SetItem
- CHeaderCtrl [MFC], SetOrderArray
ms.assetid: b847ac90-5fae-4a87-88e0-ca45f77b8b3b
ms.openlocfilehash: 62915da703e1c938e65643ab389999b83c72d459
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70741522"
---
# <a name="cheaderctrl-class"></a>Classe CHeaderCtrl

Fornisce la funzionalità del controllo intestazione comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CHeaderCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CHeaderCtrl::CHeaderCtrl](#cheaderctrl)|Costruisce un oggetto `CHeaderCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeaderCtrl::ClearAllFilters](#clearallfilters)|Cancella tutti i filtri per un controllo intestazione.|
|[CHeaderCtrl:: ClearFilter](#clearfilter)|Cancella il filtro per un controllo intestazione.|
|[CHeaderCtrl:: create](#create)|Crea un controllo intestazione e lo collega a un `CHeaderCtrl` oggetto.|
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.|
|[CHeaderCtrl::CreateEx](#createex)|Crea un controllo intestazione con gli stili estesi di Windows specificati e lo associa a `CListCtrl` un oggetto.|
|[CHeaderCtrl::DeleteItem](#deleteitem)|Elimina un elemento da un controllo intestazione.|
|[CHeaderCtrl::D rawItem](#drawitem)|Disegna l'elemento specificato di un controllo intestazione.|
|[CHeaderCtrl::EditFilter](#editfilter)|Inizia a modificare il filtro specificato di un controllo intestazione.|
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Recupera la larghezza del margine di una bitmap in un controllo intestazione.|
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Ottiene l'identificatore dell'elemento nel controllo intestazione corrente con lo stato attivo.|
|[CHeaderCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco di immagini utilizzato per disegnare elementi di intestazione in un controllo intestazione.|
|[CHeaderCtrl::GetItem](#getitem)|Recupera le informazioni su un elemento in un controllo intestazione.|
|[CHeaderCtrl::GetItemCount](#getitemcount)|Recupera un conteggio degli elementi in un controllo intestazione.|
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Ottiene le informazioni sul rettangolo di delimitazione per il pulsante a discesa specificato in un controllo intestazione.|
|[CHeaderCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un elemento specificato in un controllo intestazione.|
|[CHeaderCtrl:: GetOrderArray](#getorderarray)|Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.|
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|
|[CHeaderCtrl::HitTest](#hittest)|Determina quale elemento di intestazione, se presente, si trova in corrispondenza di un punto specificato.|
|[CHeaderCtrl::InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo intestazione.|
|[CHeaderCtrl:: layout](#layout)|Recupera le dimensioni e la posizione di un controllo intestazione all'interno di un rettangolo specificato.|
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Recupera il valore di indice per un elemento in base al relativo ordine nel controllo intestazione.|
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Imposta la larghezza del margine di una bitmap in un controllo intestazione.|
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Imposta l'intervallo di timeout tra l'ora in cui viene apportata una modifica negli attributi del filtro `HDN_FILTERCHANGE` e l'invio di una notifica.|
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Imposta lo stato attivo su un elemento di intestazione specificato nel controllo intestazione corrente.|
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Consente di modificare il divisore tra gli elementi di intestazione per indicare una selezione e trascinamento manuale di un elemento di intestazione.|
|[CHeaderCtrl::SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo intestazione.|
|[CHeaderCtrl::SetItem](#setitem)|Imposta gli attributi dell'elemento specificato in un controllo intestazione.|
|[CHeaderCtrl:: SetOrderArray](#setorderarray)|Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.|

## <a name="remarks"></a>Note

Un controllo intestazione è una finestra che in genere è posizionata sopra un set di colonne di testo o numeri. Contiene un titolo per ogni colonna, che può essere divisa in parti. L'utente può trascinare i divisori che separano le parti per impostare la larghezza di ogni colonna. Per un'illustrazione di un controllo intestazione, vedere [controlli intestazione](/windows/win32/Controls/header-controls).

Questo controllo (e pertanto la `CHeaderCtrl` classe) è disponibile solo per i programmi eseguiti in Windows 95/98 e Windows NT versione 3,51 e successive.

La funzionalità aggiunta per i controlli comuni di Windows 95/Internet Explorer 4,0 include quanto segue:

- Ordinamento personalizzato dell'elemento intestazione.

- Trascinare e rilasciare l'elemento intestazione per riordinare gli elementi di intestazione. Utilizzare lo stile HDS_DRAGDROP quando si crea l' `CHeaderCtrl` oggetto.

- Testo della colonna dell'intestazione costantemente visibile durante il ridimensionamento della colonna. Utilizzare lo stile HDS_FULLDRAG quando si crea un `CHeaderCtrl` oggetto.

- Header Hot Tracking, che evidenzia l'elemento dell'intestazione quando il puntatore è posizionato sopra di esso. Utilizzare lo stile HDS_HOTTRACK quando si crea l' `CHeaderCtrl` oggetto.

- Supporto per elenchi di immagini. Gli elementi dell'intestazione possono contenere immagini archiviate in un oggetto o in un `CImageList` testo.

Per altre informazioni sull'uso `CHeaderCtrl`di, vedere [controlli](../../mfc/controls-mfc.md) e [uso di CHeaderCtrl](../../mfc/using-cheaderctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHeaderCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="cheaderctrl"></a>CHeaderCtrl:: CHeaderCtrl

Costruisce un oggetto `CHeaderCtrl`.

```
CHeaderCtrl();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]

##  <a name="clearallfilters"></a>CHeaderCtrl:: ClearAllFilters

Cancella tutti i filtri per un controllo intestazione.

```
BOOL ClearAllFilters();
```

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter) con un valore di colonna pari a-1, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]

##  <a name="clearfilter"></a>CHeaderCtrl:: ClearFilter

Cancella il filtro per un controllo intestazione.

```
BOOL ClearFilter(int nColumn);
```

### <a name="parameters"></a>Parametri

*nColumn*<br/>
Valore della colonna che indica il filtro da cancellare.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]

##  <a name="create"></a>CHeaderCtrl:: create

Crea un controllo intestazione e lo collega a un `CHeaderCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo intestazione. Per una descrizione degli stili del controllo intestazione, vedere [stili del controllo intestazione](/windows/win32/Controls/header-control-styles) nel Windows SDK.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo intestazione. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo intestazione, in genere `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo intestazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Note

Si costruisce `CHeaderCtrl` un oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea il controllo intestazione e lo collega `CHeaderCtrl` all'oggetto.

Oltre agli stili del controllo intestazione, è possibile usare gli stili di controllo comuni seguenti per determinare la posizione e il ridimensionamento del controllo intestazione (vedere [stili di controllo comuni](/windows/win32/Controls/common-control-styles) per ulteriori informazioni):

- CCS_BOTTOM fa sì che il controllo si posizioni nella parte inferiore dell'area client della finestra padre e imposta la larghezza in modo che corrisponda alla larghezza della finestra padre.

- CCS_NODIVIDER impedisce che venga disegnata un'evidenziazione di due pixel nella parte superiore del controllo.

- CCS_NOMOVEY fa sì che il controllo venga ridimensionato e spostato orizzontalmente, ma non verticalmente, in risposta a un messaggio WM_SIZE. Se viene utilizzato lo stile CCS_NORESIZE, questo stile non viene applicato. Per impostazione predefinita, i controlli intestazione hanno questo stile.

- CCS_NOPARENTALIGN impedisce che il controllo si sposti automaticamente nella parte superiore o inferiore della finestra padre. Al contrario, il controllo mantiene la posizione all'interno della finestra padre, nonostante le modifiche apportate alle dimensioni della finestra padre. Se viene usato anche lo stile CCS_TOP o CCS_BOTTOM, l'altezza viene modificata in modo predefinito, ma la posizione e la larghezza rimangono invariate.

- CCS_NORESIZE impedisce al controllo di utilizzare la larghezza e l'altezza predefinite quando si imposta la dimensione iniziale o una nuova dimensione. Al contrario, il controllo Usa la larghezza e l'altezza specificate nella richiesta per la creazione o il ridimensionamento.

- CCS_TOP fa sì che il controllo si posizioni nella parte superiore dell'area client della finestra padre e imposta la larghezza in modo che corrisponda alla larghezza della finestra padre.

È anche possibile applicare gli stili della finestra seguenti a un controllo Header. per ulteriori informazioni, vedere [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) :

- WS_CHILD crea una finestra figlio. Non può essere usato con lo stile WS_POPUP.

- WS_VISIBLE crea una finestra che inizialmente è visibile.

- WS_DISABLED crea una finestra che inizialmente è disabilitata.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo all'altro con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e avvia il gruppo successivo, ovvero un gruppo termina in cui inizia il successivo.

- WS_TABSTOP specifica uno dei diversi controlli tramite i quali l'utente può spostarsi usando il tasto TAB. Il tasto TAB consente di spostare l'utente sul controllo successivo specificato dallo stile WS_TABSTOP.

Se si desidera utilizzare gli stili estesi di Windows con il controllo, chiamare [CreateEx](#createex) anziché `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]

##  <a name="createex"></a>CHeaderCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa `CHeaderCtrl` all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*dwStyle*<br/>
Stile del controllo intestazione. Per una descrizione degli stili del controllo intestazione, vedere [stili del controllo intestazione](/windows/win32/Controls/header-control-styles) nel Windows SDK. Per un elenco di stili aggiuntivi, vedere [create](#create) .

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Usare `CreateEx`anziché per applicare gli stili estesi di Windows, specificato dalla prefazione WS_EX_ di Windows Extended Style. `Create`

##  <a name="createdragimage"></a>CHeaderCtrl:: CreateDragImage

Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.

```
CImageList* CreateDragImage(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento all'interno del controllo intestazione. L'immagine assegnata a questo elemento rappresenta la base per l'immagine trasparente.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) in caso di esito positivo; in caso contrario, NULL. L'elenco restituito contiene una sola immagine.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_CREATEDRAGIMAGE](/windows/win32/Controls/hdm-createdragimage), come descritto nel Windows SDK. Viene fornito per supportare il trascinamento e la selezione dell'elemento intestazione.

L' `CImageList` oggetto al quale punta il puntatore restituito è un oggetto temporaneo e viene eliminato nell'elaborazione successiva del tempo di inattività.

##  <a name="deleteitem"></a>CHeaderCtrl::D eleteItem

Elimina un elemento da un controllo intestazione.

```
BOOL DeleteItem(int nPos);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica l'indice in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#5](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]

##  <a name="drawitem"></a>CHeaderCtrl::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un controllo dell'intestazione del disegnatore del proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che descrive l'elemento da disegnare.

### <a name="remarks"></a>Note

Il `itemAction` membro`DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per `CHeaderCtrl` un oggetto disegnato dal proprietario.

L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro venga terminata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]

##  <a name="editfilter"></a>CHeaderCtrl:: EditFilter

Inizia a modificare il filtro specificato di un controllo intestazione.

```
BOOL EditFilter(
    int nColumn,
    BOOL bDiscardChanges);
```

### <a name="parameters"></a>Parametri

*nColumn*<br/>
Colonna da modificare.

*bDiscardChanges*<br/>
Valore che specifica come gestire le modifiche di modifica dell'utente se l'utente è in corso di modifica del filtro quando viene inviato il messaggio [HDM_EDITFILTER](/windows/win32/Controls/hdm-editfilter) .

Specificare TRUE per annullare le modifiche apportate dall'utente o FALSE per accettare le modifiche apportate dall'utente.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo implementa il comportamento del messaggio Win32 [HDM_EDITFILTER](/windows/win32/Controls/hdm-editfilter), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#7](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]

##  <a name="getbitmapmargin"></a>CHeaderCtrl:: GetBitmapMargin

Recupera la larghezza del margine di una bitmap in un controllo intestazione.

```
int GetBitmapMargin() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza del margine della bitmap in pixel.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETBITMAPMARGIN](/windows/win32/Controls/hdm-getbitmapmargin), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#8](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]

##  <a name="getfocuseditem"></a>CHeaderCtrl:: GetFocusedItem

Ottiene l'indice dell'elemento con lo stato attivo nel controllo intestazione corrente.

```
int GetFocusedItem() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento dell'intestazione con lo stato attivo.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [HDM_GETFOCUSEDITEM](/windows/win32/Controls/hdm-getfocuseditem) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la `m_headerCtrl`variabile,, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `SetFocusedItem` seguito `GetFocusedItem` vengono illustrati i metodi e. In una sezione precedente del codice è stato creato un controllo Header con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Nell'esempio seguente viene impostata e quindi confermata l'ultima intestazione di colonna come elemento dello stato attivo.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

##  <a name="getimagelist"></a>CHeaderCtrl:: GetImages

Recupera l'handle di un elenco di immagini utilizzato per disegnare elementi di intestazione in un controllo intestazione.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) .

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETIMAGELIST](/windows/win32/Controls/hdm-getimagelist), come descritto nel Windows SDK. L' `CImageList` oggetto al quale punta il puntatore restituito è un oggetto temporaneo e viene eliminato nell'elaborazione successiva del tempo di inattività.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#9](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]

##  <a name="getitem"></a>CHeaderCtrl:: GetItem

Recupera le informazioni su un elemento di controllo intestazione.

```
BOOL GetItem(
    int nPos,
    HDITEM* pHeaderItem) const;
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Specifica l'indice in base zero dell'elemento da recuperare.

*pHeaderItem*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che riceve il nuovo elemento. Questa struttura viene utilizzata con le `InsertItem` funzioni `SetItem` membro e. Tutti i flag impostati nell' `mask` elemento assicurano che i valori negli elementi corrispondenti siano compilati correttamente al momento della restituzione. Se l' `mask` elemento è impostato su zero, i valori negli altri elementi della struttura sono privi di significato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#10](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]

##  <a name="getitemcount"></a>CHeaderCtrl:: GetItemCount

Recupera un conteggio degli elementi in un controllo intestazione.

```
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi di controllo intestazione in caso di esito positivo; in caso contrario,-1.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl::D eleteitem](#deleteitem).

##  <a name="getitemdropdownrect"></a>CHeaderCtrl:: GetItemDropDownRect

Ottiene il rettangolo di delimitazione del pulsante a discesa per un elemento dell'intestazione nel controllo intestazione corrente.

```
BOOL GetItemDropDownRect(
    int iItem,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iItem*|in Indice in base zero di un elemento dell'intestazione il cui stile è HDF_SPLITBUTTON. Per ulteriori informazioni, vedere il `fmt` membro della struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) .|
|*lpRect*|out Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) per ricevere le informazioni sul rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUE se la funzione ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [HDM_GETITEMDROPDOWNRECT](/windows/win32/Controls/hdm-getitemdropdownrect) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la `m_headerCtrl`variabile,, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `GetItemDropDownRect` seguito viene illustrato il metodo. In una sezione precedente del codice è stato creato un controllo Header con cinque colonne. Nell'esempio di codice seguente viene disegnato un rettangolo 3D intorno alla posizione della prima colonna riservata al pulsante a discesa dell'intestazione.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]

##  <a name="getitemrect"></a>CHeaderCtrl:: GetItemRect

Recupera il rettangolo di delimitazione per un elemento specificato in un controllo intestazione.

```
BOOL GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento di controllo dell'intestazione.

*lpRect*<br/>
Puntatore all'indirizzo di una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che riceve le informazioni sul rettangolo di delimitazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo implementa il comportamento del messaggio Win32 [HDM_GETITEMRECT](/windows/win32/Controls/hdm-getitemrect), come descritto nel Windows SDK.

##  <a name="getorderarray"></a>CHeaderCtrl:: GetOrderArray

Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.

```
BOOL GetOrderArray(
    LPINT piArray,
    int iCount);
```

### <a name="parameters"></a>Parametri

*piArray*<br/>
Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui sono visualizzati da sinistra a destra.

*iCount*<br/>
Numero di elementi di controllo intestazione. Deve essere non negativo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETORDERARRAY](/windows/win32/Controls/hdm-getorderarray), come descritto nel Windows SDK. Viene fornito per supportare l'ordinamento degli elementi di intestazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#11](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]

##  <a name="getoverflowrect"></a>CHeaderCtrl:: GetOverflowRect

Ottiene il rettangolo di delimitazione del pulsante di overflow del controllo intestazione corrente.

```
BOOL GetOverflowRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*lpRect*|out Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che riceve le informazioni sul rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUE se la funzione ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se il controllo intestazione contiene più elementi di quelli che possono essere visualizzati contemporaneamente, il controllo può visualizzare un pulsante di overflow che scorre gli elementi che non sono visibili. Per visualizzare il pulsante di overflow, il controllo intestazione deve avere gli stili HDS_OVERFLOW e HDF_SPLITBUTTON. Il rettangolo di delimitazione racchiude il pulsante di overflow ed esiste solo quando viene visualizzato il pulsante di overflow. Per altre informazioni, vedere [stili del controllo intestazione](/windows/win32/Controls/header-control-styles).

Questo metodo invia il messaggio [HDM_GETOVERFLOWRECT](/windows/win32/Controls/hdm-getoverflowrect) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la `m_headerCtrl`variabile,, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `GetOverflowRect` seguito viene illustrato il metodo. In una sezione precedente del codice è stato creato un controllo Header con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Se alcune colonne non sono visibili, il controllo intestazione disegna un pulsante di overflow. Nell'esempio di codice seguente viene disegnato un rettangolo 3D intorno alla posizione del pulsante di overflow.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]

##  <a name="hittest"></a>CHeaderCtrl:: HitTest

Determina quale elemento di intestazione, se presente, si trova in corrispondenza di un punto specificato.

```
int HitTest(LPHDHITTESTINFO* phdhti);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*phdhti*|[in, out] Puntatore a una struttura [HDHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-hdhittestinfo) che specifica il punto da testare e riceve i risultati del test.|

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento dell'intestazione, se presente, in corrispondenza della posizione specificata; in caso contrario,-1.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [HDM_HITTEST](/windows/win32/Controls/hdm-hittest) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la `m_headerCtrl`variabile,, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `HitTest` seguito viene illustrato il metodo. In una sezione precedente di questo esempio di codice è stato creato un controllo Header con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. In questo esempio viene segnalato l'indice della colonna se è visibile e-1 se la colonna non è visibile.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]

##  <a name="insertitem"></a>CHeaderCtrl:: InsertItem

Inserisce un nuovo elemento in un controllo intestazione in corrispondenza dell'indice specificato.

```
int InsertItem(
    int nPos,
    HDITEM* phdi);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Indice in base zero dell'elemento da inserire. Se il valore è zero, l'elemento viene inserito all'inizio del controllo intestazione. Se il valore è maggiore del valore massimo, l'elemento viene inserito alla fine del controllo intestazione.

*phdi*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che contiene informazioni sull'elemento da inserire.

### <a name="return-value"></a>Valore restituito

Indice del nuovo elemento, se ha esito positivo; in caso contrario,-1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#12](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]

##  <a name="layout"></a>CHeaderCtrl:: layout

Recupera le dimensioni e la posizione di un controllo intestazione all'interno di un rettangolo specificato.

```
BOOL Layout(HDLAYOUT* pHeaderLayout);
```

### <a name="parameters"></a>Parametri

*pHeaderLayout*<br/>
Puntatore a una struttura [HDLAYOUT](/windows/win32/api/commctrl/ns-commctrl-hdlayout) , che contiene informazioni utilizzate per impostare le dimensioni e la posizione di un controllo intestazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata per determinare le dimensioni appropriate per un nuovo controllo intestazione che occupa il rettangolo specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#13](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]

##  <a name="ordertoindex"></a>CHeaderCtrl:: OrderToIndex

Recupera il valore di indice per un elemento in base al relativo ordine nel controllo intestazione.

```
int OrderToIndex(int nOrder) const;
```

### <a name="parameters"></a>Parametri

*nOrder*<br/>
Ordine in base zero in cui l'elemento viene visualizzato nel controllo intestazione, da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento, in base al relativo ordine nel controllo intestazione. L'indice viene conteggiato da sinistra a destra, a partire da 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento della macro Win32 [HDM_ORDERTOINDEX](/windows/win32/controls/hdm-ordertoindex), come descritto nel Windows SDK. Viene fornito per supportare l'ordinamento degli elementi di intestazione.

##  <a name="setbitmapmargin"></a>CHeaderCtrl:: SetBitmapMargin

Imposta la larghezza del margine di una bitmap in un controllo intestazione.

```
int SetBitmapMargin(int nWidth);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
Larghezza, espressa in pixel, del margine che racchiude una bitmap all'interno di un controllo intestazione esistente.

### <a name="return-value"></a>Valore restituito

Larghezza del margine della bitmap in pixel.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETBITMAPMARGIN](/windows/win32/Controls/hdm-setbitmapmargin), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#14](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]

##  <a name="setfilterchangetimeout"></a>CHeaderCtrl:: SetFilterChangeTimeout

Imposta l'intervallo di timeout tra l'ora in cui viene apportata una modifica negli attributi di filtro e l'invio di una notifica [HDN_FILTERCHANGE](/windows/win32/Controls/hdn-filterchange) .

```
int SetFilterChangeTimeout(DWORD dwTimeOut);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Valore di timeout, in millisecondi.

### <a name="return-value"></a>Valore restituito

Indice del controllo filtro da modificare.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETFILTERCHANGETIMEOUT](/windows/win32/Controls/hdm-setfilterchangetimeout), come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#15](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]

##  <a name="setfocuseditem"></a>CHeaderCtrl:: SetFocusedItem

Imposta lo stato attivo su un elemento di intestazione specificato nel controllo intestazione corrente.

```
BOOL SetFocusedItem(int iItem);
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*iItem*|in Indice in base zero di un elemento dell'intestazione.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il messaggio [HDM_SETFOCUSEDITEM](/windows/win32/Controls/hdm-setfocuseditem) , descritto nella Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la `m_headerCtrl`variabile,, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di `SetFocusedItem` seguito `GetFocusedItem` vengono illustrati i metodi e. In una sezione precedente del codice è stato creato un controllo Header con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Nell'esempio seguente viene impostata e quindi confermata l'ultima intestazione di colonna come elemento dello stato attivo.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

##  <a name="sethotdivider"></a>CHeaderCtrl:: SetHotDivider

Consente di modificare il divisore tra gli elementi di intestazione per indicare una selezione e trascinamento manuale di un elemento di intestazione.

```
int SetHotDivider(CPoint pt);
int SetHotDivider(int nIndex);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Posizione del puntatore. Il controllo intestazione evidenzia il separatore appropriato in base alla posizione del puntatore.

*nIndex*<br/>
Indice del divisore evidenziato.

### <a name="return-value"></a>Valore restituito

Indice del divisore evidenziato.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETHOTDIVIDER](/windows/win32/Controls/hdm-sethotdivider), come descritto nel Windows SDK. Viene fornito per supportare il trascinamento e la selezione dell'elemento intestazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#16](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]

##  <a name="setimagelist"></a>CHeaderCtrl:: seimagine

Assegna un elenco di immagini a un controllo intestazione.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Puntatore a un `CImageList` oggetto contenente l'elenco di immagini da assegnare al controllo intestazione.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CImageList](../../mfc/reference/cimagelist-class.md) assegnato in precedenza al controllo intestazione.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETIMAGELIST](/windows/win32/Controls/hdm-setimagelist), come descritto nel Windows SDK. L' `CImageList` oggetto al quale punta il puntatore restituito è un oggetto temporaneo e viene eliminato nell'elaborazione successiva del tempo di inattività.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl:: GetImage](#getimagelist).

##  <a name="setitem"></a>CHeaderCtrl:: SetItem

Imposta gli attributi dell'elemento specificato in un controllo intestazione.

```
BOOL SetItem(
    int nPos,
    HDITEM* pHeaderItem);
```

### <a name="parameters"></a>Parametri

*nPos*<br/>
Indice in base zero dell'elemento da modificare.

*pHeaderItem*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che contiene informazioni sul nuovo elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl:: GetItem](#getitem).

##  <a name="setorderarray"></a>CHeaderCtrl:: SetOrderArray

Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.

```
BOOL SetOrderArray(
    int iCount,
    LPINT piArray);
```

### <a name="parameters"></a>Parametri

*iCount*<br/>
Numero di elementi di controllo intestazione.

*piArray*<br/>
Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui sono visualizzati da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento della macro Win32 [HDM_SETORDERARRAY](/windows/win32/Controls/hdm-setorderarray), come descritto nel Windows SDK. Viene fornito per supportare l'ordinamento degli elementi di intestazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl:: GetOrderArray](#getorderarray).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)<br/>
[Classe CImageList](../../mfc/reference/cimagelist-class.md)
