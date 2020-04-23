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
ms.openlocfilehash: 42d4b24222b1760bc418e904881edb2bb0e5a1f4
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752317"
---
# <a name="ctabctrl-class"></a>Classe CTabCtrl

Fornisce la funzionalità del controllo scheda comune di Windows.

## <a name="syntax"></a>Sintassi

```
class CTabCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabCtrl::CTabCtrl](#ctabctrl)|Costruisce un oggetto `CTabCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTabCtrl::AdjustRect](#adjustrect)|Calcola l'area di visualizzazione di un controllo struttura a schede in base a un rettangolo della finestra o calcola il rettangolo della finestra che corrisponderebbe a una determinata area di visualizzazione.|
|[CTabCtrl::Crea](#create)|Crea un controllo struttura a schede e `CTabCtrl` lo associa a un'istanza di un oggetto.|
|[CTabCtrl::CreateEx](#createex)|Crea un controllo struttura a schede con gli stili estesi `CTabCtrl` di Windows specificati e lo associa a un'istanza di un oggetto.|
|[CTabCtrl::DeleteAllItems](#deleteallitems)|Rimuove tutti gli elementi da un controllo struttura a schede.|
|[CTabCtrl::DeleteItem](#deleteitem)|Rimuove un elemento da un controllo struttura a schede.|
|[CTabCtrl::DeselectAll](#deselectall)|Reimposta gli elementi in un controllo struttura a schede, deselezionando gli elementi premuti.|
|[CTabCtrl::DrawItem](#drawitem)|Disegna un elemento specificato di un controllo struttura a schede.|
|[CTabCtrl::GetCurFocus](#getcurfocus)|Recupera la scheda con lo stato attivo corrente di un controllo struttura a schede.|
|[CTabCtrl::GetCurSel](#getcursel)|Determina la scheda attualmente selezionata in un controllo struttura a schede.|
|[CTabCtrl::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.|
|[CTabCtrl::GetImageList](#getimagelist)|Recupera l'elenco di immagini associato a un controllo struttura a schede.|
|[CTabCtrl::GetItem](#getitem)|Recupera informazioni su una scheda in un controllo struttura a schede.|
|[CTabCtrl::GetItemCount](#getitemcount)|Recupera il numero di schede nel controllo Struttura a schede.|
|[CTabCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per una scheda in un controllo struttura a schede.|
|[CTabCtrl::GetItemState](#getitemstate)|Recupera lo stato dell'elemento del controllo struttura a schede indicato.|
|[CTabCtrl::GetRowCount](#getrowcount)|Recupera il numero corrente di righe di schede in un controllo struttura a schede.|
|[CTabCtrl::GetToolTips](#gettooltips)|Recupera l'handle del controllo descrizione comandi associato a un controllo struttura a schede.|
|[CTabCtrl::HighlightItem](#highlightitem)|Imposta lo stato di evidenziazione di un elemento della scheda.|
|[CTabCtrl::HitTest](#hittest)|Determina quale scheda, se presente, si trova in una posizione specifica dello schermo.|
|[CTabCtrl::InsertItem](#insertitem)|Inserisce una nuova scheda in un controllo Struttura a schede.|
|[CTabCtrl::RemoveImage](#removeimage)|Rimuove un'immagine dall'elenco di immagini di un controllo struttura a schede.|
|[CTabCtrl::SetCurFocus](#setcurfocus)|Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.|
|[CTabCtrl::SetCurSel](#setcursel)|Seleziona una scheda in un controllo struttura a schede.|
|[CTabCtrl::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per un controllo struttura a schede.|
|[CTabCtrl::SetImageList](#setimagelist)|Assegna un elenco immagini a un controllo struttura a schede.|
|[CTabCtrl::SetItem](#setitem)|Imposta alcuni o tutti gli attributi di una scheda.|
|[CTabCtrl::SetItemExtra](#setitemextra)|Imposta il numero di byte per scheda riservati per i dati definiti dall'applicazione in un controllo struttura a schede.|
|[CTabCtrl::SetItemSize](#setitemsize)|Imposta la larghezza e l'altezza di un elemento.|
|[CTabCtrl::SetItemState](#setitemstate)|Imposta lo stato dell'elemento del controllo struttura a schede indicato.|
|[CTabCtrl::SetMinTabWidth](#setmintabwidth)|Imposta la larghezza minima degli elementi in un controllo struttura a schede.|
|[CTabCtrl::SetPadding](#setpadding)|Imposta la quantità di spazio (padding) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.|
|[CTabCtrl::SetToolTips](#settooltips)|Assegna un controllo descrizione comandi a un controllo struttura a schede.|

## <a name="remarks"></a>Osservazioni

Un "controllo struttura" è analogo ai divisori di un blocco appunti o alle etichette in un archivio file. L'uso del controllo Struttura a schede consente a un'applicazione di definire più pagine per la stessa area di una finestra o una finestra di dialogo. Ogni pagina è costituita da un set di informazioni o da un gruppo di controlli visualizzati dall'applicazione quando l'utente seleziona la scheda corrispondente. Un tipo speciale di controllo struttura a schede visualizza schede simili a pulsanti. Fare clic su un pulsante dovrebbe eseguire immediatamente un comando invece di visualizzare una pagina.

Questo controllo (e `CTabCtrl` quindi la classe) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.

Per ulteriori informazioni `CTabCtrl`sull'utilizzo di , vedere [Controlli](../../mfc/controls-mfc.md) e Utilizzo di [CTabCtrl](../../mfc/using-ctabctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CTabCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="ctabctrladjustrect"></a><a name="adjustrect"></a>CTabCtrl::AdjustRect

Calcola l'area di visualizzazione di un controllo struttura a schede in base a un rettangolo della finestra o calcola il rettangolo della finestra che corrisponderebbe a una determinata area di visualizzazione.

```cpp
void AdjustRect(BOOL bLarger,   LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*bPiù grande*<br/>
Indica l'operazione da eseguire. Se questo parametro è TRUE, *lpRect* specifica un rettangolo di visualizzazione e riceve il rettangolo della finestra corrispondente. Se questo parametro è FALSE, *lpRect* specifica un rettangolo di finestra e riceve il rettangolo di visualizzazione corrispondente.

*Lprect*<br/>
Puntatore a un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura che specifica il rettangolo specificato e riceve il rettangolo calcolato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#1](../../mfc/reference/codesnippet/cpp/ctabctrl-class_1.cpp)]

## <a name="ctabctrlcreate"></a><a name="create"></a>CTabCtrl::Crea

Crea un controllo struttura a schede e `CTabCtrl` lo associa a un'istanza di un oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica lo stile del controllo struttura a schede. Applicare qualsiasi combinazione di stili di controllo struttura a [schede,](/windows/win32/Controls/tab-control-styles)descritta in Windows SDK. Vedere **Osservazioni** per un elenco degli stili di finestra che è possibile applicare anche al controllo.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo struttura a schede. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo `CDialog`struttura a schede, in genere un oggetto . Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo struttura a schede.

### <a name="return-value"></a>Valore restituito

TRUESe l'inizializzazione dell'oggetto ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Costruire un `CTabCtrl` oggetto in due passaggi. Chiamare innanzitutto il costruttore `Create`, quindi chiamare , che crea `CTabCtrl` il controllo struttura a schede e lo associa all'oggetto .

Oltre agli stili dei controlli struttura a schede, è possibile applicare i seguenti stili di finestra a un controllo Struttura a schede:

- WS_CHILD Crea una finestra figlio che rappresenta il controllo struttura a schede. Non può essere utilizzato con lo stile WS_POPUP.

- WS_VISIBLE Crea un controllo Struttura a schede inizialmente visibile.

- WS_DISABLED Crea una finestra inizialmente disabilitata.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo a quello successivo con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e inizia il gruppo successivo, ovvero un gruppo termina nel punto in cui inizia il successivo.

- WS_TABSTOP Specifica uno dei diversi controlli tramite i quali l'utente può spostarsi utilizzando il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato dallo stile WS_TABSTOP.

Per creare un controllo Struttura a schede con stili di `Create`finestra estesi, chiamare [CTabCtrl::CreateEx](#createex) anziché .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#2](../../mfc/reference/codesnippet/cpp/ctabctrl-class_2.cpp)]

## <a name="ctabctrlcreateex"></a><a name="createex"></a>CTabCtrl::CreateEx

Crea un controllo (una finestra figlio) `CTabCtrl` e lo associa all'oggetto.

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
Specifica lo stile del controllo struttura a schede. Applicare qualsiasi combinazione di stili di controllo struttura a [schede,](/windows/win32/Controls/tab-control-styles)descritta in Windows SDK. Vedere **Osservazioni** in [Creare](#create) per un elenco degli stili di finestra che è possibile applicare anche al controllo.

*Rect*<br/>
Riferimento a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

`CreateEx`crea il controllo con gli stili di Windows estesi specificati da *dwExStyle*. Impostare gli stili estesi specifici di un controllo utilizzando [SetExtendedStyle](#setextendedstyle). Ad esempio, `CreateEx` utilizzare per impostare stili `SetExtendedStyle` come WS_EX_CONTEXTHELP, ma utilizzare per impostare tali stili come TCS_EX_FLATSEPARATORS. Per altre informazioni, vedere gli stili descritti in [Stili estesi del controllo scheda](/windows/win32/Controls/tab-control-extended-styles) in Windows SDK.

## <a name="ctabctrlctabctrl"></a><a name="ctabctrl"></a>CTabCtrl::CTabCtrl

Costruisce un oggetto `CTabCtrl`.

```
CTabCtrl();
```

## <a name="ctabctrldeleteallitems"></a><a name="deleteallitems"></a>CTabCtrl::DeleteAllItems

Rimuove tutti gli elementi da un controllo struttura a schede.

```
BOOL DeleteAllItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="ctabctrldeleteitem"></a><a name="deleteitem"></a>CTabCtrl::DeleteItem

Rimuove l'elemento specificato da un controllo struttura a schede.

```
BOOL DeleteItem(int nItem);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Valore in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#3](../../mfc/reference/codesnippet/cpp/ctabctrl-class_3.cpp)]

## <a name="ctabctrldeselectall"></a><a name="deselectall"></a>CTabCtrl::DeselectAll

Reimposta gli elementi in un controllo struttura a schede, deselezionando gli elementi premuti.

```cpp
void DeselectAll(BOOL fExcludeFocus);
```

### <a name="parameters"></a>Parametri

*fExcludeFocus (informazioni in questo stati in due)*<br/>
Flag che specifica l'ambito della deselezione dell'elemento. Se questo parametro è impostato su FALSE, tutti i pulsanti della scheda verranno reimpostati. Se è impostato su TRUE, tutti gli elementi della scheda ad eccezione di quello attualmente selezionato verranno reimpostati.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32, [TCM_DESELECTALL](/windows/win32/Controls/tcm-deselectall), come descritto in Windows SDK.

## <a name="ctabctrldrawitem"></a><a name="drawitem"></a>CTabCtrl::DrawItem

Chiamato dal framework quando viene modificato un aspetto visivo di un controllo struttura a schede disegnato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che descrive l'elemento da disegnare.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione `CTabCtrl` membro per implementare il disegno per un oggetto di disegno del proprietario.

L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima che questa funzione membro termini.

## <a name="ctabctrlgetcurfocus"></a><a name="getcurfocus"></a>CTabCtrl::GetCurFocus

Recupera l'indice della scheda con lo stato attivo corrente.

```
int GetCurFocus() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda con lo stato attivo corrente.

## <a name="ctabctrlgetcursel"></a><a name="getcursel"></a>CTabCtrl::GetCurSel

Recupera la scheda attualmente selezionata in un controllo struttura a schede.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata se ha esito positivo o - 1 se non è selezionata alcuna tabulazione.

## <a name="ctabctrlgetextendedstyle"></a><a name="getextendedstyle"></a>CTabCtrl::GetExtendedStyle

Recupera gli stili estesi attualmente in uso per il controllo struttura a schede.

```
DWORD GetExtendedStyle();
```

### <a name="return-value"></a>Valore restituito

Rappresenta gli stili estesi attualmente in uso per il controllo struttura a schede. Questo valore è una combinazione di stili estesi del [controllo struttura a schede](/windows/win32/Controls/tab-control-extended-styles), come descritto in Windows SDK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_GETEXTENDEDSTYLE](/windows/win32/Controls/tcm-getextendedstyle), come descritto in Windows SDK.

## <a name="ctabctrlgetimagelist"></a><a name="getimagelist"></a>CTabCtrl::GetImageList

Recupera l'elenco di immagini associato a una struttura a schede.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, viene restituito un puntatore all'elenco di immagini di una struttura a schede; in caso contrario viene restituito NULL.

## <a name="ctabctrlgetitem"></a><a name="getitem"></a>CTabCtrl::GetItem

Recupera informazioni su una scheda in un controllo struttura a schede.

```
BOOL GetItem(int nItem,   TCITEM* pTabCtrlItem) const;
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Indice in base zero della scheda.

*pTabCtrlItem (elemento in cui è stato fatto in modo*<br/>
Puntatore a una struttura [TCITEM,](/windows/win32/api/commctrl/ns-commctrl-tcitemw) utilizzata per specificare le informazioni da recuperare. Utilizzato anche per ricevere informazioni sulla scheda. Questa struttura viene `InsertItem`utilizzata `GetItem`con `SetItem` le funzioni membro , , e .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Quando il messaggio viene `mask` inviato, il membro specifica gli attributi da restituire. Se `mask` il membro specifica il `pszText` valore TCIF_TEXT, il membro deve contenere l'indirizzo del buffer che riceve il testo dell'elemento e il `cchTextMax` membro deve specificare la dimensione del buffer.

- `mask`

   Valore che `TCITEM` specifica i membri della struttura da recuperare o impostare. Questo membro può essere zero o una combinazione dei seguenti valori:

  - TCIF_TEXT `pszText` Il membro è valido.

  - TCIF_IMAGE `iImage` Il membro è valido.

  - TCIF_PARAM `lParam` Il membro è valido.

  - TCIF_RTLREADING Il `pszText` testo di viene visualizzato utilizzando l'ordine di lettura da destra a sinistra sui sistemi ebraico o arabo.

  - TCIF_STATE `dwState` Il membro è valido.

- `pszText`

   Puntatore a una stringa con terminazione null contenente il testo della scheda se la struttura contiene informazioni su una scheda. Se la struttura riceve informazioni, questo membro specifica l'indirizzo del buffer che riceve il testo della scheda.

- `cchTextMax`

   Dimensione del buffer a `pszText`cui punta . Questo membro viene ignorato se la struttura non riceve informazioni.

- `iImage`Indicizzare nell'elenco immagini del controllo Struttura a schede oppure - 1 se non è presente alcuna immagine per la scheda.

- `lParam`

   Dati definiti dall'applicazione associati alla scheda. Se sono presenti più di quattro byte di dati definiti dall'applicazione per ogni `TCITEM` scheda, un'applicazione deve definire una struttura e utilizzarla al posto della struttura. Il primo membro della struttura definita dall'applicazione deve essere una struttura [TCITEMHEADER.](/windows/win32/api/commctrl/ns-commctrl-tcitemheaderw) La `TCITEMHEADER` struttura è `TCITEM` identica alla `lParam` struttura, ma senza il membro. La differenza tra le dimensioni della struttura `TCITEMHEADER` e le dimensioni della struttura deve essere uguale al numero di byte aggiuntivi per scheda.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#4](../../mfc/reference/codesnippet/cpp/ctabctrl-class_4.cpp)]

## <a name="ctabctrlgetitemcount"></a><a name="getitemcount"></a>CTabCtrl::GetItemCount

Recupera il numero di schede nel controllo Struttura a schede.

```
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo Struttura a schede.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctabctrlgetitemrect"></a><a name="getitemrect"></a>CTabCtrl::GetItemRect

Recupera il rettangolo di delimitazione per la scheda specificata in un controllo struttura a schede.

```
BOOL GetItemRect(int nItem,   LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Indice in base zero della voce della scheda.

*Lprect*<br/>
Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che riceve il rettangolo di delimitazione della scheda. Queste coordinate utilizzano la modalità di mapping corrente della finestra.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="ctabctrlgetitemstate"></a><a name="getitemstate"></a>CTabCtrl::GetItemState

Recupera lo stato dell'elemento del controllo struttura a schede identificato da *nItem*.

```
DWORD GetItemState(
    int nItem,
    DWORD dwMask) const;
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Numero di indice in base zero dell'elemento per il quale recuperare le informazioni sullo stato.

*dwMaschera*<br/>
Maschera che specifica quale dei flag di stato dell'elemento restituire. Per un elenco di valori, vedere il membro maschera della struttura [TCITEM,](/windows/win32/api/commctrl/ns-commctrl-tcitemw) come descritto in Windows SDK.

### <a name="return-value"></a>Valore restituito

Riferimento a un valore DWORD che riceve le informazioni sullo stato. I possibili valori sono i seguenti:

|valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento del controllo Struttura a schede è selezionato.|
|TCIS_HIGHLIGHTED|L'elemento del controllo struttura a schede viene evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si utilizza il colore di evidenziazione, questo sarà un'interpolazione vera, non un colore dithered.|

### <a name="remarks"></a>Osservazioni

Lo stato di un elemento `dwState` è `TCITEM` specificato dal membro della struttura.

## <a name="ctabctrlgetrowcount"></a><a name="getrowcount"></a>CTabCtrl::GetRowCount

Recupera il numero corrente di righe in un controllo struttura a schede.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di righe di schede nel controllo struttura a schede.

### <a name="remarks"></a>Osservazioni

Solo i controlli scheda con lo stile TCS_MULTILINE possono avere più righe di schede.

## <a name="ctabctrlgettooltips"></a><a name="gettooltips"></a>CTabCtrl::GetToolTips

Recupera l'handle del controllo descrizione comandi associato a un controllo struttura a schede.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Handle del controllo descrizione comandi in caso di esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Un controllo struttura a schede crea un controllo descrizione comandi se ha lo stile TCS_TOOLTIPS. È inoltre possibile assegnare un controllo descrizione `SetToolTips` comandi a un controllo struttura a schede utilizzando la funzione membro.

## <a name="ctabctrlhighlightitem"></a><a name="highlightitem"></a>CTabCtrl::HighlightItem

Imposta lo stato di evidenziazione di un elemento della scheda.

```
BOOL HighlightItem(int idItem,   BOOL fHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*idItem (elemento in cui è in*<br/>
Indice in base zero di un elemento del controllo Struttura a schede.

*fEvidenziare*<br/>
Valore che specifica lo stato di evidenziazione da impostare. Se questo valore è TRUE, la scheda viene evidenziata; se FALSE, la scheda viene impostata sullo stato predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il messaggio Win32 [TCM_HIGHLIGHTITEM](/windows/win32/Controls/tcm-highlightitem), come descritto in Windows SDK.

## <a name="ctabctrlhittest"></a><a name="hittest"></a>CTabCtrl::HitTest

Determina quale scheda, se presente, si trova nella posizione specificata dello schermo.

```
int HitTest(TCHITTESTINFO* pHitTestInfo) const;
```

### <a name="parameters"></a>Parametri

*pHitTestInfo (informazioni in stato in stato in stato in stato*<br/>
Puntatore a una struttura [TCHITTESTINFO,](/windows/win32/api/commctrl/ns-commctrl-tchittestinfo) come descritto in Windows SDK, che specifica la posizione dello schermo da testare.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice in base zero della scheda o - 1 se nessuna tabulazione si trova nella posizione specificata.

## <a name="ctabctrlinsertitem"></a><a name="insertitem"></a>CTabCtrl::InsertItem

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

*nVoce*<br/>
Indice in base zero della nuova scheda.

*pTabCtrlItem (elemento in cui è stato fatto in modo*<br/>
Puntatore a una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) che specifica gli attributi della scheda.

*lpszItem (elemento di gruppo)*<br/>
Indirizzo di una stringa con terminazione null che contiene il testo della scheda.

*nImmagine*<br/>
Indice in base zero di un'immagine da inserire da un elenco immagini.

*nMaschera*<br/>
Specifica gli `TCITEM` attributi della struttura da impostare. Può essere zero o una combinazione dei seguenti valori:

- TCIF_TEXT `pszText` Il membro è valido.

- TCIF_IMAGE `iImage` Il membro è valido.

- TCIF_PARAM il membro *lParam* sia valido.

- TCIF_RTLREADING Il `pszText` testo di viene visualizzato utilizzando l'ordine di lettura da destra a sinistra sui sistemi ebraico o arabo.

- TCIF_STATE Il membro *dwState* è valido.

*lParam*<br/>
Dati definiti dall'applicazione associati alla scheda.

*dwState (dwState)*<br/>
Specifica i valori per gli stati dell'elemento. Per ulteriori informazioni, vedere [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) in Windows SDK.

*dwStateMask (maschera di stato)*<br/>
Specifica quali stati devono essere impostati. Per ulteriori informazioni, vedere [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Indice in base zero della nuova scheda in caso di esito positivo; in caso contrario - 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#5](../../mfc/reference/codesnippet/cpp/ctabctrl-class_5.cpp)]

## <a name="ctabctrlremoveimage"></a><a name="removeimage"></a>CTabCtrl::RemoveImage

Rimuove l'immagine specificata dall'elenco di immagini di un controllo struttura a schede.

```cpp
void RemoveImage(int nImage);
```

### <a name="parameters"></a>Parametri

*nImmagine*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="remarks"></a>Osservazioni

Il controllo struttura a schede aggiorna l'indice dell'immagine di ogni scheda in modo che ogni scheda rimanga associata alla stessa immagine.

## <a name="ctabctrlsetcurfocus"></a><a name="setcurfocus"></a>CTabCtrl::SetCurFocus

Imposta lo stato attivo su una scheda specificata in un controllo struttura a schede.

```cpp
void SetCurFocus(int nItem);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Specifica l'indice della scheda che ottiene lo stato attivo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETCURFOCUS](/windows/win32/Controls/tcm-setcurfocus), come descritto in Windows SDK.

## <a name="ctabctrlsetcursel"></a><a name="setcursel"></a>CTabCtrl::SetCurSel

Seleziona una scheda in un controllo struttura a schede.

```
int SetCurSel(int nItem);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Indice in base zero dell'elemento da selezionare.

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in precedenza in caso di esito positivo, in caso contrario - 1.

### <a name="remarks"></a>Osservazioni

Un controllo struttura a schede non invia un messaggio di notifica TCN_SELCHANGING o TCN_SELCHANGE quando viene selezionata una scheda utilizzando questa funzione. Queste notifiche vengono inviate, utilizzando WM_NOTIFY, quando l'utente fa clic o utilizza la tastiera per modificare le schede.

## <a name="ctabctrlsetextendedstyle"></a><a name="setextendedstyle"></a>CTabCtrl::SetExtendedStyle

Imposta gli stili estesi per un controllo struttura a schede.

```
DWORD SetExtendedStyle(DWORD dwNewStyle,   DWORD dwExMask = 0);
```

### <a name="parameters"></a>Parametri

*dwNewStyle (informazioni in base allo stile)*<br/>
Valore che specifica una combinazione di stili estesi del controllo struttura a schede.

*DwExMaschera*<br/>
Valore DWORD che indica gli stili in *dwNewStyle* interessati. Verranno modificati solo gli stili estesi in *dwExMask.* Tutti gli altri stili verranno mantenuti così come sono. Se questo parametro è zero, verranno influenzati tutti gli stili in *dwNewStyle.*

### <a name="return-value"></a>Valore restituito

Valore DWORD che contiene gli stili estesi del [controllo struttura a schede](/windows/win32/Controls/tab-control-extended-styles)precedente, come descritto in Windows SDK.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETEXTENDEDSTYLE](/windows/win32/Controls/tcm-setextendedstyle), come descritto in Windows SDK.

## <a name="ctabctrlsetimagelist"></a><a name="setimagelist"></a>CTabCtrl::SetImageList

Assegna un elenco immagini a un controllo struttura a schede.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList (elenco immagine)*<br/>
Puntatore all'elenco di immagini da assegnare al controllo struttura a schede.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'elenco immagini precedente o NULL se non è presente alcun elenco immagini precedente.

## <a name="ctabctrlsetitem"></a><a name="setitem"></a>CTabCtrl::SetItem

Imposta alcuni o tutti gli attributi di una scheda.

```
BOOL SetItem(int nItem,   TCITEM* pTabCtrlItem);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Indice in base zero dell'elemento.

*pTabCtrlItem (elemento in cui è stato fatto in modo*<br/>
Puntatore a una struttura [TCITEM](/windows/win32/api/commctrl/ns-commctrl-tcitemw) che contiene gli attributi del nuovo articolo. Il `mask` membro specifica gli attributi da impostare. Se `mask` il membro specifica il `pszText` valore TCIF_TEXT, il membro è l'indirizzo di una stringa con terminazione null e il `cchTextMax` membro viene ignorato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [GetItem](#getitem).

## <a name="ctabctrlsetitemextra"></a><a name="setitemextra"></a>CTabCtrl::SetItemExtra

Imposta il numero di byte per scheda riservati per i dati definiti dall'applicazione in un controllo struttura a schede.

```
BOOL SetItemExtra(int nBytes);
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte aggiuntivi da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETITEMEXTRA](/windows/win32/Controls/tcm-setitemextra), come descritto in Windows SDK.

## <a name="ctabctrlsetitemsize"></a><a name="setitemsize"></a>CTabCtrl::SetItemSize

Imposta la larghezza e l'altezza degli elementi di controllo della scheda.

```
CSize SetItemSize(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
La nuova larghezza e altezza, in pixel, degli elementi di controllo della scheda.

### <a name="return-value"></a>Valore restituito

Restituisce la larghezza e l'altezza precedenti degli elementi di controllo della scheda.

## <a name="ctabctrlsetitemstate"></a><a name="setitemstate"></a>CTabCtrl::SetItemState

Imposta lo stato dell'elemento del controllo struttura a schede identificato da *nItem*.

```
BOOL SetItemState(
    int nItem,
    DWORD dwMask,
    DWORD dwState);
```

### <a name="parameters"></a>Parametri

*nVoce*<br/>
Numero di indice in base zero dell'elemento per il quale impostare le informazioni sullo stato.

*dwMaschera*<br/>
Maschera che specifica quale dei flag di stato dell'elemento impostare. Per un elenco di valori, vedere il membro maschera della struttura [TCITEM,](/windows/win32/api/commctrl/ns-commctrl-tcitemw) come descritto in Windows SDK.

*dwState (dwState)*<br/>
Riferimento a un valore DWORD contenente le informazioni sullo stato. I possibili valori sono i seguenti:

|valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento del controllo Struttura a schede è selezionato.|
|TCIS_HIGHLIGHTED|L'elemento del controllo struttura a schede viene evidenziato e la scheda e il testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si utilizza il colore di evidenziazione, questo sarà un'interpolazione vera, non un colore dithered.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="ctabctrlsetmintabwidth"></a><a name="setmintabwidth"></a>CTabCtrl::SetMinTabWidth

Imposta la larghezza minima degli elementi in un controllo struttura a schede.

```
int SetMinTabWidth(int cx);
```

### <a name="parameters"></a>Parametri

*Cx*<br/>
Larghezza minima da impostare per un elemento del controllo struttura a schede. Se questo parametro è impostato su -1, il controllo utilizzerà la larghezza predefinita della tabulazione.

### <a name="return-value"></a>Valore restituito

Larghezza minima precedente della tabulazione.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETMINTABWIDTH](/windows/win32/Controls/tcm-setmintabwidth), come descritto in Windows SDK.

## <a name="ctabctrlsetpadding"></a><a name="setpadding"></a>CTabCtrl::SetPadding

Imposta la quantità di spazio (padding) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

```cpp
void SetPadding(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Imposta la quantità di spazio (padding) intorno all'icona e all'etichetta di ogni scheda in un controllo struttura a schede.

## <a name="ctabctrlsettooltips"></a><a name="settooltips"></a>CTabCtrl::SetToolTips

Assegna un controllo descrizione comandi a un controllo struttura a schede.

```cpp
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip (suggerimento)*<br/>
Maniglia del controllo descrizione comandi.

### <a name="remarks"></a>Osservazioni

È possibile ottenere il controllo descrizione comandi associato a `GetToolTips`un controllo struttura a schede effettuando una chiamata a .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPropertySheet::GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
