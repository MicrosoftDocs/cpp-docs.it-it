---
title: CMFCOutlookBarTabCtrl Class
ms.date: 10/18/2018
f1_keywords:
- CMFCOutlookBarTabCtrl
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::AddControl
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::CanShowFewerPageButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::CanShowMorePageButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::Create
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableAnimation
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableInPlaceEdit
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::EnableScrollButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::GetBorderSize
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::GetVisiblePageButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::IsAnimation
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::IsMode2003
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowFewerPageButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowMorePageButtons
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::OnShowOptions
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetActiveTab
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetBorderSize
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetPageButtonTextAlign
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetToolbarImageList
- AFXOUTLOOKBARTABCTRL/CMFCOutlookBarTabCtrl::SetVisiblePageButtons
helpviewer_keywords:
- CMFCOutlookBarTabCtrl [MFC], AddControl
- CMFCOutlookBarTabCtrl [MFC], CanShowFewerPageButtons
- CMFCOutlookBarTabCtrl [MFC], CanShowMorePageButtons
- CMFCOutlookBarTabCtrl [MFC], Create
- CMFCOutlookBarTabCtrl [MFC], EnableAnimation
- CMFCOutlookBarTabCtrl [MFC], EnableInPlaceEdit
- CMFCOutlookBarTabCtrl [MFC], EnableScrollButtons
- CMFCOutlookBarTabCtrl [MFC], GetBorderSize
- CMFCOutlookBarTabCtrl [MFC], GetVisiblePageButtons
- CMFCOutlookBarTabCtrl [MFC], IsAnimation
- CMFCOutlookBarTabCtrl [MFC], IsMode2003
- CMFCOutlookBarTabCtrl [MFC], OnShowFewerPageButtons
- CMFCOutlookBarTabCtrl [MFC], OnShowMorePageButtons
- CMFCOutlookBarTabCtrl [MFC], OnShowOptions
- CMFCOutlookBarTabCtrl [MFC], SetActiveTab
- CMFCOutlookBarTabCtrl [MFC], SetBorderSize
- CMFCOutlookBarTabCtrl [MFC], SetPageButtonTextAlign
- CMFCOutlookBarTabCtrl [MFC], SetToolbarImageList
- CMFCOutlookBarTabCtrl [MFC], SetVisiblePageButtons
ms.assetid: b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b
ms.openlocfilehash: 309b74126f57e76aa6399f57382d88fee4400700
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369669"
---
# <a name="cmfcoutlookbartabctrl-class"></a>CMFCOutlookBarTabCtrl Class

Controllo Struttura a schede che presenta l'aspetto visivo del **Riquadro di navigazione** in Microsoft Outlook.
Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Costruttore predefinito.|
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCOutlookBarTabCtrlCtrl::AddControl](#addcontrol)|Aggiunge un controllo di Windows come nuova scheda nella barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Chiamato dal framework per determinare le dimensioni della casella di modifica visualizzata `CMFCBaseTabCtrl::CalcRectEdit`quando un utente rinomina una scheda.|
|[CMFCOutlookBarTabCtrlCtrl::CanShowFewerPageButtons](#canshowfewerpagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare un numero inferiore di pulsanti della scheda della barra di Outlook rispetto a quelli attualmente visibili.|
|[CMFCOutlookBarTabCtrlCtrl::CanShowMorePageButtons](#canshowmorepagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare più pulsanti della scheda della barra di Outlook rispetto a quelli attualmente visibili.|
|[CMFCOutlookBarTabCtrl::Crea](#create)|Crea il controllo struttura a schede della barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBarTabCtrlCtrl::EnableAnimation](#enableanimation)|Specifica se l'animazione che si verifica durante il passaggio tra le schede attive è abilitata.|
|[CMFCOutlookBarTabCtrlCtrl::EnableInPlaceModifica](#enableinplaceedit)|Specifica se un utente può modificare le etichette di testo sui pulsanti delle schede della barra di Outlook. (Esegue l'override di [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|
|[CMFCOutlookBarTabCtrlCtrl::EnableScrollButtons](#enablescrollbuttons)|Chiamato dal framework per abilitare i pulsanti che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.|
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifica il riquadro contenente un punto specificato. (Esegue l'override di [CMFCBaseTabCtrl::FindTargetWnd.)](../../mfc/reference/cmfcbasetabctrl-class.md#findtargetwnd)|
|[CMFCOutlookBarTabCtrlCtrl::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo del controllo struttura a schede di Outlook.|
|`CMFCOutlookBarTabCtrl::GetTabArea`|Recupera le dimensioni e la posizione dell'area delle schede del controllo Struttura a schede. (Esegue l'override [di CMFCBaseTabCtrl::GetTabArea.)](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea)|
|`CMFCOutlookBarTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCOutlookBarTabCtrlCtrl::GetVisiblePageButtons](#getvisiblepagebuttons)||
|[CMFCOutlookBarTabCtrlCtrl::IsAnimation](#isanimation)|Determina se l'animazione che si verifica durante il passaggio tra le schede attive è abilitata.|
|[CMFCOutlookBarTabCtrlCtrl::IsMode2003](#ismode2003)|Determina se il controllo struttura a schede della barra di Outlook è in una modalità che emula Microsoft Outlook 2003.|
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determina se un punto è all'interno dell'area delle schede. (Esegue l'override di [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determina se una scheda è rimovibile. (Esegue l'override di [CMFCBaseTabCtrl::IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#istabdetachable).)|
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Chiamato dal framework quando una scheda viene inserita o rimossa. Esegue l'override di `CMFCBaseTabCtrl::OnChangeTabs`.|
|[CMFCOutlookBarTabCtrlCtrl::OnShowFewerPageButtons](#onshowfewerpagebuttons)|Chiamato dal framework per ridurre il numero di pulsanti di scheda visibili.|
|[CMFCOutlookBarTabCtrlCtrl::OnShowMorePageButtons](#onshowmorepagebuttons)|Chiamato dal framework per aumentare il numero di pulsanti di scheda visibili.|
|[CMFCOutlookBarTabCtrlCtrl::OnShowOptions](#onshowoptions)|Visualizza la finestra di **dialogo Opzioni riquadro di spostamento.**|
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo Struttura a schede. (Esegue l'override di [CMFCBaseTabCtrl::RecalcLayout.)](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout)|
|[CMFCOutlookBarTabCtrlCtrl::SetActiveTab](#setactivetab)|Imposta la scheda attiva . [(OverrideS CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|
|[CMFCOutlookBarTabCtrlCtrl::SetBorderSize](#setbordersize)|Imposta la dimensione del bordo del controllo struttura a schede di Outlook.|
|[CMFCOutlookBarTabCtrlCtrl::SetPageButtonTextAlign](#setpagebuttontextalign)|Imposta l'allineamento delle etichette di testo sui pulsanti delle schede della barra di Outlook.|
|[CMFCOutlookBarTabCtrlCtrl::SetToolbarImageList](#settoolbarimagelist)|Imposta la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità Outlook 2003 (vedere [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)).|
|[CMFCOutlookBarTabCtrlCtrl::SetVisiblePageButtons](#setvisiblepagebuttons)||

## <a name="remarks"></a>Osservazioni

Per creare una barra di Outlook con `CMFCOutlookBar` supporto per l'ancoraggio, utilizzare un oggetto per ospitare il controllo struttura a schede della barra di Outlook. Per ulteriori informazioni, vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="example"></a>Esempio

Nell'esempio riportato di `CMFCOutlookBarTabCtrl` seguito viene illustrato `CMFCOutlookBarTabCtrl` come inizializzare un oggetto e utilizzare vari metodi nella classe. Nell'esempio viene illustrato come abilitare la modifica sul posto dell'etichetta di testo sui pulsanti della scheda della barra di Outlook, abilitare l'animazione, abilitare i quadratini di ridimensionamento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook, impostare le dimensioni del bordo del controllo struttura a schede di Outlook e impostare l'allineamento delle etichette di testo sui pulsanti di tabulazione della barra di Outlook. Questo frammento di codice fa parte dell'esempio Demo di [Outlook.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_OutlookDemo#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_1.cpp)]
[!code-cpp[NVC_MFC_OutlookDemo#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)

[CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoutlookbartabctrl.h

## <a name="cmfcoutlookbartabctrladdcontrol"></a><a name="addcontrol"></a>CMFCOutlookBarTabCtrlCtrl::AddControl

Aggiunge un controllo di Windows come nuova scheda nella barra di Outlook.

```
void AddControl(
    CWnd* pWndCtrl,
    LPCTSTR lpszName,
    int nImageID=-1,
    BOOL bDetachable=TRUE,
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```

### <a name="parameters"></a>Parametri

*pWndCtrl (in modo intalo a int*<br/>
[in] Puntatore a un controllo da aggiungere.

*lpszName*<br/>
[in] Specifica il nome della scheda.

*bDetachable*<br/>
[in] Se TRUE, la pagina verrà creata come rimovibile.

*nImageID (ID immagine)*<br/>
[in] Indice immagine nell'elenco immagini interno per l'immagine da visualizzare nella nuova scheda.

*dwControlBarStyle (stile dwControlBarStyle)*<br/>
[in] Specifica lo stile AFX_ CBRS_ per i riquadri di ancoraggio di cui è stato eseguito il wrapping.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per aggiungere un controllo come nuova pagina di una barra di Outlook.

Questa funzione chiama internamente su [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab).

Se si imposta *bDetachable* su TRUE, `AddControl` internamente crea un `CDockablePaneAdapter` oggetto ed esegue il wrapping del controllo aggiunto. Imposta automaticamente la classe di runtime della finestra `CMFCOutlookBar` a schede sulla classe di `CMultiPaneFrameWnd`runtime di e sulla classe di runtime del frame mobile su .

### <a name="example"></a>Esempio

Nell'esempio `CMFCOutlookBarTabCtrl` riportato di `AddControl` seguito viene illustrato come utilizzare il metodo nella classe . Questo frammento di codice fa parte dell'esempio Demo di [Outlook.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_OutlookDemo#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]

## <a name="cmfcoutlookbartabctrlcanshowfewerpagebuttons"></a><a name="canshowfewerpagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::CanShowFewerPageButtons

Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare meno pulsanti della scheda della barra di Outlook rispetto a quelli attualmente visibili.

```
virtual BOOL CanShowFewerPageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe è presente più di un pulsante. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il controllo struttura a schede della barra di Outlook aggiunge o rimuove dinamicamente le schede dal display a seconda della quantità di spazio disponibile. Questo metodo viene utilizzato dal framework per facilitare tale processo.

## <a name="cmfcoutlookbartabctrlcanshowmorepagebuttons"></a><a name="canshowmorepagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::CanShowMorePageButtons

Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare più pulsanti della scheda della barra di Outlook rispetto a quelli attualmente visibili.

```
virtual BOOL CanShowMorePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe sono presenti pulsanti che non sono attualmente visibili; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il controllo struttura a schede della barra di Outlook aggiunge o rimuove dinamicamente le schede dalla visualizzazione, a seconda della quantità di spazio disponibile. Questo metodo viene utilizzato dal framework per facilitare tale processo.

## <a name="cmfcoutlookbartabctrlcreate"></a><a name="create"></a>CMFCOutlookBarTabCtrl::Crea

Crea il controllo struttura a schede della barra di Outlook.

```
virtual BOOL Create(
    const CRect& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
[in] Specifica le dimensioni e la posizione iniziali, in pixel.

*pParentWnd (informazioni in due)*<br/>
[in] Punta alla finestra padre. Non deve essere NULL.

*nID*<br/>
[in] ID del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In genere, i controlli scheda della barra di Outlook vengono creati quando [CMFCOutlookBar classe](../../mfc/reference/cmfcoutlookbar-class.md) controlla il WM_CREATE messaggio del processo.

## <a name="cmfcoutlookbartabctrlenableanimation"></a><a name="enableanimation"></a>CMFCOutlookBarTabCtrlCtrl::EnableAnimation

Specifica se l'animazione che si verifica durante il passaggio tra le schede attive è abilitata.

```
static void EnableAnimation(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Specifica se l'animazione deve essere abilitata o disabilitata.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per abilitare e disabilitare l'animazione. Quando l'utente apre una scheda, la didascalia della pagina scorre verso l'alto o verso il basso se l'animazione è abilitata. Se l'animazione è disabilitata, la pagina diventa immediatamente attiva.

Per impostazione predefinita, l'animazione è abilitata.

## <a name="cmfcoutlookbartabctrlenableinplaceedit"></a><a name="enableinplaceedit"></a>CMFCOutlookBarTabCtrlCtrl::EnableInPlaceModifica

Specifica se un utente può modificare le etichette di testo sui pulsanti della scheda della barra di Outlook.

```
virtual void EnableInPlaceEdit(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Se TRUE, abilitare la modifica sul posto dell'etichetta di testo. Se FALSE, disabilitare la modifica sul posto.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per abilitare o disabilitare la modifica sul posto delle etichette di testo sui pulsanti della scheda. Per impostazione predefinita, la modifica sul posto è disabilitata.

## <a name="cmfcoutlookbartabctrlenablescrollbuttons"></a><a name="enablescrollbuttons"></a>CMFCOutlookBarTabCtrlCtrl::EnableScrollButtons

Chiamato dal framework per abilitare gli handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.

```
void EnableScrollButtons(
    BOOL bEnable = TRUE,
    BOOL bIsUp = TRUE,
    BOOL bIsDown = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Determina se i pulsanti di scorrimento vengono visualizzati.

*bIsUp*<br/>
[in] Determina se la barra di scorrimento superiore è visualizzata.

*bIsGiù*<br/>
[in] Determina se la barra di scorrimento inferiore è visualizzata.

### <a name="remarks"></a>Osservazioni

Abilita la visualizzazione dei pulsanti di scorrimento. Questo metodo viene chiamato dal framework quando la scheda attiva viene modificata per ripristinare i pulsanti di scorrimento.

## <a name="cmfcoutlookbartabctrlgetbordersize"></a><a name="getbordersize"></a>CMFCOutlookBarTabCtrlCtrl::GetBorderSize

Restituisce la dimensione del bordo del controllo struttura a schede di Outlook.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione del bordo, in pixel.

## <a name="cmfcoutlookbartabctrlgetvisiblepagebuttons"></a><a name="getvisiblepagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::GetVisiblePageButtons

```
int GetVisiblePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcoutlookbartabctrlisanimation"></a><a name="isanimation"></a>CMFCOutlookBarTabCtrlCtrl::IsAnimation

Specifica se l'animazione che si verifica durante il passaggio tra le schede attive è abilitata.

```
static BOOL IsAnimation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'animazione è abilitata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare la funzione [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation) per abilitare o disabilitare l'animazione.

## <a name="cmfcoutlookbartabctrlismode2003"></a><a name="ismode2003"></a>CMFCOutlookBarTabCtrlCtrl::IsMode2003

Determina se il controllo struttura a schede della barra di Outlook è in una modalità che emula Microsoft Outlook 2003.

```
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il controllo struttura a schede della barra di Outlook è in modalità Outlook 2003. in caso contrario, FALSE;

### <a name="remarks"></a>Osservazioni

Questo valore viene impostato da [CMFCOutlookBar::SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#setmode2003).

## <a name="cmfcoutlookbartabctrlonshowfewerpagebuttons"></a><a name="onshowfewerpagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::OnShowFewerPageButtons

Chiamato dal framework per ridurre il numero di pulsanti di scheda visibili.

```
virtual void OnShowFewerPageButtons();
```

### <a name="remarks"></a>Osservazioni

Questo metodo regola il numero di pulsanti di tabulazione pagina visibili quando il controllo viene ridimensionato.

## <a name="cmfcoutlookbartabctrlonshowmorepagebuttons"></a><a name="onshowmorepagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::OnShowMorePageButtons

Chiamato dal framework per aumentare il numero di pulsanti di scheda visibili.

```
virtual void OnShowMorePageButtons();
```

### <a name="remarks"></a>Osservazioni

Questo metodo regolare il numero di pulsanti di scheda che sono visibili quando il controllo viene ridimensionato.

## <a name="cmfcoutlookbartabctrlonshowoptions"></a><a name="onshowoptions"></a>CMFCOutlookBarTabCtrlCtrl::OnShowOptions

Visualizza la finestra di dialogo **Opzioni riquadro di spostamento.**

```
virtual void OnShowOptions();
```

### <a name="remarks"></a>Osservazioni

La finestra di dialogo **Opzioni riquadro** di spostamento consente all'utente di selezionare i pulsanti della scheda da visualizzare e l'ordine in cui vengono visualizzati.

Questo metodo viene chiamato dal framework quando l'utente seleziona la voce di menu **Opzioni riquadro** di spostamento dal menu di personalizzazione del controllo.

## <a name="cmfcoutlookbartabctrlsetactivetab"></a><a name="setactivetab"></a>CMFCOutlookBarTabCtrlCtrl::SetActiveTab

Imposta la scheda attiva. La scheda attiva è quella aperta, con il suo contenuto visibile.

```
virtual BOOL SetActiveTab(int iTab);
```

### <a name="parameters"></a>Parametri

*iTab*<br/>
[in] Indice in base zero di una scheda da aprire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la scheda specificata è stata aperta correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'effetto visivo dell'impostazione della scheda attiva dipende dall'abilitazione o meno dell'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation).

## <a name="cmfcoutlookbartabctrlsetbordersize"></a><a name="setbordersize"></a>CMFCOutlookBarTabCtrlCtrl::SetBorderSize

Imposta la dimensione del bordo del controllo struttura a schede di Outlook.

```
void SetBorderSize(int nBorderSize);
```

### <a name="parameters"></a>Parametri

*nBorderSize (informazioni in base ai bordi)*<br/>
[in] Specifica le nuove dimensioni del bordo in pixel.

### <a name="remarks"></a>Osservazioni

Imposta le nuove dimensioni del bordo e ricalcola il layout della finestra di Outlook.

## <a name="cmfcoutlookbartabctrlsetpagebuttontextalign"></a><a name="setpagebuttontextalign"></a>CMFCOutlookBarTabCtrlCtrl::SetPageButtonTextAlign

Imposta l'allineamento delle etichette di testo sui pulsanti delle schede della barra di Outlook.

```
void SetPageButtonTextAlign(
    UINT uiAlign,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*uiAlign (interfaccia utente)*<br/>
[in] Specifica l'allineamento del testo.

*bRedraw*<br/>
[in] Se TRUE, la finestra di Outlook verrà ridisegnata.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per modificare l'allineamento del testo per i pulsanti di pagina.

*uiAlign* può essere uno dei seguenti valori:

|Costante|Significato|
|--------------|-------------|
|TA_LEFT|Allineamento a sinistra|
|TA_CENTER|Allineamento al centro|
|TA_RIGHT|Allineamento a destra|

Il valore predefinito è TA_CENTER.

## <a name="cmfcoutlookbartabctrlsettoolbarimagelist"></a><a name="settoolbarimagelist"></a>CMFCOutlookBarTabCtrlCtrl::SetToolbarImageList

Imposta la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità Outlook 2003.

```
BOOL SetToolbarImageList(
    UINT uiID,
    int cx,
    COLORREF clrTransp=RGB(255, 0, 255));
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] Specifica l'ID risorsa dell'immagine da caricare.

*Cx*<br/>
[in] Specifica la larghezza di un'immagine nell'elenco immagini, in pixel.

*clrTransp*<br/>
[in] Valore RGB che specifica il colore trasparente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo; in caso contrario restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per allegare un elenco immagini le cui immagini verranno visualizzate sui pulsanti della barra degli strumenti in modalità Microsoft Office 2003. Gli indici di immagine devono corrispondere agli indici di pagina.

Questo metodo non deve essere chiamato se non è in modalità Microsoft Office 2003. Per ulteriori informazioni, vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="cmfcoutlookbartabctrlsetvisiblepagebuttons"></a><a name="setvisiblepagebuttons"></a>CMFCOutlookBarTabCtrlCtrl::SetVisiblePageButtons

```
void SetVisiblePageButtons(int nVisiblePageButtons);
```

### <a name="parameters"></a>Parametri

[in] *nVisiblePageButtons*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[CMFCOutlookBarPane (classe)](../../mfc/reference/cmfcoutlookbarpane-class.md)
