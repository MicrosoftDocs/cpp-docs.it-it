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
ms.openlocfilehash: 41e40b3da7b4a294fe396a9d93f7c6a93593ff95
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420533"
---
# <a name="ccontrolbar-class"></a>CControlBar Class

Classe base per le classi della barra di controllo [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md)e [COleResizeBar](../../mfc/reference/coleresizebar-class.md).

## <a name="syntax"></a>Sintassi

```
class CControlBar : public CWnd
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CControlBar:: CControlBar](#ccontrolbar)|Costruisce un oggetto `CControlBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CControlBar:: CalcDynamicLayout](#calcdynamiclayout)|Restituisce la dimensione di una barra di controllo dinamica come oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .|
|[CControlBar:: CalcFixedLayout](#calcfixedlayout)|Restituisce la dimensione della barra di controllo come oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .|
|[CControlBar:: CalcInsideRect](#calcinsiderect)|Restituisce le dimensioni correnti dell'area della barra di controllo; inclusione dei bordi.|
|[CControlBar::D oPaint](#dopaint)|Esegue il rendering dei bordi e del grip della barra di controllo.|
|[CControlBar::D rawBorders](#drawborders)|Esegue il rendering dei bordi della barra di controllo.|
|[CControlBar::D rawGripper](#drawgripper)|Esegue il rendering del grip della barra di controllo.|
|[CControlBar:: EnableDocking](#enabledocking)|Consente l'ancoraggio o la fluttuazione di una barra di controllo.|
|[CControlBar:: GetBarStyle](#getbarstyle)|Recupera le impostazioni dello stile della barra di controllo.|
|[CControlBar:: GetBorders](#getborders)|Recupera i valori del bordo della barra di controllo.|
|[CControlBar:: GetCount](#getcount)|Restituisce il numero di elementi non HWND nella barra di controllo.|
|[CControlBar:: GetDockingFrame](#getdockingframe)|Restituisce un puntatore al frame a cui è ancorata una barra di controllo.|
|[CControlBar:: defloating](#isfloating)|Restituisce un valore diverso da zero se la barra di controllo in questione è una barra di controllo a virgola mobile.|
|[CControlBar:: OnUpdateCmdUI](#onupdatecmdui)|Chiama i gestori dell'interfaccia utente del comando.|
|[CControlBar:: SetBarStyle](#setbarstyle)|Modifica le impostazioni dello stile della barra di controllo.|
|[CControlBar:: seborders](#setborders)|Imposta i valori del bordo della barra di controllo.|
|[CControlBar:: SetInPlaceOwner](#setinplaceowner)|Modifica il proprietario sul posto di una barra di controllo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CControlBar:: m_bAutoDelete](#m_bautodelete)|Se è diverso da zero, l'oggetto `CControlBar` viene eliminato quando viene eliminata definitivamente la barra di controllo di Windows.|
|[CControlBar:: m_pInPlaceOwner](#m_pinplaceowner)|Proprietario sul posto della barra di controllo.|

## <a name="remarks"></a>Osservazioni

Una barra di controllo è una finestra che in genere è allineata a sinistra o a destra di una finestra cornice. Può contenere elementi figlio che sono controlli basati su HWND, ovvero finestre che generano e rispondono a messaggi di Windows o elementi non basati su HWND, che non sono Windows e sono gestiti dal codice dell'applicazione o dal codice del Framework. Le caselle di riepilogo e i controlli di modifica sono esempi di controlli basati su HWND. i riquadri della barra di stato e i pulsanti bitmap sono esempi di controlli non basati su HWND.

Le finestre della barra di controllo sono in genere finestre figlio di una finestra cornice padre e sono in genere di pari livello rispetto alla visualizzazione client o al client MDI della finestra cornice. Un oggetto `CControlBar` usa le informazioni sul rettangolo client della finestra padre per posizionarsi. Informa quindi la finestra padre della quantità di spazio rimanente non allocato nell'area client della finestra padre.

Per ulteriori informazioni su `CControlBar`, vedere:

- [Barre di controllo](../../mfc/control-bars.md)

- [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CControlBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="calcdynamiclayout"></a>CControlBar:: CalcDynamicLayout

Il Framework chiama questa funzione membro per calcolare le dimensioni di una barra degli strumenti dinamica.

```
virtual CSize CalcDynamicLayout(
    int nLength,
    DWORD nMode);
```

### <a name="parameters"></a>Parametri

*nLength*<br/>
Dimensione richiesta della barra di controllo, orizzontale o verticale, a seconda del valore di *dwMode*.

*nMode*<br/>
I flag predefiniti seguenti vengono utilizzati per determinare l'altezza e la larghezza della barra di controllo dinamica. Utilizzare l'operatore OR bit per&#124;bit () per combinare i flag.

|Flag modalità layout|Significato|
|-----------------------|-------------------|
|LM_STRETCH|Indica se la barra di controllo deve essere allungata alle dimensioni del frame. Impostare se la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio). Non impostato quando la barra è ancorata o mobile (disponibile per l'ancoraggio). Se impostato, LM_STRETCH ignora *nLength* e restituisce le dimensioni in base allo stato di LM_HORZ. LM_STRETCH funziona in modo analogo al parametro *bStretch* usato in [CalcFixedLayout](#calcfixedlayout); Per ulteriori informazioni sulla relazione tra l'estensione e l'orientamento, vedere la funzione membro.|
|LM_HORZ|Indica che la barra è orientata orizzontalmente o verticalmente. Impostare se la barra è orientata orizzontalmente e se è orientata verticalmente, non è impostata. LM_HORZ funziona in modo analogo al parametro *bHorz* usato in [CalcFixedLayout](#calcfixedlayout); Per ulteriori informazioni sulla relazione tra l'estensione e l'orientamento, vedere la funzione membro.|
|LM_MRUWIDTH|Larghezza dinamica utilizzata più di recente. Ignora il parametro *nLength* e usa la larghezza di memoria usata più di recente.|
|LM_HORZDOCK|Dimensioni ancorate orizzontali. Ignora il parametro *nLength* e restituisce la dimensione dinamica con la larghezza maggiore.|
|LM_VERTDOCK|Dimensioni ancorate verticali. Ignora il parametro *nLength* e restituisce le dimensioni dinamiche con l'altezza massima.|
|LM_LENGTHY|Impostare se *nLength* indica l'altezza (direzione Y) anziché la larghezza.|
|LM_COMMIT|Reimposta LM_MRUWIDTH sulla larghezza corrente della barra di controllo mobile.|

### <a name="return-value"></a>Valore restituito

Dimensione della barra di controllo, in pixel, di un oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) .

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per fornire il layout dinamico in classi derivate da `CControlBar`. Le classi MFC derivate da `CControlBar`, ad esempio [CToolBar](../../mfc/reference/ctoolbar-class.md), eseguono l'override di questa funzione membro e forniscono una propria implementazione.

##  <a name="calcfixedlayout"></a>CControlBar:: CalcFixedLayout

Chiamare questa funzione membro per calcolare la dimensione orizzontale di una barra di controllo.

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*bStretch*<br/>
Indica se è necessario estendere la barra alla dimensione del frame. Il parametro *bStretch* è diverso da zero se la barra non è una barra di ancoraggio (non disponibile per l'ancoraggio) e è 0 quando è ancorata o mobile (disponibile per l'ancoraggio).

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il parametro *bHorz* è diverso da zero se la barra è orientata orizzontalmente e è 0 se è orientata verticalmente.

### <a name="return-value"></a>Valore restituito

Dimensione della barra di controllo, in pixel, di un oggetto `CSize`.

### <a name="remarks"></a>Osservazioni

Le barre di controllo, come le barre degli strumenti, possono estendersi orizzontalmente o verticalmente per adattarle ai pulsanti contenuti nella barra di controllo.

Se *bStretch* è true, estendere la dimensione lungo l'orientamento fornito da *bHorz*. In altre parole, se *bHorz* è false, la barra di controllo viene allungata verticalmente. Se *bStretch* è false, non viene eseguita alcuna estensione. Nella tabella seguente vengono illustrate le possibili permutazioni e gli stili della barra di controllo risultanti di *bStretch* e *bHorz*.

|bStretch|bHorz|L'estensione|Orientamento|Ancoraggio/non ancoraggio|
|--------------|-----------|----------------|-----------------|--------------------------|
|TRUE|TRUE|Adattamento orizzontale|Orientato orizzontalmente|Non ancorato|
|TRUE|FALSE|Adattamento verticale|Orientamento verticale|Non ancorato|
|FALSE|TRUE|Nessuna estensione disponibile|Orientato orizzontalmente|Docking|
|FALSE|FALSE|Nessuna estensione disponibile|Orientamento verticale|Docking|

##  <a name="calcinsiderect"></a>CControlBar:: CalcInsideRect

Il Framework chiama questa funzione per calcolare l'area client della barra di controllo.

```
virtual void CalcInsideRect(
    CRect& rect,
    BOOL bHorz) const;
```

### <a name="parameters"></a>Parametri

*rect*<br/>
Contiene le dimensioni correnti della barra di controllo; inclusione dei bordi.

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il parametro *bHorz* è diverso da zero se la barra è orientata orizzontalmente e è 0 se è orientata verticalmente.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata prima che la barra di controllo venga disegnata.

Eseguire l'override di questa funzione per personalizzare il rendering dei bordi e della barra di pinza della barra di controllo.

##  <a name="ccontrolbar"></a>CControlBar:: CControlBar

Costruisce un oggetto `CControlBar`.

```
CControlBar();
```

##  <a name="dopaint"></a>CControlBar::D oPaint

Chiamato dal Framework per eseguire il rendering dei bordi e della barra di aggancio della barra di controllo.

```
virtual void DoPaint(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da usare per il rendering dei bordi e della pinza della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il comportamento di disegno della barra di controllo.

Un altro metodo di personalizzazione consiste nell'eseguire l'override delle funzioni `DrawBorders` e `DrawGripper` e aggiungere il codice di disegno personalizzato per i bordi e il grip. Poiché questi metodi vengono chiamati dal metodo `DoPaint` predefinito, non è necessario eseguire l'override di `DoPaint`.

##  <a name="drawborders"></a>CControlBar::D rawBorders

Chiamato dal Framework per eseguire il rendering dei bordi della barra di controllo.

```
virtual void DrawBorders(
    CDC* pDC,
    CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da usare per il rendering dei bordi della barra di controllo.

*rect*<br/>
Oggetto `CRect` contenente le dimensioni della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto dei bordi della barra di controllo.

##  <a name="drawgripper"></a>CControlBar::D rawGripper

Chiamato dal Framework per eseguire il rendering del grip della barra di controllo.

```
virtual void DrawGripper(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da usare per il rendering dello strumento di controllo della barra di controllo.

*rect*<br/>
Oggetto `CRect` contenente le dimensioni del controllo pinza della barra di controllo.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare l'aspetto della pinza della barra di controllo.

##  <a name="enabledocking"></a>CControlBar:: EnableDocking

Chiamare questa funzione per abilitare l'ancoraggio di una barra di controllo.

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

*dwDockStyle*<br/>
Specifica se la barra di controllo supporta l'ancoraggio e i lati della finestra padre a cui è possibile ancorare la barra di controllo, se supportata. Può essere uno o più degli elementi seguenti:

- CBRS_ALIGN_TOP consente l'ancoraggio nella parte superiore dell'area client.

- CBRS_ALIGN_BOTTOM consente l'ancoraggio nella parte inferiore dell'area client.

- CBRS_ALIGN_LEFT consente l'ancoraggio sul lato sinistro dell'area client.

- CBRS_ALIGN_RIGHT consente l'ancoraggio sul lato destro dell'area client.

- CBRS_ALIGN_ANY consente l'ancoraggio su qualsiasi lato dell'area client.

- CBRS_FLOAT_MULTI consente il Floating di più barre di controllo in un'unica finestra con mini-cornice.

Se il valore è 0, ovvero non indica alcun flag, la barra di controllo non verrà ancorata.

### <a name="remarks"></a>Osservazioni

I lati specificati devono corrispondere a uno dei lati abilitati per l'ancoraggio nella finestra cornice di destinazione oppure la barra di controllo non può essere ancorata a tale finestra cornice.

##  <a name="getbarstyle"></a>CControlBar:: GetBarStyle

Chiamare questa funzione per determinare quali impostazioni di **CBRS_** (stili della barra di controllo) sono attualmente impostate per la barra di controllo.

```
DWORD GetBarStyle();
```

### <a name="return-value"></a>Valore restituito

Impostazioni **CBRS_** correnti (stili della barra di controllo) per la barra di controllo. Per l'elenco completo degli stili disponibili, vedere [CControlBar:: SetBarStyle](#setbarstyle) .

### <a name="remarks"></a>Osservazioni

Non gestisce gli stili **WS_** (stile della finestra).

##  <a name="getborders"></a>CControlBar:: GetBorders

Restituisce i valori dei bordi correnti per la barra di controllo.

```
CRect GetBorders() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` contenente la larghezza corrente (in pixel) di ogni lato dell'oggetto della barra di controllo. Ad esempio, il valore del membro a *sinistra* , dell'oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) , è la larghezza del bordo sinistro.

##  <a name="getcount"></a>CControlBar:: GetCount

Restituisce il numero di elementi non HWND nell'oggetto `CControlBar`.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi non HWND nell'oggetto `CControlBar`. Questa funzione restituisce 0 per un oggetto [CDialogBar](../../mfc/reference/cdialogbar-class.md) .

### <a name="remarks"></a>Osservazioni

Il tipo di elemento dipende dall'oggetto derivato: riquadri per oggetti [CStatusBar](../../mfc/reference/cstatusbar-class.md) e pulsanti e separatori per gli oggetti [CToolBar](../../mfc/reference/ctoolbar-class.md) .

##  <a name="getdockingframe"></a>CControlBar:: GetDockingFrame

Chiamare questa funzione membro per ottenere un puntatore alla finestra cornice corrente a cui è ancorata la barra di controllo.

```
CFrameWnd* GetDockingFrame() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a una finestra cornice in caso di esito positivo; in caso contrario, NULL.

Se la barra di controllo non è ancorata a una finestra cornice (ovvero se la barra di controllo è mobile), questa funzione restituirà un puntatore al relativo [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)padre.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle barre di controllo ancorabili, vedere [CControlBar:: EnableDocking](#enabledocking) e [CFrameWnd::D ockcontrolbar](../../mfc/reference/cframewnd-class.md#dockcontrolbar).

##  <a name="isfloating"></a>CControlBar:: defloating

Chiamare questa funzione membro per determinare se la barra di controllo è mobile o ancorata.

```
BOOL IsFloating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di controllo è mobile; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per modificare lo stato di una barra di controllo da ancorato a mobile, chiamare [CFrameWnd:: FloatControlBar](../../mfc/reference/cframewnd-class.md#floatcontrolbar).

##  <a name="m_bautodelete"></a>CControlBar:: m_bAutoDelete

Se è diverso da zero, l'oggetto `CControlBar` viene eliminato quando viene eliminata definitivamente la barra di controllo di Windows.

```
BOOL m_bAutoDelete;
```

### <a name="remarks"></a>Osservazioni

*m_bAutoDelete* è una variabile pubblica di tipo bool.

Un oggetto della barra di controllo è in genere incorporato in un oggetto finestra cornice. In questo caso, *m_bAutoDelete* è 0 perché l'oggetto della barra di controllo incorporato viene eliminato definitivamente quando viene distrutta la finestra cornice.

Impostare questa variabile su un valore diverso da zero se si alloca un oggetto `CControlBar` nell'heap e non si prevede di chiamare **Delete**.

##  <a name="m_pinplaceowner"></a>CControlBar:: m_pInPlaceOwner

Proprietario sul posto della barra di controllo.

```
CWnd* m_pInPlaceOwner;
```

##  <a name="onupdatecmdui"></a>CControlBar:: OnUpdateCmdUI

Questa funzione membro viene chiamata dal Framework per aggiornare lo stato della barra degli strumenti o della barra di stato.

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler) = 0;
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Punta alla finestra cornice principale dell'applicazione. Questo puntatore viene utilizzato per il routing dei messaggi di aggiornamento.

*bDisableIfNoHndler*<br/>
Flag che indica se un controllo senza gestore di aggiornamento deve essere visualizzato automaticamente come disabilitato.

### <a name="remarks"></a>Osservazioni

Per aggiornare un singolo pulsante o riquadro, usare la macro ON_UPDATE_COMMAND_UI nella mappa messaggi per impostare un gestore di aggiornamento in modo appropriato. Per ulteriori informazioni sull'utilizzo di questa macro, vedere [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) .

`OnUpdateCmdUI` viene chiamato dal framework quando l'applicazione è inattiva. La finestra cornice da aggiornare deve essere una finestra figlio, almeno indirettamente, di una finestra cornice visibile. `OnUpdateCmdUI` è un oggetto avanzato sottoponibile a override.

##  <a name="setbarstyle"></a>CControlBar:: SetBarStyle

Chiamare questa funzione per impostare gli stili **CBRS_** desiderati per la barra di controllo.

```
void SetBarStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stili desiderati per la barra di controllo. Può essere uno o più degli elementi seguenti:

- CBRS_ALIGN_TOP consente l'ancoraggio della barra di controllo nella parte superiore dell'area client di una finestra cornice.

- CBRS_ALIGN_BOTTOM consente l'ancoraggio della barra di controllo nella parte inferiore dell'area client di una finestra cornice.

- CBRS_ALIGN_LEFT consente l'ancoraggio della barra di controllo al lato sinistro dell'area client di una finestra cornice.

- CBRS_ALIGN_RIGHT consente l'ancoraggio della barra di controllo sul lato destro dell'area client di una finestra cornice.

- CBRS_ALIGN_ANY consente l'ancoraggio della barra di controllo a qualsiasi lato dell'area client di una finestra cornice.

- CBRS_BORDER_TOP fa in modo che un bordo venga disegnato sul bordo superiore della barra di controllo quando sarà visibile.

- CBRS_BORDER_BOTTOM fa in modo che un bordo venga disegnato sul bordo inferiore della barra di controllo quando sarà visibile.

- CBRS_BORDER_LEFT fa in modo che un bordo venga disegnato sul bordo sinistro della barra di controllo quando sarà visibile.

- CBRS_BORDER_RIGHT fa in modo che un bordo venga disegnato sul bordo destro della barra di controllo quando sarà visibile.

- CBRS_FLOAT_MULTI consente il Floating di più barre di controllo in un'unica finestra con mini-cornice.

- CBRS_TOOLTIPS consente di visualizzare le descrizioni comandi per la barra di controllo.

- CBRS_FLYBY fa sì che il testo del messaggio venga aggiornato allo stesso tempo delle descrizioni comandi.

- CBRS_GRIPPER causa il disegno di un pinzatore, simile a quello utilizzato sulle bande in un oggetto `CReBar`, per qualsiasi classe derivata da `CControlBar`.

### <a name="remarks"></a>Osservazioni

Non influisce sulle impostazioni di **WS_** (stile della finestra).

##  <a name="setborders"></a>CControlBar:: seborders

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

*cxLeft*<br/>
Larghezza (in pixel) del bordo sinistro della barra di controllo.

*cyTop*<br/>
Altezza (in pixel) del bordo superiore della barra di controllo.

*cxRight*<br/>
Larghezza (in pixel) del bordo destro della barra di controllo.

*cyBottom*<br/>
Altezza (in pixel) del bordo inferiore della barra di controllo.

*lpRect*<br/>
Puntatore a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che contiene la larghezza corrente (in pixel) di ogni bordo dell'oggetto della barra di controllo.

### <a name="example"></a>Esempio

L'esempio di codice seguente imposta i bordi superiore e inferiore della barra di controllo su 5 pixel e i bordi sinistro e destro su 2 pixel:

[!code-cpp[NVC_MFCControlLadenDialog#61](../../mfc/codesnippet/cpp/ccontrolbar-class_1.cpp)]

##  <a name="setinplaceowner"></a>CControlBar:: SetInPlaceOwner

Modifica il proprietario sul posto di una barra di controllo.

```
void SetInPlaceOwner(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore a un oggetto `CWnd`.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[CTRLBARS di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)<br/>
[Classe CDialogBar](../../mfc/reference/cdialogbar-class.md)<br/>
[Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)<br/>
[Classe CReBar](../../mfc/reference/crebar-class.md)
