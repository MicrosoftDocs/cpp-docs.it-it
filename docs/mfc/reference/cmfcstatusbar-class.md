---
description: 'Altre informazioni su: classe CMFCStatusBar'
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
ms.openlocfilehash: 79ba7c749a73406893173d7486fd5df208a37b83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307080"
---
# <a name="cmfcstatusbar-class"></a>Classe CMFCStatusBar

La `CMFCStatusBar` classe implementa una barra di stato simile alla `CStatusBar` classe. Tuttavia, la classe `CMFCStatusBar` offre funzionalità non fornite dalla classe `CStatusBar` , ad esempio le capacità di visualizzare immagini, animazioni e indicatori di stato, oltre alla possibilità di rispondere al doppio clic del mouse.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCStatusBar : public CPane
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCStatusBar:: CalcFixedLayout](#calcfixedlayout)|Esegue l'override di [CBasePane:: CalcFixedLayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).|
|[CMFCStatusBar:: CommandToIndex](#commandtoindex)||
|[CMFCStatusBar:: create](#create)|Crea una barra di controllo e la collega all'oggetto [CPane](../../mfc/reference/cpane-class.md) . Esegue l'override di [CPane:: create](../../mfc/reference/cpane-class.md#create).|
|[CMFCStatusBar:: CreateEx](#createex)|Crea una barra di controllo e la collega all'oggetto [CPane](../../mfc/reference/cpane-class.md) . Esegue l'override di [CPane:: CreateEx](../../mfc/reference/cpane-class.md#createex).|
|[CMFCStatusBar::D oesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un altro riquadro può essere inserito dinamicamente tra questo riquadro e il frame padre. Esegue l'override di [CBasePane::D oesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).|
|[CMFCStatusBar:: EnablePaneDoubleClick](#enablepanedoubleclick)|Abilita o Disabilita la gestione dei doppio clic del mouse sulla barra di stato.|
|[CMFCStatusBar:: EnablePaneProgressBar](#enablepaneprogressbar)|Consente di visualizzare un indicatore di stato nel riquadro specificato.|
|[CMFCStatusBar:: GetCount](#getcount)|Restituisce il numero di riquadri sulla barra di stato.|
|[CMFCStatusBar:: GetDrawExtendedArea](#getdrawextendedarea)||
|[CMFCStatusBar:: GetExtendedArea](#getextendedarea)||
|[CMFCStatusBar:: GetItemID](#getitemid)||
|[CMFCStatusBar:: GetItemRect](#getitemrect)||
|[CMFCStatusBar:: GetPaneInfo](#getpaneinfo)||
|[CMFCStatusBar:: GetPaneProgress](#getpaneprogress)||
|[CMFCStatusBar:: GetPaneStyle](#getpanestyle)|Restituisce lo stile del riquadro. Esegue l'override di [CBasePane:: GetPaneStyle](../../mfc/reference/cbasepane-class.md#getpanestyle).|
|[CMFCStatusBar:: GetPaneText](#getpanetext)||
|[CMFCStatusBar:: GetPaneWidth](#getpanewidth)|Restituisce la larghezza, in pixel, del riquadro specificato della barra di stato.|
|[CMFCStatusBar:: GetTipText](#gettiptext)|Restituisce il testo della descrizione comando per il riquadro specificato della barra di stato.|
|[CMFCStatusBar:: InvalidatePaneContent](#invalidatepanecontent)|Invalida il riquadro specificato e ne ridisegni il contenuto.|
|[CMFCStatusBar::P reCreateWindow](#precreatewindow)|Chiamato dal Framework prima della creazione della finestra di Windows collegata a questo `CWnd` oggetto. (Esegue l'override di [CWnd::P recreatewindow](../../mfc/reference/cwnd-class.md#precreatewindow)).|
|[CMFCStatusBar:: SetDrawExtendedArea](#setdrawextendedarea)||
|[CMFCStatusBar:: sespies](#setindicators)||
|[CMFCStatusBar:: SetPaneAnimation](#setpaneanimation)|Assegna un'animazione al riquadro specificato.|
|[CMFCStatusBar:: SetPaneBackgroundColor](#setpanebackgroundcolor)|Imposta il colore di sfondo per il riquadro specificato della barra di stato.|
|[CMFCStatusBar:: SetPaneIcon](#setpaneicon)|Imposta l'icona dell'indicatore per il riquadro specificato della barra di stato.|
|[CMFCStatusBar:: SetPaneInfo](#setpaneinfo)||
|[CMFCStatusBar:: SetPaneProgress](#setpaneprogress)|Imposta lo stato di avanzamento corrente dell'indicatore di stato per il riquadro specificato della barra di stato.|
|[CMFCStatusBar:: SetPaneStyle](#setpanestyle)|Imposta lo stile del riquadro. Esegue l'override di [CBasePane:: SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).|
|[CMFCStatusBar:: SetPaneText](#setpanetext)||
|[CMFCStatusBar:: SetPaneTextColor](#setpanetextcolor)|Imposta il colore del testo per il riquadro specificato della barra di stato.|
|[CMFCStatusBar:: SetPaneWidth](#setpanewidth)|Imposta la larghezza in pixel del riquadro specificato della barra di stato.|
|[CMFCStatusBar:: SetTipText](#settiptext)|Imposta il testo della descrizione comando per il riquadro specificato della barra di stato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCStatusBar:: OnDrawPane](#ondrawpane)|Chiamata eseguita dal framework quando ridisegnato il riquadro della barra di stato.|

## <a name="remarks"></a>Commenti

Il diagramma seguente mostra una figura della barra di stato dall'applicazione di [esempio demo della barra di stato](../../overview/visual-cpp-samples.md) .

![Esempio di CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "Esempio di CMFCStatusBar")

## <a name="examples"></a>Esempio

Nell'esempio seguente vengono illustrate le variabili locali utilizzate dall'applicazione per chiamare vari metodi nella `CMFCStatusBar` classe. Queste variabili vengono dichiarate in StatusBarDemoView. h. Il frame principale viene dichiarato in MainFrm. h, il documento viene dichiarato in StatusBarDemoDoc. h e la vista viene dichiarata in StatusBarDemoView. h. Questo frammento di codice fa parte dell' [esempio demo della barra di stato](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_1.h)]

Nell'esempio seguente viene illustrato come ottenere un riferimento all' `CMFCStatusBar` oggetto introducendo il `GetStatusBar` metodo in MainFrm. h e chiamando quindi questo metodo dal `GetStatusBar` metodo in StatusBarDemoView. h. Questo frammento di codice fa parte dell' [esempio demo della barra di stato](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_2.h)]
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_3.h)]

Nell'esempio seguente viene illustrato come chiamare diversi metodi della `CMFCStatusBar` classe in StatusBarDemoView. cpp. Le costanti sono dichiarate in MainFrm. h. Nell'esempio viene illustrato come impostare l'icona, impostare il testo della descrizione comando del riquadro della barra di stato, visualizzare un indicatore di stato nel riquadro specificato, assegnare un'animazione al riquadro specificato, impostare il testo e la larghezza del riquadro della barra di stato, quindi impostare l'indicatore di stato corrente della barra di stato per il riquadro della barra di stato. Questo frammento di codice fa parte dell' [esempio demo della barra di stato](../../overview/visual-cpp-samples.md).

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

**Intestazione:** afxstatusbar. h

## <a name="cmfcstatusbarcalcfixedlayout"></a><a name="calcfixedlayout"></a> CMFCStatusBar:: CalcFixedLayout

```
virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

in *bStretch*<br/>
in *bHorz*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarcommandtoindex"></a><a name="commandtoindex"></a> CMFCStatusBar:: CommandToIndex

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

in *nIDFind*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarcreate"></a><a name="create"></a> CMFCStatusBar:: create

```
BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

in *pParentWnd*<br/>
in *dwStyle*<br/>
in *NID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarcreateex"></a><a name="createex"></a> CMFCStatusBar:: CreateEx

```
BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

in *pParentWnd*<br/>
in *dwCtrlStyle*<br/>
in *dwStyle*<br/>
in *NID*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a> CMFCStatusBar::D oesAllowDynInsertBefore

```
virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarenablepanedoubleclick"></a><a name="enablepanedoubleclick"></a> CMFCStatusBar:: EnablePaneDoubleClick

Abilita o Disabilita la gestione dei doppio clic del mouse sulla barra di stato.

```cpp
void EnablePaneDoubleClick(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Se TRUE, abilitare l'elaborazione del doppio clic del mouse. In caso contrario, disabilitare l'elaborazione del doppio clic del mouse.

### <a name="remarks"></a>Commenti

Se la barra di stato è abilitata per elaborare doppi clic, Windows invia la notifica WM_COMMAND insieme a un ID di risorsa al proprietario della barra di stato ogni volta che l'utente fa doppio clic sul riquadro della barra di stato.

## <a name="cmfcstatusbarenablepaneprogressbar"></a><a name="enablepaneprogressbar"></a> CMFCStatusBar:: EnablePaneProgressBar

Visualizza un indicatore di stato nel riquadro specificato.

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
in Specifica l'indice del riquadro di cui abilitare l'indicatore di stato.

*nTotal*<br/>
in Specifica il valore massimo per l'indicatore di stato.

*bDisplayText*<br/>
in Specifica se nell'indicatore di stato deve essere visualizzato il valore di stato corrente.

*clrBar*<br/>
in Specifica il colore di sfondo dell'indicatore di stato.

*clrBarDest*<br/>
in Specifica il colore secondario dello sfondo dell'indicatore di stato. Usare un valore diverso da *clrBar* per riempire un colore in una sfumatura.

*clrProgressText*<br/>
in Specifica il colore del testo dell'indicatore di stato.

### <a name="remarks"></a>Commenti

Se si desidera disabilitare la chiamata all'indicatore di stato `EnablePaneProgressBar` con *nTotal* impostato su-1. Per impostazione predefinita, *nTotal* è impostato su 100. Non sono pertanto necessari calcoli aggiuntivi per visualizzare lo stato di avanzamento come percentuale.

È necessario passare valori diversi per *clrBar* e *clrBarDest* in modo che il colore di sfondo dell'indicatore di stato visualizzi un colore mescolato in una sfumatura. .

Per impostare lo stato corrente, chiamare il metodo [CMFCStatusBar:: SetPaneProgress](#setpaneprogress) .

## <a name="cmfcstatusbargetcount"></a><a name="getcount"></a> CMFCStatusBar:: GetCount

Recupera il numero di riquadri nella barra di stato.

```
int GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di riquadri nella barra di stato.

## <a name="cmfcstatusbargetdrawextendedarea"></a><a name="getdrawextendedarea"></a> CMFCStatusBar:: GetDrawExtendedArea

```
BOOL GetDrawExtendedArea() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetextendedarea"></a><a name="getextendedarea"></a> CMFCStatusBar:: GetExtendedArea

```
virtual BOOL GetExtendedArea(CRect& rect) const;
```

### <a name="parameters"></a>Parametri

[in] *rect*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetitemid"></a><a name="getitemid"></a> CMFCStatusBar:: GetItemID

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetitemrect"></a><a name="getitemrect"></a> CMFCStatusBar:: GetItemRect

```cpp
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *lpRect*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetpaneinfo"></a><a name="getpaneinfo"></a> CMFCStatusBar:: GetPaneInfo

```cpp
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *NID*<br/>
in *nStyle*<br/>
in *cxWidth*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetpaneprogress"></a><a name="getpaneprogress"></a> CMFCStatusBar:: GetPaneProgress

```
long GetPaneProgress(int nIndex) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetpanestyle"></a><a name="getpanestyle"></a> CMFCStatusBar:: GetPaneStyle

```
UINT GetPaneStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetpanetext"></a><a name="getpanetext"></a> CMFCStatusBar:: GetPaneText

```cpp
void GetPaneText(
    int nIndex,
    CString& s) const;

CString GetPaneText(int nIndex) const;
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *s*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbargetpanewidth"></a><a name="getpanewidth"></a> CMFCStatusBar:: GetPaneWidth

Recupera la larghezza del riquadro di una barra di stato.

```
int GetPaneWidth(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro della barra di stato.

### <a name="return-value"></a>Valore restituito

Larghezza del riquadro della barra di stato specificato da *nIndex* ; in caso contrario, zero se un riquadro della barra di stato non esiste.

## <a name="cmfcstatusbargettiptext"></a><a name="gettiptext"></a> CMFCStatusBar:: GetTipText

Recuperare il testo della descrizione comando di un riquadro della barra di stato.

```
CString GetTipText(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro per il quale recuperare il testo della descrizione comando.

### <a name="return-value"></a>Valore restituito

Testo della descrizione comando del riquadro della barra di stato specificato da *nIndex* . In caso contrario, la stringa vuota se non esiste un riquadro della barra di stato per il *nIndex* specificato o se il testo della descrizione comando è vuoto.

## <a name="cmfcstatusbarinvalidatepanecontent"></a><a name="invalidatepanecontent"></a> CMFCStatusBar:: InvalidatePaneContent

Invalida il riquadro della barra di stato e ne ridisegni il contenuto.

```cpp
void InvalidatePaneContent(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro il cui contenuto deve essere invalidato e ridisegnato.

### <a name="remarks"></a>Commenti

Quando la barra di stato viene invalidata, viene contrassegnata per il ridisegno. Windows lo ridisegnato quando il `UpdateWindow` metodo invia un messaggio di WM_PAINT al `OnPaint` metodo.

## <a name="cmfcstatusbarondrawpane"></a><a name="ondrawpane"></a> CMFCStatusBar:: OnDrawPane

Ricreare il riquadro della barra di stato.

```
virtual void OnDrawPane(
    CDC* pDC,
    CMFCStatusBarPaneInfo* pPane);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo per il disegno.

*pPane*<br/>
in Puntatore a una `CMFCStatusBarPaneInfo` struttura che contiene le informazioni sul riquadro da ricreare.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `OnDrawPane` il riquadro viene ridisegnato usando il *PDC* del contesto di dispositivo in base allo stile e al contenuto del riquadro.

Eseguire l'override di questo metodo in una `CMFCStatusBar` classe derivata da per personalizzare l'aspetto di un riquadro.

## <a name="cmfcstatusbarprecreatewindow"></a><a name="precreatewindow"></a> CMFCStatusBar::P reCreateWindow

```
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```

### <a name="parameters"></a>Parametri

in *CS*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetdrawextendedarea"></a><a name="setdrawextendedarea"></a> CMFCStatusBar:: SetDrawExtendedArea

```cpp
void SetDrawExtendedArea(BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

in *bSet*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetindicators"></a><a name="setindicators"></a> CMFCStatusBar:: sespies

```
BOOL SetIndicators(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

in *lpIDArray*<br/>
in *nIDCount*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetpaneanimation"></a><a name="setpaneanimation"></a> CMFCStatusBar:: SetPaneAnimation

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
in Specifica l'indice del riquadro a cui si desidera assegnare un'animazione.

*hImageList*<br/>
in Specifica un handle per l'elenco di immagini che include i frame di animazione.

*nFrameRate*<br/>
in Specifica la frequenza dei fotogrammi, in millisecondi, per l'animazione.

*bAggiornamento*<br/>
in Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, il contenuto del riquadro viene aggiornato quando viene invalidato.

### <a name="remarks"></a>Commenti

Se si desidera disabilitare l'animazione corrente, chiamare `SetPaneAnimation` con `hImageList` impostato su null.

## <a name="cmfcstatusbarsetpanebackgroundcolor"></a><a name="setpanebackgroundcolor"></a> CMFCStatusBar:: SetPaneBackgroundColor

Imposta il colore di sfondo del riquadro della barra di stato.

```cpp
void SetPaneBackgroundColor(
    int nIndex,
    COLORREF clrBackground=(COLORREF)-1,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro per il quale impostare un nuovo colore di sfondo.

*clrBackground*<br/>
[in] Specifica il nuovo colore di sfondo.

*bAggiornamento*<br/>
in Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro finché il riquadro non viene invalidato da un altro metodo.

## <a name="cmfcstatusbarsetpaneicon"></a><a name="setpaneicon"></a> CMFCStatusBar:: SetPaneIcon

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
in Specifica l'indice del riquadro per il quale impostare l'immagine.

*hIcon*<br/>
in Specifica un handle per l'icona da impostare come immagine del riquadro.

*bAggiornamento*<br/>
in Specifica se aggiornare immediatamente il contenuto del riquadro.

*hBmp*<br/>
in Specifica un handle per la bitmap da impostare come immagine del riquadro.

*clrTransparent*<br/>
in Specifica il colore trasparente della bitmap indicata da *hbmp* .

### <a name="remarks"></a>Commenti

Per impostare l'immagine del riquadro, è possibile passare HICON o HBITMAP insieme al colore trasparente. Se non si desidera visualizzare più l'immagine, passare il valore NULL come handle di immagine.

Se è presente un'animazione in esecuzione che [CMFCStatusBar:: SetPaneAnimation](#setpaneanimation) ha impostato, l'animazione verrà arrestata.

## <a name="cmfcstatusbarsetpaneinfo"></a><a name="setpaneinfo"></a> CMFCStatusBar:: SetPaneInfo

```cpp
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *NID*<br/>
in *nStyle*<br/>
in *cxWidth*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetpaneprogress"></a><a name="setpaneprogress"></a> CMFCStatusBar:: SetPaneProgress

Impostare l'indicatore di stato corrente della barra di stato per il riquadro specificato.

```cpp
void SetPaneProgress(
    int nIndex,
    long nCurr,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro per il quale aggiornare l'indicatore di stato.

*nCurr*<br/>
in Specifica il valore corrente dell'indicatore di stato.

*bAggiornamento*<br/>
in Specifica se il riquadro deve essere aggiornato immediatamente.

### <a name="remarks"></a>Commenti

Chiamare questo metodo quando si desidera aggiornare l'indicatore di stato per la barra di stato nel riquadro specificato.

Per usare questa funzione per il riquadro specificato, è prima necessario chiamare [CMFCStatusBar:: EnablePaneProgressBar](#enablepaneprogressbar) .

## <a name="cmfcstatusbarsetpanestyle"></a><a name="setpanestyle"></a> CMFCStatusBar:: SetPaneStyle

```cpp
void SetPaneStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *nStyle*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetpanetext"></a><a name="setpanetext"></a> CMFCStatusBar:: SetPaneText

```
virtual BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### <a name="parameters"></a>Parametri

in *nIndex*<br/>
in *lpszNewText*<br/>
in *baggiornamento*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcstatusbarsetpanetextcolor"></a><a name="setpanetextcolor"></a> CMFCStatusBar:: SetPaneTextColor

Imposta il colore del testo del riquadro specificato.

```cpp
void SetPaneTextColor(
    int nIndex,
    COLORREF clrText=(COLORREF)-1,
    BOOL bUpdate=TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Specifica l'indice del riquadro al quale si desidera assegnare un nuovo colore del testo.

*clrText*<br/>
in Specifica il colore del testo.

*bAggiornamento*<br/>
in Se TRUE, aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro finché il riquadro non viene invalidato da un altro metodo.

## <a name="cmfcstatusbarsetpanewidth"></a><a name="setpanewidth"></a> CMFCStatusBar:: SetPaneWidth

Imposta la larghezza del riquadro della barra di stato.

```cpp
void SetPaneWidth(
    int nIndex,
    int cx);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Indice del riquadro della barra di stato per il quale impostare una nuova larghezza.

*CX*<br/>
in Nuova larghezza del riquadro della barra di stato, in pixel.

## <a name="cmfcstatusbarsettiptext"></a><a name="settiptext"></a> CMFCStatusBar:: SetTipText

Imposta il testo della descrizione comando di un riquadro della barra di stato.

```cpp
void SetTipText(
    int nIndex,
    LPCTSTR pszTipText);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
in Indice del riquadro al quale si desidera assegnare il testo della descrizione comando.

*pszTipText*<br/>
in Nuovo testo della descrizione comando.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPane](../../mfc/reference/cpane-class.md)<br/>
[Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)
