---
description: 'Altre informazioni su: classe CMFCOutlookBarTabCtrl'
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
ms.openlocfilehash: b969fbb592fc3098dc8d287004fab90da6f30111
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333479"
---
# <a name="cmfcoutlookbartabctrl-class"></a>CMFCOutlookBarTabCtrl Class

Controllo Struttura a schede che presenta l'aspetto visivo del **Riquadro di navigazione** in Microsoft Outlook.
Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Costruttore predefinito.|
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCOutlookBarTabCtrl:: AddControl](#addcontrol)|Aggiunge un controllo Windows come una nuova scheda nella barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Chiamata eseguita dal Framework per determinare le dimensioni della casella di modifica visualizzata quando un utente rinomina una tabulazione. (esegue l'override di `CMFCBaseTabCtrl::CalcRectEdit` ).|
|[CMFCOutlookBarTabCtrl:: CanShowFewerPageButtons](#canshowfewerpagebuttons)|Chiamata eseguita dal Framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare un numero inferiore di pulsanti della scheda della barra di Outlook rispetto al momento visibile.|
|[CMFCOutlookBarTabCtrl:: CanShowMorePageButtons](#canshowmorepagebuttons)|Chiamata eseguita dal Framework durante le operazioni di ridimensionamento per determinare se è possibile visualizzare più pulsanti della scheda della barra di Outlook che attualmente sono visibili.|
|[CMFCOutlookBarTabCtrl:: create](#create)|Crea il controllo scheda della barra di Outlook.|
|`CMFCOutlookBarTabCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBarTabCtrl:: EnableAnimation](#enableanimation)|Specifica se l'animazione che si verifica durante l'opzione tra le schede attive è abilitata.|
|[CMFCOutlookBarTabCtrl:: EnableInPlaceEdit](#enableinplaceedit)|Specifica se un utente può modificare le etichette di testo nei pulsanti di tabulazione della barra di Outlook. Esegue l'override di [CMFCBaseTabCtrl:: EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).|
|[CMFCOutlookBarTabCtrl:: EnableScrollButtons](#enablescrollbuttons)|Chiamata eseguita dal Framework per abilitare i pulsanti che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.|
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifica il riquadro contenente un punto specificato. Esegue l'override di [CMFCBaseTabCtrl:: FindTargetWnd](../../mfc/reference/cmfcbasetabctrl-class.md#findtargetwnd).|
|[CMFCOutlookBarTabCtrl:: GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo del controllo scheda di Outlook.|
|`CMFCOutlookBarTabCtrl::GetTabArea`|Recupera le dimensioni e la posizione dell'area delle schede del controllo Struttura a schede. Esegue l'override di [CMFCBaseTabCtrl:: GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).|
|`CMFCOutlookBarTabCtrl::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCOutlookBarTabCtrl:: GetVisiblePageButtons](#getvisiblepagebuttons)||
|[CMFCOutlookBarTabCtrl:: l'animazione](#isanimation)|Determina se l'animazione che si verifica durante l'opzione tra le schede attive è abilitata.|
|[CMFCOutlookBarTabCtrl:: IsMode2003](#ismode2003)|Determina se il controllo scheda della barra di Outlook si trova in una modalità che emula Microsoft Outlook 2003.|
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determina se un punto è all'interno dell'area delle schede. Esegue l'override di [CMFCBaseTabCtrl:: IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).|
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determina se una scheda è rimovibile. Esegue l'override di [CMFCBaseTabCtrl:: IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#istabdetachable).|
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Chiamata eseguita dal framework quando viene inserita o rimossa una scheda. Esegue l'override di `CMFCBaseTabCtrl::OnChangeTabs`.|
|[CMFCOutlookBarTabCtrl:: OnShowFewerPageButtons](#onshowfewerpagebuttons)|Chiamata eseguita dal Framework per ridurre il numero di pulsanti della scheda visualizzati.|
|[CMFCOutlookBarTabCtrl:: OnShowMorePageButtons](#onshowmorepagebuttons)|Chiamata eseguita dal Framework per aumentare il numero di pulsanti della scheda visualizzati.|
|[CMFCOutlookBarTabCtrl:: OnShowOptions](#onshowoptions)|Consente di visualizzare la finestra di dialogo **Opzioni riquadro di spostamento** .|
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo Struttura a schede. Esegue l'override di [CMFCBaseTabCtrl:: RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).|
|[CMFCOutlookBarTabCtrl:: SetActiveTab](#setactivetab)|Imposta la scheda attiva. esegue l'override di [CMFCBaseTabCtrl:: SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).|
|[CMFCOutlookBarTabCtrl:: SetBorderSize](#setbordersize)|Imposta la dimensione del bordo del controllo scheda di Outlook.|
|[CMFCOutlookBarTabCtrl:: SetPageButtonTextAlign](#setpagebuttontextalign)|Imposta l'allineamento delle etichette di testo nei pulsanti di tabulazione della barra di Outlook.|
|[CMFCOutlookBarTabCtrl:: SetToolbarImageList](#settoolbarimagelist)|Imposta la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità Outlook 2003 (vedere la [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)).|
|[CMFCOutlookBarTabCtrl:: SetVisiblePageButtons](#setvisiblepagebuttons)||

## <a name="remarks"></a>Commenti

Per creare una barra di Outlook con supporto di ancoraggio, usare un `CMFCOutlookBar` oggetto per ospitare il controllo scheda della barra di Outlook. Per ulteriori informazioni, vedere la [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come inizializzare un `CMFCOutlookBarTabCtrl` oggetto e utilizzare vari metodi nella `CMFCOutlookBarTabCtrl` classe. Nell'esempio viene illustrato come abilitare la modifica sul posto dell'etichetta di testo nei pulsanti della scheda della barra di Outlook, abilitare l'animazione, abilitare gli handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook, impostare le dimensioni del bordo del controllo scheda di Outlook e impostare l'allineamento delle etichette di testo nei pulsanti della scheda della barra di Outlook. Questo frammento di codice fa parte dell' [esempio di demo di Outlook](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookDemo#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_1.cpp)]
[!code-cpp[NVC_MFC_OutlookDemo#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)

[CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoutlookbartabctrl. h

## <a name="cmfcoutlookbartabctrladdcontrol"></a><a name="addcontrol"></a> CMFCOutlookBarTabCtrl:: AddControl

Aggiunge un controllo Windows come una nuova scheda nella barra di Outlook.

```cpp
void AddControl(
    CWnd* pWndCtrl,
    LPCTSTR lpszName,
    int nImageID=-1,
    BOOL bDetachable=TRUE,
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```

### <a name="parameters"></a>Parametri

*pWndCtrl*<br/>
in Puntatore a un controllo da aggiungere.

*lpszName*<br/>
in Specifica il nome della scheda.

*bDetachable*<br/>
in Se TRUE, la pagina verrà creata come scollegabile.

*nImageID*<br/>
in Indice dell'immagine nell'elenco di immagini interne per l'immagine da visualizzare nella nuova scheda.

*dwControlBarStyle*<br/>
in Specifica lo stile CBRS_ * AFX_ per i riquadri di ancoraggio di cui è stato eseguito il wrapper.

### <a name="remarks"></a>Commenti

Usare questa funzione per aggiungere un controllo come nuova pagina di una barra di Outlook.

Questa funzione chiama internamente su [CMFCBaseTabCtrl:: AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab).

Se si imposta *bDetachable* su true, `AddControl` crea internamente un `CDockablePaneAdapter` oggetto ed esegue il wrapping del controllo aggiunto. Imposta automaticamente la classe runtime della finestra a schede sulla classe di runtime di `CMFCOutlookBar` e la classe di runtime del frame mobile su `CMultiPaneFrameWnd` .

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `AddControl` metodo nella `CMFCOutlookBarTabCtrl` classe. Questo frammento di codice fa parte dell' [esempio di demo di Outlook](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookDemo#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]

## <a name="cmfcoutlookbartabctrlcanshowfewerpagebuttons"></a><a name="canshowfewerpagebuttons"></a> CMFCOutlookBarTabCtrl:: CanShowFewerPageButtons

Chiamata eseguita dal Framework durante il ridimensionamento delle operazioni per determinare se è possibile visualizzare un minor numero di pulsanti della scheda della barra di Outlook rispetto al momento visibile.

```
virtual BOOL CanShowFewerPageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è presente più di un pulsante; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il controllo scheda barra di Outlook aggiunge o rimuove in modo dinamico le schede dalla visualizzazione a seconda della quantità di spazio disponibile. Questo metodo viene utilizzato dal Framework per semplificare il processo.

## <a name="cmfcoutlookbartabctrlcanshowmorepagebuttons"></a><a name="canshowmorepagebuttons"></a> CMFCOutlookBarTabCtrl:: CanShowMorePageButtons

Chiamata eseguita dal Framework durante il ridimensionamento delle operazioni per determinare se è possibile visualizzare più pulsanti della scheda della barra di Outlook che attualmente sono visibili.

```
virtual BOOL CanShowMorePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se sono presenti pulsanti che non sono attualmente visibili; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Il controllo scheda barra di Outlook aggiunge o rimuove in modo dinamico le schede dallo schermo, a seconda della quantità di spazio disponibile. Questo metodo viene utilizzato dal Framework per semplificare il processo.

## <a name="cmfcoutlookbartabctrlcreate"></a><a name="create"></a> CMFCOutlookBarTabCtrl:: create

Crea il controllo scheda della barra di Outlook.

```
virtual BOOL Create(
    const CRect& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
in Specifica le dimensioni e la posizione iniziali, in pixel.

*pParentWnd*<br/>
in Punta alla finestra padre. Non può essere NULL.

*nID*<br/>
in ID del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

In genere, i controlli della scheda della barra di Outlook vengono creati quando la [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md) controlla la WM_CREATE messaggio del processo.

## <a name="cmfcoutlookbartabctrlenableanimation"></a><a name="enableanimation"></a> CMFCOutlookBarTabCtrl:: EnableAnimation

Specifica se l'animazione che si verifica durante l'opzione tra le schede attive è abilitata.

```
static void EnableAnimation(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Specifica se l'animazione deve essere abilitata o disabilitata.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per abilitare e disabilitare l'animazione. Quando l'utente apre una scheda, la didascalia della pagina scorre verso l'alto o verso il basso se l'animazione è abilitata. Se l'animazione è disabilitata, la pagina diventa immediatamente attiva.

Per impostazione predefinita, l'animazione è abilitata.

## <a name="cmfcoutlookbartabctrlenableinplaceedit"></a><a name="enableinplaceedit"></a> CMFCOutlookBarTabCtrl:: EnableInPlaceEdit

Specifica se un utente può modificare le etichette di testo nei pulsanti della pagina della scheda della barra di Outlook.

```
virtual void EnableInPlaceEdit(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Se TRUE, abilitare la modifica sul posto dell'etichetta di testo. Se FALSE, disabilitare la modifica sul posto.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per abilitare o disabilitare la modifica sul posto delle etichette di testo nei pulsanti della scheda. Per impostazione predefinita, la modifica sul posto è disabilitata.

## <a name="cmfcoutlookbartabctrlenablescrollbuttons"></a><a name="enablescrollbuttons"></a> CMFCOutlookBarTabCtrl:: EnableScrollButtons

Chiamata eseguita dal Framework per abilitare gli handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.

```cpp
void EnableScrollButtons(
    BOOL bEnable = TRUE,
    BOOL bIsUp = TRUE,
    BOOL bIsDown = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Determina se i pulsanti di scorrimento vengono visualizzati.

*bIsUp*<br/>
in Determina se la barra di scorrimento superiore viene visualizzata.

*bIsDown*<br/>
in Determina se la barra di scorrimento inferiore viene visualizzata.

### <a name="remarks"></a>Commenti

Consente di visualizzare i pulsanti di scorrimento. Questo metodo viene chiamato dal framework quando la scheda attiva viene modificata per ripristinare i pulsanti di scorrimento.

## <a name="cmfcoutlookbartabctrlgetbordersize"></a><a name="getbordersize"></a> CMFCOutlookBarTabCtrl:: GetBorderSize

Restituisce la dimensione del bordo del controllo scheda di Outlook.

```
int GetBorderSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni del bordo, in pixel.

## <a name="cmfcoutlookbartabctrlgetvisiblepagebuttons"></a><a name="getvisiblepagebuttons"></a> CMFCOutlookBarTabCtrl:: GetVisiblePageButtons

```
int GetVisiblePageButtons() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcoutlookbartabctrlisanimation"></a><a name="isanimation"></a> CMFCOutlookBarTabCtrl:: l'animazione

Specifica se l'animazione che si verifica durante l'opzione tra le schede attive è abilitata.

```
static BOOL IsAnimation();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'animazione è abilitata; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare la funzione [CMFCOutlookBarTabCtrl:: EnableAnimation](#enableanimation) per abilitare o disabilitare l'animazione.

## <a name="cmfcoutlookbartabctrlismode2003"></a><a name="ismode2003"></a> CMFCOutlookBarTabCtrl:: IsMode2003

Determina se il controllo scheda della barra di Outlook si trova in una modalità che emula Microsoft Outlook 2003.

```
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il controllo scheda della barra di Outlook è in modalità Outlook 2003; in caso contrario, FALSE;

### <a name="remarks"></a>Commenti

Questo valore viene impostato da [CMFCOutlookBar:: SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#setmode2003).

## <a name="cmfcoutlookbartabctrlonshowfewerpagebuttons"></a><a name="onshowfewerpagebuttons"></a> CMFCOutlookBarTabCtrl:: OnShowFewerPageButtons

Chiamata eseguita dal Framework per ridurre il numero di pulsanti della scheda visualizzati.

```
virtual void OnShowFewerPageButtons();
```

### <a name="remarks"></a>Commenti

Questo metodo regola il numero di pulsanti della scheda pagina visibile quando il controllo viene ridimensionato.

## <a name="cmfcoutlookbartabctrlonshowmorepagebuttons"></a><a name="onshowmorepagebuttons"></a> CMFCOutlookBarTabCtrl:: OnShowMorePageButtons

Chiamata eseguita dal Framework per aumentare il numero di pulsanti della scheda visualizzati.

```
virtual void OnShowMorePageButtons();
```

### <a name="remarks"></a>Commenti

Questo metodo regola il numero di pulsanti della scheda che sono visibili quando il controllo viene ridimensionato.

## <a name="cmfcoutlookbartabctrlonshowoptions"></a><a name="onshowoptions"></a> CMFCOutlookBarTabCtrl:: OnShowOptions

Consente di visualizzare la finestra di dialogo **Opzioni riquadro di spostamento** .

```
virtual void OnShowOptions();
```

### <a name="remarks"></a>Commenti

La finestra di dialogo **Opzioni riquadro di spostamento** consente all'utente di selezionare i pulsanti della scheda da visualizzare e l'ordine in cui vengono visualizzati.

Questo metodo viene chiamato dal framework quando l'utente seleziona la voce di menu **Opzioni riquadro di spostamento** dal menu di personalizzazione del controllo.

## <a name="cmfcoutlookbartabctrlsetactivetab"></a><a name="setactivetab"></a> CMFCOutlookBarTabCtrl:: SetActiveTab

Imposta la scheda attiva. La scheda attiva è quella aperta, con il relativo contenuto visibile.

```
virtual BOOL SetActiveTab(int iTab);
```

### <a name="parameters"></a>Parametri

*iTab*<br/>
in Indice in base zero di una scheda da aprire.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la scheda specificata è stata aperta correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'effetto visivo dell'impostazione della scheda attiva dipende dal fatto che sia stata abilitata l'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl:: EnableAnimation](#enableanimation).

## <a name="cmfcoutlookbartabctrlsetbordersize"></a><a name="setbordersize"></a> CMFCOutlookBarTabCtrl:: SetBorderSize

Imposta la dimensione del bordo del controllo scheda di Outlook.

```cpp
void SetBorderSize(int nBorderSize);
```

### <a name="parameters"></a>Parametri

*nBorderSize*<br/>
in Specifica le nuove dimensioni del bordo in pixel.

### <a name="remarks"></a>Commenti

Imposta le nuove dimensioni del bordo e ricalcola il layout della finestra di Outlook.

## <a name="cmfcoutlookbartabctrlsetpagebuttontextalign"></a><a name="setpagebuttontextalign"></a> CMFCOutlookBarTabCtrl:: SetPageButtonTextAlign

Imposta l'allineamento delle etichette di testo nei pulsanti di tabulazione della barra di Outlook.

```cpp
void SetPageButtonTextAlign(
    UINT uiAlign,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*uiAlign*<br/>
in Specifica l'allineamento del testo.

*bRedraw*<br/>
in Se TRUE, la finestra di Outlook verrà ridisegnato.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per modificare l'allineamento del testo per i pulsanti di pagina.

*uiAlign* può essere uno dei valori seguenti:

|Costante|Significato|
|--------------|-------------|
|TA_LEFT|Allineamento a sinistra|
|TA_CENTER|Allineamento al centro|
|TA_RIGHT|Allineamento a destra|

Il valore predefinito è TA_CENTER.

## <a name="cmfcoutlookbartabctrlsettoolbarimagelist"></a><a name="settoolbarimagelist"></a> CMFCOutlookBarTabCtrl:: SetToolbarImageList

Imposta la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità Outlook 2003.

```
BOOL SetToolbarImageList(
    UINT uiID,
    int cx,
    COLORREF clrTransp=RGB(255, 0, 255));
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in Specifica l'ID risorsa dell'immagine da caricare.

*CX*<br/>
in Specifica la larghezza in pixel di un'immagine nell'elenco di immagini.

*clrTransp*<br/>
in Valore RGB che specifica il colore trasparente.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Commenti

Usare questa funzione per alleghi un elenco di immagini le cui immagini verranno visualizzate sui pulsanti della barra degli strumenti in modalità Microsoft Office 2003. Gli indici di immagini devono corrispondere agli indici di pagina.

Questo metodo non deve essere chiamato se non è in modalità Microsoft Office 2003. Per ulteriori informazioni, vedere la [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).

## <a name="cmfcoutlookbartabctrlsetvisiblepagebuttons"></a><a name="setvisiblepagebuttons"></a> CMFCOutlookBarTabCtrl:: SetVisiblePageButtons

```cpp
void SetVisiblePageButtons(int nVisiblePageButtons);
```

### <a name="parameters"></a>Parametri

in *nVisiblePageButtons*<br/>

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)<br/>
[Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)
