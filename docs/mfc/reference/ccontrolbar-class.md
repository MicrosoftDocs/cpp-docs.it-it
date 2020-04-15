---
title: CControlBar Class
ms.date: 11/04/2016
f1_keywords:
- CControlBar
- AFXEXT/CControlBar
- AFXEXT/CControlBar::CControlBar
- AFXEXT/CControlBar::CalcDynamicLayout
- AFXEXT/CControlBar::CalcFixedLayout
- AFXEXT/CControlBar::CalcInsideRect
- AFXEXT/CControlBar::DoPaint
- AFXEXT/CControlBar::DrawBorders
- AFXEXT/CControlBar::DrawGripper
- AFXEXT/CControlBar::EnableDocking
- AFXEXT/CControlBar::GetBarStyle
- AFXEXT/CControlBar::GetBorders
- AFXEXT/CControlBar::GetCount
- AFXEXT/CControlBar::GetDockingFrame
- AFXEXT/CControlBar::IsFloating
- AFXEXT/CControlBar::OnUpdateCmdUI
- AFXEXT/CControlBar::SetBarStyle
- AFXEXT/CControlBar::SetBorders
- AFXEXT/CControlBar::SetInPlaceOwner
- AFXEXT/CControlBar::m_bAutoDelete
- AFXEXT/CControlBar::m_pInPlaceOwner
helpviewer_keywords:
- CControlBar [MFC], CControlBar
- CControlBar [MFC], CalcDynamicLayout
- CControlBar [MFC], CalcFixedLayout
- CControlBar [MFC], CalcInsideRect
- CControlBar [MFC], DoPaint
- CControlBar [MFC], DrawBorders
- CControlBar [MFC], DrawGripper
- CControlBar [MFC], EnableDocking
- CControlBar [MFC], GetBarStyle
- CControlBar [MFC], GetBorders
- CControlBar [MFC], GetCount
- CControlBar [MFC], GetDockingFrame
- CControlBar [MFC], IsFloating
- CControlBar [MFC], OnUpdateCmdUI
- CControlBar [MFC], SetBarStyle
- CControlBar [MFC], SetBorders
- CControlBar [MFC], SetInPlaceOwner
- CControlBar [MFC], m_bAutoDelete
- CControlBar [MFC], m_pInPlaceOwner
ms.assetid: 4d668c55-9b42-4838-97ac-cf2b3000b82c
ms.openlocfilehash: deb95d76e6d68ba5b9fad82bca1d88fd71c5a547
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369389"
---
# <a name="ccontrolbar-class"></a>CControlBar Class

La classe base per le classi della barra di controllo [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md)e [COleResizeBar](../../mfc/reference/coleresizebar-class.md).

## <a name="syntax"></a>Sintassi

```
class CControlBar : public CWnd
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CControlBar::CControlBar](#ccontrolbar)|Costruisce un oggetto `CControlBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo di CControlBar::CalcDynamicLayout](#calcdynamiclayout)|Restituisce le dimensioni di una barra di controllo dinamico come un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|
|[Controllo::CalcFixedLayout](#calcfixedlayout)|Restituisce la dimensione della barra di controllo come un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|
|[Controllo dati::CalcInsideRect](#calcinsiderect)|Restituisce le dimensioni correnti dell'area della barra di controllo; compresi i confini.|
|[CControlBar::DoPaint](#dopaint)|Esegue il rendering dei bordi e della pinza della barra di controllo.|
|[CControlBar::DrawBorders](#drawborders)|Esegue il rendering dei bordi della barra di controllo.|
|[CControlBar::DrawGripper](#drawgripper)|Esegue il rendering della pinza della barra di controllo.|
|[CControlBar::EnableDocking (AbilitazionEDocking)](#enabledocking)|Consente di ancorare o fluttuare una barra di controllo.|
|[Controllo CControlBar::GetBarStyle](#getbarstyle)|Recupera le impostazioni di stile della barra di controllo.|
|[CControlBar::GetBorders](#getborders)|Recupera i valori dei bordi della barra di controllo.|
|[CControlBar::GetCount](#getcount)|Restituisce il numero di elementi non HWND nella barra di controllo.|
|[CControlBar::GetDockingFrame](#getdockingframe)|Restituisce un puntatore alla cornice a cui è ancorata una barra di controllo.|
|[CControlBar::IsFloating](#isfloating)|Restituisce un valore diverso da zero se la barra di controllo in questione è una barra di controllo mobile.|
|[Controllo::OnUpdateCmdUI](#onupdatecmdui)|Chiama i gestori dell'interfaccia utente del comando.|
|[Controllo::SetBarStyle](#setbarstyle)|Modifica le impostazioni di stile della barra di controllo.|
|[CControlBar::SetBorders](#setborders)|Imposta i valori del bordo della barra di controllo.|
|[CControlBar::SetInPlaceOwner](#setinplaceowner)|Modifica il proprietario sul posto di una barra di controllo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Controllo CControlBar::m_bAutoDelete](#m_bautodelete)|Se diverso da `CControlBar` zero, l'oggetto viene eliminato quando la barra di controllo di Windows viene eliminata.|
|[ControlloCControlBar::m_pInPlaceOwner](#m_pinplaceowner)|Proprietario sul posto della barra di controllo.|

## <a name="remarks"></a>Osservazioni

Una barra di controllo è una finestra che in genere è allineata a sinistra o a destra di una finestra cornice. Può contenere elementi figlio che sono controlli basati su HWND, ovvero finestre che generano e rispondono a messaggi di Windows, o elementi non basati su HWND, che non sono finestre e sono gestiti dal codice dell'applicazione o dal codice del framework. Le caselle di riepilogo e i controlli di modifica sono esempi di controlli basati su HWND; I riquadri della barra di stato e i pulsanti bitmap sono esempi di controlli non basati su HWND.

Finestre della barra di controllo sono in genere finestre figlio di una finestra cornice padre e sono in genere elementi di pari livello per la visualizzazione client o client MDI della finestra cornice. Un `CControlBar` oggetto utilizza le informazioni sul rettangolo client della finestra padre per posizionarsi. Viene quindi informa la finestra padre della quantità di spazio non allocata nell'area client della finestra padre.

Per ulteriori `CControlBar`informazioni su , vedere:

- [Barre di controllo](../../mfc/control-bars.md)

- [Nota tecnica 31: Barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CControlBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="ccontrolbarcalcdynamiclayout"></a><a name="calcdynamiclayout"></a>Controllo di CControlBar::CalcDynamicLayout

Il framework chiama questa funzione membro per calcolare le dimensioni di una barra degli strumenti dinamica.

```
virtual CSize CalcDynamicLayout(
    int nLength,
    DWORD nMode);
```

### <a name="parameters"></a>Parametri

*nLunghezza*<br/>
Dimensione richiesta della barra di controllo, orizzontale o verticale, a seconda *di dwMode*.

*nModalità*<br/>
I seguenti flag predefiniti vengono utilizzati per determinare l'altezza e la larghezza della barra di controllo dinamico. Utilizzare l'operatore OR bit per bit (&#124;) per combinare i flag.

|Flag della modalità di layout|Significato|
|-----------------------|-------------------|
|LM_STRETCH|Indica se la barra di controllo deve essere allungata fino alle dimensioni del frame. Impostare se la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio). Non impostato quando la barra è ancorata o mobile (disponibile per l'ancoraggio). Se impostato, LM_STRETCH ignora *nLength* e restituisce le dimensioni in base allo stato LM_HORZ. LM_STRETCH funziona in modo simile al parametro *bStretch* utilizzato in [CalcFixedLayout](#calcfixedlayout); vedere tale funzione membro per ulteriori informazioni sulla relazione tra estensione e orientamento.|
|LM_HORZ|Indica che la barra è orientata orizzontalmente o verticalmente. Impostare se la barra è orientata orizzontalmente e se è orientata verticalmente, non è impostata. LM_HORZ funziona in modo simile al parametro *bHorz* utilizzato in [CalcFixedLayout](#calcfixedlayout); vedere tale funzione membro per ulteriori informazioni sulla relazione tra estensione e orientamento.|
|LM_MRUWIDTH|Larghezza dinamica utilizzata più di recente. Ignora il parametro *nLength* e utilizza la larghezza utilizzata più di recente.|
|LM_HORZDOCK|Quote ancorate orizzontali. Ignora il parametro *nLength* e restituisce la dimensione dinamica con la larghezza maggiore.|
|LM_VERTDOCK|Quote ancorate verticali. Ignora il parametro *nLength* e restituisce la dimensione dinamica con l'altezza più grande.|
|LM_LENGTHY|Impostare se *nLength* indica l'altezza (direzione Y) anziché la larghezza.|
|LM_COMMIT|Reimposta LM_MRUWIDTH larghezza corrente della barra di controllo mobile.|

### <a name="return-value"></a>Valore restituito

Dimensioni della barra di controllo, in pixel, di un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per `CControlBar`fornire il proprio layout dinamico nelle classi derivate da . Le classi `CControlBar`MFC derivate da , ad esempio [CToolbar](../../mfc/reference/ctoolbar-class.md), eseguono l'override di questa funzione membro e forniscono la propria implementazione.

## <a name="ccontrolbarcalcfixedlayout"></a><a name="calcfixedlayout"></a>Controllo::CalcFixedLayout

Chiamare questa funzione membro per calcolare la dimensione orizzontale di una barra di controllo.

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*bAllunga*<br/>
Indica se la barra deve essere allungata in base alle dimensioni del frame. Il *bStretch* parametro è diverso da zero quando la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio) ed è 0 quando è ancorato o mobile (disponibile per l'ancoraggio).

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il *bHorz* parametro è diverso da zero se la barra è orientata orizzontalmente ed è 0 se è orientato verticalmente.

### <a name="return-value"></a>Valore restituito

Dimensione della barra di controllo, `CSize` in pixel, di un oggetto.

### <a name="remarks"></a>Osservazioni

Le barre di controllo, ad esempio le barre degli strumenti, possono estendersi orizzontalmente o verticalmente per contenere i pulsanti contenuti nella barra di controllo.

Se *bStretch* è TRUE, estendete la quota lungo l'orientamento fornito da *bHorz*. In altre parole, se *bHorz* è FALSE, la barra di controllo viene allungata verticalmente. Se *bStretch* è FALSE, non si verifica alcun tratto. Nella tabella seguente vengono illustrate le possibili permutazioni e gli stili della barra di controllo risultanti di *bStretch* e *bHorz*.

|bAllunga|bHorz|Stretching|Orientamento|Ancoraggio/Non ancoraggio|
|--------------|-----------|----------------|-----------------|--------------------------|
|TRUE|TRUE|Allungamento orizzontale|Orizzontale|Non aggancio|
|TRUE|FALSE|Allungamento verticale|Orientato verticalmente|Non aggancio|
|FALSE|TRUE|Nessun allungamento disponibile|Orizzontale|Ancoraggio|
|FALSE|FALSE|Nessun allungamento disponibile|Orientato verticalmente|Ancoraggio|

## <a name="ccontrolbarcalcinsiderect"></a><a name="calcinsiderect"></a>Controllo dati::CalcInsideRect

Il framework chiama questa funzione per calcolare l'area client della barra di controllo.

```
virtual void CalcInsideRect(
    CRect& rect,
    BOOL bHorz) const;
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Contiene le dimensioni correnti della barra di controllo; compresi i confini.

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il *bHorz* parametro è diverso da zero se la barra è orientata orizzontalmente ed è 0 se è orientato verticalmente.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata prima che venga disegnata la barra di controllo.

Eseguire l'override di questa funzione per personalizzare il rendering dei bordi e della barra gripper della barra di controllo.

## <a name="ccontrolbarccontrolbar"></a><a name="ccontrolbar"></a>CControlBar::CControlBar

Costruisce un oggetto `CControlBar`.

```
CControlBar();
```

## <a name="ccontrolbardopaint"></a><a name="dopaint"></a>CControlBar::DoPaint

Chiamato dal framework per eseguire il rendering dei bordi e della barra gripper della barra di controllo.

```
virtual void DoPaint(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering dei bordi e della pinza della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il comportamento di disegno della barra di controllo.

Un altro metodo di `DrawBorders` `DrawGripper` personalizzazione consiste nell'eseguire l'override delle funzioni e e aggiungere codice di disegno personalizzato per i bordi e la pinza. Poiché questi metodi vengono `DoPaint` chiamati dal `DoPaint` metodo predefinito, non è necessario un override di.

## <a name="ccontrolbardrawborders"></a><a name="drawborders"></a>CControlBar::DrawBorders

Chiamato dal framework per eseguire il rendering dei bordi della barra di controllo.

```
virtual void DrawBorders(
    CDC* pDC,
    CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering dei bordi della barra di controllo.

*Rect*<br/>
Oggetto `CRect` contenente le dimensioni della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto dei bordi della barra di controllo.

## <a name="ccontrolbardrawgripper"></a><a name="drawgripper"></a>CControlBar::DrawGripper

Chiamato dal framework per eseguire il rendering della pinza della barra di controllo.

```
virtual void DrawGripper(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering del gripper della barra di controllo.

*Rect*<br/>
Oggetto `CRect` contenente le dimensioni della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto della barra di controllo gripper.

## <a name="ccontrolbarenabledocking"></a><a name="enabledocking"></a>CControlBar::EnableDocking (AbilitazionEDocking)

Chiamare questa funzione per abilitare una barra di controllo per essere ancorata.

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

*DwDockStyle (stile dwDock)*<br/>
Specifica se la barra di controllo supporta l'ancoraggio e i lati della finestra padre a cui è possibile ancorare la barra di controllo, se supportata. Può essere uno o più dei seguenti:

- CBRS_ALIGN_TOP Consente l'ancoraggio nella parte superiore dell'area client.

- CBRS_ALIGN_BOTTOM Consente l'ancoraggio nella parte inferiore dell'area client.

- CBRS_ALIGN_LEFT Consente l'ancoraggio sul lato sinistro dell'area client.

- CBRS_ALIGN_RIGHT Consente l'ancoraggio sul lato destro dell'area client.

- CBRS_ALIGN_ANY Consente l'ancoraggio su qualsiasi lato dell'area client.

- CBRS_FLOAT_MULTI Consente di rendere mobili più barre di controllo in un'unica finestra cornice mini.

Se 0 (ovvero, che indica l'assenza di flag), la barra di controllo non verrà ancorata.

### <a name="remarks"></a>Osservazioni

I lati specificati devono corrispondere a uno dei lati abilitati per l'ancoraggio nella finestra cornice di destinazione, altrimenti la barra di controllo non può essere ancorata a tale finestra.

## <a name="ccontrolbargetbarstyle"></a><a name="getbarstyle"></a>Controllo CControlBar::GetBarStyle

Chiamare questa funzione per determinare quali **CBRS_** (stili della barra di controllo) sono attualmente impostate per la barra di controllo.

```
DWORD GetBarStyle();
```

### <a name="return-value"></a>Valore restituito

Le **impostazioni correnti CBRS_** (stili della barra di controllo) per la barra di controllo. Vedere [CControlBar::SetBarStyle](#setbarstyle) per l'elenco completo degli stili disponibili.

### <a name="remarks"></a>Osservazioni

Non gestisce **WS_** stili (stile finestra).

## <a name="ccontrolbargetborders"></a><a name="getborders"></a>CControlBar::GetBorders

Restituisce i valori del bordo correnti per la barra di controllo.

```
CRect GetBorders() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che contiene la larghezza corrente (in pixel) di ogni lato dell'oggetto barra di controllo. Ad esempio, il valore del membro *sinistro,* di [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto, è la larghezza del bordo sinistro.

## <a name="ccontrolbargetcount"></a><a name="getcount"></a>CControlBar::GetCount

Restituisce il numero di elementi non `CControlBar` HWND nell'oggetto.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi non HWND `CControlBar` nell'oggetto. Questa funzione restituisce 0 per un [CDialogBar](../../mfc/reference/cdialogbar-class.md) oggetto.

### <a name="remarks"></a>Osservazioni

Il tipo dell'elemento dipende dall'oggetto derivato: riquadri per [CStatusBar](../../mfc/reference/cstatusbar-class.md) oggetti e pulsanti e separatori per [CToolBar](../../mfc/reference/ctoolbar-class.md) oggetti.

## <a name="ccontrolbargetdockingframe"></a><a name="getdockingframe"></a>CControlBar::GetDockingFrame

Chiamare questa funzione membro per ottenere un puntatore alla finestra cornice corrente a cui è ancorata la barra di controllo.

```
CFrameWnd* GetDockingFrame() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una finestra cornice se ha esito positivo; in caso contrario NULL.

Se la barra di controllo non è ancorata a una finestra cornice, ovvero se la barra di controllo è mobile, questa funzione restituirà un puntatore all'elemento padre [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle barre di controllo ancorabili, vedere [CControlBar::EnableDocking](#enabledocking) e [CFrameWnd::DockControlBar](../../mfc/reference/cframewnd-class.md#dockcontrolbar).

## <a name="ccontrolbarisfloating"></a><a name="isfloating"></a>CControlBar::IsFloating

Chiamare questa funzione membro per determinare se la barra di controllo è mobile o ancorata.

```
BOOL IsFloating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di controllo è mobile; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per modificare lo stato di una barra di controllo da ancorata a mobile, chiamare [CFrameWnd::FloatControlBar](../../mfc/reference/cframewnd-class.md#floatcontrolbar).

## <a name="ccontrolbarm_bautodelete"></a><a name="m_bautodelete"></a>Controllo CControlBar::m_bAutoDelete

Se diverso da `CControlBar` zero, l'oggetto viene eliminato quando la barra di controllo di Windows viene eliminata.

```
BOOL m_bAutoDelete;
```

### <a name="remarks"></a>Osservazioni

*m_bAutoDelete* è una variabile pubblica di tipo BOOL.

Un oggetto barra di controllo è in genere incorporato in un oggetto finestra cornice. In questo caso, *m_bAutoDelete* è 0 perché l'oggetto barra di controllo incorporato viene eliminato quando la finestra cornice viene eliminata.

Impostare questa variabile su un valore `CControlBar` diverso da zero se si alloca un oggetto nell'heap e non si prevede di chiamare **delete**.

## <a name="ccontrolbarm_pinplaceowner"></a><a name="m_pinplaceowner"></a>ControlloCControlBar::m_pInPlaceOwner

Proprietario sul posto della barra di controllo.

```
CWnd* m_pInPlaceOwner;
```

## <a name="ccontrolbaronupdatecmdui"></a><a name="onupdatecmdui"></a>Controllo::OnUpdateCmdUI

Questa funzione membro viene chiamata dal framework per aggiornare lo stato della barra degli strumenti o della barra di stato.

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler) = 0;
```

### <a name="parameters"></a>Parametri

*pTarget (Destinazione)*<br/>
Punta alla finestra cornice principale dell'applicazione. Questo puntatore viene utilizzato per il routing dei messaggi di aggiornamento.

*bDisableIfNoHndler*<br/>
Flag che indica se un controllo che non dispone di un gestore di aggiornamento deve essere visualizzato automaticamente come disabilitato.

### <a name="remarks"></a>Osservazioni

Per aggiornare un singolo pulsante o riquadro, utilizzare la macro ON_UPDATE_COMMAND_UI nella mappa messaggi per impostare un gestore di aggiornamento in modo appropriato. Per ulteriori informazioni sull'utilizzo di questa macro, vedere [ON_UPDATE_COMMAND_UI.](message-map-macros-mfc.md#on_update_command_ui)

`OnUpdateCmdUI`viene chiamato dal framework quando l'applicazione è inattiva. La finestra cornice da aggiornare deve essere una finestra figlio, almeno indirettamente, di una finestra cornice visibile. `OnUpdateCmdUI`è un oggetto sottoponibile a override avanzato.

## <a name="ccontrolbarsetbarstyle"></a><a name="setbarstyle"></a>Controllo::SetBarStyle

Chiamare questa funzione per impostare gli stili **di CBRS_** desiderati per la barra di controllo.

```
void SetBarStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Stili desiderati per la barra di controllo. Può essere uno o più dei seguenti:

- CBRS_ALIGN_TOP Consente di ancorare la barra di controllo alla parte superiore dell'area client di una finestra cornice.

- CBRS_ALIGN_BOTTOM consente di ancorare la barra di controllo alla parte inferiore dell'area client di una finestra cornice.

- CBRS_ALIGN_LEFT Consente di ancorare la barra di controllo al lato sinistro dell'area client di una finestra cornice.

- CBRS_ALIGN_RIGHT consente di ancorare la barra di controllo al lato destro dell'area client di una finestra cornice.

- CBRS_ALIGN_ANY Consente di ancorare la barra di controllo a qualsiasi lato dell'area client di una finestra cornice.

- CBRS_BORDER_TOP Fa sì che un bordo venga disegnato sul bordo superiore della barra di controllo quando sarebbe visibile.

- CBRS_BORDER_BOTTOM Fa sì che un bordo venga disegnato sul bordo inferiore della barra di controllo quando sarebbe visibile.

- CBRS_BORDER_LEFT Fa sì che un bordo venga disegnato sul bordo sinistro della barra di controllo quando sarebbe visibile.

- CBRS_BORDER_RIGHT Fa sì che un bordo venga disegnato sul bordo destro della barra di controllo quando sarebbe visibile.

- CBRS_FLOAT_MULTI Consente di rendere mobili più barre di controllo in un'unica finestra cornice mini.

- CBRS_TOOLTIPS Consente di visualizzare le descrizioni comandi per la barra di controllo.

- CBRS_FLYBY Fa sì che il testo del messaggio venga aggiornato contemporaneamente alle descrizioni comandi.

- CBRS_GRIPPER Fa sì che una pinza, simile `CReBar` a quella utilizzata `CControlBar`sulle bande in un oggetto, venga disegnata per qualsiasi classe derivata da .

### <a name="remarks"></a>Osservazioni

Non influisce sulle impostazioni **WS_** (stile finestra).

## <a name="ccontrolbarsetborders"></a><a name="setborders"></a>CControlBar::SetBorders

Chiamare questa funzione per impostare le dimensioni dei bordi della barra di controllo.

```
void SetBorders(
    int cxLeft = 0,
    int cyTop = 0,
    int cxRight = 0,
    int cyBottom = 0);

void SetBorders(LPCRECT lpRect);
```

### <a name="parameters"></a>Parametri

*cxLeft (cxLeft)*<br/>
Larghezza (in pixel) del bordo sinistro della barra di controllo.

*cyTop*<br/>
Altezza (in pixel) del bordo superiore della barra di controllo.

*CxRight (diritto di cx)*<br/>
Larghezza (in pixel) del bordo destro della barra di controllo.

*cyBottom*<br/>
Altezza (in pixel) del bordo inferiore della barra di controllo.

*Lprect*<br/>
Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la larghezza corrente (in pixel) di ogni bordo dell'oggetto barra di controllo.

### <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito i bordi superiore e inferiore della barra di controllo vengono impostati su 5 pixel e su 2 pixel i bordi sinistro e destro:

[!code-cpp[NVC_MFCControlLadenDialog#61](../../mfc/codesnippet/cpp/ccontrolbar-class_1.cpp)]

## <a name="ccontrolbarsetinplaceowner"></a><a name="setinplaceowner"></a>CControlBar::SetInPlaceOwner

Modifica il proprietario sul posto di una barra di controllo.

```
void SetInPlaceOwner(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore a un oggetto `CWnd`.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)<br/>
[Classe CDialogBar](../../mfc/reference/cdialogbar-class.md)<br/>
[Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)<br/>
[Classe CReBar](../../mfc/reference/crebar-class.md)
