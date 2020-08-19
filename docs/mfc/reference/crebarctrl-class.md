---
title: Classe CReBarCtrl
ms.date: 11/19/2018
f1_keywords:
- CReBarCtrl
- AFXCMN/CReBarCtrl
- AFXCMN/CReBarCtrl::CReBarCtrl
- AFXCMN/CReBarCtrl::BeginDrag
- AFXCMN/CReBarCtrl::Create
- AFXCMN/CReBarCtrl::CreateEx
- AFXCMN/CReBarCtrl::DeleteBand
- AFXCMN/CReBarCtrl::DragMove
- AFXCMN/CReBarCtrl::EndDrag
- AFXCMN/CReBarCtrl::GetBandBorders
- AFXCMN/CReBarCtrl::GetBandCount
- AFXCMN/CReBarCtrl::GetBandInfo
- AFXCMN/CReBarCtrl::GetBandMargins
- AFXCMN/CReBarCtrl::GetBarHeight
- AFXCMN/CReBarCtrl::GetBarInfo
- AFXCMN/CReBarCtrl::GetBkColor
- AFXCMN/CReBarCtrl::GetColorScheme
- AFXCMN/CReBarCtrl::GetDropTarget
- AFXCMN/CReBarCtrl::GetExtendedStyle
- AFXCMN/CReBarCtrl::GetImageList
- AFXCMN/CReBarCtrl::GetPalette
- AFXCMN/CReBarCtrl::GetRect
- AFXCMN/CReBarCtrl::GetRowCount
- AFXCMN/CReBarCtrl::GetRowHeight
- AFXCMN/CReBarCtrl::GetTextColor
- AFXCMN/CReBarCtrl::GetToolTips
- AFXCMN/CReBarCtrl::HitTest
- AFXCMN/CReBarCtrl::IDToIndex
- AFXCMN/CReBarCtrl::InsertBand
- AFXCMN/CReBarCtrl::MaximizeBand
- AFXCMN/CReBarCtrl::MinimizeBand
- AFXCMN/CReBarCtrl::MoveBand
- AFXCMN/CReBarCtrl::PushChevron
- AFXCMN/CReBarCtrl::RestoreBand
- AFXCMN/CReBarCtrl::SetBandInfo
- AFXCMN/CReBarCtrl::SetBandWidth
- AFXCMN/CReBarCtrl::SetBarInfo
- AFXCMN/CReBarCtrl::SetBkColor
- AFXCMN/CReBarCtrl::SetColorScheme
- AFXCMN/CReBarCtrl::SetExtendedStyle
- AFXCMN/CReBarCtrl::SetImageList
- AFXCMN/CReBarCtrl::SetOwner
- AFXCMN/CReBarCtrl::SetPalette
- AFXCMN/CReBarCtrl::SetTextColor
- AFXCMN/CReBarCtrl::SetToolTips
- AFXCMN/CReBarCtrl::SetWindowTheme
- AFXCMN/CReBarCtrl::ShowBand
- AFXCMN/CReBarCtrl::SizeToRect
helpviewer_keywords:
- CReBarCtrl [MFC], CReBarCtrl
- CReBarCtrl [MFC], BeginDrag
- CReBarCtrl [MFC], Create
- CReBarCtrl [MFC], CreateEx
- CReBarCtrl [MFC], DeleteBand
- CReBarCtrl [MFC], DragMove
- CReBarCtrl [MFC], EndDrag
- CReBarCtrl [MFC], GetBandBorders
- CReBarCtrl [MFC], GetBandCount
- CReBarCtrl [MFC], GetBandInfo
- CReBarCtrl [MFC], GetBandMargins
- CReBarCtrl [MFC], GetBarHeight
- CReBarCtrl [MFC], GetBarInfo
- CReBarCtrl [MFC], GetBkColor
- CReBarCtrl [MFC], GetColorScheme
- CReBarCtrl [MFC], GetDropTarget
- CReBarCtrl [MFC], GetExtendedStyle
- CReBarCtrl [MFC], GetImageList
- CReBarCtrl [MFC], GetPalette
- CReBarCtrl [MFC], GetRect
- CReBarCtrl [MFC], GetRowCount
- CReBarCtrl [MFC], GetRowHeight
- CReBarCtrl [MFC], GetTextColor
- CReBarCtrl [MFC], GetToolTips
- CReBarCtrl [MFC], HitTest
- CReBarCtrl [MFC], IDToIndex
- CReBarCtrl [MFC], InsertBand
- CReBarCtrl [MFC], MaximizeBand
- CReBarCtrl [MFC], MinimizeBand
- CReBarCtrl [MFC], MoveBand
- CReBarCtrl [MFC], PushChevron
- CReBarCtrl [MFC], RestoreBand
- CReBarCtrl [MFC], SetBandInfo
- CReBarCtrl [MFC], SetBandWidth
- CReBarCtrl [MFC], SetBarInfo
- CReBarCtrl [MFC], SetBkColor
- CReBarCtrl [MFC], SetColorScheme
- CReBarCtrl [MFC], SetExtendedStyle
- CReBarCtrl [MFC], SetImageList
- CReBarCtrl [MFC], SetOwner
- CReBarCtrl [MFC], SetPalette
- CReBarCtrl [MFC], SetTextColor
- CReBarCtrl [MFC], SetToolTips
- CReBarCtrl [MFC], SetWindowTheme
- CReBarCtrl [MFC], ShowBand
- CReBarCtrl [MFC], SizeToRect
ms.assetid: 154570d7-e48c-425d-8c7e-c64542bcb4cc
ms.openlocfilehash: 872d577c2272939a6bf7ed1e3069cda426083e3f
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88561895"
---
# <a name="crebarctrl-class"></a>Classe CReBarCtrl

Incapsula la funzionalità di un controllo Rebar, ovvero un contenitore per una finestra figlio.

## <a name="syntax"></a>Sintassi

```
class CReBarCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBarCtrl:: CReBarCtrl](#crebarctrl)|Costruisce un oggetto `CReBarCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBarCtrl:: BeginDrag](#begindrag)|Posiziona il controllo Rebar in modalità di trascinamento della selezione.|
|[CReBarCtrl:: create](#create)|Crea il controllo Rebar e lo collega all' `CReBarCtrl` oggetto.|
|[CReBarCtrl:: CreateEx](#createex)|Crea un controllo Rebar con gli stili estesi di Windows specificati e lo associa a un `CReBarCtrl` oggetto.|
|[CReBarCtrl::D eleteBand](#deleteband)|Elimina una banda da un controllo Rebar.|
|[CReBarCtrl::D ragMove](#dragmove)|Aggiorna la posizione del trascinamento nel controllo Rebar dopo una chiamata a `BeginDrag` .|
|[CReBarCtrl:: EndDrag](#enddrag)|Termina l'operazione di trascinamento e rilascio del controllo Rebar.|
|[CReBarCtrl:: GetBandBorders](#getbandborders)|Recupera i bordi di una banda.|
|[CReBarCtrl:: GetBandCount](#getbandcount)|Recupera il conteggio delle bande attualmente presenti nel controllo Rebar.|
|[CReBarCtrl:: GetBandInfo](#getbandinfo)|Recupera le informazioni su una banda specificata in un controllo Rebar.|
|[CReBarCtrl:: GetBandMargins](#getbandmargins)|Recupera i margini di una banda.|
|[CReBarCtrl:: GetBarHeight](#getbarheight)|Recupera l'altezza del controllo Rebar.|
|[CReBarCtrl:: GetBarInfo](#getbarinfo)|Recupera le informazioni sul controllo Rebar e sull'elenco di immagini utilizzate.|
|[CReBarCtrl:: GetBkColor](#getbkcolor)|Recupera il colore di sfondo predefinito di un controllo Rebar.|
|[CReBarCtrl:: GetColorScheme](#getcolorscheme)|Recupera la struttura [ColorScheme](/windows/win32/api/commctrl/ns-commctrl-colorscheme) associata al controllo Rebar.|
|[CReBarCtrl:: GetDropTarget](#getdroptarget)|Recupera un puntatore a interfaccia del controllo Rebar `IDropTarget` .|
|[CReBarCtrl:: GetExtendedStyle](#getextendedstyle)|Ottiene lo stile esteso del controllo Rebar corrente.|
|[CReBarCtrl:: GetImages](#getimagelist)|Recupera l'elenco di immagini associato a un controllo Rebar.|
|[CReBarCtrl:: gettavolozza](#getpalette)|Recupera la tavolozza corrente del controllo Rebar.|
|[CReBarCtrl:: GetRect](#getrect)|Recupera il rettangolo di delimitazione per una determinata banda in un controllo Rebar.|
|[CReBarCtrl:: GetRowCount](#getrowcount)|Recupera il numero di righe di banda in un controllo Rebar.|
|[CReBarCtrl:: GetRowHeight](#getrowheight)|Recupera l'altezza di una riga specificata in un controllo Rebar.|
|[CReBarCtrl:: GetTextColor](#gettextcolor)|Recupera il colore del testo predefinito di un controllo Rebar.|
|[CReBarCtrl:: GetToolTips](#gettooltips)|Recupera l'handle a qualsiasi controllo descrizione comando associato al controllo Rebar.|
|[CReBarCtrl:: HitTest](#hittest)|Determina quale parte di una banda Rebar si trova in un determinato punto sullo schermo, se in quel punto esiste una banda del controllo Rebar.|
|[CReBarCtrl:: IDToIndex](#idtoindex)|Converte un identificatore di banda (ID) in un indice di banda in un controllo Rebar.|
|[CReBarCtrl:: InsertBand](#insertband)|Inserisce una nuova banda in un controllo Rebar.|
|[CReBarCtrl:: MaximizeBand](#maximizeband)|Ridimensiona una banda in un controllo Rebar alla dimensione massima.|
|[CReBarCtrl:: MinimizeBand](#minimizeband)|Ridimensiona una banda in un controllo Rebar alla dimensione minima.|
|[CReBarCtrl:: MoveBand](#moveband)|Sposta una banda da un indice a un altro.|
|[CReBarCtrl::P ushChevron](#pushchevron)|Inserisce a livello di codice una freccia di espansione.|
|[CReBarCtrl:: RestoreBand](#restoreband)|Ridimensiona una banda in un controllo Rebar alle dimensioni ideali.|
|[CReBarCtrl:: SetBandInfo](#setbandinfo)|Imposta le caratteristiche di una banda esistente in un controllo Rebar.|
|[CReBarCtrl:: sebandwidth](#setbandwidth)|Imposta la larghezza della banda ancorata specificata nel controllo Rebar corrente.|
|[CReBarCtrl:: SetBarInfo](#setbarinfo)|Imposta le caratteristiche di un controllo Rebar.|
|[CReBarCtrl:: SetBkColor](#setbkcolor)|Imposta il colore di sfondo predefinito del controllo Rebar.|
|[CReBarCtrl:: SetColorScheme](#setcolorscheme)|Imposta la combinazione di colori per i pulsanti di un controllo Rebar.|
|[CReBarCtrl:: SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per il controllo Rebar corrente.|
|[CReBarCtrl:: seimagine](#setimagelist)|Imposta l'elenco di immagini di un controllo Rebar.|
|[CReBarCtrl:: SetOwner](#setowner)|Imposta la finestra proprietaria di un controllo Rebar.|
|[CReBarCtrl:: sepalette](#setpalette)|Imposta la tavolozza corrente del controllo Rebar.|
|[CReBarCtrl:: SetTextColor](#settextcolor)|Imposta il colore del testo predefinito del controllo Rebar.|
|[CReBarCtrl:: setooltips](#settooltips)|Associa un controllo descrizione comando al controllo Rebar.|
|[CReBarCtrl:: SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione del controllo Rebar.|
|[CReBarCtrl:: ShowBand](#showband)|Mostra o nasconde una determinata banda in un controllo Rebar.|
|[CReBarCtrl:: SizeToRect](#sizetorect)|Consente di adattare un controllo Rebar a un rettangolo specificato.|

## <a name="remarks"></a>Osservazioni

L'applicazione in cui risiede il controllo Rebar assegna la finestra figlio contenuta dal controllo Rebar alla banda Rebar. La finestra figlio è in genere un altro controllo comune.

I controlli Rebar contengono una o più bande. Ogni banda può contenere una combinazione di una barra di pinza, una bitmap, un'etichetta di testo e una finestra figlio. La banda può contenere solo uno di questi elementi.

Il controllo Rebar può visualizzare la finestra figlio su una bitmap di sfondo specificata. Tutte le bande di controllo Rebar possono essere ridimensionate, ad eccezione di quelle che utilizzano lo stile RBBS_FIXEDSIZE. Quando si riposiziona o si ridimensiona una banda di controllo Rebar, il controllo Rebar gestisce le dimensioni e la posizione della finestra figlio assegnata a tale banda. Per ridimensionare o modificare l'ordine delle bande all'interno del controllo, fare clic e trascinare la barra di pinza della banda.

Nella figura seguente viene illustrato un controllo Rebar con tre bande:

- La banda 0 contiene un controllo barra degli strumenti trasparente e lineare.

- La banda 1 contiene i pulsanti a discesa standard trasparente e trasparente.

- La banda 2 contiene una casella combinata e quattro pulsanti standard.

   ![Esempio di menu Rebar](../../mfc/reference/media/vc4scc1.gif "Esempio di menu Rebar")

## <a name="rebar-control"></a>Controllo Rebar

I controlli Rebar supportano:

- Elenchi di immagini.

- Gestione dei messaggi.

- Funzionalità di estrazione personalizzata.

- Una varietà di stili di controllo oltre agli stili standard della finestra. Per un elenco di questi stili, vedere [stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) nel Windows SDK.

Per altre informazioni, vedere [uso di CReBarCtrl](../../mfc/using-crebarctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CReBarCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="crebarctrlbegindrag"></a><a name="begindrag"></a> CReBarCtrl:: BeginDrag

Implementa il comportamento del [RB_BEGINDRAG](/windows/win32/Controls/rb-begindrag)del messaggio Win32, come descritto nel Windows SDK.

```cpp
void BeginDrag(
    UINT uBand,
    DWORD dwPos = (DWORD)-1);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda che avrà effetto sull'operazione di trascinamento della selezione.

*dwPos*<br/>
Valore DWORD che contiene le coordinate iniziali del mouse. La coordinata orizzontale è contenuta in LOWORD e la coordinata verticale è contenuta in HIWORD. Se si passa (DWORD)-1, il controllo Rebar utilizzerà la posizione del mouse per l'ultima volta in cui il thread del controllo ha chiamato `GetMessage` o `PeekMessage` .

## <a name="crebarctrlcreate"></a><a name="create"></a> CReBarCtrl:: create

Crea il controllo Rebar e lo collega all' `CReBarCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Specifica la combinazione di stili del controllo Rebar applicati al controllo. Per un elenco degli stili supportati, vedere [stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) nel Windows SDK.

*Rect*<br/>
Riferimento a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) , che rappresenta la posizione e le dimensioni del controllo Rebar.

*pParentWnd*<br/>
Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo Rebar. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Creare un controllo Rebar in due passaggi:

1. Chiamare [CReBarCtrl](#crebarctrl) per costruire un `CReBarCtrl` oggetto.

1. Chiamare questa funzione membro, che crea il controllo Rebar di Windows e lo collega all' `CReBarCtrl` oggetto.

Quando si chiama `Create` , i controlli comuni vengono inizializzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#3](../../mfc/reference/codesnippet/cpp/crebarctrl-class_1.cpp)]

## <a name="crebarctrlcreateex"></a><a name="createex"></a> CReBarCtrl:: CreateEx

Crea un controllo (una finestra figlio) e lo associa all' `CReBarCtrl` oggetto.

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
Specifica la combinazione di stili del controllo Rebar applicati al controllo. Per un elenco degli stili supportati, vedere [stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) nel Windows SDK.

*Rect*<br/>
Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Usare `CreateEx` anziché [create](#create) per applicare gli stili estesi di Windows, specificati dall'introduzione allo stile esteso di Windows **WS_EX_**.

## <a name="crebarctrlcrebarctrl"></a><a name="crebarctrl"></a> CReBarCtrl:: CReBarCtrl

Crea un oggetto `CReBarCtrl`.

```
CReBarCtrl();
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CReBarCtrl:: create](#create).

## <a name="crebarctrldeleteband"></a><a name="deleteband"></a> CReBarCtrl::D eleteBand

Implementa il comportamento del [RB_DELETEBAND](/windows/win32/Controls/rb-deleteband)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL DeleteBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la banda è stata eliminata correttamente; in caso contrario, zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#4](../../mfc/reference/codesnippet/cpp/crebarctrl-class_2.cpp)]

## <a name="crebarctrldragmove"></a><a name="dragmove"></a> CReBarCtrl::D ragMove

Implementa il comportamento del [RB_DRAGMOVE](/windows/win32/Controls/rb-dragmove)del messaggio Win32, come descritto nel Windows SDK.

```cpp
void DragMove(DWORD dwPos = (DWORD)-1);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Valore DWORD che contiene le nuove coordinate del mouse. La coordinata orizzontale è contenuta in LOWORD e la coordinata verticale è contenuta in HIWORD. Se si passa (DWORD)-1, il controllo Rebar utilizzerà la posizione del mouse per l'ultima volta in cui il thread del controllo ha chiamato `GetMessage` o `PeekMessage` .

## <a name="crebarctrlenddrag"></a><a name="enddrag"></a> CReBarCtrl:: EndDrag

Implementa il comportamento del [RB_ENDDRAG](/windows/win32/Controls/rb-enddrag)del messaggio Win32, come descritto nel Windows SDK.

```cpp
void EndDrag();
```

## <a name="crebarctrlgetbandborders"></a><a name="getbandborders"></a> CReBarCtrl:: GetBandBorders

Implementa il comportamento del [RB_GETBANDBORDERS](/windows/win32/Controls/rb-getbandborders)del messaggio Win32, come descritto nel Windows SDK.

```cpp
void GetBandBorders(
    UINT uBand,
    LPRECT prc) const;
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda per cui verranno recuperati i bordi.

*PRC*<br/>
Puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che riceverà i bordi della banda. Se il controllo Rebar dispone dello stile RBS_BANDBORDERS, ogni membro di questa struttura riceverà il numero di pixel, sul lato corrispondente della banda, che costituiscono il bordo. Se il controllo Rebar non ha lo stile RBS_BANDBORDERS, solo il membro sinistro di questa struttura riceve informazioni valide. Per una descrizione degli stili del controllo Rebar, vedere [stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) nel Windows SDK.

## <a name="crebarctrlgetbandcount"></a><a name="getbandcount"></a> CReBarCtrl:: GetBandCount

Implementa il comportamento del [RB_GETBANDCOUNT](/windows/win32/Controls/rb-getbandcount)del messaggio Win32, come descritto nel Windows SDK.

```
UINT GetBandCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di bande assegnate al controllo.

## <a name="crebarctrlgetbandinfo"></a><a name="getbandinfo"></a> CReBarCtrl:: GetBandInfo

Implementa il comportamento del messaggio Win32 [RB_GETBANDINFO](/windows/win32/Controls/rb-getbandinfo) come descritto nel Windows SDK.

```
BOOL GetBandInfo(
    UINT uBand,
    REBARBANDINFO* prbbi) const;
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda per cui verranno recuperate le informazioni.

*prbbi*<br/>
Puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) per ricevere le informazioni sulla banda. È necessario impostare il `cbSize` membro di questa struttura su `sizeof(REBARBANDINFO)` e impostare il `fMask` membro sugli elementi che si desidera recuperare prima di inviare questo messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlgetbandmargins"></a><a name="getbandmargins"></a> CReBarCtrl:: GetBandMargins

Recupera i margini della banda.

```cpp
void GetBandMargins(PMARGINS pMargins);
```

### <a name="parameters"></a>Parametri

*pMargins*<br/>
Puntatore a una struttura dei [margini](/windows/win32/api/uxtheme/ns-uxtheme-margins)che riceverà le informazioni.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [RB_GETBANDMARGINS](/windows/win32/Controls/rb-getbandmargins) , come descritto nel Windows SDK.

## <a name="crebarctrlgetbarheight"></a><a name="getbarheight"></a> CReBarCtrl:: GetBarHeight

Recupera l'altezza della barra del controllo Rebar.

```
UINT GetBarHeight() const;
```

### <a name="return-value"></a>Valore restituito

Valore che rappresenta l'altezza, in pixel, del controllo.

## <a name="crebarctrlgetbarinfo"></a><a name="getbarinfo"></a> CReBarCtrl:: GetBarInfo

Implementa il comportamento del [RB_GETBARINFO](/windows/win32/Controls/rb-getbarinfo)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL GetBarInfo(REBARINFO* prbi) const;
```

### <a name="parameters"></a>Parametri

*prbi*<br/>
Puntatore a una struttura [REBARINFO](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) che riceverà le informazioni sul controllo Rebar. È necessario impostare il membro *cbSize* della struttura su `sizeof(REBARINFO)` prima di inviare questo messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlgetbkcolor"></a><a name="getbkcolor"></a> CReBarCtrl:: GetBkColor

Implementa il comportamento del [RB_GETBKCOLOR](/windows/win32/Controls/rb-getbkcolor)del messaggio Win32, come descritto nel Windows SDK.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta il colore di sfondo predefinito corrente.

## <a name="crebarctrlgetcolorscheme"></a><a name="getcolorscheme"></a> CReBarCtrl:: GetColorScheme

Recupera la struttura [ColorScheme](/windows/win32/api/commctrl/ns-commctrl-colorscheme) per il controllo Rebar.

```
BOOL GetColorScheme(COLORSCHEME* lpcs);
```

### <a name="parameters"></a>Parametri

*LPCS*<br/>
Puntatore a una struttura [ColorScheme](/windows/win32/api/commctrl/ns-commctrl-colorscheme) , come descritto nell'Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `COLORSCHEME` struttura include il colore di evidenziazione del pulsante e il colore dell'ombreggiatura pulsante.

## <a name="crebarctrlgetdroptarget"></a><a name="getdroptarget"></a> CReBarCtrl:: GetDropTarget

Implementa il comportamento del [RB_GETDROPTARGET](/windows/win32/Controls/rb-getdroptarget)del messaggio Win32, come descritto nel Windows SDK.

```
IDropTarget* GetDropTarget() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) .

## <a name="crebarctrlgetextendedstyle"></a><a name="getextendedstyle"></a> CReBarCtrl:: GetExtendedStyle

Ottiene gli stili estesi del controllo Rebar corrente.

```
DWORD GetExtendedStyle() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit (o) di flag che indicano gli stili estesi. I flag possibili sono RBS_EX_SPLITTER e RBS_EX_TRANSPARENT. Per ulteriori informazioni, vedere il parametro *dwMask* del metodo [CReBarCtrl:: SetExtendedStyle](#setextendedstyle) .

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [RB_GETEXTENDEDSTYLE](/windows/win32/Controls/rb-dragmove) , descritto nel Windows SDK.

## <a name="crebarctrlgetimagelist"></a><a name="getimagelist"></a> CReBarCtrl:: GetImages

Ottiene l' `CImageList` oggetto associato a un controllo Rebar.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) . Restituisce NULL se non è impostato alcun elenco di immagini per il controllo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro usa le informazioni sulle dimensioni e sulla maschera archiviate nella struttura [REBARINFO](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) , come descritto nell'Windows SDK.

## <a name="crebarctrlgetpalette"></a><a name="getpalette"></a> CReBarCtrl:: gettavolozza

Recupera la tavolozza corrente del controllo Rebar.

```
CPalette* GetPalette() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CPalette](../../mfc/reference/cpalette-class.md) che specifica la tavolozza corrente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che questa funzione membro utilizza un `CPalette` oggetto come valore restituito, anziché un HPALETTE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#5](../../mfc/reference/codesnippet/cpp/crebarctrl-class_3.cpp)]

## <a name="crebarctrlgetrect"></a><a name="getrect"></a> CReBarCtrl:: GetRect

Implementa il comportamento del [RB_GETRECT](/windows/win32/Controls/rb-getrect)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL GetRect(
    UINT uBand,
    LPRECT prc) const;
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero di una banda nel controllo Rebar.

*PRC*<br/>
Un puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che riceverà i limiti della banda del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#6](../../mfc/reference/codesnippet/cpp/crebarctrl-class_4.cpp)]

## <a name="crebarctrlgetrowcount"></a><a name="getrowcount"></a> CReBarCtrl:: GetRowCount

Implementa il comportamento del [RB_GETROWCOUNT](/windows/win32/Controls/rb-getrowcount)del messaggio Win32, come descritto nel Windows SDK.

```
UINT GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore UINT che rappresenta il numero di righe della banda nel controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#7](../../mfc/reference/codesnippet/cpp/crebarctrl-class_5.cpp)]

## <a name="crebarctrlgetrowheight"></a><a name="getrowheight"></a> CReBarCtrl:: GetRowHeight

Implementa il comportamento del [RB_GETROWHEIGHT](/windows/win32/Controls/rb-getrowheight)del messaggio Win32, come descritto nel Windows SDK.

```
UINT GetRowHeight(UINT uRow) const;
```

### <a name="parameters"></a>Parametri

*uRow*<br/>
Indice in base zero della banda per cui viene recuperata l'altezza.

### <a name="return-value"></a>Valore restituito

Valore UINT che rappresenta l'altezza della riga, in pixel.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#8](../../mfc/reference/codesnippet/cpp/crebarctrl-class_6.cpp)]

## <a name="crebarctrlgettextcolor"></a><a name="gettextcolor"></a> CReBarCtrl:: GetTextColor

Implementa il comportamento del [RB_GETTEXTCOLOR](/windows/win32/Controls/rb-gettextcolor)del messaggio Win32, come descritto nel Windows SDK.

```
COLORREF GetTextColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta il colore del testo predefinito corrente.

## <a name="crebarctrlgettooltips"></a><a name="gettooltips"></a> CReBarCtrl:: GetToolTips

Implementa il comportamento del [RB_GETTOOLTIPS](/windows/win32/Controls/rb-gettooltips)del messaggio Win32, come descritto nel Windows SDK.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md) .

### <a name="remarks"></a>Osservazioni

Si noti che l'implementazione MFC di `GetToolTips` restituisce un puntatore a un `CToolTipCtrl` , anziché un HWND.

## <a name="crebarctrlhittest"></a><a name="hittest"></a> CReBarCtrl:: HitTest

Implementa il comportamento del [RB_HITTEST](/windows/win32/Controls/rb-hittest)del messaggio Win32, come descritto nel Windows SDK.

```
int HitTest(RBHITTESTINFO* prbht);
```

### <a name="parameters"></a>Parametri

*prbht*<br/>
Puntatore a una struttura [RBHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-rbhittestinfo) . Prima di inviare il messaggio, è `pt` necessario inizializzare il membro di questa struttura sul punto che verrà testato nelle coordinate del client.

### <a name="return-value"></a>Valore restituito

Indice in base zero della banda nel punto specificato oppure-1 se non è presente alcuna banda del controllo Rebar nel punto.

## <a name="crebarctrlidtoindex"></a><a name="idtoindex"></a> CReBarCtrl:: IDToIndex

Implementa il comportamento del [RB_IDTOINDEX](/windows/win32/controls/rb-idtoindex)del messaggio Win32, come descritto nel Windows SDK.

```
int IDToIndex(UINT uBandID) const;
```

### <a name="parameters"></a>Parametri

*uBandID*<br/>
Identificatore definito dall'applicazione della banda specificata, passato nel `wID` membro della struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) quando viene inserita la banda.

### <a name="return-value"></a>Valore restituito

Indice della banda in base zero, se ha esito positivo oppure-1 in caso contrario. Se sono presenti indici di banda duplicati, viene restituito il primo.

## <a name="crebarctrlinsertband"></a><a name="insertband"></a> CReBarCtrl:: InsertBand

Implementa il comportamento del [RB_INSERTBAND](/windows/win32/Controls/rb-insertband)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL InsertBand(
    UINT uIndex,
    REBARBANDINFO* prbbi);
```

### <a name="parameters"></a>Parametri

*uIndex*<br/>
Indice in base zero della posizione in cui verrà inserita la banda. Se questo parametro viene impostato su-1, il controllo aggiungerà la nuova banda nell'ultima posizione.

*prbbi*<br/>
Puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) che definisce la banda da inserire. È necessario impostare il membro *cbSize* della struttura su `sizeof(REBARBANDINFO)` prima di chiamare questa funzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#9](../../mfc/reference/codesnippet/cpp/crebarctrl-class_7.cpp)]

## <a name="crebarctrlmaximizeband"></a><a name="maximizeband"></a> CReBarCtrl:: MaximizeBand

Ridimensiona una banda in un controllo Rebar alla dimensione massima.

```cpp
void MaximizeBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda da ingrandire.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del messaggio Win32 [RB_MAXIMIZEBAND](/windows/win32/Controls/rb-maximizeband) con `fIdeal` impostato su 0, come descritto nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#10](../../mfc/reference/codesnippet/cpp/crebarctrl-class_8.cpp)]

## <a name="crebarctrlminimizeband"></a><a name="minimizeband"></a> CReBarCtrl:: MinimizeBand

Ridimensiona una banda in un controllo Rebar alla dimensione minima.

```cpp
void MinimizeBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda da ridurre a icona.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del [RB_MINIMIZEBAND](/windows/win32/Controls/rb-minimizeband)del messaggio Win32, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#11](../../mfc/reference/codesnippet/cpp/crebarctrl-class_9.cpp)]

## <a name="crebarctrlmoveband"></a><a name="moveband"></a> CReBarCtrl:: MoveBand

Implementa il comportamento del [RB_MOVEBAND](/windows/win32/Controls/rb-moveband)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL MoveBand(
    UINT uFrom,
    UINT uTo);
```

### <a name="parameters"></a>Parametri

*uFrom*<br/>
Indice in base zero della banda da spostare.

*uTo*<br/>
Indice in base zero della nuova posizione della banda. Il valore di questo parametro non deve essere mai maggiore del numero di bande meno uno. Per ottenere il numero di bande, chiamare [GetBandCount](#getbandcount).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlpushchevron"></a><a name="pushchevron"></a> CReBarCtrl::P ushChevron

Implementa il comportamento del [RB_PUSHCHEVRON](/windows/win32/Controls/rb-pushchevron)del messaggio Win32, come descritto nel Windows SDK.

```cpp
void PushChevron(
    UINT uBand,
    LPARAM lAppValue);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda di cui deve essere eseguito il push della freccia di espansione.

*lAppValue*<br/>
Valore a 32 bit definito dall'applicazione. Vedere *lAppValue* in [RB_PUSHCHEVRON](/windows/win32/Controls/rb-pushchevron) nel Windows SDK.

## <a name="crebarctrlrestoreband"></a><a name="restoreband"></a> CReBarCtrl:: RestoreBand

Ridimensiona una banda in un controllo Rebar alle dimensioni ideali.

```cpp
void RestoreBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda da ingrandire.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del messaggio Win32 [RB_MAXIMIZEBAND](/windows/win32/Controls/rb-maximizeband) con `fIdeal` impostato su 1, come descritto nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#12](../../mfc/reference/codesnippet/cpp/crebarctrl-class_10.cpp)]

## <a name="crebarctrlsetbandinfo"></a><a name="setbandinfo"></a> CReBarCtrl:: SetBandInfo

Implementa il comportamento del [RB_SETBANDINFO](/windows/win32/Controls/rb-setbandinfo)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL SetBandInfo(
    UINT uBand,
    REBARBANDINFO* prbbi);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero della banda per ricevere le nuove impostazioni.

*prbbi*<br/>
Puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) che definisce la banda da inserire. `cbSize` `sizeof(REBARBANDINFO)` Prima di inviare questo messaggio, è necessario impostare il membro di questa struttura su.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#13](../../mfc/reference/codesnippet/cpp/crebarctrl-class_11.cpp)]

## <a name="crebarctrlsetbandwidth"></a><a name="setbandwidth"></a> CReBarCtrl:: sebandwidth

Imposta la larghezza della banda ancorata specificata nel controllo Rebar corrente.

```
BOOL SetBandWidth(
    UINT uBand,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

*uBand*\
in Indice in base zero di una banda del controllo Rebar.

*cxWidth*\
in Nuova larghezza della banda del Rebar, in pixel.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [RB_SETBANDWIDTH](/windows/win32/Controls/rb-setbandwidth) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene definita la variabile, `m_rebar` , utilizzata per accedere al controllo Rebar corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CReBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/crebarctrl-class_12.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice seguente viene impostata la larghezza di ogni banda del controllo Rebar.

[!code-cpp[NVC_MFC_CReBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/crebarctrl-class_13.cpp)]

## <a name="crebarctrlsetbarinfo"></a><a name="setbarinfo"></a> CReBarCtrl:: SetBarInfo

Implementa il comportamento del [RB_SETBARINFO](/windows/win32/Controls/rb-setbarinfo)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL SetBarInfo(REBARINFO* prbi);
```

### <a name="parameters"></a>Parametri

*prbi*<br/>
Puntatore a una struttura [REBARINFO](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) che contiene le informazioni da impostare. È necessario impostare il `cbSize` membro di questa struttura su `sizeof(REBARINFO)` prima di inviare questo messaggio

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#14](../../mfc/reference/codesnippet/cpp/crebarctrl-class_14.cpp)]

## <a name="crebarctrlsetbkcolor"></a><a name="setbkcolor"></a> CReBarCtrl:: SetBkColor

Implementa il comportamento del [RB_SETBKCOLOR](/windows/win32/Controls/rb-setbkcolor)del messaggio Win32, come descritto nel Windows SDK.

```
COLORREF SetBkColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*CLR*<br/>
Valore di COLORREF che rappresenta il nuovo colore di sfondo predefinito.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo predefinito precedente.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su quando impostare il colore di sfondo e su come impostare il valore predefinito, vedere questo argomento.

## <a name="crebarctrlsetcolorscheme"></a><a name="setcolorscheme"></a> CReBarCtrl:: SetColorScheme

Imposta la combinazione di colori per i pulsanti di un controllo Rebar.

```cpp
void SetColorScheme(const COLORSCHEME* lpcs);
```

### <a name="parameters"></a>Parametri

*LPCS*<br/>
Puntatore a una struttura [ColorScheme](/windows/win32/api/commctrl/ns-commctrl-colorscheme) , come descritto nell'Windows SDK.

### <a name="remarks"></a>Osservazioni

La `COLORSCHEME` struttura include il colore di evidenziazione del pulsante e il colore dell'ombreggiatura pulsante.

## <a name="crebarctrlsetextendedstyle"></a><a name="setextendedstyle"></a> CReBarCtrl:: SetExtendedStyle

Imposta gli stili estesi per il controllo Rebar corrente.

```
DWORD SetExtendedStyle(
    DWORD dwMask,
    DWORD dwStyleEx);
```

### <a name="parameters"></a>Parametri

*dwMask*\
in Combinazione bit per bit (o) di flag che specificano i flag nel parametro *dwStyleEx* applicabili. Usare uno o più dei valori seguenti:

- `RBS_EX_SPLITTER`: Per impostazione predefinita, Mostra la barra di divisione in basso in modalità orizzontale e a destra in modalità verticale.
- `RBS_EX_TRANSPARENT`: Consente di inviare il messaggio di [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) alla finestra padre.

*dwStyleEx*\
in Combinazione bit per bit (o) di flag che specificano gli stili da applicare. Per impostare uno stile, specificare lo stesso flag usato nel parametro *dwMask* . Per reimpostare uno stile, specificare zero binario.

### <a name="return-value"></a>Valore restituito

Stile esteso precedente.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [RB_SETEXTENDEDSTYLE](/windows/win32/Controls/rb-setextendedstyle) , descritto nel Windows SDK.

## <a name="crebarctrlsetimagelist"></a><a name="setimagelist"></a> CReBarCtrl:: seimagine

Assegna un elenco di immagini a un controllo Rebar.

```
BOOL SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList*<br/>
Puntatore a un oggetto [CImageList](../../mfc/reference/cimagelist-class.md) che contiene l'elenco di immagini da assegnare al controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlsetowner"></a><a name="setowner"></a> CReBarCtrl:: SetOwner

Implementa il comportamento del [RB_SETPARENT](/windows/win32/Controls/rb-setparent)del messaggio Win32, come descritto nel Windows SDK.

```
CWnd* SetOwner(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore a un `CWnd` oggetto da impostare come proprietario del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta il proprietario corrente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che questa funzione membro utilizza i puntatori agli `CWnd` oggetti sia per il proprietario corrente che per quello selezionato del controllo Rebar anziché per gli handle di Windows.

> [!NOTE]
> Questa funzione membro non modifica l'elemento padre effettivo impostato al momento della creazione del controllo. piuttosto invia messaggi di notifica alla finestra specificata.

## <a name="crebarctrlsetpalette"></a><a name="setpalette"></a> CReBarCtrl:: sepalette

Implementa il comportamento del [RB_SETPALETTE](/windows/win32/Controls/rb-setpalette)del messaggio Win32, come descritto nel Windows SDK.

```
CPalette* SetPalette(HPALETTE hPal);
```

### <a name="parameters"></a>Parametri

*hPal*<br/>
Oggetto HPALETTE che specifica la nuova tavolozza che il controllo Rebar utilizzerà.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CPalette](../../mfc/reference/cpalette-class.md) che specifica la tavolozza precedente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che questa funzione membro utilizza un `CPalette` oggetto come valore restituito, anziché un HPALETTE.

## <a name="crebarctrlsettextcolor"></a><a name="settextcolor"></a> CReBarCtrl:: SetTextColor

Implementa il comportamento del [RB_SETTEXTCOLOR](/windows/win32/Controls/rb-settextcolor)del messaggio Win32, come descritto nel Windows SDK.

```
COLORREF SetTextColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*CLR*<br/>
Valore COLORREF che rappresenta il nuovo colore del testo nell' `CReBarCtrl` oggetto.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore del testo precedente associato all' `CReBarCtrl` oggetto.

### <a name="remarks"></a>Osservazioni

Viene fornito per supportare la flessibilità del colore del testo in un controllo Rebar.

## <a name="crebarctrlsettooltips"></a><a name="settooltips"></a> CReBarCtrl:: setooltips

Associa un controllo descrizione comando a un controllo Rebar.

```cpp
void SetToolTips(CToolTipCtrl* pToolTip);
```

### <a name="parameters"></a>Parametri

*pToolTip*<br/>
Puntatore a un oggetto [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)

### <a name="remarks"></a>Osservazioni

Al termine dell'operazione, è necessario eliminare l' `CToolTipCtrl` oggetto.

## <a name="crebarctrlsetwindowtheme"></a><a name="setwindowtheme"></a> CReBarCtrl:: SetWindowTheme

Imposta lo stile di visualizzazione del controllo Rebar.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione Rebar da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio di [RB_SETWINDOWTHEME](/windows/win32/Controls/rb-setwindowtheme) , come descritto nel Windows SDK.

## <a name="crebarctrlshowband"></a><a name="showband"></a> CReBarCtrl:: ShowBand

Implementa il comportamento del [RB_SHOWBAND](/windows/win32/Controls/rb-showband)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL ShowBand(
    UINT uBand,
    BOOL fShow = TRUE);
```

### <a name="parameters"></a>Parametri

*uBand*<br/>
Indice in base zero di una banda nel controllo Rebar.

*fShow*<br/>
Indica se la banda deve essere mostrata o nascosta. Se questo valore è TRUE, la banda verrà visualizzata. In caso contrario, la banda sarà nascosta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlsizetorect"></a><a name="sizetorect"></a> CReBarCtrl:: SizeToRect

Implementa il comportamento del [RB_SIZETORECT](/windows/win32/Controls/rb-sizetorect)del messaggio Win32, come descritto nel Windows SDK.

```
BOOL SizeToRect(CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Riferimento a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica il rettangolo in cui deve essere ridimensionato il controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si noti che questa funzione membro utilizza un `CRect` oggetto come parametro, anziché una `RECT` struttura.

## <a name="see-also"></a>Vedi anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
