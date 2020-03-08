---
title: Classe CTabCtrl
ms.date: 11/04/2016
f1_keywords:
- CTabCtrl
- AFXCMN/CTabCtrl
- AFXCMN/CTabCtrl::CTabCtrl
- AFXCMN/CTabCtrl::AdjustRect
- AFXCMN/CTabCtrl::Create
- AFXCMN/CTabCtrl::CreateEx
- AFXCMN/CTabCtrl::DeleteAllItems
- AFXCMN/CTabCtrl::DeleteItem
- AFXCMN/CTabCtrl::DeselectAll
- AFXCMN/CTabCtrl::DrawItem
- AFXCMN/CTabCtrl::GetCurFocus
- AFXCMN/CTabCtrl::GetCurSel
- AFXCMN/CTabCtrl::GetExtendedStyle
- AFXCMN/CTabCtrl::GetImageList
- AFXCMN/CTabCtrl::GetItem
- AFXCMN/CTabCtrl::GetItemCount
- AFXCMN/CTabCtrl::GetItemRect
- AFXCMN/CTabCtrl::GetItemState
- AFXCMN/CTabCtrl::GetRowCount
- AFXCMN/CTabCtrl::GetToolTips
- AFXCMN/CTabCtrl::HighlightItem
- AFXCMN/CTabCtrl::HitTest
- AFXCMN/CTabCtrl::InsertItem
- AFXCMN/CTabCtrl::RemoveImage
- AFXCMN/CTabCtrl::SetCurFocus
- AFXCMN/CTabCtrl::SetCurSel
- AFXCMN/CTabCtrl::SetExtendedStyle
- AFXCMN/CTabCtrl::SetImageList
- AFXCMN/CTabCtrl::SetItem
- AFXCMN/CTabCtrl::SetItemExtra
- AFXCMN/CTabCtrl::SetItemSize
- AFXCMN/CTabCtrl::SetItemState
- AFXCMN/CTabCtrl::SetMinTabWidth
- AFXCMN/CTabCtrl::SetPadding
- AFXCMN/CTabCtrl::SetToolTips
helpviewer_keywords:
- CTabCtrl [MFC], CTabCtrl
- CTabCtrl [MFC], AdjustRect
- CTabCtrl [MFC], Create
- CTabCtrl [MFC], CreateEx
- CTabCtrl [MFC], DeleteAllItems
- CTabCtrl [MFC], DeleteItem
- CTabCtrl [MFC], DeselectAll
- CTabCtrl [MFC], DrawItem
- CTabCtrl [MFC], GetCurFocus
- CTabCtrl [MFC], GetCurSel
- CTabCtrl [MFC], GetExtendedStyle
- CTabCtrl [MFC], GetImageList
- CTabCtrl [MFC], GetItem
- CTabCtrl [MFC], GetItemCount
- CTabCtrl [MFC], GetItemRect
- CTabCtrl [MFC], GetItemState
- CTabCtrl [MFC], GetRowCount
- CTabCtrl [MFC], GetToolTips
- CTabCtrl [MFC], HighlightItem
- CTabCtrl [MFC], HitTest
- CTabCtrl [MFC], InsertItem
- CTabCtrl [MFC], RemoveImage
- CTabCtrl [MFC], SetCurFocus
- CTabCtrl [MFC], SetCurSel
- CTabCtrl [MFC], SetExtendedStyle
- CTabCtrl [MFC], SetImageList
- CTabCtrl [MFC], SetItem
- CTabCtrl [MFC], SetItemExtra
- CTabCtrl [MFC], SetItemSize
- CTabCtrl [MFC], SetItemState
- CTabCtrl [MFC], SetMinTabWidth
- CTabCtrl [MFC], SetPadding
- CTabCtrl [MFC], SetToolTips
ms.assetid: 42e4aff6-46ae-4b2c-beaa-d1dce8d82138
ms.openlocfilehash: a0ca4cbad48c420250fe39e131de5504b1ae70f3
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78875858"
---
# <a name="ctabctrl-class"></a>Classe CTabCtrl

Fornisce la funzionalità del controllo scheda comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CTabCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabCtrl:: CTabCtrl](#ctabctrl)|Costruisce un oggetto `CTabCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabCtrl:: AdjustRect](#adjustrect)|Calcola l'area di visualizzazione di un controllo scheda in base a un rettangolo della finestra oppure calcola il rettangolo della finestra che corrisponderebbe a un'area di visualizzazione specificata.|
|[CTabCtrl:: create](#create)|Crea un controllo struttura a schede e lo collega a un'istanza di un oggetto `CTabCtrl`.|
|[CTabCtrl:: CreateEx](#createex)|Crea un controllo struttura a schede con gli stili estesi di Windows specificati e lo collega a un'istanza di un oggetto `CTabCtrl`.|
|[CTabCtrl::D eleteAllItems](#deleteallitems)|Rimuove tutti gli elementi da un controllo struttura a schede.|
|[CTabCtrl::D eleteItem](#deleteitem)|Rimuove un elemento da un controllo struttura a schede.|
|[CTabCtrl::D eselectAll](#deselectall)|Reimposta gli elementi in un controllo struttura a schede, cancellando gli elementi che sono stati premuti.|
|[CTabCtrl::D rawItem](#drawitem)|Disegna un elemento specificato di un controllo struttura a schede.|
|[CTabCtrl:: GetCurFocus](#getcurfocus)|Recupera la scheda con lo stato attivo corrente di un controllo struttura a schede.|
|[CTabCtrl:: GetCurSel](#getcursel)|Determina la scheda attualmente selezionata in un controllo struttura a schede.|
|[CTabCtrl:: GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.|
|[CTabCtrl:: GetImages](#getimagelist)|Recupera l'elenco di immagini associato a un controllo struttura a schede.|
|[CTabCtrl:: GetItem](#getitem)|Recupera le informazioni su una scheda in un controllo struttura a schede.|
|[CTabCtrl:: GetItemCount](#getitemcount)|Recupera il numero di schede nel controllo Struttura a schede.|
|[CTabCtrl:: GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione di una scheda in un controllo struttura a schede.|
|[CTabCtrl:: GetItemState](#getitemstate)|Recupera lo stato dell'elemento di controllo scheda indicato.|
|[CTabCtrl:: GetRowCount](#getrowcount)|Recupera il numero corrente di righe di schede in un controllo struttura a schede.|
|[CTabCtrl:: GetToolTips](#gettooltips)|Recupera l'handle del controllo descrizione comando associato a un controllo struttura a schede.|
|[CTabCtrl:: HighlightItem](#highlightitem)|Imposta lo stato di evidenziazione di un elemento di scheda.|
|[CTabCtrl:: HitTest](#hittest)|Determina la scheda, se presente, che si trova in una posizione dello schermo specificata.|
|[CTabCtrl:: InsertItem](#insertitem)|Inserisce una nuova scheda in un controllo struttura a schede.|
|[CTabCtrl:: RemoveImage](#removeimage)|Rimuove un'immagine dall'elenco di immagini di un controllo struttura a schede.|
|[CTabCtrl:: SetCurFocus](#setcurfocus)|Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.|
|[CTabCtrl:: CurSel](#setcursel)|Seleziona una scheda in un controllo struttura a schede.|
|[CTabCtrl:: SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per un controllo struttura a schede.|
|[CTabCtrl:: seimagine](#setimagelist)|Assegna un elenco di immagini a un controllo struttura a schede.|
|[CTabCtrl:: SetItem](#setitem)|Imposta alcuni o tutti gli attributi di una scheda.|
|[CTabCtrl:: SetItemExtra](#setitemextra)|Imposta il numero di byte per tabulazione riservata ai dati definiti dall'applicazione in un controllo struttura a schede.|
|[CTabCtrl:: SetItemSize](#setitemsize)|Imposta la larghezza e l'altezza di un elemento.|
|[CTabCtrl:: SetItemState](#setitemstate)|Imposta lo stato dell'elemento di controllo scheda indicato.|
|[CTabCtrl:: SetMinTabWidth](#setmintabwidth)|Imposta la larghezza minima degli elementi in un controllo struttura a schede.|
|[CTabCtrl:: sepadding](#setpadding)|Imposta la quantità di spazio (riempimento) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.|
|[CTabCtrl:: setooltips](#settooltips)|Assegna un controllo descrizione comando a un controllo struttura a schede.|

## <a name="remarks"></a>Osservazioni

Un "controllo struttura a schede" è analogo ai separatori in un notebook o alle etichette in un file CAB. L'uso del controllo Struttura a schede consente a un'applicazione di definire più pagine per la stessa area di una finestra o una finestra di dialogo. Ogni pagina è costituita da un set di informazioni o da un gruppo di controlli che l'applicazione visualizza quando l'utente seleziona la scheda corrispondente. Un tipo speciale di controllo struttura a schede Visualizza le schede simili ai pulsanti. Fare clic su un pulsante per eseguire immediatamente un comando anziché visualizzare una pagina.

Questo controllo (e pertanto la classe `CTabCtrl`) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per altre informazioni sull'uso di `CTabCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [uso di CTabCtrl](../../mfc/using-ctabctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CTabCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="adjustrect"></a>CTabCtrl:: AdjustRect

Calcola l'area di visualizzazione di un controllo scheda in base a un rettangolo della finestra oppure calcola il rettangolo della finestra che corrisponderebbe a un'area di visualizzazione specificata.

```
void AdjustRect(BOOL bLarger,   LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*bLarger*<br/>
Indica l'operazione da eseguire. Se questo parametro è TRUE, *lpRect* specifica un rettangolo di visualizzazione e riceve il rettangolo della finestra corrispondente. Se questo parametro è FALSE, *lpRect* specifica un rettangolo della finestra e riceve il rettangolo di visualizzazione corrispondente.

*lpRect*<br/>
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che specifica il rettangolo specificato e riceve il rettangolo calcolato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#1](../../mfc/reference/codesnippet/cpp/ctabctrl-class_1.cpp)]

##  <a name="create"></a>CTabCtrl:: create

Crea un controllo struttura a schede e lo collega a un'istanza di un oggetto `CTabCtrl`.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo Tab. Applicare qualsiasi combinazione di [stili di controllo](/windows/win32/Controls/tab-control-styles)struttura a schede, descritti nella Windows SDK. Vedere la **sezione Osservazioni** per un elenco di stili di finestra che è possibile applicare anche al controllo.

*rect*<br/>
Specifica la posizione e le dimensioni del controllo Tab. Può essere un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) .

*pParentWnd*<br/>
Specifica la finestra padre del controllo Tab, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo scheda.

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione dell'oggetto è stata completata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Si costruisce un oggetto `CTabCtrl` in due passaggi. Chiamare innanzitutto il costruttore, quindi chiamare `Create`, che crea il controllo struttura a schede e lo collega all'oggetto `CTabCtrl`.

Oltre agli stili del controllo struttura a schede, è possibile applicare gli stili della finestra seguenti a un controllo struttura a schede:

- WS_CHILD crea una finestra figlio che rappresenta il controllo struttura a schede. Non può essere usato con lo stile WS_POPUP.

- WS_VISIBLE crea un controllo struttura a schede inizialmente visibile.

- WS_DISABLED crea una finestra che inizialmente è disabilitata.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo all'altro con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e avvia il gruppo successivo, ovvero un gruppo termina in cui inizia il successivo.

- WS_TABSTOP specifica uno dei diversi controlli tramite i quali l'utente può spostarsi usando il tasto TAB. Il tasto TAB consente di spostare l'utente sul controllo successivo specificato dallo stile WS_TABSTOP.

Per creare un controllo struttura a schede con gli stili estesi della finestra, chiamare [CTabCtrl:: CreateEx](#createex) anziché `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#2](../../mfc/reference/codesnippet/cpp/ctabctrl-class_2.cpp)]

##  <a name="createex"></a>CTabCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all'oggetto `CTabCtrl`.

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
Specifica lo stile del controllo Tab. Applicare qualsiasi combinazione di [stili di controllo](/windows/win32/Controls/tab-control-styles)struttura a schede, descritti nella Windows SDK. Vedere la **sezione Osservazioni** in [create](#create) per un elenco di stili di finestra che è possibile applicare anche al controllo.

*rect*<br/>
Riferimento a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Osservazioni

Usare `CreateEx` anziché [create](#create) per applicare gli stili di Windows estesi, specificati dall' **WS_EX_** di prefazione dello stile esteso di Windows.

`CreateEx` crea il controllo con gli stili Windows estesi specificati da *dwExStyle*. Impostare gli stili estesi specifici di un controllo usando [SetExtendedStyle](#setextendedstyle). Utilizzare ad esempio `CreateEx` per impostare tali stili come WS_EX_CONTEXTHELP, ma utilizzare `SetExtendedStyle` per impostare tali stili come TCS_EX_FLATSEPARATORS. Per ulteriori informazioni, vedere gli stili descritti in [controllo scheda stili estesi](/windows/win32/Controls/tab-control-extended-styles) nel Windows SDK.

##  <a name="ctabctrl"></a>CTabCtrl:: CTabCtrl

Costruisce un oggetto `CTabCtrl`.

```
CTabCtrl();
```

##  <a name="deleteallitems"></a>CTabCtrl::D eleteAllItems

Rimuove tutti gli elementi da un controllo struttura a schede.

```
BOOL DeleteAllItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="deleteitem"></a>CTabCtrl::D eleteItem

Rimuove l'elemento specificato da un controllo struttura a schede.

```
BOOL DeleteItem(int nItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Valore in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#3](../../mfc/reference/codesnippet/cpp/ctabctrl-class_3.cpp)]

##  <a name="deselectall"></a>CTabCtrl::D eselectAll

Reimposta gli elementi in un controllo struttura a schede, cancellando gli elementi che sono stati premuti.

```
void DeselectAll(BOOL fExcludeFocus);
```

### <a name="parameters"></a>Parametri

*fExcludeFocus*<br/>
Flag che specifica l'ambito della deselezione dell'elemento. Se questo parametro è impostato su FALSE, verranno reimpostati tutti i pulsanti di tabulazione. Se è impostato su TRUE, tutti gli elementi della scheda eccetto quello attualmente selezionato verranno reimpostati.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32, [TCM_DESELECTALL](/windows/win32/Controls/tcm-deselectall), come descritto nel Windows SDK.

##  <a name="drawitem"></a>CTabCtrl::D rawItem

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un controllo della scheda disegnato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che descrive l'elemento da disegnare.

### <a name="remarks"></a>Osservazioni

Il membro `itemAction` della struttura `DRAWITEMSTRUCT` definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto `CTabCtrl` di disegno del proprietario.

L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro venga terminata.

##  <a name="getcurfocus"></a>CTabCtrl:: GetCurFocus

Recupera l'indice della scheda con lo stato attivo corrente.

```
int GetCurFocus() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda con lo stato attivo corrente.

##  <a name="getcursel"></a>CTabCtrl:: GetCurSel

Recupera la scheda attualmente selezionata in un controllo struttura a schede.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in caso di esito positivo o-1 se non è selezionata alcuna scheda.

##  <a name="getextendedstyle"></a>CTabCtrl:: GetExtendedStyle

Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.

```
DWORD GetExtendedStyle();
```

### <a name="return-value"></a>Valore restituito

Rappresenta gli stili estesi attualmente in uso per il controllo struttura a schede. Questo valore è una combinazione di [stili estesi del controllo](/windows/win32/Controls/tab-control-extended-styles)struttura a schede, come descritto nel Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TCM_GETEXTENDEDSTYLE](/windows/win32/Controls/tcm-getextendedstyle)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="getimagelist"></a>CTabCtrl:: GetImages

Recupera l'elenco di immagini associato a una struttura a schede.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, viene restituito un puntatore all'elenco di immagini di una struttura a schede; in caso contrario viene restituito NULL.

##  <a name="getitem"></a>CTabCtrl:: GetItem

Recupera le informazioni su una scheda in un controllo struttura a schede.

```
BOOL GetItem(int nItem,   TCITEM* pTabCtrlItem) const;
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero della scheda.

*pTabCtrlItem*<br/>
Puntatore a una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) , utilizzato per specificare le informazioni da recuperare. Utilizzato anche per ricevere informazioni sulla scheda. Questa struttura viene utilizzata con le funzioni membro `InsertItem`, `GetItem`e `SetItem`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Quando il messaggio viene inviato, il membro `mask` specifica gli attributi da restituire. Se il membro `mask` specifica il valore TCIF_TEXT, il membro `pszText` deve contenere l'indirizzo del buffer che riceve il testo dell'elemento e il membro `cchTextMax` deve specificare le dimensioni del buffer.

- `mask`

   Valore che specifica i membri della struttura `TCITEM` da recuperare o impostare. Questo membro può essere zero o una combinazione dei valori seguenti:

   - TCIF_TEXT il membro `pszText` è valido.

   - TCIF_IMAGE il membro `iImage` è valido.

   - TCIF_PARAM il membro `lParam` è valido.

   - TCIF_RTLREADING il testo della `pszText` viene visualizzato con l'ordine di lettura da destra a sinistra nei sistemi ebraici o arabi.

   - TCIF_STATE il membro `dwState` è valido.

- `pszText`

   Puntatore a una stringa con terminazione null che contiene il testo della scheda se la struttura contiene informazioni su una scheda. Se la struttura riceve informazioni, questo membro specifica l'indirizzo del buffer che riceve il testo della scheda.

- `cchTextMax`

   Dimensioni del buffer a cui punta `pszText`. Questo membro viene ignorato se la struttura non riceve informazioni.

- `iImage` indice nell'elenco immagini del controllo scheda oppure-1 se non è presente alcuna immagine per la scheda.

- `lParam`

   Dati definiti dall'applicazione associati alla scheda. Se sono presenti più di quattro byte di dati definiti dall'applicazione per scheda, un'applicazione deve definire una struttura e usarla invece della struttura `TCITEM`. Il primo membro della struttura definita dall'applicazione deve essere una struttura [TCITEMHEADER](/windows/win32/api/commctrl/ns-commctrl-tcitemheaderw). La struttura del `TCITEMHEADER` è identica alla struttura `TCITEM`, ma senza il membro `lParam`. La differenza tra le dimensioni della struttura e le dimensioni della struttura di `TCITEMHEADER` deve essere uguale al numero di byte aggiuntivi per scheda.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#4](../../mfc/reference/codesnippet/cpp/ctabctrl-class_4.cpp)]

##  <a name="getitemcount"></a>CTabCtrl:: GetItemCount

Recupera il numero di schede nel controllo Struttura a schede.

```
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo struttura a schede.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="getitemrect"></a>CTabCtrl:: GetItemRect

Recupera il rettangolo di delimitazione per la scheda specificata in un controllo struttura a schede.

```
BOOL GetItemRect(int nItem,   LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero dell'elemento di scheda.

*lpRect*<br/>
Puntatore a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che riceve il rettangolo delimitatore della scheda. Queste coordinate utilizzano la modalità di mapping corrente del viewport.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="getitemstate"></a>CTabCtrl:: GetItemState

Recupera lo stato dell'elemento di controllo struttura a schede identificato da *nitet*.

```
DWORD GetItemState(
    int nItem,
    DWORD dwMask) const;
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Numero di indice in base zero dell'elemento per il quale recuperare le informazioni sullo stato.

*dwMask*<br/>
Maschera che specifica quale dei flag di stato dell'elemento restituire. Per un elenco di valori, vedere il membro mask della struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) , come descritto nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Riferimento a un valore DWORD che riceve le informazioni sullo stato. I possibili valori sono i seguenti:

|valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento di controllo Tab è selezionato.|
|TCIS_HIGHLIGHTED|L'elemento di controllo Tab è evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, si tratta di un'interpolazione vera, non di un colore con stato.|

### <a name="remarks"></a>Osservazioni

Lo stato di un elemento è specificato dal membro `dwState` della struttura di `TCITEM`.

##  <a name="getrowcount"></a>CTabCtrl:: GetRowCount

Recupera il numero corrente di righe in un controllo struttura a schede.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe di schede nel controllo struttura a schede.

### <a name="remarks"></a>Osservazioni

Solo i controlli struttura a schede con lo stile TCS_MULTILINE possono avere più righe di schede.

##  <a name="gettooltips"></a>CTabCtrl:: GetToolTips

Recupera l'handle del controllo descrizione comando associato a un controllo struttura a schede.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Handle del controllo descrizione comando, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Un controllo struttura a schede crea un controllo descrizione comando se presenta lo stile TCS_TOOLTIPS. È anche possibile assegnare un controllo descrizione comando a un controllo struttura a schede usando la funzione membro `SetToolTips`.

##  <a name="highlightitem"></a>CTabCtrl:: HighlightItem

Imposta lo stato di evidenziazione di un elemento di scheda.

```
BOOL HighlightItem(int idItem,   BOOL fHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*idItem*<br/>
Indice in base zero di un elemento di controllo Tab.

*fHighlight*<br/>
Valore che specifica lo stato di evidenziazione da impostare. Se questo valore è TRUE, la scheda è evidenziata; Se FALSE, la scheda è impostata sullo stato predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa la [TCM_HIGHLIGHTITEM](/windows/win32/Controls/tcm-highlightitem)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="hittest"></a>CTabCtrl:: HitTest

Determina la scheda, se presente, che si trova nella posizione dello schermo specificata.

```
int HitTest(TCHITTESTINFO* pHitTestInfo) const;
```

### <a name="parameters"></a>Parametri

*pHitTestInfo*<br/>
Puntatore a una struttura [TCHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-tchittestinfo) , come descritto nella Windows SDK, che specifica la posizione dello schermo da testare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice in base zero della scheda oppure-1 se la scheda non si trova nella posizione specificata.

##  <a name="insertitem"></a>CTabCtrl:: InsertItem

Inserisce una nuova scheda in un controllo struttura a schede esistente.

```
LONG InsertItem(
    int nItem,
    TCITEM* pTabCtrlItem);

LONG InsertItem(
    int nItem,
    LPCTSTR lpszItem);

LONG InsertItem(
    int nItem,
    LPCTSTR lpszItem,
    int nImage);

LONG InsertItem(
    UINT nMask,
    int nItem,
    LPCTSTR lpszItem,
    int nImage,
    LPARAM lParam);

LONG InsertItem(
    UINT nMask,
    int nItem,
    LPCTSTR lpszItem,
    int nImage,
    LPARAM lParam,
    DWORD dwState,
    DWORD dwStateMask);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero della nuova scheda.

*pTabCtrlItem*<br/>
Puntatore a una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) che specifica gli attributi della scheda.

*lpszItem*<br/>
Indirizzo di una stringa con terminazione null che contiene il testo della scheda.

*nImage*<br/>
Indice in base zero di un'immagine da inserire da un elenco di immagini.

*nMask*<br/>
Specifica quali attributi della struttura di `TCITEM` impostare. Può essere zero o una combinazione dei valori seguenti:

- TCIF_TEXT il membro `pszText` è valido.

- TCIF_IMAGE il membro `iImage` è valido.

- TCIF_PARAM il membro *lParam* è valido.

- TCIF_RTLREADING il testo della `pszText` viene visualizzato con l'ordine di lettura da destra a sinistra nei sistemi ebraici o arabi.

- TCIF_STATE il membro *dwState* è valido.

*lParam*<br/>
Dati definiti dall'applicazione associati alla scheda.

*dwState*<br/>
Specifica i valori per gli Stati dell'elemento. Per ulteriori informazioni, vedere [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) nel Windows SDK.

*dwStateMask*<br/>
Specifica gli Stati da impostare. Per ulteriori informazioni, vedere [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Indice in base zero della nuova scheda se ha esito positivo; in caso contrario,-1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#5](../../mfc/reference/codesnippet/cpp/ctabctrl-class_5.cpp)]

##  <a name="removeimage"></a>CTabCtrl:: RemoveImage

Rimuove l'immagine specificata dall'elenco di immagini di un controllo struttura a schede.

```
void RemoveImage(int nImage);
```

### <a name="parameters"></a>Parametri

*nImage*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="remarks"></a>Osservazioni

Il controllo struttura a schede aggiorna l'indice dell'immagine di ogni scheda in modo che ogni scheda rimanga associata alla stessa immagine.

##  <a name="setcurfocus"></a>CTabCtrl:: SetCurFocus

Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.

```
void SetCurFocus(int nItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Specifica l'indice della scheda che ottiene lo stato attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TCM_SETCURFOCUS](/windows/win32/Controls/tcm-setcurfocus)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setcursel"></a>CTabCtrl:: CurSel

Seleziona una scheda in un controllo struttura a schede.

```
int SetCurSel(int nItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero dell'elemento da selezionare.

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in precedenza, se ha esito positivo; in caso contrario,-1.

### <a name="remarks"></a>Osservazioni

Un controllo struttura a schede non invia un messaggio di notifica TCN_SELCHANGING o TCN_SELCHANGE quando viene selezionata una scheda tramite questa funzione. Queste notifiche vengono inviate, usando WM_NOTIFY, quando l'utente fa clic o usa la tastiera per modificare le schede.

##  <a name="setextendedstyle"></a>CTabCtrl:: SetExtendedStyle

Imposta gli stili estesi per un controllo struttura a schede.

```
DWORD SetExtendedStyle(DWORD dwNewStyle,   DWORD dwExMask = 0);
```

### <a name="parameters"></a>Parametri

*dwNewStyle*<br/>
Valore che specifica una combinazione di stili estesi del controllo scheda.

*dwExMask*<br/>
Valore DWORD che indica gli stili in *dwNewStyle* che devono essere interessati. Solo gli stili estesi in *dwExMask* verranno modificati. Tutti gli altri stili verranno mantenuti così come sono. Se questo parametro è zero, saranno interessati tutti gli stili in *dwNewStyle* .

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli [stili estesi del controllo scheda](/windows/win32/Controls/tab-control-extended-styles)precedente, come descritto nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del [TCM_SETEXTENDEDSTYLE](/windows/win32/Controls/tcm-setextendedstyle)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setimagelist"></a>CTabCtrl:: seimagine

Assegna un elenco di immagini a un controllo struttura a schede.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Puntatore all'elenco di immagini da assegnare al controllo struttura a schede.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'elenco di immagini precedente o NULL se non è presente un elenco di immagini precedente.

##  <a name="setitem"></a>CTabCtrl:: SetItem

Imposta alcuni o tutti gli attributi di una scheda.

```
BOOL SetItem(int nItem,   TCITEM* pTabCtrlItem);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Indice in base zero dell'elemento.

*pTabCtrlItem*<br/>
Puntatore a una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) che contiene gli attributi del nuovo elemento. Il membro `mask` specifica gli attributi da impostare. Se il membro `mask` specifica il valore TCIF_TEXT, il membro `pszText` è l'indirizzo di una stringa con terminazione null e il membro `cchTextMax` viene ignorato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [GetItem](#getitem).

##  <a name="setitemextra"></a>CTabCtrl:: SetItemExtra

Imposta il numero di byte per tabulazione riservata ai dati definiti dall'applicazione in un controllo struttura a schede.

```
BOOL SetItemExtra(int nBytes);
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte aggiuntivi da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del [TCM_SETITEMEXTRA](/windows/win32/Controls/tcm-setitemextra)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setitemsize"></a>CTabCtrl:: SetItemSize

Imposta la larghezza e l'altezza degli elementi di controllo della scheda.

```
CSize SetItemSize(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
La nuova larghezza e altezza, in pixel, degli elementi di controllo della scheda.

### <a name="return-value"></a>Valore restituito

Restituisce la larghezza e l'altezza precedenti degli elementi di controllo della scheda.

##  <a name="setitemstate"></a>CTabCtrl:: SetItemState

Imposta lo stato dell'elemento di controllo Tab identificato da *nitet*.

```
BOOL SetItemState(
    int nItem,
    DWORD dwMask,
    DWORD dwState);
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
Numero di indice in base zero dell'elemento per il quale impostare le informazioni sullo stato.

*dwMask*<br/>
Maschera che specifica i flag di stato dell'elemento da impostare. Per un elenco di valori, vedere il membro mask della struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) , come descritto nella Windows SDK.

*dwState*<br/>
Riferimento a un valore DWORD contenente le informazioni sullo stato. I possibili valori sono i seguenti:

|valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento di controllo Tab è selezionato.|
|TCIS_HIGHLIGHTED|L'elemento di controllo Tab è evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, si tratta di un'interpolazione vera, non di un colore con stato.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="setmintabwidth"></a>CTabCtrl:: SetMinTabWidth

Imposta la larghezza minima degli elementi in un controllo struttura a schede.

```
int SetMinTabWidth(int cx);
```

### <a name="parameters"></a>Parametri

*cx*<br/>
Larghezza minima da impostare per un elemento di controllo struttura a schede. Se questo parametro è impostato su-1, il controllo utilizzerà la larghezza predefinita della scheda.

### <a name="return-value"></a>Valore restituito

Larghezza minima della scheda precedente.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del [TCM_SETMINTABWIDTH](/windows/win32/Controls/tcm-setmintabwidth)del messaggio Win32, come descritto nel Windows SDK.

##  <a name="setpadding"></a>CTabCtrl:: sepadding

Imposta la quantità di spazio (riempimento) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

```
void SetPadding(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Imposta la quantità di spazio (riempimento) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

##  <a name="settooltips"></a>CTabCtrl:: setooltips

Assegna un controllo descrizione comando a un controllo struttura a schede.

```
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip*<br/>
Handle del controllo descrizione comando.

### <a name="remarks"></a>Osservazioni

È possibile ottenere il controllo descrizione comando associato a un controllo struttura a schede effettuando una chiamata a `GetToolTips`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
