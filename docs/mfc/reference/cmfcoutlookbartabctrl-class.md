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
ms.openlocfilehash: c791f3988c7257ed7d188917394e74a6dbeca98b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62374038"
---
# <a name="cmfcoutlookbartabctrl-class"></a>CMFCOutlookBarTabCtrl Class

Controllo Struttura a schede che presenta l'aspetto visivo del **Riquadro di navigazione** in Microsoft Outlook.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.
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
|[CMFCOutlookBarTabCtrl::AddControl](#addcontrol)|Aggiunge un controllo di Windows come una nuova scheda nella barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Chiamato dal framework per determinare le dimensioni della casella di modifica che viene visualizzato quando un utente rinomina una scheda. Esegue l'override di `CMFCBaseTabCtrl::CalcRectEdit`.|
|[CMFCOutlookBarTabCtrl::CanShowFewerPageButtons](#canshowfewerpagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possono visualizzare pulsanti pagina di scheda della barra di Outlook un numero minore rispetto a attualmente visibili.|
|[CMFCOutlookBarTabCtrl::CanShowMorePageButtons](#canshowmorepagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possono visualizzare i pulsanti pagina scheda barra Outlook ulteriori rispetto a attualmente visibili.|
|[CMFCOutlookBarTabCtrl::Create](#create)|Crea il controllo struttura a schede sulla barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation)|Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.|
|[CMFCOutlookBarTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Specifica se un utente può modificare le etichette di testo sui pulsanti della scheda della barra di Outlook. (Esegue l'override [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|
|[CMFCOutlookBarTabCtrl::EnableScrollButtons](#enablescrollbuttons)|Chiamato dal framework per abilitare i pulsanti che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.|
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifica il riquadro contenente un punto specificato. (Esegue l'override [CMFCBaseTabCtrl::FindTargetWnd](../../mfc/reference/cmfcbasetabctrl-class.md#findtargetwnd).)|
|[CMFCOutlookBarTabCtrl::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo del controllo scheda Outlook.|
|`CMFCOutlookBarTabCtrl::GetTabArea`|Recupera le dimensioni e la posizione dell'area delle schede del controllo Struttura a schede. (Esegue l'override [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).)|
|`CMFCOutlookBarTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCOutlookBarTabCtrl::GetVisiblePageButtons](#getvisiblepagebuttons)||
|[CMFCOutlookBarTabCtrl::IsAnimation](#isanimation)|Determina se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.|
|[CMFCOutlookBarTabCtrl::IsMode2003](#ismode2003)|Determina se il controllo struttura a schede sulla barra di Outlook è in una modalità che emula Microsoft Outlook 2003.|
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determina se un punto è all'interno dell'area delle schede. (Esegue l'override [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determina se una scheda è rimovibile. (Esegue l'override [CMFCBaseTabCtrl::IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#istabdetachable).)|
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Chiamato dal framework quando una scheda viene inserita o rimosso. Esegue l'override di `CMFCBaseTabCtrl::OnChangeTabs`.|
|[CMFCOutlookBarTabCtrl::OnShowFewerPageButtons](#onshowfewerpagebuttons)|Chiamato dal framework per ridurre il numero di pulsanti alla pagina della scheda che sono visibili.|
|[CMFCOutlookBarTabCtrl::OnShowMorePageButtons](#onshowmorepagebuttons)|Chiamato dal framework per aumentare il numero di pulsanti alla pagina della scheda che sono visibili.|
|[CMFCOutlookBarTabCtrl::OnShowOptions](#onshowoptions)|Consente di visualizzare il **Opzioni riquadro di spostamento** finestra di dialogo.|
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo Struttura a schede. (Esegue l'override [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).)|
|[CMFCOutlookBarTabCtrl::SetActiveTab](#setactivetab)|Imposta la scheda attiva. (Esegue l'override [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|
|[CMFCOutlookBarTabCtrl::SetBorderSize](#setbordersize)|Imposta la dimensione del bordo del controllo scheda Outlook.|
|[CMFCOutlookBarTabCtrl::SetPageButtonTextAlign](#setpagebuttontextalign)|Imposta l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook.|
|[CMFCOutlookBarTabCtrl::SetToolbarImageList](#settoolbarimagelist)|Imposta l'immagine bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità di Outlook 2003 (vedere [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md)).|
|[CMFCOutlookBarTabCtrl::SetVisiblePageButtons](#setvisiblepagebuttons)||

## <a name="remarks"></a>Note

Per creare una barra di Outlook che dispone del supporto di ancoraggio, usare un `CMFCOutlookBar` oggetto per l'hosting di Outlook della barra di controllo struttura a schede. Per altre informazioni, vedere [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come inizializzare un `CMFCOutlookBarTabCtrl` dell'oggetto e usare i vari metodi nel `CMFCOutlookBarTabCtrl` classe. L'esempio illustra come abilitare la modifica sul posto dell'etichetta di testo sui pulsanti di pagina della scheda della barra di Outlook, attivare l'animazione, abilitare punti di controllo di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook, impostare la dimensione del bordo di segue la scheda Outlook ROL e impostare l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook. Questo frammento di codice fa parte di [esempio dimostrativo di Outlook](../../overview/visual-cpp-samples.md).

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

##  <a name="addcontrol"></a>  CMFCOutlookBarTabCtrl::AddControl

Aggiunge un controllo di Windows come una nuova scheda nella barra di Outlook.

```
void AddControl(
    CWnd* pWndCtrl,
    LPCTSTR lpszName,
    int nImageID=-1,
    BOOL bDetachable=TRUE,
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```

### <a name="parameters"></a>Parametri

*pWndCtrl*<br/>
[in] Puntatore a un controllo da aggiungere.

*lpszName*<br/>
[in] Specifica il nome della scheda.

*bDetachable*<br/>
[in] Se TRUE, la pagina verrà creata come rimovibile.

*nImageID*<br/>
[in] Indice dell'immagine nell'elenco immagini interno per l'immagine da visualizzare in una nuova scheda.

*dwControlBarStyle*<br/>
[in] Specifica lo stile AFX _ CBRS _ * per i riquadri di ancoraggio con wrapping.

### <a name="remarks"></a>Note

Utilizzare questa funzione per aggiungere un controllo come una nuova pagina di una barra di outlook.

Questa funzione chiama internamente su [cmfcbasetabctrl:: addTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab).

Se si imposta *bDetachable* su TRUE, `AddControl` crea internamente un `CDockablePaneAdapter` oggetto ed esegue il wrapping del controllo aggiunto. Imposta automaticamente la classe di runtime della finestra a schede per la classe di runtime del `CMFCOutlookBar` e la classe di runtime del frame mobile per `CMultiPaneFrameWnd`.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `AddControl` metodo nel `CMFCOutlookBarTabCtrl` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Outlook](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookDemo#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]

##  <a name="canshowfewerpagebuttons"></a>  CMFCOutlookBarTabCtrl::CanShowFewerPageButtons

Chiamato dal framework durante il ridimensionamento di operazioni per determinare se è possono visualizzare pulsanti pagina di scheda della barra di Outlook un numero minore rispetto a attualmente visibili.

```
virtual BOOL CanShowFewerPageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è presente più di un pulsante. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il controllo struttura a schede sulla barra di Outlook in modo dinamico aggiunge o rimuove le schede dalla visualizzazione a seconda di quanto spazio è disponibile. Questo metodo viene utilizzato dal framework per semplificare tale processo.

##  <a name="canshowmorepagebuttons"></a>  CMFCOutlookBarTabCtrl::CanShowMorePageButtons

Chiamato dal framework durante il ridimensionamento di operazioni per determinare se è possono visualizzare i pulsanti pagina scheda barra Outlook ulteriori rispetto a attualmente visibili.

```
virtual BOOL CanShowMorePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se sono presenti i pulsanti che non sono attualmente visibili; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il controllo struttura a schede sulla barra di Outlook in modo dinamico aggiunge o rimuove le schede dalla visualizzazione, a seconda di quanto spazio è disponibile. Questo metodo viene utilizzato dal framework per semplificare tale processo.

##  <a name="create"></a>  CMFCOutlookBarTabCtrl::Create

Crea il controllo struttura a schede sulla barra di Outlook.

```
virtual BOOL Create(
    const CRect& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*rect*<br/>
[in] Specifica le dimensioni iniziali e la posizione, espressa in pixel.

*pParentWnd*<br/>
[in] Punta alla finestra padre. Non deve essere NULL.

*nID*<br/>
[in] ID del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

In genere, quando vengono creati i controlli della scheda sulla barra di outlook [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md) controlla il messaggio di notifica WM_CREATE del processo.

##  <a name="enableanimation"></a>  CMFCOutlookBarTabCtrl::EnableAnimation

Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.

```
static void EnableAnimation(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Specifica se l'animazione deve essere abilitata o disabilitata.

### <a name="remarks"></a>Note

Chiamare questa funzione per attivare e disattivare l'animazione. Quando l'utente apre una pagina a schede, il titolo della pagina scorre verso l'alto o verso il basso se l'animazione è abilitata. Se l'animazione è disabilitata, la pagina diventa attiva immediatamente.

Per impostazione predefinita, l'animazione è abilitata.

##  <a name="enableinplaceedit"></a>  CMFCOutlookBarTabCtrl::EnableInPlaceEdit

Specifica se un utente può modificare le etichette di testo sui pulsanti di pagina della scheda della barra di Outlook.

```
virtual void EnableInPlaceEdit(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Se TRUE, abilita la modifica sul posto dell'etichetta di testo. Se FALSE, disabilitare la modifica sul posto.

### <a name="remarks"></a>Note

Chiamare questa funzione per abilitare o disabilitare la modifica sul posto di etichette di testo dei pulsanti pagina scheda. Per impostazione predefinita la modifica sul posto è disabilitata.

##  <a name="enablescrollbuttons"></a>  CMFCOutlookBarTabCtrl::EnableScrollButtons

Chiamato dal framework per abilitare gli handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.

```
void EnableScrollButtons(
    BOOL bEnable = TRUE,
    BOOL bIsUp = TRUE,
    BOOL bIsDown = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Determina se vengono visualizzati i pulsanti di scorrimento.

*bIsUp*<br/>
[in] Determina se viene visualizzata la barra di scorrimento principale.

*bIsDown*<br/>
[in] Determina se viene visualizzata la barra di scorrimento nella parte inferiore.

### <a name="remarks"></a>Note

Consente di visualizzare i pulsanti di scorrimento. Questo metodo viene chiamato dal framework quando viene modificata la scheda attiva per ripristinare i pulsanti di scorrimento.

##  <a name="getbordersize"></a>  CMFCOutlookBarTabCtrl::GetBorderSize

Restituisce la dimensione del bordo del controllo scheda Outlook.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni del bordo, in pixel.

##  <a name="getvisiblepagebuttons"></a>  CMFCOutlookBarTabCtrl::GetVisiblePageButtons

```
int GetVisiblePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="isanimation"></a>  CMFCOutlookBarTabCtrl::IsAnimation

Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.

```
static BOOL IsAnimation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'animazione è abilitata. in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare il [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation) funzione per attivare o disattivare l'animazione.

##  <a name="ismode2003"></a>  CMFCOutlookBarTabCtrl::IsMode2003

Determina se il controllo struttura a schede sulla barra di Outlook è in una modalità che emula Microsoft Outlook 2003.

```
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il controllo scheda della barra di Outlook è in modalità di Outlook 2003. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo valore viene impostato dal [CMFCOutlookBar::SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#setmode2003).

##  <a name="onshowfewerpagebuttons"></a>  CMFCOutlookBarTabCtrl::OnShowFewerPageButtons

Chiamato dal framework per ridurre il numero di pulsanti alla pagina della scheda che sono visibili.

```
virtual void OnShowFewerPageButtons();
```

### <a name="remarks"></a>Note

Questo metodo consente di regolare il numero di pulsanti della scheda della pagina visibile quando il controllo viene ridimensionato.

##  <a name="onshowmorepagebuttons"></a>  CMFCOutlookBarTabCtrl::OnShowMorePageButtons

Chiamato dal framework per aumentare il numero di pulsanti alla pagina della scheda che sono visibili.

```
virtual void OnShowMorePageButtons();
```

### <a name="remarks"></a>Note

Questo metodo regolare il numero di pulsanti alla pagina della scheda che sono visibili quando il controllo viene ridimensionato.

##  <a name="onshowoptions"></a>  CMFCOutlookBarTabCtrl::OnShowOptions

Consente di visualizzare il **Opzioni riquadro di spostamento** nella finestra di dialogo.

```
virtual void OnShowOptions();
```

### <a name="remarks"></a>Note

Il **Opzioni riquadro di spostamento** nella finestra di dialogo consente all'utente di selezionare quale devono essere visualizzati i pulsanti pagina scheda e l'ordine in cui sono visualizzate.

Questo metodo viene chiamato dal framework quando l'utente seleziona il **Opzioni riquadro di spostamento** voce di menu dal menu di personalizzazione del controllo.

##  <a name="setactivetab"></a>  CMFCOutlookBarTabCtrl::SetActiveTab

Imposta la scheda attiva. La scheda attiva è quello che è aperta, con il relativo contenuto visibile.

```
virtual BOOL SetActiveTab(int iTab);
```

### <a name="parameters"></a>Parametri

*iTab*<br/>
[in] Indice a base zero di una scheda da aprire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la scheda specificata è stata aperta correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

L'effetto dell'impostazione nella scheda attiva dipende dal fatto che è stata abilitata l'animazione. Per altre informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation).

##  <a name="setbordersize"></a>  CMFCOutlookBarTabCtrl::SetBorderSize

Imposta la dimensione del bordo del controllo scheda Outlook.

```
void SetBorderSize(int nBorderSize);
```

### <a name="parameters"></a>Parametri

*nBorderSize*<br/>
[in] Specifica la nuova dimensione del bordo espressa in pixel.

### <a name="remarks"></a>Note

Imposta la nuova dimensione bordo e ricalcola il layout di finestra di outlook.

##  <a name="setpagebuttontextalign"></a>  CMFCOutlookBarTabCtrl::SetPageButtonTextAlign

Imposta l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook.

```
void SetPageButtonTextAlign(
    UINT uiAlign,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*uiAlign*<br/>
[in] Specifica l'allineamento del testo.

*bRedraw*<br/>
[in] Se TRUE, la finestra di outlook viene ridisegnata.

### <a name="remarks"></a>Note

Utilizzare questa funzione per modificare l'allineamento del testo per pulsanti pagina.

*uiAlign* può essere uno dei valori seguenti:

|Costante|Significato|
|--------------|-------------|
|TA_LEFT|Allineamento a sinistra|
|TA_CENTER|Allineamento al centro|
|TA_RIGHT|Allineamento a destra|

Il valore predefinito è TA_CENTER.

##  <a name="settoolbarimagelist"></a>  CMFCOutlookBarTabCtrl::SetToolbarImageList

Imposta mappa di bit che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità di Outlook 2003.

```
BOOL SetToolbarImageList(
    UINT uiID,
    int cx,
    COLORREF clrTransp=RGB(255, 0, 255));
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] Specifica l'ID risorsa dell'immagine da caricare.

*cx*<br/>
[in] Specifica la larghezza di un'immagine nell'elenco delle immagini, in pixel.

*clrTransp*<br/>
[in] Un valore RGB che specifica il colore trasparente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo. in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

Utilizzare questa funzione per associare un elenco di immagini con immagini verranno visualizzate sui pulsanti della barra degli strumenti in modalità di Microsoft Office 2003. Gli indici dell'immagine devono corrispondere alla pagina rappresenta l'indice.

Questo metodo non deve essere chiamato se non è in modalità di Microsoft Office 2003. Per altre informazioni, vedere [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md).

##  <a name="setvisiblepagebuttons"></a>  CMFCOutlookBarTabCtrl::SetVisiblePageButtons

```
void SetVisiblePageButtons(int nVisiblePageButtons);
```

### <a name="parameters"></a>Parametri

[in] *nVisiblePageButtons*<br/>

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)
