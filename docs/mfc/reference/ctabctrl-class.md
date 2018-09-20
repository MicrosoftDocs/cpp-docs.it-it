---
title: Classe CTabCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: aa7fd6b89ad4437397e0ff685400b7efe957eaca
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46421882"
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
|[CTabCtrl::AdjustRect](#adjustrect)|Calcola l'area di visualizzazione di un controllo struttura a schede un rettangolo di finestra specificato oppure calcola il rettangolo della finestra che corrisponde a un'area di visualizzazione specificato.|
|[CTabCtrl::Create](#create)|Crea un controllo struttura a schede e la collega a un'istanza di un `CTabCtrl` oggetto.|
|[CTabCtrl::CreateEx](#createex)|Crea un controllo struttura a schede con gli stili estesi di Windows specificati e lo collega a un'istanza di un `CTabCtrl` oggetto.|
|[CTabCtrl::DeleteAllItems](#deleteallitems)|Rimuove tutti gli elementi da un controllo struttura a schede.|
|[CTabCtrl::DeleteItem](#deleteitem)|Rimuove un elemento da un controllo struttura a schede.|
|[CTabCtrl::DeselectAll](#deselectall)|Reimposta gli elementi in un controllo struttura a schede, cancellando uno qualsiasi che sono stati premuti.|
|[CTabCtrl::DrawItem](#drawitem)|Disegna un elemento specificato di un controllo struttura a schede.|
|[CTabCtrl::GetCurFocus](#getcurfocus)|Recupera la scheda con lo stato attivo corrente di un controllo struttura a schede.|
|[CTabCtrl::GetCurSel](#getcursel)|Determina la scheda attualmente selezionata in un controllo struttura a schede.|
|[CTabCtrl::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi che sono attualmente in uso per il controllo struttura a schede.|
|[CTabCtrl::GetImageList](#getimagelist)|Recupera l'elenco di immagini associato a un controllo struttura a schede.|
|[CTabCtrl::GetItem](#getitem)|Recupera informazioni su una scheda in un controllo struttura a schede.|
|[CTabCtrl::GetItemCount](#getitemcount)|Recupera il numero delle schede nel controllo struttura a schede.|
|[CTabCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per la scheda in un controllo struttura a schede.|
|[CTabCtrl::GetItemState](#getitemstate)|Recupera lo stato dell'elemento del controllo scheda indicato.|
|[CTabCtrl::GetRowCount](#getrowcount)|Recupera il numero corrente di righe di schede in un controllo struttura a schede.|
|[CTabCtrl::GetToolTips](#gettooltips)|Recupera l'handle della finestra del controllo ToolTip associato a un controllo struttura a schede.|
|[CTabCtrl::HighlightItem](#highlightitem)|Imposta lo stato di evidenziazione di un elemento di scheda.|
|[CTabCtrl::HitTest](#hittest)|Determina quale scheda, se presente, è in una posizione sullo schermo specificata.|
|[CTabCtrl:: InsertItem](#insertitem)|Inserisce una nuova scheda in un controllo struttura a schede.|
|[CTabCtrl::RemoveImage](#removeimage)|Rimuove un'immagine dall'elenco di immagini di un controllo struttura a schede.|
|[CTabCtrl::SetCurFocus](#setcurfocus)|Imposta lo stato attivo per una scheda specificata in un controllo struttura a schede.|
|[CTabCtrl::SetCurSel](#setcursel)|Seleziona una scheda in un controllo struttura a schede.|
|[CTabCtrl::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per un controllo struttura a schede.|
|[CTabCtrl::SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo struttura a schede.|
|[CTabCtrl::SetItem](#setitem)|Imposta alcuni o tutti gli attributi della scheda.|
|[CTabCtrl::SetItemExtra](#setitemextra)|Imposta il numero di byte per ogni scheda sono riservati per i dati definiti dall'applicazione in un controllo struttura a schede.|
|[CTabCtrl::SetItemSize](#setitemsize)|Imposta la larghezza e altezza di un elemento.|
|[CTabCtrl::SetItemState](#setitemstate)|Imposta lo stato dell'elemento del controllo scheda indicato.|
|[CTabCtrl::SetMinTabWidth](#setmintabwidth)|Imposta la larghezza minima di elementi in un controllo struttura a schede.|
|[CTabCtrl::SetPadding](#setpadding)|Imposta la quantità di spazio (riempimento) attorno a ogni scheda icona e l'etichetta in un controllo struttura a schede.|
|[CTabCtrl::SetToolTips](#settooltips)|Assegna un controllo descrizione comandi a un controllo struttura a schede.|

## <a name="remarks"></a>Note

Un "controllo struttura a schede" è analogo ai separatori in un notebook o le etichette in un file CAB. L'uso del controllo Struttura a schede consente a un'applicazione di definire più pagine per la stessa area di una finestra o una finestra di dialogo. Ogni pagina è costituito da un set di informazioni o un gruppo di controlli che l'applicazione viene visualizzata quando l'utente seleziona la scheda corrispondente. Un tipo speciale di controllo struttura a schede vengono visualizzate le schede che l'aspetto di pulsanti. Facendo clic su un pulsante deve immediatamente eseguire un comando invece di visualizzare una pagina.

Questo controllo (e pertanto il `CTabCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows 95 o 98 e Windows NT versione 3.51 e successive.

Per altre informazioni sull'uso `CTabCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CTabCtrl](../../mfc/using-ctabctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CTabCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="adjustrect"></a>  CTabCtrl::AdjustRect

Calcola l'area di visualizzazione di un controllo struttura a schede un rettangolo di finestra specificato oppure calcola il rettangolo della finestra che corrisponde a un'area di visualizzazione specificato.

```
void AdjustRect(BOOL bLarger,   LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*bLarger*<br/>
Indica che l'operazione da eseguire. Se questo parametro è TRUE, *lpRect* specifica un rettangolo di visualizzazione e riceve il rettangolo della finestra corrispondente. Se questo parametro è FALSE, *lpRect* specifica un rettangolo della finestra e riceve il rettangolo di visualizzazione corrispondente.

*lpRect*<br/>
Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica il rettangolo specificato e riceve il rettangolo calcolato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#1](../../mfc/reference/codesnippet/cpp/ctabctrl-class_1.cpp)]

##  <a name="create"></a>  CTabCtrl::Create

Crea un controllo struttura a schede e la collega a un'istanza di un `CTabCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica lo stile del controllo scheda. Applicare qualsiasi combinazione di [scheda stili del controllo](/windows/desktop/Controls/tab-control-styles), come descritto nel SDK di Windows. Visualizzare **osservazioni** per un elenco degli stili finestra è anche possibile applicare al controllo.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo scheda. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.

*pParentWnd*<br/>
Specifica la scheda finestra del controllo padre, in genere un `CDialog`. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo scheda

### <a name="return-value"></a>Valore restituito

TRUE se l'inizializzazione dell'oggetto ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Si costruisce un `CTabCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo struttura a schede e lo collega al `CTabCtrl` oggetto.

Oltre a stili del controllo scheda, è possibile applicare gli stili di finestra seguenti da un controllo struttura a schede:

- WS_CHILD crea una finestra figlio che rappresenta il controllo struttura a schede. Non può essere usato con lo stile WS_POPUP.

- WS_VISIBLE crea un controllo struttura a schede che inizialmente è visibile.

- WS_DISABLED crea una finestra che inizialmente è disabilitata.

- WS_GROUP specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo alla successiva con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e avvia il gruppo successivo (ovvero, un gruppo termina dove inizia il successivo).

- WS_TABSTOP consente di specificare un numero qualsiasi di controlli tramite il quale l'utente può spostarsi utilizzando il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato dallo stile WS_TABSTOP.

Per creare un controllo struttura a schede con gli stili finestra estesi, chiamare [CTabCtrl::CreateEx](#createex) invece di `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#2](../../mfc/reference/codesnippet/cpp/ctabctrl-class_2.cpp)]

##  <a name="createex"></a>  CTabCtrl::CreateEx

Crea un controllo (una finestra figlio) e la associa il `CTabCtrl` oggetto.

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
Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*dwStyle*<br/>
Specifica lo stile del controllo scheda. Applicare qualsiasi combinazione di [scheda stili del controllo](/windows/desktop/Controls/tab-control-styles), come descritto nel SDK di Windows. Visualizzare **osservazioni** nelle [crea](#create) per un elenco degli stili finestra è anche possibile applicare al controllo.

*Rect*<br/>
Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra padre del controllo.

*nID*<br/>
ID di finestra figlio. del controllo

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo in caso contrario 0.

### <a name="remarks"></a>Note

Uso `CreateEx` invece di [Create](#create) per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.

`CreateEx` Crea il controllo con gli stili estesi di Windows specificati da *dwExStyle*. Set di specifiche di un controllo utilizzando stili estesi [SetExtendedStyle](#setextendedstyle). Ad esempio, usare `CreateEx` per impostare tali stili come WS_EX_CONTEXTHELP, ma userà `SetExtendedStyle` per impostare tali stili come TCS_EX_FLATSEPARATORS. Per altre informazioni, vedere gli stili descritto nella [degli stili estesi del controllo scheda](/windows/desktop/Controls/tab-control-extended-styles) nel SDK di Windows.

##  <a name="ctabctrl"></a>  CTabCtrl::CTabCtrl

Costruisce un oggetto `CTabCtrl`.

```
CTabCtrl();
```

##  <a name="deleteallitems"></a>  CTabCtrl::DeleteAllItems

Rimuove tutti gli elementi da un controllo struttura a schede.

```
BOOL DeleteAllItems();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="deleteitem"></a>  CTabCtrl::DeleteItem

Rimuove l'elemento specificato da un controllo struttura a schede.

```
BOOL DeleteItem(int nItem);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Valore in base zero dell'elemento da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#3](../../mfc/reference/codesnippet/cpp/ctabctrl-class_3.cpp)]

##  <a name="deselectall"></a>  CTabCtrl::DeselectAll

Reimposta gli elementi in un controllo struttura a schede, cancellando uno qualsiasi che sono stati premuti.

```
void DeselectAll(BOOL fExcludeFocus);
```

### <a name="parameters"></a>Parametri

*fExcludeFocus*<br/>
Flag che specifica l'ambito della deselezione di elementi. Se questo parametro è impostato su FALSE, tutti i pulsanti della scheda verranno reimpostati. Se è impostata su TRUE, quindi scheda tutti gli elementi ad eccezione di quella attualmente selezionata verrà reimpostata.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio, Win32 [TCM_DESELECTALL](/windows/desktop/Controls/tcm-deselectall), come descritto nel SDK di Windows.

##  <a name="drawitem"></a>  CTabCtrl::DrawItem

Chiamato dal framework quando un aspetto visivo di un controllo cambia scheda creato dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che descrive l'elemento da disegnare.

### <a name="remarks"></a>Note

Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita.

Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CTabCtrl` oggetto.

L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima di questo membro funzione termina.

##  <a name="getcurfocus"></a>  CTabCtrl::GetCurFocus

Recupera l'indice della scheda con lo stato attivo corrente.

```
int GetCurFocus() const;
```

### <a name="return-value"></a>Valore restituito

Indice a base zero della scheda con lo stato attivo corrente.

##  <a name="getcursel"></a>  CTabCtrl::GetCurSel

Recupera la scheda attualmente selezionata in un controllo struttura a schede.

```
int GetCurSel() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata se ha esito positivo oppure - 1 se non è selezionata nessuna scheda.

##  <a name="getextendedstyle"></a>  CTabCtrl::GetExtendedStyle

Recupera gli stili estesi che sono attualmente in uso per il controllo struttura a schede.

```
DWORD GetExtendedStyle();
```

### <a name="return-value"></a>Valore restituito

Rappresenta gli stili estesi attualmente in uso per il controllo struttura a schede. Questo valore è una combinazione di [scheda Controllo stili estesi](/windows/desktop/Controls/tab-control-extended-styles), come descritto nel SDK di Windows.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_GETEXTENDEDSTYLE](/windows/desktop/Controls/tcm-getextendedstyle), come descritto nel SDK di Windows.

##  <a name="getimagelist"></a>  CTabCtrl::GetImageList

Recupera l'elenco di immagini associato a una struttura a schede.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, controllare un puntatore all'elenco di immagini della scheda; in caso contrario, NULL.

##  <a name="getitem"></a>  CTabCtrl::GetItem

Recupera informazioni su una scheda in un controllo struttura a schede.

```
BOOL GetItem(int nItem,   TCITEM* pTabCtrlItem) const;
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Indice in base zero della scheda.

*pTabCtrlItem*<br/>
Puntatore a un [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) struttura, consente di specificare le informazioni da recuperare. Utilizzato anche per ricevere informazioni sulla scheda. Questa struttura viene usata con il `InsertItem`, `GetItem`, e `SetItem` funzioni membro.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo. FALSE in caso contrario.

### <a name="remarks"></a>Note

Quando viene inviato il messaggio, il `mask` membro specifica gli attributi da restituire. Se il `mask` membro specifica il valore TCIF_TEXT, il `pszText` membro deve contenere l'indirizzo del buffer che riceve il testo dell'elemento e il `cchTextMax` membro è necessario specificare le dimensioni del buffer.

- `mask`

   Valore che specifica quali `TCITEM` strutturare i membri da recuperare o impostare. Questo membro può essere zero o una combinazione dei valori seguenti:

   - TCIF_TEXT il `pszText` membro è valido.

   - TCIF_IMAGE il `iImage` membro è valido.

   - TCIF_PARAM il `lParam` membro è valido.

   - TCIF_RTLREADING il testo di `pszText` viene visualizzata utilizzando l'ordine di lettura da destra a sinistra in sistemi ebraico o arabo.

   - TCIF_STATE il `dwState` membro è valido.

- `pszText`

   Puntatore a una stringa con terminazione null che contiene il testo della scheda se la struttura contiene informazioni su una scheda. Se la struttura riceve informazioni, questo membro specifica l'indirizzo del buffer che riceve il testo della scheda.

- `cchTextMax`

   Dimensione del buffer a cui punta `pszText`. Questo membro viene ignorato se la struttura non riceve informazioni.

- `iImage` Indice in del controllo scheda elenco di immagini o - 1 se non è presente alcuna immagine per la scheda.

- `lParam`

   Dati definiti dall'applicazione associati alla scheda. Se sono presenti più di quattro byte di dati definiti dall'applicazione per ogni scheda, un'applicazione deve definire una struttura e usarlo al posto di `TCITEM` struttura. Il primo membro della struttura definita dall'applicazione deve essere un [TCITEMHEADER](/windows/desktop/api/commctrl/ns-commctrl-tagtcitemheadera)struttura. Il `TCITEMHEADER` struttura è identica per il `TCITEM` struttura, ma senza il `lParam` membro. La differenza tra le dimensioni della struttura di e le dimensioni del `TCITEMHEADER` struttura deve essere uguale al numero di byte extra per ogni scheda.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#4](../../mfc/reference/codesnippet/cpp/ctabctrl-class_4.cpp)]

##  <a name="getitemcount"></a>  CTabCtrl::GetItemCount

Recupera il numero delle schede nel controllo struttura a schede.

```
int GetItemCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nel controllo struttura a schede.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="getitemrect"></a>  CTabCtrl::GetItemRect

Recupera il rettangolo di delimitazione per la scheda specificata in un controllo struttura a schede.

```
BOOL GetItemRect(int nItem,   LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Indice in base zero dell'elemento scheda.

*lpRect*<br/>
Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve il rettangolo di delimitazione della scheda. Queste coordinate utilizzano modalità di mapping corrente del riquadro di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

##  <a name="getitemstate"></a>  CTabCtrl::GetItemState

Recupera lo stato dell'elemento del controllo scheda identificato da *nItem*.

```
DWORD GetItemState(
    int nItem,
    DWORD dwMask) const;
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Numero di indice in base zero dell'elemento per cui recuperare le informazioni sullo stato.

*dwMask*<br/>
Maschera che specifica quali lo stato dell'elemento flag da restituire. Per un elenco di valori, vedere il membro di maschera dei [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) strutturare, come descritto nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Un riferimento a un valore DWORD che riceve le informazioni di stato. Il valore può essere uno dei seguenti:

|Valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento di scheda di controllo è selezionata.|
|TCIS_HIGHLIGHTED|Viene evidenziato l'elemento del controllo scheda e la scheda e testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, questo sarà un'interpolazione true, non un colore retinato.|

### <a name="remarks"></a>Note

Stato di un elemento specificato dal `dwState` membro del `TCITEM` struttura.

##  <a name="getrowcount"></a>  CTabCtrl::GetRowCount

Recupera il numero corrente di righe in un controllo struttura a schede.

```
int GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di righe delle schede nel controllo struttura a schede.

### <a name="remarks"></a>Note

Solo i controlli della scheda con lo stile TCS_MULTILINE possono avere più righe di schede.

##  <a name="gettooltips"></a>  CTabCtrl::GetToolTips

Recupera l'handle della finestra del controllo ToolTip associato a un controllo struttura a schede.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Handle della finestra del controllo ToolTip se ha esito positivo. in caso contrario NULL.

### <a name="remarks"></a>Note

Un controllo struttura a schede consente di creare un controllo descrizione comandi in caso affermativo lo stile TCS_TOOLTIPS. È anche possibile assegnare un controllo descrizione comandi a un controllo struttura a schede usando il `SetToolTips` funzione membro.

##  <a name="highlightitem"></a>  CTabCtrl::HighlightItem

Imposta lo stato di evidenziazione di un elemento di scheda.

```
BOOL HighlightItem(int idItem,   BOOL fHighlight = TRUE);
```

### <a name="parameters"></a>Parametri

*idItem*<br/>
Indice in base zero di un elemento del controllo scheda.

*fHighlight*<br/>
Valore che specifica lo stato di evidenziazione da impostare. Se questo valore è TRUE, la scheda è evidenziata. Se FALSE, la scheda è impostata sul relativo stato predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il messaggio Win32 [TCM_HIGHLIGHTITEM](/windows/desktop/Controls/tcm-highlightitem), come descritto nel SDK di Windows.

##  <a name="hittest"></a>  CTabCtrl::HitTest

Determina quale scheda, se presente, è in corrispondenza della posizione sullo schermo specificata.

```
int HitTest(TCHITTESTINFO* pHitTestInfo) const;
```

### <a name="parameters"></a>Parametri

*pHitTestInfo*<br/>
Puntatore a un [TCHITTESTINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtchittestinfo) strutturare, come descritto nel SDK di Windows, che specifica la posizione sullo schermo per eseguire il test.

### <a name="return-value"></a>Valore restituito

Restituisce l'indice in base zero della scheda o - 1 se non sono in corrispondenza della posizione specificata.

##  <a name="insertitem"></a>  CTabCtrl:: InsertItem

Inserisce una nuova scheda in un controllo struttura a schede esistenti.

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

*nItem*<br/>
Indice in base zero della nuova scheda.

*pTabCtrlItem*<br/>
Puntatore a un [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) struttura che specifica gli attributi della scheda.

*lpszItem*<br/>
Indirizzo di una stringa con terminazione null che contiene il testo della scheda.

*Immagine*<br/>
Indice a base zero di un'immagine da inserire da un elenco di immagini.

*nMask*<br/>
Specifica quale `TCITEM` struttura attributi da impostare. Può essere zero o una combinazione dei valori seguenti:

- TCIF_TEXT il `pszText` membro è valido.

- TCIF_IMAGE il `iImage` membro è valido.

- TCIF_PARAM il *lParam* membro è valido.

- TCIF_RTLREADING il testo di `pszText` viene visualizzata utilizzando l'ordine di lettura da destra a sinistra in sistemi ebraico o arabo.

- TCIF_STATE il *dwState* membro è valido.

*lParam*<br/>
Dati definiti dall'applicazione associati alla scheda.

*dwState*<br/>
Specifica i valori per gli Stati dell'elemento. Per altre informazioni, vedere [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) nel SDK di Windows.

*dwStateMask*<br/>
Specifica gli stati da impostare. Per altre informazioni, vedere [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda nuovo caso di esito positivo; in caso contrario, - 1.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTabCtrl#5](../../mfc/reference/codesnippet/cpp/ctabctrl-class_5.cpp)]

##  <a name="removeimage"></a>  CTabCtrl::RemoveImage

Rimuove l'immagine specificata dall'elenco di immagini di un controllo struttura a schede.

```
void RemoveImage(int nImage);
```

### <a name="parameters"></a>Parametri

*Immagine*<br/>
Indice in base zero dell'immagine da rimuovere.

### <a name="remarks"></a>Note

Il controllo struttura a schede Aggiorna indice dell'immagine di ogni scheda in modo che ogni scheda rimane associato con la stessa immagine.

##  <a name="setcurfocus"></a>  CTabCtrl::SetCurFocus

Imposta lo stato attivo per una scheda specificata in un controllo struttura a schede.

```
void SetCurFocus(int nItem);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Specifica l'indice della scheda che ottiene lo stato attivo.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETCURFOCUS](/windows/desktop/Controls/tcm-setcurfocus), come descritto nel SDK di Windows.

##  <a name="setcursel"></a>  CTabCtrl::SetCurSel

Seleziona una scheda in un controllo struttura a schede.

```
int SetCurSel(int nItem);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Indice a base zero dell'elemento da selezionare.

### <a name="return-value"></a>Valore restituito

Indice in base zero della scheda selezionata in precedenza se ha esito positivo, in caso contrario, - 1.

### <a name="remarks"></a>Note

Un controllo struttura a schede non invia un messaggio di notifica TCN_SELCHANGING o TCN_SELCHANGE quando viene selezionata una scheda con questa funzione. Le notifiche vengono inviate tramite WM_NOTIFY, quando l'utente fa clic o si usa la tastiera per modificare le schede.

##  <a name="setextendedstyle"></a>  CTabCtrl::SetExtendedStyle

Imposta gli stili estesi per un controllo struttura a schede.

```
DWORD SetExtendedStyle(DWORD dwNewStyle,   DWORD dwExMask = 0);
```

### <a name="parameters"></a>Parametri

*dwNewStyle*<br/>
Valore che specifica una combinazione della scheda Controllo stili estesi.

*dwExMask*<br/>
Un valore DWORD che indica gli stili nel *dwNewStyle* sono interessate. Solo gli stili estesi nella *dwExMask* verrà modificato. Tutti gli altri stili verranno mantenute come è. Se questo parametro è zero, quindi tutti gli stili *dwNewStyle* saranno interessate.

### <a name="return-value"></a>Valore restituito

Un valore DWORD che contiene il precedente [scheda Controllo stili estesi](/windows/desktop/Controls/tab-control-extended-styles), come descritto nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETEXTENDEDSTYLE](/windows/desktop/Controls/tcm-setextendedstyle), come descritto nel SDK di Windows.

##  <a name="setimagelist"></a>  CTabCtrl::SetImageList

Assegna un elenco di immagini a un controllo struttura a schede.

```
CImageList* SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Puntatore all'elenco di immagini da assegnare al controllo struttura a schede.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'elenco di immagini precedenti o NULL se non sono presenti elenchi di immagine precedente.

##  <a name="setitem"></a>  CTabCtrl::SetItem

Imposta alcuni o tutti gli attributi della scheda.

```
BOOL SetItem(int nItem,   TCITEM* pTabCtrlItem);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Indice in base zero dell'elemento.

*pTabCtrlItem*<br/>
Puntatore a un [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) struttura che contiene i nuovi attributi di elemento. Il `mask` membro specifica gli attributi da impostare. Se il `mask` membro specifica il valore TCIF_TEXT, il `pszText` membro è l'indirizzo di una stringa con terminazione null e il `cchTextMax` membro viene ignorato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [GetItem](#getitem).

##  <a name="setitemextra"></a>  CTabCtrl::SetItemExtra

Imposta il numero di byte per ogni scheda sono riservati per i dati definiti dall'applicazione in un controllo struttura a schede.

```
BOOL SetItemExtra(int nBytes);
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Il numero di byte aggiuntivi da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETITEMEXTRA](/windows/desktop/Controls/tcm-setitemextra), come descritto nel SDK di Windows.

##  <a name="setitemsize"></a>  CTabCtrl::SetItemSize

Imposta la larghezza e l'altezza degli elementi di controllo della scheda.

```
CSize SetItemSize(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
La nuova larghezza e altezza, in pixel, degli elementi di controllo della scheda.

### <a name="return-value"></a>Valore restituito

Restituisce la larghezza e l'altezza precedenti degli elementi di controllo della scheda.

##  <a name="setitemstate"></a>  CTabCtrl::SetItemState

Imposta lo stato dell'elemento del controllo scheda identificato da *nItem*.

```
BOOL SetItemState(
    int nItem,
    DWORD dwMask,
    DWORD dwState);
```

### <a name="parameters"></a>Parametri

*nItem*<br/>
Numero di indice in base zero dell'elemento per cui impostare le informazioni sullo stato.

*dwMask*<br/>
Maschera che specifica quali lo stato dell'elemento flag da impostare. Per un elenco di valori, vedere il membro di maschera dei [TCITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtcitema) strutturare, come descritto nel SDK di Windows.

*dwState*<br/>
Un riferimento a un valore DWORD che contiene le informazioni sullo stato. Il valore può essere uno dei seguenti:

|Valore|Descrizione|
|-----------|-----------------|
|TCIS_BUTTONPRESSED|L'elemento di scheda di controllo è selezionata.|
|TCIS_HIGHLIGHTED|Viene evidenziato l'elemento del controllo scheda e la scheda e testo vengono disegnati utilizzando il colore di evidenziazione corrente. Quando si usa il colore di evidenziazione, questo sarà un'interpolazione true, non un colore retinato.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="setmintabwidth"></a>  CTabCtrl::SetMinTabWidth

Imposta la larghezza minima di elementi in un controllo struttura a schede.

```
int SetMinTabWidth(int cx);
```

### <a name="parameters"></a>Parametri

*CX*<br/>
Larghezza minima da impostare per un elemento del controllo scheda. Se questo parametro è impostato su -1, il controllo utilizzerà l'ampiezza delle tabulazioni predefinita.

### <a name="return-value"></a>Valore restituito

La larghezza minima della scheda precedente.

### <a name="return-value"></a>Valore restituito

Questa funzione membro implementa il comportamento del messaggio Win32 [TCM_SETMINTABWIDTH](/windows/desktop/Controls/tcm-setmintabwidth), come descritto nel SDK di Windows.

##  <a name="setpadding"></a>  CTabCtrl::SetPadding

Imposta la quantità di spazio (riempimento) attorno a ogni scheda icona e l'etichetta in un controllo struttura a schede.

```
void SetPadding(CSize size);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Imposta la quantità di spazio (riempimento) attorno a ogni scheda icona e l'etichetta in un controllo struttura a schede.

##  <a name="settooltips"></a>  CTabCtrl::SetToolTips

Assegna un controllo descrizione comandi a un controllo struttura a schede.

```
void SetToolTips(CToolTipCtrl* pWndTip);
```

### <a name="parameters"></a>Parametri

*pWndTip*<br/>
Handle della finestra del controllo ToolTip.

### <a name="remarks"></a>Note

È possibile ottenere il controllo descrizione comando associato a un controllo struttura a schede effettuando una chiamata a `GetToolTips`.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPropertySheet:: GetTabControl](../../mfc/reference/cpropertysheet-class.md#gettabcontrol).

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CHeaderCtrl](../../mfc/reference/cheaderctrl-class.md)<br/>
[Classe CListCtrl](../../mfc/reference/clistctrl-class.md)
