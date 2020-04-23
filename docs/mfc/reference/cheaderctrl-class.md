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
ms.openlocfilehash: de1705d47c5692d3563bc7d9cb2646531819197a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750916"
---
# <a name="cheaderctrl-class"></a>Classe CHeaderCtrl

Fornisce la funzionalità del controllo intestazione comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CHeaderCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeaderCtrl::CHeaderCtrl](#cheaderctrl)|Costruisce un oggetto `CHeaderCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeaderCtrl::ClearAllFilters](#clearallfilters)|Cancella tutti i filtri per un controllo intestazione.|
|[CHeaderCtrl::ClearFilter](#clearfilter)|Cancella il filtro per un controllo intestazione.|
|[CHeaderCtrl::Crea](#create)|Crea un controllo intestazione e `CHeaderCtrl` lo associa a un oggetto.|
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.|
|[CHeaderCtrl::CreateEx](#createex)|Crea un controllo intestazione con gli stili estesi `CListCtrl` di Windows specificati e lo associa a un oggetto.|
|[CHeaderCtrl::DeleteItem](#deleteitem)|Elimina un elemento da un controllo intestazione.|
|[CHeaderCtrl::DrawItem](#drawitem)|Disegna l'elemento specificato di un controllo intestazione.|
|[CHeaderCtrl::ModificaFiltro](#editfilter)|Avvia la modifica del filtro specificato di un controllo intestazione.|
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Recupera la larghezza del margine di una bitmap in un controllo intestazione.|
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Ottiene l'identificatore dell'elemento nel controllo intestazione corrente che ha lo stato attivo.|
|[CHeaderCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco immagini utilizzato per gli elementi di intestazione del disegno in un controllo intestazione.|
|[CHeaderCtrl::GetItem](#getitem)|Recupera informazioni su un elemento in un controllo intestazione.|
|[CHeaderCtrl::GetItemCount](#getitemcount)|Recupera un conteggio degli elementi in un controllo intestazione.|
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Ottiene le informazioni del rettangolo di delimitazione per il pulsante a discesa specificato in un controllo intestazione.|
|[CHeaderCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.|
|[CHeaderCtrl::GetOrderArray](#getorderarray)|Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.|
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|
|[CHeaderCtrl::HitTest](#hittest)|Determina quale elemento dell'intestazione, se presente, si trova in un punto specificato.|
|[CHeaderCtrl::InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo intestazione.|
|[CHeaderCtrl::Layout](#layout)|Recupera le dimensioni e la posizione di un controllo intestazione all'interno di un rettangolo specificato.|
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Recupera il valore di indice per un elemento in base al relativo ordine nel controllo intestazione.|
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Imposta la larghezza del margine di una bitmap in un controllo intestazione.|
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Imposta l'intervallo di timeout tra il momento in cui `HDN_FILTERCHANGE` viene apportata una modifica negli attributi del filtro e la registrazione di una notifica.|
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Imposta lo stato attivo su un elemento di intestazione specificato nel controllo intestazione corrente.|
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Modifica il divisore tra gli elementi dell'intestazione per indicare un trascinamento manuale di un elemento dell'intestazione.|
|[CHeaderCtrl::SetImageList](#setimagelist)|Assegna un elenco immagini a un controllo intestazione.|
|[CHeaderCtrl::SetItem](#setitem)|Imposta gli attributi dell'elemento specificato in un controllo intestazione.|
|[CHeaderCtrl::SetOrderArray](#setorderarray)|Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.|

## <a name="remarks"></a>Osservazioni

Un controllo intestazione è una finestra che in genere è posizionata sopra un set di colonne di testo o numeri. Contiene un titolo per ogni colonna e può essere diviso in parti. L'utente può trascinare i divisori che separano le parti per impostare la larghezza di ogni colonna. Per un'illustrazione di un controllo intestazione, vedere [Controlli intestazione](/windows/win32/Controls/header-controls).

Questo controllo (e `CHeaderCtrl` quindi la classe) è disponibile solo per i programmi eseguiti in Windows 95/98 e Windows NT versione 3.51 e successive.

Le funzionalità aggiunte per i controlli comuni di Windows 95/Internet Explorer 4.0 includono quanto segue:

- Ordinamento personalizzato dell'elemento dell'intestazione.

- Trascinamento e rilascio degli elementi dell'intestazione, per il riordinamento degli elementi dell'intestazione. Utilizzare lo stile HDS_DRAGDROP `CHeaderCtrl` quando si crea l'oggetto.

- Testo della colonna dell'intestazione costantemente visualizzabile durante il ridimensionamento della colonna. Utilizzare lo stile HDS_FULLDRAG `CHeaderCtrl` quando si crea un oggetto.

- Rilevamento a caldo dell'intestazione, che evidenzia l'elemento dell'intestazione quando il puntatore viene posizionato su di esso. Utilizzare lo stile HDS_HOTTRACK `CHeaderCtrl` quando si crea l'oggetto.

- Supporto dell'elenco immagini. Gli elementi di intestazione `CImageList` possono contenere immagini archiviate in un oggetto o in un testo.

Per ulteriori informazioni `CHeaderCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e Utilizzo di [CHeaderCtrl](../../mfc/using-cheaderctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHeaderCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cheaderctrlcheaderctrl"></a><a name="cheaderctrl"></a>CHeaderCtrl::CHeaderCtrl

Costruisce un oggetto `CHeaderCtrl`.

```
CHeaderCtrl();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]

## <a name="cheaderctrlclearallfilters"></a><a name="clearallfilters"></a>CHeaderCtrl::ClearAllFilters

Cancella tutti i filtri per un controllo intestazione.

```
BOOL ClearAllFilters();
```

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter) con un valore di colonna -1, come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]

## <a name="cheaderctrlclearfilter"></a><a name="clearfilter"></a>CHeaderCtrl::ClearFilter

Cancella il filtro per un controllo intestazione.

```
BOOL ClearFilter(int nColumn);
```

### <a name="parameters"></a>Parametri

*nColonna*<br/>
Valore della colonna che indica il filtro da cancellare.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]

## <a name="cheaderctrlcreate"></a><a name="create"></a>CHeaderCtrl::Crea

Crea un controllo intestazione e `CHeaderCtrl` lo associa a un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo intestazione. Per una descrizione degli stili del controllo intestazione, vedere [Stili di controllo intestazione](/windows/win32/Controls/header-control-styles) in Windows SDK.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo intestazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo `CDialog`intestazione, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo intestazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Costruire un `CHeaderCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore e quindi chiamare `Create`, che crea `CHeaderCtrl` il controllo intestazione e lo associa all'oggetto .

Oltre agli stili del controllo intestazione, è possibile utilizzare i seguenti stili di controllo comuni per determinare il modo in cui il controllo intestazione posiziona e ridimensiona se stesso (vedere Stili di controllo comuni per ulteriori informazioni):In addition to the [header control styles,](/windows/win32/Controls/common-control-styles) you can use the following common control styles to determine how the header control positions and resizes itself (see Common Control Styles for more information):

- CCS_BOTTOM Fa sì che il controllo si posizione nella parte inferiore dell'area client della finestra padre e imposta la larghezza in modo che sia uguale alla larghezza della finestra padre.

- CCS_NODIVIDER Impedisce il disegno di un'evidenziazione di due pixel nella parte superiore del controllo.

- CCS_NOMOVEY Fa sì che il controllo si ridimensiona e si sposti orizzontalmente, ma non verticalmente, in risposta a un messaggio di WM_SIZE. Se viene utilizzato lo stile CCS_NORESIZE, questo stile non si applica. I controlli intestazione hanno questo stile per impostazione predefinita.

- CCS_NOPARENTALIGN Impedisce al controllo di spostarsi automaticamente nella parte superiore o inferiore della finestra padre. Al contrario, il controllo mantiene la propria posizione all'interno della finestra padre nonostante le modifiche alle dimensioni della finestra padre. Se viene utilizzato anche lo stile CCS_TOP o CCS_BOTTOM, l'altezza viene regolata sul valore predefinito, ma la posizione e la larghezza rimangono invariate.

- CCS_NORESIZE Impedisce al controllo di utilizzare la larghezza e l'altezza predefinite quando si impostano le dimensioni iniziali o una nuova dimensione. Al contrario, il controllo utilizza la larghezza e l'altezza specificate nella richiesta di creazione o ridimensionamento.

- CCS_TOP Fa sì che il controllo si posizione nella parte superiore dell'area client della finestra padre e imposta la larghezza in modo che sia uguale alla larghezza della finestra padre.

È inoltre possibile applicare i seguenti stili di finestra a un controllo intestazione (vedere [Stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) per ulteriori informazioni):You can also apply the following window styles to a header control (see Window Styles for more information):

- WS_CHILD Crea una finestra figlio. Non può essere utilizzato con lo stile WS_POPUP.

- WS_VISIBLE Crea una finestra inizialmente visibile.

- WS_DISABLED Crea una finestra inizialmente disabilitata.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo a quello successivo con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e inizia il gruppo successivo, ovvero un gruppo termina nel punto in cui inizia il successivo.

- WS_TABSTOP Specifica uno dei diversi controlli tramite i quali l'utente può spostarsi utilizzando il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato dallo stile WS_TABSTOP.

Se si desidera utilizzare gli stili di finestre estese `Create`con il controllo, chiamare [CreateEx](#createex) anziché .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]

## <a name="cheaderctrlcreateex"></a><a name="createex"></a>CHeaderCtrl::CreateEx

Crea un controllo (una finestra figlio) `CHeaderCtrl` e lo associa all'oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso del controllo in fase di creazione. Per un elenco di stili di Windows estesi, vedere il parametro *dwExStyle* per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Stile del controllo intestazione. Per una descrizione degli stili del controllo intestazione, vedere [Stili di controllo intestazione](/windows/win32/Controls/header-control-styles) in Windows SDK. Consultate [Creare](#create) per un elenco di stili aggiuntivi.

*Rect*<br/>
Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece di `Create` applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="cheaderctrlcreatedragimage"></a><a name="createdragimage"></a>CHeaderCtrl::CreateDragImage

Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.

```
CImageList* CreateDragImage(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento all'interno del controllo intestazione. L'immagine assegnata a questo elemento è la base per l'immagine trasparente.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto se ha esito positivo; in caso contrario NULL. L'elenco restituito contiene una sola immagine.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_CREATEDRAGIMAGE](/windows/win32/Controls/hdm-createdragimage), come descritto in Windows SDK. Viene fornito per supportare il trascinamento della selezione dell'elemento dell'intestazione.

L'oggetto `CImageList` a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato nella successiva elaborazione in tempo di inattività.

## <a name="cheaderctrldeleteitem"></a><a name="deleteitem"></a>CHeaderCtrl::DeleteItem

Elimina un elemento da un controllo intestazione.

```
BOOL DeleteItem(int nPos);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica l'indice in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#5](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]

## <a name="cheaderctrldrawitem"></a><a name="drawitem"></a>CHeaderCtrl::DrawItem

Chiamato dal framework quando un aspetto visivo di un controllo intestazione proprietario-draw viene modificato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che descrive l'elemento da disegnare.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione `CHeaderCtrl` membro per implementare il disegno per un oggetto di disegno del proprietario.

L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro termini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]

## <a name="cheaderctrleditfilter"></a><a name="editfilter"></a>CHeaderCtrl::ModificaFiltro

Inizia a modificare il filtro specificato di un controllo intestazione.

```
BOOL EditFilter(
    int nColumn,
    BOOL bDiscardChanges);
```

### <a name="parameters"></a>Parametri

*nColonna*<br/>
Colonna da modificare.

*bSciStori*<br/>
Valore che specifica come gestire le modifiche di modifica dell'utente se l'utente è in fase di modifica del filtro quando viene inviato il [messaggio HDM_EDITFILTER.](/windows/win32/Controls/hdm-editfilter)

Specificare TRUE per ignorare le modifiche apportate dall'utente o FALSE per accettare le modifiche apportate dall'utente.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo implementa il comportamento del messaggio Win32 [HDM_EDITFILTER](/windows/win32/Controls/hdm-editfilter), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#7](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]

## <a name="cheaderctrlgetbitmapmargin"></a><a name="getbitmapmargin"></a>CHeaderCtrl::GetBitmapMargin

Recupera la larghezza del margine di una bitmap in un controllo intestazione.

```
int GetBitmapMargin() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza del margine bitmap in pixel.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETBITMAPMARGIN](/windows/win32/Controls/hdm-getbitmapmargin), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#8](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]

## <a name="cheaderctrlgetfocuseditem"></a><a name="getfocuseditem"></a>CHeaderCtrl::GetFocusedItem

Ottiene l'indice dell'elemento che ha lo stato attivo nel controllo intestazione corrente.

```
int GetFocusedItem() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento di intestazione con lo stato attivo.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di HDM_GETFOCUSEDITEM,](/windows/win32/Controls/hdm-getfocuseditem) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_headerCtrl`, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di `SetFocusedItem` codice `GetFocusedItem` riportato di seguito vengono illustrati i metodi e . In una sezione precedente del codice è stato creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Nell'esempio seguente viene impostata e quindi confermata l'ultima intestazione di colonna come elemento attivo.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

## <a name="cheaderctrlgetimagelist"></a><a name="getimagelist"></a>CHeaderCtrl::GetImageList

Recupera l'handle di un elenco immagini utilizzato per gli elementi di intestazione del disegno in un controllo intestazione.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETIMAGELIST](/windows/win32/Controls/hdm-getimagelist), come descritto in Windows SDK. L'oggetto `CImageList` a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato nella successiva elaborazione in tempo di inattività.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#9](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]

## <a name="cheaderctrlgetitem"></a><a name="getitem"></a>CHeaderCtrl::GetItem

Recupera informazioni su un elemento di controllo intestazione.

```
BOOL GetItem(
    int nPos,
    HDITEM* pHeaderItem) const;
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Specifica l'indice in base zero dell'elemento da recuperare.

*pHeaderItem (elemento pHeaderItem)*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che riceve il nuovo elemento. Questa struttura viene `InsertItem` utilizzata `SetItem` con le funzioni membro e . Tutti i flag `mask` impostati nell'elemento assicurano che i valori negli elementi corrispondenti vengano compilati correttamente al momento della restituzione. Se `mask` l'elemento è impostato su zero, i valori negli altri elementi della struttura sono privi di significato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#10](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]

## <a name="cheaderctrlgetitemcount"></a><a name="getitemcount"></a>CHeaderCtrl::GetItemCount

Recupera un conteggio degli elementi in un controllo intestazione.

```
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi del controllo intestazione in caso di esito positivo; in caso contrario - 1.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl::DeleteItem](#deleteitem).

## <a name="cheaderctrlgetitemdropdownrect"></a><a name="getitemdropdownrect"></a>CHeaderCtrl::GetItemDropDownRect

Ottiene il rettangolo di delimitazione del pulsante a discesa per un elemento di intestazione nel controllo intestazione corrente.

```
BOOL GetItemDropDownRect(
    int iItem,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iItem*|[in] Indice in base zero di un elemento di intestazione il cui stile è HDF_SPLITBUTTON. Per ulteriori informazioni, `fmt` vedere il membro della struttura [HDITEM.](/windows/win32/api/commctrl/ns-commctrl-hditemw)|
|*Lprect*|[fuori] Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) per ricevere le informazioni sul rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUESe questa funzione ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di HDM_GETITEMDROPDOWNRECT,](/windows/win32/Controls/hdm-getitemdropdownrect) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_headerCtrl`, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Esempio di codice `GetItemDropDownRect` seguente viene illustrato il metodo . In una sezione precedente del codice è stato creato un controllo intestazione con cinque colonne. Esempio di codice seguente disegna un rettangolo 3D intorno alla posizione nella prima colonna riservata per il pulsante a discesa intestazione.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]

## <a name="cheaderctrlgetitemrect"></a><a name="getitemrect"></a>CHeaderCtrl::GetItemRect

Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.

```
BOOL GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero dell'elemento del controllo intestazione.

*Lprect*<br/>
Puntatore all'indirizzo di una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che riceve le informazioni sul rettangolo di delimitazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo implementa il comportamento del messaggio Win32 [HDM_GETITEMRECT](/windows/win32/Controls/hdm-getitemrect), come descritto in Windows SDK.

## <a name="cheaderctrlgetorderarray"></a><a name="getorderarray"></a>CHeaderCtrl::GetOrderArray

Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.

```
BOOL GetOrderArray(
    LPINT piArray,
    int iCount);
```

### <a name="parameters"></a>Parametri

*piArray*<br/>
Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui vengono visualizzati da sinistra a destra.

*iCount (informazioni in cui l'*<br/>
Numero di elementi del controllo intestazione. Deve essere non negativo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETORDERARRAY](/windows/win32/Controls/hdm-getorderarray), come descritto in Windows SDK. Viene fornito per supportare l'ordine degli elementi dell'intestazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#11](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]

## <a name="cheaderctrlgetoverflowrect"></a><a name="getoverflowrect"></a>CHeaderCtrl::GetOverflowRect

Ottiene il rettangolo di delimitazione del pulsante di overflow del controllo intestazione corrente.

```
BOOL GetOverflowRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Lprect*|[fuori] Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che riceve le informazioni sul rettangolo di delimitazione.|

### <a name="return-value"></a>Valore restituito

TRUESe questa funzione ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il controllo intestazione contiene più elementi di quelli che possono essere visualizzati contemporaneamente, il controllo può visualizzare un pulsante di overflow che scorre fino a elementi non visibili. Il controllo intestazione deve avere gli stili HDS_OVERFLOW e HDF_SPLITBUTTON per visualizzare il pulsante di overflow. Il rettangolo di delimitazione racchiude il pulsante di overflow ed esiste solo quando viene visualizzato il pulsante di overflow. Per ulteriori informazioni, vedere [Stili del controllo Intestazione](/windows/win32/Controls/header-control-styles).

Questo metodo invia il [messaggio HDM_GETOVERFLOWRECT,](/windows/win32/Controls/hdm-getoverflowrect) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_headerCtrl`, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Esempio di codice `GetOverflowRect` seguente viene illustrato il metodo . In una sezione precedente del codice è stato creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Se alcune colonne non sono visibili, il controllo intestazione disegna un pulsante di overflow. Esempio di codice seguente disegna un rettangolo 3D intorno alla posizione del pulsante di overflow.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]

## <a name="cheaderctrlhittest"></a><a name="hittest"></a>CHeaderCtrl::HitTest

Determina quale elemento dell'intestazione, se presente, si trova in un punto specificato.

```
int HitTest(LPHDHITTESTINFO* phdhti);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*phdhti*|[in, out] Puntatore a una struttura [HDHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-hdhittestinfo) che specifica il punto da testare e riceve i risultati del test.|

### <a name="return-value"></a>Valore restituito

Indice in base zero dell'elemento di intestazione, se presente, nella posizione specificata; in caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [HDM_HITTEST,](/windows/win32/Controls/hdm-hittest) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_headerCtrl`, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Esempio di codice `HitTest` seguente viene illustrato il metodo . In una sezione precedente di questo esempio di codice è stato creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. In questo esempio viene segnalato l'indice della colonna se è visibile e -1 se la colonna non è visibile.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]

## <a name="cheaderctrlinsertitem"></a><a name="insertitem"></a>CHeaderCtrl::InsertItem

Inserisce un nuovo elemento in un controllo intestazione in corrispondenza dell'indice specificato.

```
int InsertItem(
    int nPos,
    HDITEM* phdi);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Indice in base zero dell'elemento da inserire. Se il valore è zero, l'elemento viene inserito all'inizio del controllo intestazione. Se il valore è maggiore del valore massimo, l'elemento viene inserito alla fine del controllo intestazione.

*phdi*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che contiene informazioni sull'elemento da inserire.

### <a name="return-value"></a>Valore restituito

Indice del nuovo elemento se ha esito positivo; in caso contrario - 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#12](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]

## <a name="cheaderctrllayout"></a><a name="layout"></a>CHeaderCtrl::Layout

Recupera le dimensioni e la posizione di un controllo intestazione all'interno di un rettangolo specificato.

```
BOOL Layout(HDLAYOUT* pHeaderLayout);
```

### <a name="parameters"></a>Parametri

*pHeaderLayout (Layout di intestazione)*<br/>
Puntatore a una struttura [HDLAYOUT,](/windows/win32/api/commctrl/ns-commctrl-hdlayout) che contiene informazioni utilizzate per impostare le dimensioni e la posizione di un controllo intestazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per determinare le dimensioni appropriate per un nuovo controllo intestazione che deve occupare il rettangolo specificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#13](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]

## <a name="cheaderctrlordertoindex"></a><a name="ordertoindex"></a>CHeaderCtrl::OrderToIndex

Recupera il valore di indice per un elemento in base al relativo ordine nel controllo intestazione.

```
int OrderToIndex(int nOrder) const;
```

### <a name="parameters"></a>Parametri

*nOrdine*<br/>
Ordine in base zero in cui l'elemento viene visualizzato nel controllo intestazione, da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Indice dell'elemento, in base al relativo ordine nel controllo intestazione. L'indice conta da sinistra a destra, a partire da 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della macro Win32 [HDM_ORDERTOINDEX](/windows/win32/controls/hdm-ordertoindex), come descritto in Windows SDK. Viene fornito per supportare l'ordine degli elementi dell'intestazione.

## <a name="cheaderctrlsetbitmapmargin"></a><a name="setbitmapmargin"></a>CHeaderCtrl::SetBitmapMargin

Imposta la larghezza del margine di una bitmap in un controllo intestazione.

```
int SetBitmapMargin(int nWidth);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
Larghezza, specificata in pixel, del margine che circonda una bitmap all'interno di un controllo intestazione esistente.

### <a name="return-value"></a>Valore restituito

Larghezza del margine bitmap in pixel.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETBITMAPMARGIN](/windows/win32/Controls/hdm-setbitmapmargin), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#14](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]

## <a name="cheaderctrlsetfilterchangetimeout"></a><a name="setfilterchangetimeout"></a>CHeaderCtrl::SetFilterChangeTimeout

Imposta l'intervallo di timeout tra il momento in cui viene apportata una modifica negli attributi del filtro e la registrazione di una notifica [HDN_FILTERCHANGE.](/windows/win32/Controls/hdn-filterchange)

```
int SetFilterChangeTimeout(DWORD dwTimeOut);
```

### <a name="parameters"></a>Parametri

*dwTimeOut*<br/>
Valore di timeout, in millisecondi.

### <a name="return-value"></a>Valore restituito

Indice del controllo filtro da modificare.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETFILTERCHANGETIMEOUT](/windows/win32/Controls/hdm-setfilterchangetimeout), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#15](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]

## <a name="cheaderctrlsetfocuseditem"></a><a name="setfocuseditem"></a>CHeaderCtrl::SetFocusedItem

Imposta lo stato attivo su un elemento di intestazione specificato nel controllo intestazione corrente.

```
BOOL SetFocusedItem(int iItem);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iItem*|[in] Indice in base zero di un elemento di intestazione.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio HDM_SETFOCUSEDITEM,](/windows/win32/Controls/hdm-setfocuseditem) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_headerCtrl`, utilizzata per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### <a name="example"></a>Esempio

Nell'esempio di `SetFocusedItem` codice `GetFocusedItem` riportato di seguito vengono illustrati i metodi e . In una sezione precedente del codice è stato creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non sia visibile. Nell'esempio seguente viene impostata e quindi confermata l'ultima intestazione di colonna come elemento attivo.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

## <a name="cheaderctrlsethotdivider"></a><a name="sethotdivider"></a>CHeaderCtrl::SetHotDivider

Modifica il divisore tra gli elementi dell'intestazione per indicare un trascinamento manuale di un elemento dell'intestazione.

```
int SetHotDivider(CPoint pt);
int SetHotDivider(int nIndex);
```

### <a name="parameters"></a>Parametri

*pt*<br/>
Posizione del puntatore. Il controllo intestazione evidenzia il divisore appropriato in base alla posizione del puntatore.

*nIndex*<br/>
Indice del divisore evidenziato.

### <a name="return-value"></a>Valore restituito

Indice del divisore evidenziato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETHOTDIVIDER](/windows/win32/Controls/hdm-sethotdivider), come descritto in Windows SDK. Viene fornito per supportare il trascinamento della selezione dell'elemento dell'intestazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CHeaderCtrl#16](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]

## <a name="cheaderctrlsetimagelist"></a><a name="setimagelist"></a>CHeaderCtrl::SetImageList

Assegna un elenco immagini a un controllo intestazione.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList (elenco immagine)*<br/>
Puntatore a `CImageList` un oggetto contenente l'elenco immagini da assegnare al controllo intestazione.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CImageList](../../mfc/reference/cimagelist-class.md) precedentemente assegnato al controllo intestazione.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETIMAGELIST](/windows/win32/Controls/hdm-setimagelist), come descritto in Windows SDK. L'oggetto `CImageList` a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato nella successiva elaborazione in tempo di inattività.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl::GetImageList](#getimagelist).

## <a name="cheaderctrlsetitem"></a><a name="setitem"></a>CHeaderCtrl::SetItem

Imposta gli attributi dell'elemento specificato in un controllo intestazione.

```
BOOL SetItem(
    int nPos,
    HDITEM* pHeaderItem);
```

### <a name="parameters"></a>Parametri

*Npos*<br/>
Indice in base zero dell'elemento da modificare.

*pHeaderItem (elemento pHeaderItem)*<br/>
Puntatore a una struttura [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) che contiene informazioni sul nuovo elemento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl::GetItem](#getitem).

## <a name="cheaderctrlsetorderarray"></a><a name="setorderarray"></a>CHeaderCtrl::SetOrderArray

Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.

```
BOOL SetOrderArray(
    int iCount,
    LPINT piArray);
```

### <a name="parameters"></a>Parametri

*iCount (informazioni in cui l'*<br/>
Numero di elementi del controllo intestazione.

*piArray*<br/>
Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui vengono visualizzati da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento della macro Win32 [HDM_SETORDERARRAY](/windows/win32/Controls/hdm-setorderarray), come descritto in Windows SDK. Viene fornito per supportare l'ordine degli elementi dell'intestazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CHeaderCtrl::GetOrderArray](#getorderarray).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)<br/>
[Classe CImageList](../../mfc/reference/cimagelist-class.md)
