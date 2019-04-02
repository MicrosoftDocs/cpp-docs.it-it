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
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58773242"
---
# <a name="ccontrolbar-class"></a>CControlBar Class

La classe base per le classi della barra di controllo [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md), e [ COleResizeBar](../../mfc/reference/coleresizebar-class.md).

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
|[CControlBar::CalcDynamicLayout](#calcdynamiclayout)|Restituisce le dimensioni di una barra di controllo dinamico come una [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|
|[CControlBar::CalcFixedLayout](#calcfixedlayout)|Restituisce le dimensioni della barra di controllo come un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.|
|[CControlBar::CalcInsideRect](#calcinsiderect)|Restituisce le dimensioni correnti dell'area della barra di controllo; tra cui i bordi.|
|[CControlBar::DoPaint](#dopaint)|Esegue il rendering dei bordi e verticale di ridimensionamento della barra di controllo.|
|[CControlBar::DrawBorders](#drawborders)|Esegue il rendering dei bordi della barra di controllo.|
|[CControlBar::DrawGripper](#drawgripper)|Esegue il rendering di verticale di ridimensionamento della barra di controllo.|
|[CControlBar::EnableDocking](#enabledocking)|Consente a una barra di controllo sia ancorato o mobile.|
|[CControlBar::GetBarStyle](#getbarstyle)|Recupera le impostazioni di stile barre di controllo.|
|[CControlBar::GetBorders](#getborders)|Recupera i valori del bordo della barra di controllo.|
|[CControlBar::GetCount](#getcount)|Restituisce il numero di elementi non HWND nella barra di controllo.|
|[CControlBar::GetDockingFrame](#getdockingframe)|Restituisce un puntatore al frame a cui è ancorata una barra di controllo.|
|[CControlBar::IsFloating](#isfloating)|Restituisce un valore diverso da zero se la barra di controllo in questione è una barra di controllo a virgola mobile.|
|[CControlBar::OnUpdateCmdUI](#onupdatecmdui)|Chiama i gestori di comandi dell'interfaccia utente.|
|[CControlBar::SetBarStyle](#setbarstyle)|Modifica le impostazioni di stile barre di controllo.|
|[CControlBar::SetBorders](#setborders)|Imposta i valori del bordo della barra di controllo.|
|[CControlBar::SetInPlaceOwner](#setinplaceowner)|Modifica il proprietario sul posto di una barra di controllo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CControlBar::m_bAutoDelete](#m_bautodelete)|Se diverso da zero, il `CControlBar` oggetto viene eliminato quando viene eliminata definitivamente la barra di controllo di Windows.|
|[CControlBar::m_pInPlaceOwner](#m_pinplaceowner)|Il proprietario di posto della barra di controllo.|

## <a name="remarks"></a>Note

Una barra di controllo è una finestra che in genere è allineata a sinistra o destra di una finestra cornice. Può contenere elementi figlio che sono controlli basati su HWND, che sono finestre che generano e rispondono ai messaggi di Windows o gli elementi non basati su HWND che non sono windows e gestiti dal codice dell'applicazione o framework. Le caselle di riepilogo e i controlli di modifica sono esempi di controlli basati su HWND. riquadri della barra di stato e i pulsanti con bitmap sono esempi di controlli non basate su HWND.

Windows della barra di controllo sono in genere finestre figlio di una finestra cornice padre e in genere sono di pari livello alla visualizzazione client o client MDI della finestra cornice. Oggetto `CControlBar` oggetto utilizza le informazioni sul rettangolo client della finestra padre per posizionarsi. Indica, quindi la finestra padre per quanto riguarda la quantità di spazio rimane non allocato nell'area client della finestra padre.

Per altre informazioni su `CControlBar`, vedere:

- [Barre di controllo](../../mfc/control-bars.md)

- [Nota tecnica 31: Le barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CControlBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="calcdynamiclayout"></a>  CControlBar::CalcDynamicLayout

Il framework chiama questa funzione membro per calcolare le dimensioni di una barra degli strumenti dinamica.

```
virtual CSize CalcDynamicLayout(
    int nLength,
    DWORD nMode);
```

### <a name="parameters"></a>Parametri

*nLength*<br/>
La dimensione richiesta della barra di controllo, orizzontale o verticale, a seconda *dwMode*.

*nMode*<br/>
Flag predefiniti riportati di seguito vengono utilizzati per determinare l'altezza e larghezza della barra di controllo dinamico. Usare OR bit per bit (&#124;) per combinare i flag di operatore.

|Flag della modalità di layout|Che cosa significa|
|-----------------------|-------------------|
|LM_STRETCH|Indica se la barra di controllo deve essere estesa per le dimensioni del fotogramma. Impostato se la barra non è una barra ancorabile (non disponibile per l'ancoraggio). Non impostato quando la barra di stato ancorato o mobile (disponibile per l'ancoraggio). Se è impostata, ignora LM_STRETCH *nLength* e restituisce le dimensioni in base allo stato LM_HORZ. LM_STRETCH funziona in modo simile al *bStretch* parametro usato nel [CalcFixedLayout](#calcfixedlayout); vedere la funzione membro per altre informazioni sulla relazione tra l'estensione e l'orientamento.|
|LM_HORZ|Indica che la barra è orientata orizzontalmente o verticalmente. Impostato se la barra è orientata orizzontalmente, e se è orientato verticalmente, non è impostata. LM_HORZ funziona in modo simile al *bHorz* parametro usato nel [CalcFixedLayout](#calcfixedlayout); vedere la funzione membro per altre informazioni sulla relazione tra l'estensione e l'orientamento.|
|LM_MRUWIDTH|Usati di recente larghezza dinamica. Ignora *nLength* parametro e utilizza il memorizzati usati di recente larghezza.|
|LM_HORZDOCK|Orizzontale ancorato dimensioni. Ignora *nLength* parametro e restituisce la dimensione dinamica con la larghezza maggiore.|
|LM_VERTDOCK|Verticale è ancorato dimensioni. Ignora *nLength* parametro e restituisce la dimensione dinamica con l'altezza massima.|
|LM_LENGTHY|Impostare se *nLength* indica l'altezza (direzione Y) invece di larghezza.|
|LM_COMMIT|Reimposta LM_MRUWIDTH larghezza corrente della barra di controllo a virgola mobile.|

### <a name="return-value"></a>Valore restituito

La barra di controllo dimensioni, in pixel, di un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per fornire il proprio layout dinamico in classi derivate da `CControlBar`. Le classi MFC derivate da `CControlBar`, ad esempio [CToolbar](../../mfc/reference/ctoolbar-class.md), eseguire l'override di questa funzione membro e fornire la propria implementazione.

##  <a name="calcfixedlayout"></a>  CControlBar::CalcFixedLayout

Chiamare questa funzione membro per calcolare la dimensione orizzontale di una barra di controllo.

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*bStretch*<br/>
Indica se la barra deve essere estesa per le dimensioni del fotogramma. Il *bStretch* parametro è diverso da zero quando la barra non è una barra ancorabile (non disponibile per l'ancoraggio) e 0 quando è ancorato o mobile (disponibile per l'ancoraggio).

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il *bHorz* parametro è diverso da zero se la barra è orientata in senso orizzontale ed è 0 se è orientato verticalmente.

### <a name="return-value"></a>Valore restituito

La barra di controllo dimensioni, in pixel, di un `CSize` oggetto.

### <a name="remarks"></a>Note

Le barre di controllo, ad esempio le barre degli strumenti possono durare orizzontalmente o verticalmente per contenere i pulsanti contenuti nella barra di controllo.

Se *bStretch* è TRUE, estendere la dimensione lungo l'orientamento fornita da *bHorz*. In altre parole, se *bHorz* è FALSE, la barra di controllo viene esteso in senso verticale. Se *bStretch* è FALSE, si verifica alcuna estensione. La tabella seguente illustra le permutazioni possibili e stili della barra di controllo risultante, della *bStretch* e *bHorz*.

|bStretch|bHorz|L'estensione|Orientamento|Ancoraggio di ancoraggio/Not|
|--------------|-----------|----------------|-----------------|--------------------------|
|true|true|L'adattamento orizzontale|In senso orizzontale orientata ai servizi|Non ancoraggio|
|true|false|L'adattamento verticale|In senso verticale orientata ai servizi|Non ancoraggio|
|false|true|Nessun allungamento disponibili|In senso orizzontale orientata ai servizi|Ancoraggio|
|false|false|Nessun allungamento disponibili|In senso verticale orientata ai servizi|Ancoraggio|

##  <a name="calcinsiderect"></a>  CControlBar::CalcInsideRect

Il framework chiama questa funzione per calcolare l'area client della barra di controllo.

```
virtual void CalcInsideRect(
    CRect& rect,
    BOOL bHorz) const;
```

### <a name="parameters"></a>Parametri

*rect*<br/>
Contiene le dimensioni correnti della barra di controllo. tra cui i bordi.

*bHorz*<br/>
Indica che la barra è orientata orizzontalmente o verticalmente. Il *bHorz* parametro è diverso da zero se la barra è orientata in senso orizzontale ed è 0 se è orientato verticalmente.

### <a name="remarks"></a>Note

Questa funzione viene chiamata prima che la barra di controllo viene disegnata.

Eseguire l'override di questa funzione per personalizzare il rendering dei bordi e barra verticale di ridimensionamento della barra di controllo.

##  <a name="ccontrolbar"></a>  CControlBar::CControlBar

Costruisce un oggetto `CControlBar`.

```
CControlBar();
```

##  <a name="dopaint"></a>  CControlBar::DoPaint

Chiamato dal framework per eseguire il rendering i bordi e barra verticale di ridimensionamento della barra di controllo.

```
virtual void DoPaint(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering dei bordi e verticale di ridimensionamento della barra di controllo.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per personalizzare il comportamento di disegno della barra di controllo.

Un altro metodo di personalizzazione è eseguire l'override di `DrawBorders` e `DrawGripper` le funzioni e aggiungere il codice di disegno personalizzato per i bordi e gripper. Poiché questi metodi vengono chiamati per l'impostazione predefinita `DoPaint` metodo, un override di `DoPaint` non è necessaria.

##  <a name="drawborders"></a>  CControlBar::DrawBorders

Chiamato dal framework per eseguire il rendering i bordi della barra di controllo.

```
virtual void DrawBorders(
    CDC* pDC,
    CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering dei bordi della barra di controllo.

*rect*<br/>
Oggetto `CRect` oggetto contenente le dimensioni della barra di controllo.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per personalizzare l'aspetto dei bordi della barra di controllo.

##  <a name="drawgripper"></a>  CControlBar::DrawGripper

Chiamato dal framework per eseguire il rendering di verticale di ridimensionamento della barra di controllo.

```
virtual void DrawGripper(
    CDC* pDC,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da usare per la barra gripper a barre di controllo di rendering.

*rect*<br/>
Oggetto `CRect` oggetto contenente le dimensioni del gripper barra di controllo.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per personalizzare l'aspetto del gripper barra di controllo.

##  <a name="enabledocking"></a>  CControlBar::EnableDocking

Chiamare questa funzione per abilitare una barra di controllo ancorato.

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

*dwDockStyle*<br/>
Specifica se la barra di controllo supporta l'ancoraggio e i lati della relativa finestra padre a cui la barra di controllo può essere ancorata, se supportata. Può essere uno o più dei seguenti:

- CBRS_ALIGN_TOP consente ancoraggio nella parte superiore dell'area client.

- CBRS_ALIGN_BOTTOM consente ancoraggio nella parte inferiore dell'area client.

- CBRS_ALIGN_LEFT consente ancoraggio sul lato sinistro dell'area client.

- CBRS_ALIGN_RIGHT consente ancoraggio sul lato destro dell'area client.

- CBRS_ALIGN_ANY consente a qualsiasi lato dell'area client di ancoraggio.

- CBRS_FLOAT_MULTI consente più barre di controllo essere spostate in una finestra con mini-cornice singola.

Se è 0 (ovvero, che indica nessun flag), la barra di controllo non verrà ancorata.

### <a name="remarks"></a>Note

I lati specificati devono corrispondere a uno dei lati abilitati per l'ancoraggio della finestra cornice di destinazione o la barra di controllo non può essere ancorata alla finestra cornice.

##  <a name="getbarstyle"></a>  CControlBar::

Chiamare questa funzione per determinare quale **CBRS _** (stili barra di controllo) siano attualmente impostati per la barra di controllo.

```
DWORD GetBarStyle();
```

### <a name="return-value"></a>Valore restituito

L'oggetto corrente **CBRS _** impostazioni (stili barra di controllo) per la barra di controllo. Visualizzare [CControlBar::SetBarStyle](#setbarstyle) per un elenco completo degli stili disponibili.

### <a name="remarks"></a>Note

Non gestisce **WS _** stili (stile della finestra).

##  <a name="getborders"></a>  CControlBar::GetBorders

Restituisce i valori correnti del bordo per la barra di controllo.

```
CRect GetBorders() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` oggetto che contiene la larghezza corrente, in pixel, di ogni lato dell'oggetto controllo barra. Ad esempio, il valore della *a sinistra* membro, di [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto, la larghezza del bordo sinistro.

##  <a name="getcount"></a>  CControlBar::GetCount

Restituisce il numero di elementi non HWND sul `CControlBar` oggetto.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi non HWND nel `CControlBar` oggetto. Questa funzione restituisce 0 per un [CDialogBar](../../mfc/reference/cdialogbar-class.md) oggetto.

### <a name="remarks"></a>Note

Il tipo di elemento dipende l'oggetto derivato: per i riquadri [CStatusBar](../../mfc/reference/cstatusbar-class.md) oggetti e i pulsanti e i separatori per [CToolBar](../../mfc/reference/ctoolbar-class.md) oggetti.

##  <a name="getdockingframe"></a>  CControlBar::GetDockingFrame

Chiamare questa funzione membro per ottenere un puntatore alla finestra cornice corrente a cui la barra di controllo è ancorata.

```
CFrameWnd* GetDockingFrame() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una finestra cornice se ha esito positivo. in caso contrario NULL.

Se la barra di controllo non è ancorata ad una finestra cornice (vale a dire, se la barra di controllo è mobile), questa funzione restituisce un puntatore all'elemento padre [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md).

### <a name="remarks"></a>Note

Per altre informazioni sulle barre di controllo ancorabile, vedere [CControlBar:: EnableDocking](#enabledocking) e [CFrameWnd:: DockControlBar](../../mfc/reference/cframewnd-class.md#dockcontrolbar).

##  <a name="isfloating"></a>  CControlBar::IsFloating

Chiamare questa funzione membro per determinare se la barra di controllo è mobile o ancorato.

```
BOOL IsFloating() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di controllo è mobile. in caso contrario 0.

### <a name="remarks"></a>Note

Per modificare lo stato di una barra di controllo da ancorato a virgola mobile, chiamare [CFrameWnd:: FloatControlBar](../../mfc/reference/cframewnd-class.md#floatcontrolbar).

##  <a name="m_bautodelete"></a>  CControlBar::m_bAutoDelete

Se diverso da zero, il `CControlBar` oggetto viene eliminato quando viene eliminata definitivamente la barra di controllo di Windows.

```
BOOL m_bAutoDelete;
```

### <a name="remarks"></a>Note

*m_bAutoDelete* è una variabile pubblica di tipo BOOL.

Un oggetto della barra di controllo è in genere incorporato in un oggetto finestra cornice. In questo caso *m_bAutoDelete* è 0 perché l'oggetto della barra di controllo incorporato viene eliminato quando viene eliminata definitivamente la finestra cornice.

Impostare questa variabile su un valore diverso da zero se si assegna un `CControlBar` oggetto heap e non si prevede di chiamare **eliminare**.

##  <a name="m_pinplaceowner"></a>  CControlBar::m_pInPlaceOwner

Il proprietario di posto della barra di controllo.

```
CWnd* m_pInPlaceOwner;
```

##  <a name="onupdatecmdui"></a>  CControlBar::OnUpdateCmdUI

Questa funzione membro viene chiamata dal framework per aggiornare lo stato della barra di stato o sulla barra degli strumenti.

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler) = 0;
```

### <a name="parameters"></a>Parametri

*pTarget*<br/>
Punta alla finestra cornice principale dell'applicazione. Puntatore ' this ' viene usato per instradare i messaggi di aggiornamento.

*bDisableIfNoHndler*<br/>
Flag che indica se un controllo che nessun gestore di aggiornamento deve essere visualizzato automaticamente come disabilitato.

### <a name="remarks"></a>Note

Per aggiornare un riquadro o un singolo pulsante, usare la macro ON_UPDATE_COMMAND_UI nella mappa messaggi per impostare un gestore di aggiornamento in modo appropriato. Visualizzare [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) per altre informazioni sull'uso di questa macro.

`OnUpdateCmdUI` viene chiamato dal framework quando l'applicazione è inattiva. La finestra cornice da aggiornare deve essere almeno indirettamente, una finestra figlio, di una finestra cornice visibile. `OnUpdateCmdUI` è un avanzato sottoponibile a override.

##  <a name="setbarstyle"></a>  CControlBar::SetBarStyle

Chiamare questa funzione per impostare il valore desiderato **CBRS _** stili per la barra di controllo.

```
void SetBarStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Gli stili desiderati per la barra di controllo. Può essere uno o più dei seguenti:

- CBRS_ALIGN_TOP consente la barra di controllo ancorato alla parte superiore dell'area client di una finestra cornice.

- CBRS_ALIGN_BOTTOM consente la barra di controllo ancorato alla parte inferiore dell'area client di una finestra cornice.

- CBRS_ALIGN_LEFT consente la barra di controllo ancorato al lato sinistro dell'area client di una finestra cornice.

- CBRS_ALIGN_RIGHT consente la barra di controllo ancorato al lato destro dell'area client di una finestra cornice.

- CBRS_ALIGN_ANY consente la barra di controllo ancorato a qualsiasi lato dell'area client di una finestra cornice.

- CBRS_BORDER_TOP fa sì che un bordo da disegnare sul bordo superiore del controllo barra quando dovrebbe essere visibile.

- CBRS_BORDER_BOTTOM fa sì che un bordo da disegnare sul bordo inferiore del controllo barra quando dovrebbe essere visibile.

- CBRS_BORDER_LEFT fa sì che un bordo da disegnare il bordo sinistro del controllo barra quando dovrebbe essere visibile.

- CBRS_BORDER_RIGHT fa sì che un bordo da disegnare il bordo destro del controllo barra quando dovrebbe essere visibile.

- CBRS_FLOAT_MULTI consente più barre di controllo essere spostate in una finestra con mini-cornice singola.

- CBRS_TOOLTIPS provoca descrizioni da visualizzare per la barra di controllo.

- Testo del messaggio CBRS_FLYBY fa sì che l'aggiornamento allo stesso tempo come descrizioni comandi.

- CBRS_GRIPPER provoca un gripper, simile a quella usata nel bande in un `CReBar` oggetto, deve essere disegnato per qualsiasi `CControlBar`-classe derivata.

### <a name="remarks"></a>Note

Non influisce sul **WS _** impostazioni (stile della finestra).

##  <a name="setborders"></a>  CControlBar::SetBorders

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
La larghezza, in pixel, del bordo sinistro della barra di controllo.

*cyTop*<br/>
L'altezza, in pixel, del bordo superiore della barra di controllo.

*cxRight*<br/>
La larghezza, in pixel, del bordo destro della barra di controllo.

*cyBottom*<br/>
L'altezza, in pixel, del bordo inferiore della barra di controllo.

*lpRect*<br/>
Un puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la larghezza corrente, in pixel, di ogni bordo dell'oggetto controllo barra.

### <a name="example"></a>Esempio

Esempio di codice seguente imposta i bordi superiore e inferiore della barra di controllo per 5 pixel e i bordi sinistro e destro a 2 pixel:

[!code-cpp[NVC_MFCControlLadenDialog#61](../../mfc/codesnippet/cpp/ccontrolbar-class_1.cpp)]

##  <a name="setinplaceowner"></a>  CControlBar::SetInPlaceOwner

Modifica il proprietario sul posto di una barra di controllo.

```
void SetInPlaceOwner(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore a un oggetto `CWnd` .

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Esempio MFC viene](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBar](../../mfc/reference/ctoolbar-class.md)<br/>
[Classe CDialogBar](../../mfc/reference/cdialogbar-class.md)<br/>
[Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)<br/>
[Classe CReBar](../../mfc/reference/crebar-class.md)
