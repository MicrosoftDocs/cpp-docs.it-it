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
ms.openlocfilehash: 776892d71e2cb0f5d57512754cd7fa12730eb044
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367438"
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
|[CReBarCtrl::CReBarCtrl](#crebarctrl)|Costruisce un oggetto `CReBarCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBarCtrl::BeginDrag](#begindrag)|Inserisce il controllo Rebar in modalità di trascinamento della selezione.|
|[CReBarCtrl::Crea](#create)|Crea il controllo Rebar e lo `CReBarCtrl` associa all'oggetto.|
|[CReBarCtrl::CreateEx](#createex)|Crea un controllo Rebar con gli stili estesi di `CReBarCtrl` Windows specificati e lo associa a un oggetto.|
|[CReBarCtrl::DeleteBand](#deleteband)|Elimina una banda da un controllo Rebar.|
|[CReBarCtrl::DragMove](#dragmove)|Aggiorna la posizione di trascinamento nel `BeginDrag`controllo Rebar dopo una chiamata a .|
|[CReBarCtrl::EndDrag](#enddrag)|Termina l'operazione di trascinamento e rilascio del controllo rebar.|
|[CReBarCtrl::GetBandBorders](#getbandborders)|Recupera i bordi di una banda.|
|[CReBarCtrl::GetBandCount](#getbandcount)|Recupera il conteggio delle bande attualmente presenti nel controllo Rebar.|
|[CReBarCtrl::GetBandInfo](#getbandinfo)|Recupera informazioni su una banda specificata in un controllo Rebar.|
|[CReBarCtrl::GetBandMargins](#getbandmargins)|Recupera i margini di una banda.|
|[CReBarCtrl::GetBarHeight](#getbarheight)|Recupera l'altezza del controllo Rebar.|
|[CReBarCtrl::GetBarInfo](#getbarinfo)|Recupera informazioni sul controllo Rebar e sull'elenco immagini che utilizza.|
|[CReBarCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo predefinito di un controllo Rebar.|
|[CReBarCtrl::GetColorScheme](#getcolorscheme)|Recupera la struttura [COLORSCHEME](/windows/win32/api/commctrl/ns-commctrl-colorscheme) associata al controllo Rebar.|
|[CReBarCtrl::GetDropTarget](#getdroptarget)|Recupera il puntatore a `IDropTarget` interfaccia di un controllo Rebar.|
|[CReBarCtrl::GetExtendedStyle](#getextendedstyle)|Ottiene lo stile esteso del controllo Rebar corrente.|
|[CReBarCtrl::GetImageList](#getimagelist)|Recupera l'elenco di immagini associato a un controllo Rebar.|
|[CReBarCtrl::GetPalette](#getpalette)|Recupera la tavolozza corrente del controllo Rebar.|
|[CReBarCtrl::GetRect](#getrect)|Recupera il rettangolo di delimitazione per una banda specificata in un controllo Rebar.|
|[CReBarCtrl::GetRowCount](#getrowcount)|Recupera il numero di righe di finche in un controllo Rebar.|
|[CReBarCtrl::GetRowHeight](#getrowheight)|Recupera l'altezza di una riga specificata in un controllo Rebar.|
|[CReBarCtrl::GetTextColor](#gettextcolor)|Recupera il colore del testo predefinito di un controllo Rebar.|
|[CReBarCtrl::GetToolTips](#gettooltips)|Recupera l'handle per qualsiasi controllo descrizione comandi associato al controllo rebar.|
|[CReBarCtrl::HitTest](#hittest)|Determina quale parte di una banda dell'armatura si trova in un determinato punto dello schermo, se in quel punto esiste una banda dell'armatura.|
|[CReBarCtrl::IDToIndex](#idtoindex)|Converte un identificatore di banda (ID) in un indice di banda in un controllo Rebar.|
|[CReBarCtrl::InsertBand](#insertband)|Inserisce una nuova banda in un controllo Rebar.|
|[CReBarCtrl::MaximizeBand](#maximizeband)|Ridimensiona una banda in un controllo Rebar alle dimensioni maggiori.|
|[CReBarCtrl::MinimizeBand](#minimizeband)|Ridimensiona una banda in un controllo Rebar alle dimensioni più piccole.|
|[CReBarCtrl::MoveBand](#moveband)|Sposta una banda da un indice all'altro.|
|[CReBarCtrl::PushChevron](#pushchevron)|Push a livello di codice una chevron.|
|[CReBarCtrl::RestoreBand](#restoreband)|Ridimensiona una banda in un controllo Rebar alle sue dimensioni ideali.|
|[CReBarCtrl::SetBandInfo](#setbandinfo)|Imposta le caratteristiche di una banda esistente in un controllo Rebar.|
|[CReBarCtrl::SetBandWidth](#setbandwidth)|Imposta la larghezza della banda ancorata specificata nel controllo Rebar corrente.|
|[CReBarCtrl::SetBarInfo](#setbarinfo)|Imposta le caratteristiche di un controllo Rebar.|
|[CReBarCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo predefinito di un controllo Rebar.|
|[CReBarCtrl::SetColorScheme](#setcolorscheme)|Imposta la combinazione di colori per i pulsanti in un controllo Rebar.|
|[CReBarCtrl::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi per il controllo Rebar corrente.|
|[CReBarCtrl::SetImageList](#setimagelist)|Imposta l'elenco di immagini di un controllo Rebar.|
|[CReBarCtrl::SetOwner](#setowner)|Imposta la finestra proprietaria di un controllo Rebar.|
|[CReBarCtrl::SetPalette (SetPalette)](#setpalette)|Imposta la tavolozza corrente del controllo Rebar.|
|[CReBarCtrl::SetTextColor](#settextcolor)|Imposta il colore del testo predefinito del controllo Rebar.|
|[CReBarCtrl::SetToolTips](#settooltips)|Associa un controllo descrizione comandi al controllo Rebar.|
|[CReBarCtrl::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione del controllo Rebar.|
|[CReBarCtrl::ShowBand](#showband)|Mostra o nasconde una determinata banda in un controllo Rebar.|
|[CReBarCtrl::SizeToRect](#sizetorect)|Adatta un controllo Rebar a un rettangolo specificato.|

## <a name="remarks"></a>Osservazioni

L'applicazione in cui risiede il controllo Rebar assegna la finestra figlio contenuta dal controllo Rebar alla banda dell'armatura. La finestra figlio è in genere un altro controllo comune.

I controlli armatura contengono una o più bande. Ogni banda può contenere una combinazione di una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio. La banda può contenere solo uno di questi elementi.

Il controllo rebar può visualizzare la finestra figlio su una bitmap di sfondo specificata. Tutte le bande di controllo dell'armatura possono essere ridimensionate, ad eccezione di quelle che utilizzano lo stile RBBS_FIXEDSIZE. Quando si riposiziona o si ridimensiona una banda di controllo dell'armatura, il controllo rebar gestisce le dimensioni e la posizione della finestra figlio assegnata a tale banda. Per ridimensionare o modificare l'ordine delle bande all'interno del controllo, fare clic e trascinare la barra gripper di una banda.

Nella figura seguente viene illustrato un controllo Rebar con tre bande:The following illustration shows a rebar control that has three bands:

- La banda 0 contiene un controllo della barra degli strumenti piatto e trasparente.

- La banda 1 contiene sia pulsanti a discesa standard trasparenti che pulsanti a discesa trasparenti.

- La banda 2 contiene una casella combinata e quattro pulsanti standard.

   ![Esempio di menu Rebar](../../mfc/reference/media/vc4scc1.gif "Esempio di menu Rebar")

## <a name="rebar-control"></a>Controllo rebar

I controlli dell'armatura supportano:

- Elenchi di immagini.

- Gestione dei messaggi.

- Funzionalità di disegno personalizzato.

- Una varietà di stili di controllo oltre agli stili di finestra standard. Per un elenco di questi stili, vedere [Stili del controllo Rebar](/windows/win32/Controls/rebar-control-styles) in Windows SDK.

Per ulteriori informazioni, vedere [Utilizzo di CReBarCtrl](../../mfc/using-crebarctrl.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CReBarCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="crebarctrlbegindrag"></a><a name="begindrag"></a>CReBarCtrl::BeginDrag

Implementa il comportamento del messaggio Win32 [RB_BEGINDRAG](/windows/win32/Controls/rb-begindrag), come descritto in Windows SDK.

```
void BeginDrag(
    UINT uBand,
    DWORD dwPos = (DWORD)-1);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda su cui influenzerà l'operazione di trascinamento della selezione.

*dwPos*<br/>
Valore DWORD che contiene le coordinate iniziali del mouse. La coordinata orizzontale è contenuta nel LOWORD e la coordinata verticale è contenuta in HIWORD. Se si passa (DWORD)-1, il controllo Rebar utilizzerà la posizione del `GetMessage` mouse `PeekMessage`l'ultima volta che il thread del controllo ha chiamato o .

## <a name="crebarctrlcreate"></a><a name="create"></a>CReBarCtrl::Crea

Crea il controllo Rebar e lo `CReBarCtrl` associa all'oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Specifica la combinazione di stili del controllo Rebar applicati al controllo. Per un elenco degli stili supportati, vedere [Stili di controllo Rebar](/windows/win32/Controls/rebar-control-styles) in Windows SDK.

*Rect*<br/>
Un riferimento a un [Oggetto CRect](../../atl-mfc-shared/reference/crect-class.md) o a una struttura [RECT,](/previous-versions/dd162897\(v=vs.85\)) ovvero la posizione e le dimensioni del controllo Rebar.

*pParentWnd (informazioni in due)*<br/>
Puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo rebar. Non deve essere NULL.

*nID*<br/>
Specifica l'ID di controllo del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Creare un controllo Rebar in due passaggi:Create a rebar control in two steps:

1. Chiamare [CReBarCtrl](#crebarctrl) per `CReBarCtrl` costruire un oggetto.

1. Chiamare questa funzione membro, che crea il controllo rebar `CReBarCtrl` di Windows e lo associa all'oggetto.

Quando si `Create`chiama , i controlli comuni vengono inizializzati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#3](../../mfc/reference/codesnippet/cpp/crebarctrl-class_1.cpp)]

## <a name="crebarctrlcreateex"></a><a name="createex"></a>CReBarCtrl::CreateEx

Crea un controllo (una finestra figlio) `CReBarCtrl` e lo associa all'oggetto.

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
Specifica la combinazione di stili del controllo Rebar applicati al controllo. Per un elenco degli stili supportati, vedere [Stili del controllo Rebar](/windows/win32/Controls/rebar-control-styles) in Windows SDK.

*Rect*<br/>
Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che descrive le dimensioni e la posizione della finestra da creare, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre del controllo.

*nID*<br/>
ID della finestra figlio del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `CreateEx` invece [di Crea](#create) per applicare stili di Windows estesi, specificati dalla prefazione dello stile esteso di Windows **WS_EX_**.

## <a name="crebarctrlcrebarctrl"></a><a name="crebarctrl"></a>CReBarCtrl::CReBarCtrl

Crea un oggetto `CReBarCtrl`.

```
CReBarCtrl();
```

### <a name="example"></a>Esempio

  Vedere l'esempio per [CReBarCtrl::Create](#create).

## <a name="crebarctrldeleteband"></a><a name="deleteband"></a>CReBarCtrl::DeleteBand

Implementa il comportamento del messaggio Win32 [RB_DELETEBAND](/windows/win32/Controls/rb-deleteband), come descritto in Windows SDK.

```
BOOL DeleteBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda da eliminare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la banda viene eliminata correttamente; in caso contrario zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#4](../../mfc/reference/codesnippet/cpp/crebarctrl-class_2.cpp)]

## <a name="crebarctrldragmove"></a><a name="dragmove"></a>CReBarCtrl::DragMove

Implementa il comportamento del messaggio Win32 [RB_DRAGMOVE](/windows/win32/Controls/rb-dragmove), come descritto in Windows SDK.

```
void DragMove(DWORD dwPos = (DWORD)-1);
```

### <a name="parameters"></a>Parametri

*dwPos*<br/>
Valore DWORD che contiene le nuove coordinate del mouse. La coordinata orizzontale è contenuta nel LOWORD e la coordinata verticale è contenuta in HIWORD. Se si passa (DWORD)-1, il controllo Rebar utilizzerà la posizione del `GetMessage` mouse `PeekMessage`l'ultima volta che il thread del controllo ha chiamato o .

## <a name="crebarctrlenddrag"></a><a name="enddrag"></a>CReBarCtrl::EndDrag

Implementa il comportamento del messaggio Win32 [RB_ENDDRAG](/windows/win32/Controls/rb-enddrag), come descritto in Windows SDK.

```
void EndDrag();
```

## <a name="crebarctrlgetbandborders"></a><a name="getbandborders"></a>CReBarCtrl::GetBandBorders

Implementa il comportamento del messaggio Win32 [RB_GETBANDBORDERS](/windows/win32/Controls/rb-getbandborders), come descritto in Windows SDK.

```
void GetBandBorders(
    UINT uBand,
    LPRECT prc) const;
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda per la quale verranno recuperati i bordi.

*Rpc*<br/>
Puntatore a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che riceverà i bordi della banda. Se il controllo Rebar ha lo stile RBS_BANDBORDERS, ogni membro di questa struttura riceverà il numero di pixel, sul lato corrispondente della banda, che costituiscono il bordo. Se il controllo Rebar non ha lo stile RBS_BANDBORDERS, solo il membro sinistro di questa struttura riceve informazioni valide. Per una descrizione degli stili di controllo dell'armatura, vedere [Stili del controllo Rebar](/windows/win32/Controls/rebar-control-styles) in Windows SDK.

## <a name="crebarctrlgetbandcount"></a><a name="getbandcount"></a>CReBarCtrl::GetBandCount

Implementa il comportamento del messaggio Win32 [RB_GETBANDCOUNT](/windows/win32/Controls/rb-getbandcount), come descritto in Windows SDK.

```
UINT GetBandCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di bande assegnate al controllo.

## <a name="crebarctrlgetbandinfo"></a><a name="getbandinfo"></a>CReBarCtrl::GetBandInfo

Implementa il comportamento del messaggio Win32 [RB_GETBANDINFO](/windows/win32/Controls/rb-getbandinfo) come descritto in Windows SDK.

```
BOOL GetBandInfo(
    UINT uBand,
    REBARBANDINFO* prbbi) const;
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda per la quale verranno recuperate le informazioni.

*prbbi*<br/>
Un puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) per ricevere le informazioni sulla banda. È necessario `cbSize` impostare il `sizeof(REBARBANDINFO)` membro di `fMask` questa struttura su e impostare il membro per gli elementi che si desidera recuperare prima di inviare questo messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlgetbandmargins"></a><a name="getbandmargins"></a>CReBarCtrl::GetBandMargins

Recupera i margini della banda.

```
void GetBandMargins(PMARGINS pMargins);
```

### <a name="parameters"></a>Parametri

*pMargini*<br/>
Puntatore a una struttura [MARGINS](/windows/win32/api/uxtheme/ns-uxtheme-margins)che riceverà le informazioni.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [RB_GETBANDMARGINS,](/windows/win32/Controls/rb-getbandmargins) come descritto in Windows SDK.

## <a name="crebarctrlgetbarheight"></a><a name="getbarheight"></a>CReBarCtrl::GetBarHeight

Recupera l'altezza della barra dell'armatura.

```
UINT GetBarHeight() const;
```

### <a name="return-value"></a>Valore restituito

Valore che rappresenta l'altezza, in pixel, del controllo.

## <a name="crebarctrlgetbarinfo"></a><a name="getbarinfo"></a>CReBarCtrl::GetBarInfo

Implementa il comportamento del messaggio Win32 [RB_GETBARINFO](/windows/win32/Controls/rb-getbarinfo), come descritto in Windows SDK.

```
BOOL GetBarInfo(REBARINFO* prbi) const;
```

### <a name="parameters"></a>Parametri

*prbi*<br/>
Puntatore a una struttura [REBARINFO](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) che riceverà le informazioni sul controllo dell'armatura. È necessario impostare il membro *cbSize* di questa struttura su `sizeof(REBARINFO)` prima di inviare questo messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlgetbkcolor"></a><a name="getbkcolor"></a>CReBarCtrl::GetBkColor

Implementa il comportamento del messaggio Win32 [RB_GETBKCOLOR](/windows/win32/Controls/rb-getbkcolor), come descritto in Windows SDK.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta il colore di sfondo predefinito corrente.

## <a name="crebarctrlgetcolorscheme"></a><a name="getcolorscheme"></a>CReBarCtrl::GetColorScheme

Recupera la struttura [COLORSCHEME](/windows/win32/api/commctrl/ns-commctrl-colorscheme) per il controllo Rebar.

```
BOOL GetColorScheme(COLORSCHEME* lpcs);
```

### <a name="parameters"></a>Parametri

*lpcs*<br/>
Puntatore a una struttura [COLORSCHEME,](/windows/win32/api/commctrl/ns-commctrl-colorscheme) come descritto in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `COLORSCHEME` struttura include il colore di evidenziazione del pulsante e il colore dell'ombreggiatura del pulsante.

## <a name="crebarctrlgetdroptarget"></a><a name="getdroptarget"></a>CReBarCtrl::GetDropTarget

Implementa il comportamento del messaggio Win32 [RB_GETDROPTARGET](/windows/win32/Controls/rb-getdroptarget), come descritto in Windows SDK.

```
IDropTarget* GetDropTarget() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a [un'interfaccia IDropTarget.](/windows/win32/api/oleidl/nn-oleidl-idroptarget)

## <a name="crebarctrlgetextendedstyle"></a><a name="getextendedstyle"></a>CReBarCtrl::GetExtendedStyle

Ottiene gli stili estesi del controllo Rebar corrente.

```
DWORD GetExtendedStyle() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit (OR) di flag che indicano gli stili estesi. I flag possibili sono RBS_EX_SPLITTER e RBS_EX_TRANSPARENT. Per ulteriori informazioni, vedere il parametro *dwMask* del metodo [CReBarCtrl::SetExtendedStyle](#setextendedstyle) .

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [RB_GETEXTENDEDSTYLE](/windows/win32/Controls/rb-dragmove) messaggio, descritto in Windows SDK.

## <a name="crebarctrlgetimagelist"></a><a name="getimagelist"></a>CReBarCtrl::GetImageList

Ottiene `CImageList` l'oggetto associato a un controllo Rebar.

```
CImageList* GetImageList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto. Restituisce NULL se non è impostato alcun elenco immagini per il controllo.

### <a name="remarks"></a>Osservazioni

Questa funzione membro utilizza le informazioni su dimensioni e maschera archiviate nella struttura [REBARINFO,](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) come descritto in Windows SDK.

## <a name="crebarctrlgetpalette"></a><a name="getpalette"></a>CReBarCtrl::GetPalette

Recupera la tavolozza corrente del controllo Rebar.

```
CPalette* GetPalette() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [cPalette](../../mfc/reference/cpalette-class.md) oggetto che specifica la tavolozza corrente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che `CPalette` questa funzione membro utilizza un oggetto come valore restituito, anziché un HPALETTE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#5](../../mfc/reference/codesnippet/cpp/crebarctrl-class_3.cpp)]

## <a name="crebarctrlgetrect"></a><a name="getrect"></a>CReBarCtrl::GetRect

Implementa il comportamento del messaggio Win32 [RB_GETRECT](/windows/win32/Controls/rb-getrect), come descritto in Windows SDK.

```
BOOL GetRect(
    UINT uBand,
    LPRECT prc) const;
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero di una banda nel controllo Rebar.

*Rpc*<br/>
Puntatore a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che riceverà i limiti della banda dell'armatura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#6](../../mfc/reference/codesnippet/cpp/crebarctrl-class_4.cpp)]

## <a name="crebarctrlgetrowcount"></a><a name="getrowcount"></a>CReBarCtrl::GetRowCount

Implementa il comportamento del messaggio Win32 [RB_GETROWCOUNT](/windows/win32/Controls/rb-getrowcount), come descritto in Windows SDK.

```
UINT GetRowCount() const;
```

### <a name="return-value"></a>Valore restituito

Valore UINT che rappresenta il numero di righe di finche nel controllo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#7](../../mfc/reference/codesnippet/cpp/crebarctrl-class_5.cpp)]

## <a name="crebarctrlgetrowheight"></a><a name="getrowheight"></a>CReBarCtrl::GetRowHeight

Implementa il comportamento del messaggio Win32 [RB_GETROWHEIGHT](/windows/win32/Controls/rb-getrowheight), come descritto in Windows SDK.

```
UINT GetRowHeight(UINT uRow) const;
```

### <a name="parameters"></a>Parametri

*uRiga*<br/>
Indice in base zero della banda per la cui altezza verrà recuperata.

### <a name="return-value"></a>Valore restituito

Valore UINT che rappresenta l'altezza della riga, in pixel.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#8](../../mfc/reference/codesnippet/cpp/crebarctrl-class_6.cpp)]

## <a name="crebarctrlgettextcolor"></a><a name="gettextcolor"></a>CReBarCtrl::GetTextColor

Implementa il comportamento del messaggio Win32 [RB_GETTEXTCOLOR](/windows/win32/Controls/rb-gettextcolor), come descritto in Windows SDK.

```
COLORREF GetTextColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF che rappresenta il colore del testo predefinito corrente.

## <a name="crebarctrlgettooltips"></a><a name="gettooltips"></a>CReBarCtrl::GetToolTips

Implementa il comportamento del messaggio Win32 [RB_GETTOOLTIPS](/windows/win32/Controls/rb-gettooltips), come descritto in Windows SDK.

```
CToolTipCtrl* GetToolTips() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [oggetto CToolTipCtrl.](../../mfc/reference/ctooltipctrl-class.md)

### <a name="remarks"></a>Osservazioni

Si noti che `GetToolTips` l'implementazione `CToolTipCtrl`MFC di restituisce un puntatore a , anziché un HWND.

## <a name="crebarctrlhittest"></a><a name="hittest"></a>CReBarCtrl::HitTest

Implementa il comportamento del messaggio Win32 [RB_HITTEST](/windows/win32/Controls/rb-hittest), come descritto in Windows SDK.

```
int HitTest(RBHITTESTINFO* prbht);
```

### <a name="parameters"></a>Parametri

*prbht*<br/>
Puntatore a una struttura [RBHITTESTINFO.](/windows/win32/api/commctrl/ns-commctrl-rbhittestinfo) Prima di inviare `pt` il messaggio, il membro di questa struttura deve essere inizializzato fino al punto che verrà testato, nelle coordinate client.

### <a name="return-value"></a>Valore restituito

L'indice in base zero della banda nel punto specificato, o -1 se nessuna banda di armature era al punto.

## <a name="crebarctrlidtoindex"></a><a name="idtoindex"></a>CReBarCtrl::IDToIndex

Implementa il comportamento del messaggio Win32 [RB_IDTOINDEX](/windows/win32/controls/rb-idtoindex), come descritto in Windows SDK.

```
int IDToIndex(UINT uBandID) const;
```

### <a name="parameters"></a>Parametri

*uBandID (informazioni in inglese)*<br/>
Identificatore definito dall'applicazione della banda `wID` specificata, passato il membro della struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) quando viene inserita la banda.

### <a name="return-value"></a>Valore restituito

Indice della banda in base zero in caso di esito positivo oppure -1 in caso contrario. Se esistono indici di banda duplicati, viene restituito il primo.

## <a name="crebarctrlinsertband"></a><a name="insertband"></a>CReBarCtrl::InsertBand

Implementa il comportamento del messaggio Win32 [RB_INSERTBAND](/windows/win32/Controls/rb-insertband), come descritto in Windows SDK.

```
BOOL InsertBand(
    UINT uIndex,
    REBARBANDINFO* prbbi);
```

### <a name="parameters"></a>Parametri

*Indice uIndex*<br/>
Indice in base zero della posizione in cui verrà inserita la banda. Se si imposta questo parametro su -1, il controllo aggiungerà la nuova banda nell'ultima posizione.

*prbbi*<br/>
Puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) che definisce la banda da inserire. È necessario impostare il membro *cbSize* di questa struttura su `sizeof(REBARBANDINFO)` prima di chiamare questa funzione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#9](../../mfc/reference/codesnippet/cpp/crebarctrl-class_7.cpp)]

## <a name="crebarctrlmaximizeband"></a><a name="maximizeband"></a>CReBarCtrl::MaximizeBand

Ridimensiona una banda in un controllo Rebar alle dimensioni maggiori.

```
void MaximizeBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda da ingrandire.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del [RB_MAXIMIZEBAND](/windows/win32/Controls/rb-maximizeband) del `fIdeal` messaggio Win32 con impostato su 0, come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#10](../../mfc/reference/codesnippet/cpp/crebarctrl-class_8.cpp)]

## <a name="crebarctrlminimizeband"></a><a name="minimizeband"></a>CReBarCtrl::MinimizeBand

Ridimensiona una banda in un controllo Rebar alle dimensioni più piccole.

```
void MinimizeBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice a base zero della banda da ridurre al minimo.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del messaggio Win32 [RB_MINIMIZEBAND](/windows/win32/Controls/rb-minimizeband), come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#11](../../mfc/reference/codesnippet/cpp/crebarctrl-class_9.cpp)]

## <a name="crebarctrlmoveband"></a><a name="moveband"></a>CReBarCtrl::MoveBand

Implementa il comportamento del messaggio Win32 [RB_MOVEBAND](/windows/win32/Controls/rb-moveband), come descritto in Windows SDK.

```
BOOL MoveBand(
    UINT uFrom,
    UINT uTo);
```

### <a name="parameters"></a>Parametri

*uDa*<br/>
Indice in base zero della banda da spostare.

*Uto*<br/>
Indice in base zero della nuova posizione della banda. Il valore di questo parametro non deve mai essere maggiore del numero di bande meno uno. Per ottenere il numero di bande, chiamare [GetBandCount](#getbandcount).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlpushchevron"></a><a name="pushchevron"></a>CReBarCtrl::PushChevron

Implementa il comportamento del messaggio Win32 [RB_PUSHCHEVRON](/windows/win32/Controls/rb-pushchevron), come descritto in Windows SDK.

```
void PushChevron(
    UINT uBand,
    LPARAM lAppValue);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice a base zero della banda la cui chevron deve essere spinta.

*LAppValue (valore lApp)*<br/>
Valore a 32 bit definito dall'applicazione. Vedere *lAppValue* in [RB_PUSHCHEVRON](/windows/win32/Controls/rb-pushchevron) in Windows SDK.

## <a name="crebarctrlrestoreband"></a><a name="restoreband"></a>CReBarCtrl::RestoreBand

Ridimensiona una banda in un controllo Rebar alle sue dimensioni ideali.

```
void RestoreBand(UINT uBand);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero della banda da ingrandire.

### <a name="remarks"></a>Osservazioni

Implementa il comportamento del messaggio Win32 [RB_MAXIMIZEBAND](/windows/win32/Controls/rb-maximizeband) con `fIdeal` impostato su 1, come descritto in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#12](../../mfc/reference/codesnippet/cpp/crebarctrl-class_10.cpp)]

## <a name="crebarctrlsetbandinfo"></a><a name="setbandinfo"></a>CReBarCtrl::SetBandInfo

Implementa il comportamento del messaggio Win32 [RB_SETBANDINFO](/windows/win32/Controls/rb-setbandinfo), come descritto in Windows SDK.

```
BOOL SetBandInfo(
    UINT uBand,
    REBARBANDINFO* prbbi);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice a base zero della banda per ricevere le nuove impostazioni.

*prbbi*<br/>
Puntatore a una struttura [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) che definisce la banda da inserire. È necessario `cbSize` impostare il `sizeof(REBARBANDINFO)` membro di questa struttura su prima di inviare questo messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#13](../../mfc/reference/codesnippet/cpp/crebarctrl-class_11.cpp)]

## <a name="crebarctrlsetbandwidth"></a><a name="setbandwidth"></a>CReBarCtrl::SetBandWidth

Imposta la larghezza della banda ancorata specificata nel controllo Rebar corrente.

```
BOOL SetBandWidth(
    UINT uBand,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*uBanda*|[in] Indice in base zero di una banda dell'armatura.|
|*CxWidth (larghezza incx)*|[in] Nuova larghezza della banda dell'armatura, in pixel.|

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio RB_SETBANDWIDTH,](/windows/win32/Controls/rb-setbandwidth) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene definita la variabile , `m_rebar`, utilizzata per accedere al controllo Rebar corrente. Questa variabile viene usata nell'esempio riportato di seguito.

[!code-cpp[NVC_MFC_CReBarCtrl_s1#1](../../mfc/reference/codesnippet/cpp/crebarctrl-class_12.h)]

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato come impostare ogni banda dell'armatura in modo che sia della stessa larghezza.

[!code-cpp[NVC_MFC_CReBarCtrl_s1#2](../../mfc/reference/codesnippet/cpp/crebarctrl-class_13.cpp)]

## <a name="crebarctrlsetbarinfo"></a><a name="setbarinfo"></a>CReBarCtrl::SetBarInfo

Implementa il comportamento del messaggio Win32 [RB_SETBARINFO](/windows/win32/Controls/rb-setbarinfo), come descritto in Windows SDK.

```
BOOL SetBarInfo(REBARINFO* prbi);
```

### <a name="parameters"></a>Parametri

*prbi*<br/>
Puntatore a una struttura [REBARINFO](/windows/win32/api/commctrl/ns-commctrl-rebarinfo) che contiene le informazioni da impostare. È necessario `cbSize` impostare il `sizeof(REBARINFO)` membro di questa struttura su prima di inviare questo messaggio

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#14](../../mfc/reference/codesnippet/cpp/crebarctrl-class_14.cpp)]

## <a name="crebarctrlsetbkcolor"></a><a name="setbkcolor"></a>CReBarCtrl::SetBkColor

Implementa il comportamento del messaggio Win32 [RB_SETBKCOLOR](/windows/win32/Controls/rb-setbkcolor), come descritto in Windows SDK.

```
COLORREF SetBkColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
Valore COLORREF che rappresenta il nuovo colore di sfondo predefinito.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore di sfondo predefinito precedente.

### <a name="remarks"></a>Osservazioni

Vedere questo argomento per ulteriori informazioni su quando impostare il colore di sfondo e su come impostare il valore predefinito.

## <a name="crebarctrlsetcolorscheme"></a><a name="setcolorscheme"></a>CReBarCtrl::SetColorScheme

Imposta la combinazione di colori per i pulsanti in un controllo Rebar.

```
void SetColorScheme(const COLORSCHEME* lpcs);
```

### <a name="parameters"></a>Parametri

*lpcs*<br/>
Puntatore a una struttura [COLORSCHEME,](/windows/win32/api/commctrl/ns-commctrl-colorscheme) come descritto in Windows SDK.

### <a name="remarks"></a>Osservazioni

La `COLORSCHEME` struttura include sia il colore di evidenziazione del pulsante che il colore dell'ombreggiatura del pulsante.

## <a name="crebarctrlsetextendedstyle"></a><a name="setextendedstyle"></a>CReBarCtrl::SetExtendedStyle

Imposta gli stili estesi per il controllo Rebar corrente.

```
DWORD SetExtendedStyle(
    DWORD dwMask,
    DWORD dwStyleEx);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwMaschera*|[in] Combinazione bit per bit (OR) di flag che specificano i flag nel parametro *dwStyleEx.* Utilizzare uno o più dei seguenti valori:<br /><br /> RBS_EX_SPLITTER: per impostazione predefinita, mostra la barra di divisione in basso in modalità orizzontale e a destra in modalità verticale.<br /><br /> RBS_EX_TRANSPARENT: inoltrare il messaggio [di WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) alla finestra padre.|
|*dwStyleEx*|[in] Combinazione bit per bit (OR) di flag che specificano gli stili da applicare. Per impostare uno stile, specificare lo stesso flag utilizzato nel parametro *dwMask.* Per reimpostare uno stile, specificare zero binario.|

### <a name="return-value"></a>Valore restituito

Stile esteso precedente.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di RB_SETEXTENDEDSTYLE,](/windows/win32/Controls/rb-setextendedstyle) descritto in Windows SDK.

## <a name="crebarctrlsetimagelist"></a><a name="setimagelist"></a>CReBarCtrl::SetImageList

Assegna un elenco immagini a un controllo Rebar.

```
BOOL SetImageList(CImageList* pImageList);
```

### <a name="parameters"></a>Parametri

*pImageList (elenco immagine)*<br/>
Puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto contenente l'elenco di immagini da assegnare al controllo rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlsetowner"></a><a name="setowner"></a>CReBarCtrl::SetOwner

Implementa il comportamento del messaggio Win32 [RB_SETPARENT](/windows/win32/Controls/rb-setparent), come descritto in Windows SDK.

```
CWnd* SetOwner(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore a `CWnd` un oggetto da impostare come proprietario del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è il proprietario corrente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che questa `CWnd` funzione membro utilizza puntatori a oggetti per il proprietario corrente e selezionato del controllo rebar, anziché handle a windows.

> [!NOTE]
> Questa funzione membro non modifica l'elemento padre effettivo che è stato impostato quando è stato creato il controllo; piuttosto invia messaggi di notifica alla finestra specificata.

## <a name="crebarctrlsetpalette"></a><a name="setpalette"></a>CReBarCtrl::SetPalette (SetPalette)

Implementa il comportamento del messaggio Win32 [RB_SETPALETTE](/windows/win32/Controls/rb-setpalette), come descritto in Windows SDK.

```
CPalette* SetPalette(HPALETTE hPal);
```

### <a name="parameters"></a>Parametri

*hPal (in stato di*<br/>
HPALETTE che specifica la nuova tavolozza che verrà utilizzata dal controllo Rebar.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CPalette](../../mfc/reference/cpalette-class.md) che specifica la tavolozza precedente del controllo Rebar.

### <a name="remarks"></a>Osservazioni

Si noti che `CPalette` questa funzione membro utilizza un oggetto come valore restituito, anziché un HPALETTE.

## <a name="crebarctrlsettextcolor"></a><a name="settextcolor"></a>CReBarCtrl::SetTextColor

Implementa il comportamento del messaggio Win32 [RB_SETTEXTCOLOR](/windows/win32/Controls/rb-settextcolor), come descritto in Windows SDK.

```
COLORREF SetTextColor(COLORREF clr);
```

### <a name="parameters"></a>Parametri

*Clr*<br/>
Valore COLORREF che rappresenta il nuovo `CReBarCtrl` colore del testo nell'oggetto.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che rappresenta il colore `CReBarCtrl` del testo precedente associato all'oggetto.

### <a name="remarks"></a>Osservazioni

Viene fornito per supportare la flessibilità del colore del testo in un controllo Rebar.

## <a name="crebarctrlsettooltips"></a><a name="settooltips"></a>CReBarCtrl::SetToolTips

Associa un controllo descrizione comandi a un controllo Rebar.

```
void SetToolTips(CToolTipCtrl* pToolTip);
```

### <a name="parameters"></a>Parametri

*pToolTip (Suggerimento per strumenti)*<br/>
Un puntatore a un oggetto [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)

### <a name="remarks"></a>Osservazioni

È necessario `CToolTipCtrl` distruggere l'oggetto quando si è finito con esso.

## <a name="crebarctrlsetwindowtheme"></a><a name="setwindowtheme"></a>CReBarCtrl::SetWindowTheme

Imposta lo stile di visualizzazione del controllo Rebar.

```
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```

### <a name="parameters"></a>Parametri

*pszSubAppName (nome da piszSubApp*<br/>
Puntatore a una stringa Unicode che contiene lo stile di visualizzazione dell'armatura da impostare.

### <a name="return-value"></a>Valore restituito

Il valore restituito non viene utilizzato.

### <a name="remarks"></a>Osservazioni

Questa funzione membro emula la funzionalità del messaggio [di RB_SETWINDOWTHEME,](/windows/win32/Controls/rb-setwindowtheme) come descritto in Windows SDK.

## <a name="crebarctrlshowband"></a><a name="showband"></a>CReBarCtrl::ShowBand

Implementa il comportamento del messaggio Win32 [RB_SHOWBAND](/windows/win32/Controls/rb-showband), come descritto in Windows SDK.

```
BOOL ShowBand(
    UINT uBand,
    BOOL fShow = TRUE);
```

### <a name="parameters"></a>Parametri

*uBanda*<br/>
Indice in base zero di una banda nel controllo Rebar.

*fMostra*<br/>
Indica se la banda deve essere visualizzata o nascosta. Se questo valore è TRUE, verrà visualizzata la banda. In caso contrario, la banda verrà nascosta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="crebarctrlsizetorect"></a><a name="sizetorect"></a>CReBarCtrl::SizeToRect

Implementa il comportamento del messaggio Win32 [RB_SIZETORECT](/windows/win32/Controls/rb-sizetorect), come descritto in Windows SDK.

```
BOOL SizeToRect(CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica il rettangolo che il controllo Rebar deve essere ridimensionato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si noti che `CRect` questa funzione membro utilizza `RECT` un oggetto come parametro, anziché una struttura.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
