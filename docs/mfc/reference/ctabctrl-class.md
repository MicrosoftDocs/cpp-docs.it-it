---
title: Classe CTabCtrl
description: 'Altre informazioni su: Classe CTabCtrl'
ms.date: 1/29/2021
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
ms.openlocfilehash: 31056e452973432f9f9a6d453de8c413c9b60463
ms.sourcegitcommit: beac3ddf1a20de5e836569ae07407d5f3703f536
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/01/2021
ms.locfileid: "99224482"
---
# <a name="ctabctrl-class"></a>Classe `CTabCtrl`

Fornisce la funzionalità del controllo scheda comune di Windows.

## <a name="syntax"></a>Sintassi

```cpp
class CTabCtrl : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[`CTabCtrl::CTabCtrl`](#ctabctrl) | Costruisce un oggetto `CTabCtrl`.|


### <a name="public-methods"></a>Metodi pubblici

|Nome  |Descrizione  |
|---------|---------|
|[`CTabCtrl::AdjustRect`](#adjustrect) | Calcola l'area di visualizzazione di un controllo scheda in base a un rettangolo della finestra oppure calcola il rettangolo della finestra che corrisponderebbe a un'area di visualizzazione specificata. |
|[`CTabCtrl::Create`](#create) | Crea un controllo struttura a schede e lo collega a un'istanza di un `TabCtrl` oggetto.  |
|[`CTabCtrl::CreateEx`](#createex) | Crea un controllo struttura a schede con gli stili estesi di Windows specificati e lo collega a un'istanza di un oggetto CTabCtrl.|
|[`CTabCtrl::DeleteAllItems`](#deleteallitems) | Rimuove tutti gli elementi da un controllo struttura a schede.|
|[`CTabCtrl::DeleteItem`](#deleteitem) | Rimuove un elemento da un controllo struttura a schede.|
|[`CTabCtrl::DeselectAll`](#deselectall) | Reimposta gli elementi in un controllo struttura a schede, cancellando gli elementi che sono stati premuti.|
|[`CTabCtrl::DrawItem`](#drawitem) | Disegna un elemento specificato di un controllo struttura a schede.|
|[`CTabCtrl::GetCurFocus`](#getcurfocus) | Recupera la scheda con lo stato attivo corrente di un controllo struttura a schede.|
|[`CTabCtrl::GetCurSel`](#getcursel) | Determina la scheda attualmente selezionata in un controllo struttura a schede.|
|[`CTabCtrl::GetExtendedStyle`](#getextendedstyle) | Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.|
|[`CTabCtrl::GetImageList`](#getimagelist) | Recupera l'elenco di immagini associato a un controllo struttura a schede.|
|[`CTabCtrl::GetItem`](#getitem) | Recupera le informazioni su una scheda in un controllo struttura a schede.|
|[`CTabCtrl::GetItemCount`](#getitemcount) | Recupera il numero di schede nel controllo Struttura a schede.|
|[`CTabCtrl::GetItemRect`](#getitemrect) | Recupera il rettangolo di delimitazione di una scheda in un controllo struttura a schede.|
|[`CTabCtrl::GetItemState`](#getitemstate) | Recupera lo stato dell'elemento di controllo scheda indicato.|
|[`CTabCtrl::GetRowCount`](#getrowcount) | Recupera il numero corrente di righe di schede in un controllo struttura a schede.|
|[`CTabCtrl::GetToolTips`](#gettooltips) | Recupera l'handle del controllo descrizione comando associato a un controllo struttura a schede.|
|[`CTabCtrl::HighlightItem`](#highlightitem) | Imposta lo stato di evidenziazione di un elemento di scheda.|
|[`CTabCtrl::HitTest`](#hittest) | Determina la scheda, se presente, che si trova in una posizione dello schermo specificata.|
|[`CTabCtrl::InsertItem`](#insertitem) | Inserisce una nuova scheda in un controllo struttura a schede.|
|[`CTabCtrl::RemoveImage`](#removeimage) | Rimuove un'immagine dall'elenco di immagini di un controllo struttura a schede.|
|[`CTabCtrl::SetCurFocus`](#setcurfocus) | Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.|
|[`CTabCtrl::SetCurSel`](#setcursel) | Seleziona una scheda in un controllo struttura a schede.|
|[`CTabCtrl::SetExtendedStyle`](#setextendedstyle) | Imposta gli stili estesi per un controllo struttura a schede.|
|[`CTabCtrl::SetImageList`](#setimagelist) | Assegna un elenco di immagini a un controllo struttura a schede.|
|[`CTabCtrl::SetItem`](#setitem) | Imposta alcuni o tutti gli attributi di una scheda.|
|[`CTabCtrl::SetItemExtra`](#setitemextra) | Imposta il numero di byte per tabulazione riservata ai dati definiti dall'applicazione in un controllo struttura a schede.|
|[`CTabCtrl::SetItemSize`](#setitemsize) | Imposta la larghezza e l'altezza di un elemento.|
|[`CTabCtrl::SetItemState`](#setitemstate) | Imposta lo stato dell'elemento di controllo scheda indicato.|
|[`CTabCtrl::SetMinTabWidth`](#setmintabwidth) | Imposta la larghezza minima degli elementi in un controllo struttura a schede.|
|[`CTabCtrl::SetPadding`](#setpadding) | Imposta la quantità di spazio (riempimento) intorno a ogni icona delle schede ed etichetta in un controllo struttura a schede.|
|[`CTabCtrl::SetToolTips`](#settooltips) | Assegna un controllo descrizione comando a un controllo struttura a schede.|

## <a name="remarks"></a>Commenti

Un "controllo struttura a schede" è analogo ai separatori in un notebook o alle etichette in un file CAB. L'uso del controllo Struttura a schede consente a un'applicazione di definire più pagine per la stessa area di una finestra o una finestra di dialogo. Ogni pagina è costituita da un set di informazioni o da un gruppo di controlli che l'applicazione visualizza quando l'utente seleziona la scheda corrispondente. Un tipo speciale di controllo struttura a schede Visualizza le schede simili ai pulsanti. Fare clic su un pulsante per eseguire immediatamente un comando anziché visualizzare una pagina.

Questo controllo (e pertanto la `CTabCtrl` classe) è disponibile solo per i programmi in esecuzione in windows 95/98 e Windows NT versione 3,51 e successive.

Per ulteriori informazioni su `CTabCtrl` , vedere [controlli](../../mfc/controls-mfc.md) e [utilizzo `CTabCtrl` ](../../mfc/using-ctabctrl.md)di.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[`CObject`](../../mfc/reference/cobject-class.md)\
[`CCmdTarget`](../../mfc/reference/ccmdtarget-class.md)\
[`CWnd`](../../mfc/reference/cwnd-class.md)

`CTabCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:**`afxcmn.h`

## <a name="adjustrect"></a>`CTabCtrl::AdjustRect`

Calcola l'area di visualizzazione di un controllo scheda in base a un rettangolo della finestra oppure calcola il rettangolo della finestra che corrisponderebbe a un'area di visualizzazione specificata.

```cpp
void AdjustRect(BOOL bLarger,   LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*`bLarger`*\
Indica l'operazione da eseguire. Se questo parametro è `TRUE` , *`lpRect`* specifica un rettangolo di visualizzazione e riceve il rettangolo della finestra corrispondente. Se questo parametro è `FALSE` , *`lpRect`* specifica un rettangolo della finestra e riceve il rettangolo di visualizzazione corrispondente.

*`lpRect`*\
Puntatore a una [`RECT`](/windows/win32/api/windef/ns-windef-rect) struttura che specifica il rettangolo specificato e riceve il rettangolo calcolato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#1](../../mfc/reference/codesnippet/cpp/ctabctrl-class_1.cpp)]

## <a name="ctabctrlcreate"></a><a name="create"></a> `CTabCtrl::Create`

Crea un controllo struttura a schede e lo collega a un'istanza di un `CTabCtrl` oggetto.

```cpp
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*`dwStyle`*\
Specifica lo stile del controllo Tab. Applicare qualsiasi combinazione di [stili di controllo](/windows/win32/Controls/tab-control-styles)struttura a schede, descritti nella Windows SDK. Vedere la **sezione Osservazioni** per un elenco di stili di finestra che è possibile applicare anche al controllo.

*`rect`*\
Specifica la posizione e le dimensioni del controllo Tab. Può trattarsi di un [`CRect`](../../atl-mfc-shared/reference/crect-class.md) oggetto o di una [`RECT`](/windows/win32/api/windef/ns-windef-rect) struttura.

*`pParentWnd`*\
Specifica la finestra padre del controllo Tab, in genere `CDialog` . Non deve essere NULL.

*`nID`*\
Specifica l'ID del controllo scheda.

### <a name="return-value"></a>Valore restituito

`TRUE` Se l'inizializzazione dell'oggetto ha avuto esito positivo; in caso contrario `FALSE` ,.

### <a name="remarks"></a>Commenti

Si costruisce un `CTabCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore, quindi chiamare `Create` , che crea il controllo struttura a schede e lo collega all' `CTabCtrl` oggetto.

Oltre agli stili del controllo struttura a schede, è possibile applicare gli stili della finestra seguenti a un controllo struttura a schede:

- `WS_CHILD`: Crea una finestra figlio che rappresenta il controllo struttura a schede. Non può essere usato con lo stile WS_POPUP.
- `WS_VISIBLE`: Crea un controllo struttura a schede inizialmente visibile.
- `WS_DISABLED`: Crea una finestra che inizialmente è disabilitata.
- `WS_GROUP`: Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo all'altro con i tasti di direzione. Tutti i controlli definiti con lo `WS_GROUP` stile: dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo `WS_GROUP` stile: termina il gruppo di stili e avvia il gruppo successivo, ovvero un gruppo termina in cui inizia il successivo.
- `WS_TABSTOP`: Specifica uno dei diversi controlli tramite i quali l'utente può spostarsi usando il tasto TAB. Il tasto TAB consente di spostare l'utente nel controllo successivo specificato dallo `WS_TABSTOP` stile:.

Per creare un controllo struttura a schede con gli stili estesi della finestra, chiamare [`CTabCtrl::CreateEx`](#createex) anziché `Create` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#2](../../mfc/reference/codesnippet/cpp/ctabctrl-class_2.cpp)]

## <a name="ctabctrlcreateex"></a><a name="createex"></a> `CTabCtrl::CreateEx`

Crea un controllo (una finestra figlio) e lo associa all' `CTabCtrl` oggetto.

```cpp
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*`dwExStyle`*\
Specifica lo stile esteso del controllo da creare. Per un elenco degli stili Windows estesi, vedere il *`dwExStyle`* parametro per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nella Windows SDK.

*`dwStyle`*\
Specifica lo stile del controllo Tab. Applicare qualsiasi combinazione di [stili di controllo](/windows/win32/Controls/tab-control-styles)struttura a schede, descritti nella Windows SDK. Vedere la **sezione Osservazioni** in [`Create`](#create) per un elenco di stili di finestra che è possibile applicare anche al controllo.

*`rect`*\
Riferimento a una [`RECT`](/windows/win32/api/windef/ns-windef-rect) struttura che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *`pParentWnd`* .

*`pParentWnd`*\
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*`nID`*\
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Commenti

Usare `CreateEx` anziché [`Create`](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

`CreateEx` Crea il controllo con gli stili Windows estesi specificati da *`dwExStyle`* . Impostare gli stili estesi specifici di un controllo utilizzando [`SetExtendedStyle`](#setextendedstyle) . Utilizzare, ad esempio, `CreateEx` per impostare tali stili come WS_EX_CONTEXTHELP, ma utilizzare `SetExtendedStyle` per impostare tali stili come TCS_EX_FLATSEPARATORS. Per ulteriori informazioni, vedere gli stili descritti in [controllo scheda stili estesi](/windows/win32/Controls/tab-control-extended-styles) nel Windows SDK.

## <a name="ctabctrlctabctrl"></a><a name="ctabctrl"></a> `CTabCtrl::CTabCtrl`

Costruisce un oggetto `CTabCtrl`.

```cpp
CTabCtrl();
```

## <a name="ctabctrldeleteallitems"></a><a name="deleteallitems"></a> `CTabCtrl::DeleteAllItems`

Rimuove tutti gli elementi da un controllo struttura a schede.

```cpp
BOOL DeleteAllItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="ctabctrldeleteitem"></a><a name="deleteitem"></a> `CTabCtrl::DeleteItem`

Rimuove l'elemento specificato da un controllo struttura a schede.

```cpp
BOOL DeleteItem(int nItem);
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Valore in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#3](../../mfc/reference/codesnippet/cpp/ctabctrl-class_3.cpp)]

## <a name="ctabctrldeselectall"></a><a name="deselectall"></a> `CTabCtrl::DeselectAll`

Reimposta gli elementi in un controllo struttura a schede, cancellando gli elementi che sono stati premuti.

```cpp
void DeselectAll(BOOL fExcludeFocus);
```

### <a name="parameters"></a>Parametri

*`fExcludeFocus`*\
Flag che specifica l'ambito della deselezione dell'elemento. Se questo parametro è impostato su `FALSE` , verranno reimpostati tutti i pulsanti di tabulazione. Se è impostato su `TRUE` , tutti gli elementi della scheda eccetto quello attualmente selezionato verranno reimpostati.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del messaggio Win32, [`TCM_DESELECTALL`](/windows/win32/Controls/tcm-deselectall) , come descritto nel Windows SDK.

## <a name="ctabctrldrawitem"></a><a name="drawitem"></a> `CTabCtrl::DrawItem`

Chiamata eseguita dal framework quando viene modificato un aspetto visivo di un controllo della scheda disegnato dal proprietario.

```cpp
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*`lpDrawItemStruct`*\
Puntatore a una [`DRAWITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-drawitemstruct) struttura che descrive l'elemento da disegnare.

### <a name="remarks"></a>Commenti

Il `itemAction` membro della `DRAWITEMSTRUCT` struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare il disegno per un oggetto disegnato dal proprietario `CTabCtrl` .

L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *`lpDrawItemStruct`* prima che questa funzione membro venga terminata.

## <a name="ctabctrlgetcurfocus"></a><a name="getcurfocus"></a> `CTabCtrl::GetCurFocus`

Recupera l'indice della scheda con lo stato attivo corrente.

```cpp
int GetCurFocus() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda con lo stato attivo corrente.

## <a name="ctabctrlgetcursel"></a><a name="getcursel"></a> `CTabCtrl::GetCurSel`

Recupera la scheda attualmente selezionata in un controllo struttura a schede.

```cpp
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in caso di esito positivo o-1 se non è selezionata alcuna scheda.

## <a name="ctabctrlgetextendedstyle"></a><a name="getextendedstyle"></a> `CTabCtrl::GetExtendedStyle`

Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.

```cpp
DWORD GetExtendedStyle();
```

### <a name="return-value"></a>Valore restituito

Rappresenta gli stili estesi attualmente in uso per il controllo struttura a schede. Questo valore è una combinazione di [stili estesi del controllo](/windows/win32/Controls/tab-control-extended-styles)struttura a schede, come descritto nel Windows SDK.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TCM_GETEXTENDEDSTYLE](/windows/win32/Controls/tcm-getextendedstyle)del messaggio Win32, come descritto nel Windows SDK.

## <a name="ctabctrlgetimagelist"></a><a name="getimagelist"></a> `CTabCtrl::GetImageList`

Recupera l'elenco di immagini associato a una struttura a schede.

```cpp
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, viene restituito un puntatore all'elenco di immagini di una struttura a schede; in caso contrario viene restituito NULL.

## <a name="ctabctrlgetitem"></a><a name="getitem"></a> `CTabCtrl::GetItem`

Recupera le informazioni su una scheda in un controllo struttura a schede.

```cpp
BOOL GetItem(int nItem,   TCITEM* pTabCtrlItem) const;
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Indice in base zero della scheda.

*`pTabCtrlItem`*\
Puntatore a una [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) struttura, utilizzato per specificare le informazioni da recuperare. Utilizzato anche per ricevere informazioni sulla scheda. Questa struttura viene utilizzata con le `InsertItem` `GetItem` `SetItem` funzioni membro, e.

### <a name="return-value"></a>Valore restituito

Restituisce `TRUE` se l'operazione viene completata correttamente; in caso contrario, `FALSE`.

### <a name="remarks"></a>Commenti

Quando il messaggio viene inviato, il `mask` membro specifica gli attributi da restituire. Se il `mask` membro specifica il `TCIF_TEXT` valore, il `pszText` membro deve contenere l'indirizzo del buffer che riceve il testo dell'elemento e il `cchTextMax` membro deve specificare le dimensioni del buffer.

- `mask`

   Valore che specifica `TCITEM` i membri della struttura da recuperare o impostare. Questo membro può essere zero o una combinazione dei valori seguenti:

  - `TCIF_TEXT`: Il `pszText` membro è valido.
  - `TCIF_IMAGE`: Il `iImage` membro è valido.
  - `TCIF_PARAM`: Il `lParam` membro è valido.
  - `TCIF_RTLREADING`: Il testo di `pszText` viene visualizzato utilizzando l'ordine di lettura da destra a sinistra nei sistemi ebraici o arabi.
  - `TCIF_STATE`: Il `dwState` membro è valido.

- `pszText`

   Puntatore a una stringa con terminazione null che contiene il testo della scheda se la struttura contiene informazioni su una scheda. Se la struttura riceve informazioni, questo membro specifica l'indirizzo del buffer che riceve il testo della scheda.

- `cchTextMax`

   Dimensioni del buffer a cui punta `pszText` . Questo membro viene ignorato se la struttura non riceve informazioni.

- `iImage` Indicizzare nell'elenco immagini del controllo TAB oppure-1 se non è presente alcuna immagine per la scheda.

- `lParam`

   Dati definiti dall'applicazione associati alla scheda. Se sono presenti più di 4 byte di dati definiti dall'applicazione per scheda, un'applicazione deve definire una struttura e usarla invece della `TCITEM` struttura. Il primo membro della struttura definita dall'applicazione deve essere una struttura [TCITEMHEADER](/windows/win32/api/commctrl/ns-commctrl-tcitemheaderw). La `TCITEMHEADER` struttura è identica alla `TCITEM` struttura, ma senza il `lParam` membro. La differenza tra le dimensioni della struttura e le dimensioni della `TCITEMHEADER` struttura deve essere uguale al numero di byte aggiuntivi per scheda.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#4](../../mfc/reference/codesnippet/cpp/ctabctrl-class_4.cpp)]

## <a name="ctabctrlgetitemcount"></a><a name="getitemcount"></a> `CTabCtrl::GetItemCount`

Recupera il numero di schede nel controllo Struttura a schede.

```cpp
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo struttura a schede.

### <a name="example"></a>Esempio

  Vedere l'esempio per [`CPropertySheet::GetTabControl`](../../mfc/reference/cpropertysheet-class.md#gettabcontrol) .

## <a name="ctabctrlgetitemrect"></a><a name="getitemrect"></a> `CTabCtrl::GetItemRect`

Recupera il rettangolo di delimitazione per la scheda specificata in un controllo struttura a schede.

```cpp
BOOL GetItemRect(int nItem,   LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Indice in base zero dell'elemento di scheda.

*`lpRect`*\
Puntatore a una [`RECT`](/windows/win32/api/windef/ns-windef-rect) struttura che riceve il rettangolo delimitatore della scheda. Queste coordinate utilizzano la modalità di mapping corrente del viewport.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [`CPropertySheet::GetTabControl`](../../mfc/reference/cpropertysheet-class.md#gettabcontrol) .

## <a name="ctabctrlgetitemstate"></a><a name="getitemstate"></a> `CTabCtrl::GetItemState`

Recupera lo stato dell'elemento di controllo struttura a schede identificato da *`nItem`* .

```cpp
DWORD GetItemState(
    int nItem,
    DWORD dwMask) const;
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Numero di indice in base zero dell'elemento per il quale recuperare le informazioni sullo stato.

*`dwMask`*\
Maschera che specifica quale dei flag di stato dell'elemento restituire. Per un elenco di valori, vedere il membro mask della [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) struttura, come descritto nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Riferimento a un valore DWORD che riceve le informazioni sullo stato. I possibili valori sono i seguenti:

|Valore|Descrizione|
|-----------|-----------------|
|`TCIS_BUTTONPRESSED`|L'elemento di controllo Tab è selezionato.|
|`TCIS_HIGHLIGHTED`|L'elemento di controllo Tab è evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, si tratta di un'interpolazione vera, non di un colore con stato.|

### <a name="remarks"></a>Commenti

Lo stato di un elemento è specificato dal `dwState` membro della `TCITEM` struttura.

## <a name="ctabctrlgetrowcount"></a><a name="getrowcount"></a> `CTabCtrl::GetRowCount`

Recupera il numero corrente di righe in un controllo struttura a schede.

```cpp
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di righe di schede nel controllo struttura a schede.

### <a name="remarks"></a>Commenti

Solo i controlli struttura a schede con lo stile TCS_MULTILINE possono avere più righe di schede.

## <a name="ctabctrlgettooltips"></a><a name="gettooltips"></a> `CTabCtrl::GetToolTips`

Recupera l'handle del controllo descrizione comando associato a un controllo struttura a schede.

```cpp
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Handle del controllo descrizione comando, se ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Un controllo struttura a schede crea un controllo descrizione comando se presenta lo stile TCS_TOOLTIPS. È anche possibile assegnare un controllo descrizione comando a un controllo struttura a schede usando la `SetToolTips` funzione membro.

## <a name="ctabctrlhighlightitem"></a><a name="highlightitem"></a> `CTabCtrl::HighlightItem`

Imposta lo stato di evidenziazione di un elemento di scheda.

```cpp
BOOL HighlightItem(int idItem,  BOOL fHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*`idItem`*\
Indice in base zero di un elemento di controllo Tab.

*`fHighlight`*\
Valore che specifica lo stato di evidenziazione da impostare. Se questo valore è `TRUE` , la scheda è evidenziata; se `FALSE` , la scheda è impostata sullo stato predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il messaggio Win32 [`TCM_HIGHLIGHTITEM`](/windows/win32/Controls/tcm-highlightitem) , come descritto nell'Windows SDK.

## <a name="ctabctrlhittest"></a><a name="hittest"></a> `CTabCtrl::HitTest`

Determina la scheda, se presente, che si trova nella posizione dello schermo specificata.

```cpp
int HitTest(TCHITTESTINFO* pHitTestInfo) const;
```

### <a name="parameters"></a>Parametri

*pHitTestInfo*\
Puntatore a una [`TCHITTESTINFO`](/windows/win32/api/commctrl/ns-commctrl-tchittestinfo) struttura, come descritto nell'Windows SDK, che specifica la posizione dello schermo da testare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice in base zero della scheda oppure-1 se la scheda non si trova nella posizione specificata.

## <a name="ctabctrlinsertitem"></a><a name="insertitem"></a> `CTabCtrl::InsertItem`

Inserisce una nuova scheda in un controllo struttura a schede esistente.

```cpp
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

*`nItem`*\
Indice in base zero della nuova scheda.

*`pTabCtrlItem`*\
Puntatore a una [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) struttura che specifica gli attributi della scheda.

*`lpszItem`*\
Indirizzo di una stringa con terminazione null che contiene il testo della scheda.

*`nImage`*\
Indice in base zero di un'immagine da inserire da un elenco di immagini.

*`nMask`*\
Specifica `TCITEM` gli attributi di struttura da impostare. Può essere zero o una combinazione dei valori seguenti:

- `TCIF_TEXT`: Il `pszText` membro è valido.
- `TCIF_IMAGE`: Il `iImage` membro è valido.
- `TCIF_PARAM`: Il *`lParam`* membro è valido.
- `TCIF_RTLREADING`: Il testo di `pszText` viene visualizzato utilizzando l'ordine di lettura da destra a sinistra nei sistemi ebraici o arabi.
- `TCIF_STATE`: Il *`dwState`* membro è valido.

*`lParam`*\
Dati definiti dall'applicazione associati alla scheda.

*`dwState`*\
Specifica i valori per gli Stati dell'elemento. Per ulteriori informazioni, vedere [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) nella Windows SDK.

*`dwStateMask`*\
Specifica gli Stati da impostare. Per ulteriori informazioni, vedere [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Indice in base zero della nuova scheda se ha esito positivo; in caso contrario,-1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#5](../../mfc/reference/codesnippet/cpp/ctabctrl-class_5.cpp)]

## <a name="ctabctrlremoveimage"></a><a name="removeimage"></a> `CTabCtrl::RemoveImage`

Rimuove l'immagine specificata dall'elenco di immagini di un controllo struttura a schede.

```cpp
void RemoveImage(int nImage);
```

### <a name="parameters"></a>Parametri

*`nImage`*\
Indice in base zero dell'immagine da rimuovere.

### <a name="remarks"></a>Commenti

Il controllo struttura a schede aggiorna l'indice dell'immagine di ogni scheda in modo che ogni scheda rimanga associata alla stessa immagine.

## <a name="ctabctrlsetcurfocus"></a><a name="setcurfocus"></a> `CTabCtrl::SetCurFocus`

Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.

```cpp
void SetCurFocus(int nItem);
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Specifica l'indice della scheda che ottiene lo stato attivo.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del [TCM_SETCURFOCUS](/windows/win32/Controls/tcm-setcurfocus)del messaggio Win32, come descritto nel Windows SDK.

## <a name="ctabctrlsetcursel"></a><a name="setcursel"></a> `CTabCtrl::SetCurSel`

Seleziona una scheda in un controllo struttura a schede.

```cpp
int SetCurSel(int nItem);
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Indice in base zero dell'elemento da selezionare.

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in precedenza, se ha esito positivo; in caso contrario,-1.

### <a name="remarks"></a>Commenti

Un controllo struttura a schede non invia un messaggio di notifica TCN_SELCHANGING o TCN_SELCHANGE quando viene selezionata una scheda tramite questa funzione. Queste notifiche vengono inviate, usando WM_NOTIFY, quando l'utente fa clic o usa la tastiera per modificare le schede.

## <a name="ctabctrlsetextendedstyle"></a><a name="setextendedstyle"></a> `CTabCtrl::SetExtendedStyle`

Imposta gli stili estesi per un controllo struttura a schede.

```cpp
DWORD SetExtendedStyle(DWORD dwNewStyle, DWORD dwExMask = 0);
```

### <a name="parameters"></a>Parametri

*`dwNewStyle`*\
Valore che specifica una combinazione di stili estesi del controllo scheda.

*`dwExMask`*\
Valore DWORD che indica gli stili che devono *`dwNewStyle`* essere interessati. Solo gli stili estesi in *`dwExMask`* verranno modificati. Tutti gli altri stili verranno mantenuti così come sono. Se questo parametro è zero, tutti gli stili in *`dwNewStyle`* saranno interessati.

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli [stili estesi del controllo scheda](/windows/win32/Controls/tab-control-extended-styles)precedente, come descritto nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [`TCM_SETEXTENDEDSTYLE`](/windows/win32/Controls/tcm-setextendedstyle) , come descritto nel Windows SDK.

## <a name="ctabctrlsetimagelist"></a><a name="setimagelist"></a> `CTabCtrl::SetImageList`

Assegna un elenco di immagini a un controllo struttura a schede.

```cpp
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*`pImageList`*\
Puntatore all'elenco di immagini da assegnare al controllo struttura a schede.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'elenco di immagini precedente o NULL se non è presente un elenco di immagini precedente.

## <a name="ctabctrlsetitem"></a><a name="setitem"></a> `CTabCtrl::SetItem`

Imposta alcuni o tutti gli attributi di una scheda.

```cpp
BOOL SetItem(int nItem,   TCITEM* pTabCtrlItem);
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Indice in base zero dell'elemento.

*`pTabCtrlItem`*\
Puntatore a una [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) struttura che contiene gli attributi del nuovo elemento. Il `mask` membro specifica gli attributi da impostare. Se il `mask` membro specifica il `TCIF_TEXT` valore, il `pszText` membro è l'indirizzo di una stringa con terminazione null e il `cchTextMax` membro viene ignorato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [GetItem](#getitem).

## <a name="ctabctrlsetitemextra"></a><a name="setitemextra"></a> `CTabCtrl::SetItemExtra`

Imposta il numero di byte per tabulazione riservata ai dati definiti dall'applicazione in un controllo struttura a schede.

```cpp
BOOL SetItemExtra(int nBytes);
```

### <a name="parameters"></a>Parametri

*`nBytes`*\
Numero di byte aggiuntivi da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Questa funzione membro implementa il comportamento del messaggio Win32 [`TCM_SETITEMEXTRA`](/windows/win32/Controls/tcm-setitemextra) , come descritto nel Windows SDK.

## <a name="ctabctrlsetitemsize"></a><a name="setitemsize"></a> `CTabCtrl::SetItemSize`

Imposta la larghezza e l'altezza degli elementi di controllo della scheda.

```cpp
CSize SetItemSize(CSize size);
```

### <a name="parameters"></a>Parametri

*`size`*\
La nuova larghezza e altezza, in pixel, degli elementi di controllo della scheda.

### <a name="return-value"></a>Valore restituito

Restituisce la larghezza e l'altezza precedenti degli elementi di controllo della scheda.

## <a name="ctabctrlsetitemstate"></a><a name="setitemstate"></a> `CTabCtrl::SetItemState`

Imposta lo stato dell'elemento di controllo Tab identificato da *`nItem`* .

```cpp
BOOL SetItemState(
    int nItem,
    DWORD dwMask,
    DWORD dwState);
```

### <a name="parameters"></a>Parametri

*`nItem`*\
Numero di indice in base zero dell'elemento per il quale impostare le informazioni sullo stato.

*`dwMask`*\
Maschera che specifica i flag di stato dell'elemento da impostare. Per un elenco di valori, vedere il membro mask della [`TCITEM`](/windows/win32/api/commctrl/ns-commctrl-tcitemw) struttura, come descritto nel Windows SDK.

*`dwState`*\
Riferimento a un valore DWORD contenente le informazioni sullo stato. I possibili valori sono i seguenti:

|Valore|Descrizione|
|-----------|-----------------|
|`TCIS_BUTTONPRESSED`|L'elemento di controllo Tab è selezionato.|
|`TCIS_HIGHLIGHTED`|L'elemento di controllo Tab è evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, si tratta di un'interpolazione vera, non di un colore con stato.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="ctabctrlsetmintabwidth"></a><a name="setmintabwidth"></a> `CTabCtrl::SetMinTabWidth`

Imposta la larghezza minima degli elementi in un controllo struttura a schede.

```cpp
int SetMinTabWidth(int cx);
```

### <a name="parameters"></a>Parametri

*`cx`*\
Larghezza minima da impostare per un elemento di controllo struttura a schede. Se questo parametro è impostato su-1, il controllo utilizzerà la larghezza predefinita della scheda.

### <a name="return-value"></a>Valore restituito

Larghezza minima della scheda precedente.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [`TCM_SETMINTABWIDTH`](/windows/win32/Controls/tcm-setmintabwidth) , come descritto nel Windows SDK.

## <a name="ctabctrlsetpadding"></a><a name="setpadding"></a> `CTabCtrl::SetPadding`

Imposta la quantità di spazio (riempimento) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

```cpp
void SetPadding(CSize size);
```

### <a name="parameters"></a>Parametri

*`size`*\
Imposta la quantità di spazio (riempimento) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

## <a name="ctabctrlsettooltips"></a><a name="settooltips"></a> `CTabCtrl::SetToolTips`

Assegna un controllo descrizione comando a un controllo struttura a schede.

```cpp
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*`pWndTip`*\
Handle del controllo descrizione comando.

### <a name="remarks"></a>Commenti

È possibile ottenere il controllo descrizione comando associato a un controllo struttura a schede effettuando una chiamata a `GetToolTips` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [`CPropertySheet::GetTabControl`](../../mfc/reference/cpropertysheet-class.md#gettabcontrol) .

## <a name="see-also"></a>Vedi anche

[`CWnd` Classe](../../mfc/reference/cwnd-class.md)\
[`CHeaderCtrl` Classe](../../mfc/reference/cheaderctrl-class.md)\
[ `CListCtrl` ](../../mfc/reference/clistctrl-class.md) 
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md) di classi\