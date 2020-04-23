---
title: Classe CMFCStatusBar
ms.date: 11/19/2018
f1_keywords:
- CMFCStatusBar
- AFXSTATUSBAR/CMFCStatusBar
- AFXSTATUSBAR/CMFCStatusBar::CalcFixedLayout
- AFXSTATUSBAR/CMFCStatusBar::CommandToIndex
- AFXSTATUSBAR/CMFCStatusBar::Create
- AFXSTATUSBAR/CMFCStatusBar::CreateEx
- AFXSTATUSBAR/CMFCStatusBar::DoesAllowDynInsertBefore
- AFXSTATUSBAR/CMFCStatusBar::EnablePaneDoubleClick
- AFXSTATUSBAR/CMFCStatusBar::EnablePaneProgressBar
- AFXSTATUSBAR/CMFCStatusBar::GetCount
- AFXSTATUSBAR/CMFCStatusBar::GetDrawExtendedArea
- AFXSTATUSBAR/CMFCStatusBar::GetExtendedArea
- AFXSTATUSBAR/CMFCStatusBar::GetItemID
- AFXSTATUSBAR/CMFCStatusBar::GetItemRect
- AFXSTATUSBAR/CMFCStatusBar::GetPaneInfo
- AFXSTATUSBAR/CMFCStatusBar::GetPaneProgress
- AFXSTATUSBAR/CMFCStatusBar::GetPaneStyle
- AFXSTATUSBAR/CMFCStatusBar::GetPaneText
- AFXSTATUSBAR/CMFCStatusBar::GetPaneWidth
- AFXSTATUSBAR/CMFCStatusBar::GetTipText
- AFXSTATUSBAR/CMFCStatusBar::InvalidatePaneContent
- AFXSTATUSBAR/CMFCStatusBar::PreCreateWindow
- AFXSTATUSBAR/CMFCStatusBar::SetDrawExtendedArea
- AFXSTATUSBAR/CMFCStatusBar::SetIndicators
- AFXSTATUSBAR/CMFCStatusBar::SetPaneAnimation
- AFXSTATUSBAR/CMFCStatusBar::SetPaneBackgroundColor
- AFXSTATUSBAR/CMFCStatusBar::SetPaneIcon
- AFXSTATUSBAR/CMFCStatusBar::SetPaneInfo
- AFXSTATUSBAR/CMFCStatusBar::SetPaneProgress
- AFXSTATUSBAR/CMFCStatusBar::SetPaneStyle
- AFXSTATUSBAR/CMFCStatusBar::SetPaneText
- AFXSTATUSBAR/CMFCStatusBar::SetPaneTextColor
- AFXSTATUSBAR/CMFCStatusBar::SetPaneWidth
- AFXSTATUSBAR/CMFCStatusBar::SetTipText
- AFXSTATUSBAR/CMFCStatusBar::OnDrawPane
helpviewer_keywords:
- CMFCStatusBar [MFC], CalcFixedLayout
- CMFCStatusBar [MFC], CommandToIndex
- CMFCStatusBar [MFC], Create
- CMFCStatusBar [MFC], CreateEx
- CMFCStatusBar [MFC], DoesAllowDynInsertBefore
- CMFCStatusBar [MFC], EnablePaneDoubleClick
- CMFCStatusBar [MFC], EnablePaneProgressBar
- CMFCStatusBar [MFC], GetCount
- CMFCStatusBar [MFC], GetDrawExtendedArea
- CMFCStatusBar [MFC], GetExtendedArea
- CMFCStatusBar [MFC], GetItemID
- CMFCStatusBar [MFC], GetItemRect
- CMFCStatusBar [MFC], GetPaneInfo
- CMFCStatusBar [MFC], GetPaneProgress
- CMFCStatusBar [MFC], GetPaneStyle
- CMFCStatusBar [MFC], GetPaneText
- CMFCStatusBar [MFC], GetPaneWidth
- CMFCStatusBar [MFC], GetTipText
- CMFCStatusBar [MFC], InvalidatePaneContent
- CMFCStatusBar [MFC], PreCreateWindow
- CMFCStatusBar [MFC], SetDrawExtendedArea
- CMFCStatusBar [MFC], SetIndicators
- CMFCStatusBar [MFC], SetPaneAnimation
- CMFCStatusBar [MFC], SetPaneBackgroundColor
- CMFCStatusBar [MFC], SetPaneIcon
- CMFCStatusBar [MFC], SetPaneInfo
- CMFCStatusBar [MFC], SetPaneProgress
- CMFCStatusBar [MFC], SetPaneStyle
- CMFCStatusBar [MFC], SetPaneText
- CMFCStatusBar [MFC], SetPaneTextColor
- CMFCStatusBar [MFC], SetPaneWidth
- CMFCStatusBar [MFC], SetTipText
- CMFCStatusBar [MFC], OnDrawPane
ms.assetid: f2960d1d-f4ed-41e8-bd99-0382b2f8d88e
ms.openlocfilehash: 024fbad44af2fb11e967141fc8e7ccc0aad0ccbe
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753475"
---
# <a name="cmfcstatusbar-class"></a>Classe CMFCStatusBar

La `CMFCStatusBar` classe implementa una barra `CStatusBar` di stato simile alla classe . Tuttavia, la classe `CMFCStatusBar` offre funzionalità non fornite dalla classe `CStatusBar` , ad esempio le capacità di visualizzare immagini, animazioni e indicatori di stato, oltre alla possibilità di rispondere al doppio clic del mouse.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCStatusBar : public CPane
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCStatusBar::CalcFixedLayout](#calcfixedlayout)|(Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|
|[CMFCStatusBar::CommandToIndex](#commandtoindex)||
|[CMFCStatusBar::Create](#create)|Crea una barra di controllo e la associa all'oggetto [CPane.](../../mfc/reference/cpane-class.md) (Sostituisce [CPane::Create](../../mfc/reference/cpane-class.md#create).)|
|[CMFCStatusBar::CreateEx](#createex)|Crea una barra di controllo e la associa all'oggetto [CPane.](../../mfc/reference/cpane-class.md) (Esegue l'override di [CPane::CreateEx](../../mfc/reference/cpane-class.md#createex).)|
|[CMFCStatusBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un altro riquadro può essere inserito dinamicamente tra questo riquadro e il frame padre. (Overrides [CBasePane::DoesAllowDynInsertBefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|
|[CMFCStatusBar::EnablePaneDoubleClick](#enablepanedoubleclick)|Abilita o disabilita la gestione dei doppio clic del mouse sulla barra di stato.|
|[CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar)|Visualizza una barra di avanzamento nel riquadro specificato.|
|[CMFCStatusBar::GetCount](#getcount)|Restituisce il numero di riquadri sulla barra di stato.|
|[CMFCStatusBar::GetDrawExtendedArea](#getdrawextendedarea)||
|[CMFCStatusBar::GetExtendedArea](#getextendedarea)||
|[CMFCStatusBar::GetItemID](#getitemid)||
|[CMFCStatusBar::GetItemRectCMFCStatusBar::GetItemRect](#getitemrect)||
|[CMFCStatusBar::GetPaneInfo](#getpaneinfo)||
|[CMFCStatusBar::GetPaneProgress](#getpaneprogress)||
|[CMFCStatusBar::GetPaneStyle](#getpanestyle)|Restituisce lo stile del riquadro. (Esegue l'override di [CBasePane::GetPaneStyle](../../mfc/reference/cbasepane-class.md#getpanestyle).)|
|[CMFCStatusBar::GetPaneText](#getpanetext)||
|[CMFCStatusBar::GetPaneWidth](#getpanewidth)|Restituisce la larghezza, in pixel, del riquadro specificato della barra di stato.|
|[CMFCStatusBar::GetTipText](#gettiptext)|Restituisce il testo della descrizione comando per il riquadro specificato della barra di stato.|
|[CMFCStatusBar::InvalidatePaneContent](#invalidatepanecontent)|Invalida il riquadro specificato e ne ridisegna il contenuto.|
|[CMFCStatusBar::PreCreateWindow](#precreatewindow)|Chiamato dal framework prima della creazione della finestra `CWnd` di Windows associata a questo oggetto. (Esegue l'override di [CWnd::PreCreateWindow.)](../../mfc/reference/cwnd-class.md#precreatewindow)|
|[CMFCStatusBar::SetDrawExtendedArea](#setdrawextendedarea)||
|[CMFCStatusBar::SetIndicators](#setindicators)||
|[CMFCStatusBar::SetPaneAnimation](#setpaneanimation)|Assegna un'animazione al riquadro specificato.|
|[CMFCStatusBar::SetPaneBackgroundColor](#setpanebackgroundcolor)|Imposta il colore di sfondo per il riquadro specificato della barra di stato.|
|[CMFCStatusBar::SetPaneIcon](#setpaneicon)|Imposta l'icona dell'indicatore per il riquadro specificato della barra di stato.|
|[CMFCStatusBar::SetPaneInfo](#setpaneinfo)||
|[CMFCStatusBar::SetPaneProgress](#setpaneprogress)|Imposta lo stato di avanzamento corrente della barra di avanzamento per il riquadro specificato della barra di stato.|
|[CMFCStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile del riquadro. (Esegue l'override di [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).)|
|[CMFCStatusBar::SetPaneText](#setpanetext)||
|[CMFCStatusBar::SetPaneTextColor](#setpanetextcolor)|Imposta il colore del testo per il riquadro specificato della barra di stato.|
|[CMFCStatusBar::SetPaneWidth](#setpanewidth)|Imposta la larghezza in pixel del riquadro specificato della barra di stato.|
|[CMFCStatusBar::SetTipText](#settiptext)|Imposta il testo della descrizione comandi per il riquadro specificato della barra di stato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCStatusBar::OnDrawPane](#ondrawpane)|Chiamato dal framework quando ridisegna il riquadro della barra di stato.|

## <a name="remarks"></a>Osservazioni

Il diagramma seguente mostra una figura della barra di stato dall'applicazione [di esempio Demo barra di stato.](../../overview/visual-cpp-samples.md)

![Esempio di CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "Esempio di CMFCStatusBar")

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le variabili locali utilizzate `CMFCStatusBar` dall'applicazione per chiamare vari metodi nella classe. Queste variabili vengono dichiarate in StatusBarDemoView.h.These variables are declared in StatusBarDemoView.h. Il frame principale viene dichiarato in MainFrm.h, il documento viene dichiarato in StatusBarDemoDoc.h e la visualizzazione viene dichiarata in StatusBarDemoView.h. Questo frammento di codice fa parte [dell'esempio Demo](../../overview/visual-cpp-samples.md)della barra di stato.

[!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_1.h)]

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CMFCStatusBar` viene illustrato `GetStatusBar` come ottenere un riferimento all'oggetto introducendo il metodo in MainFrm.h e quindi chiamando questo metodo dal `GetStatusBar` metodo in StatusBarDemoView.h. Questo frammento di codice fa parte [dell'esempio Demo](../../overview/visual-cpp-samples.md)della barra di stato.

[!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_2.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_3.h)]

## <a name="example"></a>Esempio

Nell'esempio `CMFCStatusBar` riportato di seguito viene illustrato come chiamare vari metodi nella classe in StatusBarDemoView.cpp. Le costanti sono dichiarate in MainFrm.h. L'esempio mostra come impostare l'icona, impostare il testo della descrizione comando del riquadro della barra di stato, visualizzare una barra di stato nel riquadro specificato, assegnare un'animazione al riquadro specificato, impostare il testo e la larghezza del riquadro della barra di stato e impostare l'indicatore di stato corrente della barra di stato per il riquadro della barra di stato. Questo frammento di codice fa parte [dell'esempio Demo](../../overview/visual-cpp-samples.md)della barra di stato.

[!code-cpp[NVC_MFC_StatusBarDemo#6](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_4.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#1](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_5.cpp)]
[!code-cpp[NVC_MFC_StatusBarDemo#2](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_6.cpp)]
[!code-cpp[NVC_MFC_StatusBarDemo#3](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_7.cpp)]
[!code-cpp[NVC_MFC_StatusBarDemo#4](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_8.cpp)]
[!code-cpp[NVC_MFC_StatusBarDemo#5](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_9.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxstatusbar.h

## <a name="cmfcstatusbarcalcfixedlayout"></a><a name="calcfixedlayout"></a>CMFCStatusBar::CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

[in] *bAllunga*<br/>
[in] *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarcommandtoindex"></a><a name="commandtoindex"></a>CMFCStatusBar::CommandToIndex

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

[in] *nIDTrova*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarcreate"></a><a name="create"></a>CMFCStatusBar::Create

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

[in] *pParentWnd (informazioni in due)*<br/>
[in] *DwStyle (in stile dwStyle)*<br/>
[in] *nID (ID)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarcreateex"></a><a name="createex"></a>CMFCStatusBar::CreateEx

```
BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

[in] *pParentWnd (informazioni in due)*<br/>
[in] *dwCtrlStyle*<br/>
[in] *DwStyle (in stile dwStyle)*<br/>
[in] *nID (ID)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CMFCStatusBar::DoesAllowDynInsertBefore

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarenablepanedoubleclick"></a><a name="enablepanedoubleclick"></a>CMFCStatusBar::EnablePaneDoubleClick

Abilita o disabilita la gestione dei doppio clic del mouse sulla barra di stato.

```cpp
void EnablePaneDoubleClick(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Se TRUE, abilitare l'elaborazione del clic del mouse. In caso contrario, disattivare l'elaborazione del doppio clic del mouse.

### <a name="remarks"></a>Osservazioni

Se la barra di stato è abilitata per l'elaborazione dei doppi clic, Windows invia la notifica WM_COMMAND con un ID risorsa al proprietario della barra di stato ogni volta che l'utente fa doppio clic sul riquadro della barra di stato.

## <a name="cmfcstatusbarenablepaneprogressbar"></a><a name="enablepaneprogressbar"></a>CMFCStatusBar::EnablePaneProgressBar

Visualizzare una barra di avanzamento nel riquadro specificato.

```cpp
void EnablePaneProgressBar(
    int nIndex,
    long nTotal=100,
    BOOL bDisplayText=FALSE,
    COLORREF clrBar=-1,
    COLORREF clrBarDest=-1,
    COLORREF clrProgressText=-1);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro di cui abilitare l'indicatore di stato.

*nTotale*<br/>
[in] Specifica il valore massimo per l'indicatore di stato.

*bTestovisualizzato*<br/>
[in] Specifica se l'indicatore di stato deve visualizzare il valore di avanzamento corrente.

*clrBar*<br/>
[in] Specifica il colore di sfondo dell'indicatore di stato.

*clrBarDest*<br/>
[in] Specifica il colore secondario dello sfondo dell'indicatore di stato. Utilizzare un valore diverso da *clrBar* per riempire con un colore fusa in una sfumatura.

*clrProgressText*<br/>
[in] Specifica il colore del testo dell'indicatore di stato.

### <a name="remarks"></a>Osservazioni

Se si desidera disabilitare `EnablePaneProgressBar` la chiamata della barra di avanzamento con *nTotal* impostato su -1. Per impostazione predefinita *nTotal* è impostato su 100. Pertanto, non è necessario alcun calcolo aggiuntivo per visualizzare lo stato di avanzamento come percentuale.

È necessario passare valori diversi per *clrBar* e *clrBarDest* in modo che il colore di sfondo della barra di avanzamento visualizzi un colore fusa in una sfumatura. .

Per impostare lo stato di avanzamento corrente, chiamare il [CMFCStatusBar::SetPaneProgress](#setpaneprogress) metodo.

## <a name="cmfcstatusbargetcount"></a><a name="getcount"></a>CMFCStatusBar::GetCount

Recupera il numero di riquadri nella barra di stato.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di riquadri nella barra di stato.

## <a name="cmfcstatusbargetdrawextendedarea"></a><a name="getdrawextendedarea"></a>CMFCStatusBar::GetDrawExtendedArea

```
BOOL GetDrawExtendedArea() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetextendedarea"></a><a name="getextendedarea"></a>CMFCStatusBar::GetExtendedArea

```
virtual BOOL GetExtendedArea(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetitemid"></a><a name="getitemid"></a>CMFCStatusBar::GetItemID

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetitemrect"></a><a name="getitemrect"></a>CMFCStatusBar::GetItemRectCMFCStatusBar::GetItemRect

```cpp
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *LpRect (oggetto Ip*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetpaneinfo"></a><a name="getpaneinfo"></a>CMFCStatusBar::GetPaneInfo

```cpp
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *nID (ID)*<br/>
[in] *nStile*<br/>
[in] *CxWidth (larghezza incx)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetpaneprogress"></a><a name="getpaneprogress"></a>CMFCStatusBar::GetPaneProgress

```
long GetPaneProgress(int nIndex) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetpanestyle"></a><a name="getpanestyle"></a>CMFCStatusBar::GetPaneStyle

```
UINT GetPaneStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetpanetext"></a><a name="getpanetext"></a>CMFCStatusBar::GetPaneText

```cpp
void GetPaneText(
    int nIndex,
    CString& s) const;

CString GetPaneText(int nIndex) const;
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *s*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbargetpanewidth"></a><a name="getpanewidth"></a>CMFCStatusBar::GetPaneWidth

Recupera la larghezza del riquadro di una barra di stato.

```
int GetPaneWidth(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro della barra di stato.

### <a name="return-value"></a>Valore restituito

La larghezza del riquadro della barra di stato specificato *da nIndex;* in caso contrario, zero se non esiste un riquadro della barra di stato.

## <a name="cmfcstatusbargettiptext"></a><a name="gettiptext"></a>CMFCStatusBar::GetTipText

Recuperare il testo della descrizione comando del riquadro di una barra di stato.

```
CString GetTipText(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro per il quale recuperare il testo della descrizione comandi.

### <a name="return-value"></a>Valore restituito

Testo della descrizione comando del riquadro della barra di stato specificato *da nIndex.* In caso contrario, la stringa vuota se non esiste un riquadro della barra di stato per l'oggetto *specificato nIndex* o se il testo della descrizione comando è vuoto.

## <a name="cmfcstatusbarinvalidatepanecontent"></a><a name="invalidatepanecontent"></a>CMFCStatusBar::InvalidatePaneContent

Invalidare il riquadro della barra di stato e ridisegnarne il contenuto.

```cpp
void InvalidatePaneContent(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro il cui contenuto deve essere invalidato e ridisegnato.

### <a name="remarks"></a>Osservazioni

Quando la barra di stato viene invalidata, viene contrassegnata per il ridisegno. Windows lo ridisegna quando il `UpdateWindow` metodo `OnPaint` invia un messaggio di WM_PAINT al metodo.

## <a name="cmfcstatusbarondrawpane"></a><a name="ondrawpane"></a>CMFCStatusBar::OnDrawPane

Ridisegnare il riquadro della barra di stato.

```
virtual void OnDrawPane(
    CDC* pDC,
    CMFCStatusBarPaneInfo* pPane);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di periferica per il disegno.

*pRiquadro*<br/>
[in] Puntatore a `CMFCStatusBarPaneInfo` una struttura che contiene le informazioni sul riquadro da ridisegnare.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `OnDrawPane` ridisegna il riquadro utilizzando il *pDC* del contesto di dispositivo in base allo stile e al contenuto del riquadro.

Eseguire l'override `CMFCStatusBar`di questo metodo in una classe derivata per personalizzare l'aspetto di un riquadro.

## <a name="cmfcstatusbarprecreatewindow"></a><a name="precreatewindow"></a>CMFCStatusBar::PreCreateWindow

```
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```

### <a name="parameters"></a>Parametri

[in] *cs*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetdrawextendedarea"></a><a name="setdrawextendedarea"></a>CMFCStatusBar::SetDrawExtendedArea

```cpp
void SetDrawExtendedArea(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *bImpostazione*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetindicators"></a><a name="setindicators"></a>CMFCStatusBar::SetIndicators

```
BOOL SetIndicators(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

[in] *lpIDArray (matrice di oggetti di lavoro)*<br/>
[in] *nIDCount*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetpaneanimation"></a><a name="setpaneanimation"></a>CMFCStatusBar::SetPaneAnimation

Assegna un'animazione al riquadro specificato.

```cpp
void SetPaneAnimation(
    int nIndex,
    HIMAGELIST hImageList,
    UINT nFrameRate=500,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro a cui si desidera assegnare un'animazione.

*hImageList*<br/>
[in] Specifica un handle per l'elenco di immagini che contiene i fotogrammi di animazione.

*nFrameRate*<br/>
[in] Specifica la frequenza fotogrammi, in millisecondi, per l'animazione.

*Bupdate*<br/>
[in] Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, il contenuto del riquadro viene aggiornato quando viene invalidato.

### <a name="remarks"></a>Osservazioni

Se si desidera disabilitare l'animazione corrente, chiamare `SetPaneAnimation` con `hImageList` impostato su NULL.

## <a name="cmfcstatusbarsetpanebackgroundcolor"></a><a name="setpanebackgroundcolor"></a>CMFCStatusBar::SetPaneBackgroundColor

Imposta il colore di sfondo del riquadro della barra di stato.

```cpp
void SetPaneBackgroundColor(
    int nIndex,
    COLORREF clrBackground=(COLORREF)-1,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro per il quale impostare un nuovo colore di sfondo.

*clrBackground*<br/>
[in] Specifica il nuovo colore di sfondo.

*Bupdate*<br/>
[in] Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro fino a quando il riquadro non viene invalidato da un altro metodo.

## <a name="cmfcstatusbarsetpaneicon"></a><a name="setpaneicon"></a>CMFCStatusBar::SetPaneIcon

Impostare l'icona del riquadro della barra di stato.

```cpp
void SetPaneIcon(
    int nIndex,
    HICON hIcon,
    BOOL bUpdate=TRUE);

void SetPaneIcon(
    int nIndex,
    HBITMAP hBmp,
    COLORREF clrTransparent=RGB(255, 0, 255),
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro per il quale impostare l'immagine.

*hIcon*<br/>
[in] Specifica un handle per l'icona da impostare come immagine del riquadro.

*Bupdate*<br/>
[in] Specifica se aggiornare immediatamente il contenuto del riquadro.

*hBmp*<br/>
[in] Specifica un handle per la bitmap da impostare come immagine del riquadro.

*ClrTransparent*<br/>
[in] Specifica il colore trasparente della bitmap indicata da *hBmp.*

### <a name="remarks"></a>Osservazioni

È possibile passare HICON o HBITMAP con il colore trasparente per impostare l'immagine del riquadro. Se non si desidera visualizzare più l'immagine, passare il valore NULL come handle dell'immagine.

Se è presente un'animazione in esecuzione che [CMFCStatusBar::SetPaneAnimation](#setpaneanimation) ha impostato, l'animazione verrà arrestata.

## <a name="cmfcstatusbarsetpaneinfo"></a><a name="setpaneinfo"></a>CMFCStatusBar::SetPaneInfo

```cpp
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *nID (ID)*<br/>
[in] *nStile*<br/>
[in] *CxWidth (larghezza incx)*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetpaneprogress"></a><a name="setpaneprogress"></a>CMFCStatusBar::SetPaneProgress

Impostare l'indicatore di stato corrente dell'indicatore di stato per il riquadro specificato.

```cpp
void SetPaneProgress(
    int nIndex,
    long nCurr,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro per il quale aggiornare l'indicatore di stato.

*nCurr*<br/>
[in] Specifica il valore corrente dell'indicatore di stato.

*Bupdate*<br/>
[in] Specifica se il riquadro deve essere aggiornato immediatamente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo quando si desidera aggiornare l'indicatore di stato per l'indicatore di stato nel riquadro specificato.

Per utilizzare questa funzione per il riquadro specificato, è necessario chiamare prima [CMFCStatusBar::EnablePaneProgressBar.To](#enablepaneprogressbar) use this function for the given pane, you must call CMFCStatusBar::EnablePaneProgressBar first.

## <a name="cmfcstatusbarsetpanestyle"></a><a name="setpanestyle"></a>CMFCStatusBar::SetPaneStyle

```cpp
void SetPaneStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *nStile*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetpanetext"></a><a name="setpanetext"></a>CMFCStatusBar::SetPaneText

```
virtual BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *nIndice*<br/>
[in] *lpszNewText (testo)*<br/>
[in] *bAggiornare*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcstatusbarsetpanetextcolor"></a><a name="setpanetextcolor"></a>CMFCStatusBar::SetPaneTextColor

Imposta il colore del testo del riquadro specificato.

```cpp
void SetPaneTextColor(
    int nIndex,
    COLORREF clrText=(COLORREF)-1,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Specifica l'indice del riquadro a cui si desidera assegnare un nuovo colore per il testo.

*clrText*<br/>
[in] Specifica il colore del testo.

*Bupdate*<br/>
[in] Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro fino a quando il riquadro non viene invalidato da un altro metodo.

## <a name="cmfcstatusbarsetpanewidth"></a><a name="setpanewidth"></a>CMFCStatusBar::SetPaneWidth

Impostare la larghezza del riquadro della barra di stato.

```cpp
void SetPaneWidth(
    int nIndex,
    int cx);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Indice del riquadro della barra di stato per il quale impostare una nuova larghezza.

*Cx*<br/>
[in] Nuova larghezza del riquadro della barra di stato, in pixel.

## <a name="cmfcstatusbarsettiptext"></a><a name="settiptext"></a>CMFCStatusBar::SetTipText

Impostare il testo della descrizione comando di un riquadro della barra di stato.

```cpp
void SetTipText(
    int nIndex,
    LPCTSTR pszTipText);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
[in] Indice del riquadro a cui si desidera assegnare il testo della descrizione comando.

*pszTipText (testo pszTipText)*<br/>
[in] Nuovo testo della descrizione comando.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CPane Class](../../mfc/reference/cpane-class.md)<br/>
[Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)
