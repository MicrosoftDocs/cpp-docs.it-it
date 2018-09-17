---
title: Classe CMFCStatusBar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7150789756273f9d70b3dd6e156c63d0649d0957
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45708188"
---
# <a name="cmfcstatusbar-class"></a>Classe CMFCStatusBar
Il `CMFCStatusBar` classe implementa una barra di stato simile al `CStatusBar` classe. Tuttavia, la classe `CMFCStatusBar` offre funzionalità non fornite dalla classe `CStatusBar` , ad esempio le capacità di visualizzare immagini, animazioni e indicatori di stato, oltre alla possibilità di rispondere al doppio clic del mouse. 

 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.   
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCStatusBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCStatusBar::CalcFixedLayout](#calcfixedlayout)|(Esegue l'override [cbasepane:: Calcfixedlayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CMFCStatusBar::CommandToIndex](#commandtoindex)||  
|[CMFCStatusBar::Create](#create)|Crea una barra di controllo e lo collega al [CPane](../../mfc/reference/cpane-class.md) oggetto. (Esegue l'override [cpane:: Create](../../mfc/reference/cpane-class.md#create).)|  
|[CMFCStatusBar::CreateEx](#createex)|Crea una barra di controllo e lo collega al [CPane](../../mfc/reference/cpane-class.md) oggetto. (Esegue l'override [cpane:: CreateEx](../../mfc/reference/cpane-class.md#createex).)|  
|[CMFCStatusBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un altro riquadro può essere inserito in modo dinamico tra questo riquadro e il frame padre. (Esegue l'override [cbasepane:: Doesallowdyninsertbefore](../../mfc/reference/cbasepane-class.md#doesallowdyninsertbefore).)|  
|[CMFCStatusBar::EnablePaneDoubleClick](#enablepanedoubleclick)|Abilita o disabilita la gestione dei mouse fa doppio clic sulla barra di stato.|  
|[CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar)|Visualizza un indicatore di stato nel riquadro specificato.|  
|[CMFCStatusBar::GetCount](#getcount)|Restituisce il numero di riquadri sulla barra di stato.|  
|[CMFCStatusBar::GetDrawExtendedArea](#getdrawextendedarea)||  
|[CMFCStatusBar::GetExtendedArea](#getextendedarea)||  
|[CMFCStatusBar::GetItemID](#getitemid)||  
|[CMFCStatusBar::GetItemRect](#getitemrect)||  
|[CMFCStatusBar::GetPaneInfo](#getpaneinfo)||  
|[CMFCStatusBar::GetPaneProgress](#getpaneprogress)||  
|[CMFCStatusBar::GetPaneStyle](#getpanestyle)|Restituisce lo stile del riquadro. (Esegue l'override [CBasePane::GetPaneStyle](../../mfc/reference/cbasepane-class.md#getpanestyle).)|  
|[CMFCStatusBar::GetPaneText](#getpanetext)||  
|[CMFCStatusBar::GetPaneWidth](#getpanewidth)|Restituisce la larghezza, in pixel, del riquadro della barra di stato specificato.|  
|[CMFCStatusBar::GetTipText](#gettiptext)|Restituisce il testo della descrizione comando per il riquadro specificato della barra di stato.|  
|[CMFCStatusBar::InvalidatePaneContent](#invalidatepanecontent)|Invalida il riquadro specificato e lo ridisegna il contenuto.|  
|[CMFCStatusBar::PreCreateWindow](#precreatewindow)|Chiamato dal framework prima della creazione della finestra di Windows associata a questo `CWnd` oggetto. (Esegue l'override [CWnd::PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow).)|  
|[CMFCStatusBar::SetDrawExtendedArea](#setdrawextendedarea)||  
|[CMFCStatusBar::SetIndicators](#setindicators)||  
|[CMFCStatusBar::SetPaneAnimation](#setpaneanimation)|Assegna un'animazione al riquadro specificato.|  
|[CMFCStatusBar::SetPaneBackgroundColor](#setpanebackgroundcolor)|Imposta il colore di sfondo per il riquadro specificato della barra di stato.|  
|[CMFCStatusBar::SetPaneIcon](#setpaneicon)|Imposta l'icona dell'indicatore per il riquadro specificato della barra di stato.|  
|[CMFCStatusBar::SetPaneInfo](#setpaneinfo)||  
|[CMFCStatusBar::SetPaneProgress](#setpaneprogress)|Imposta lo stato corrente dell'indicatore di stato per il riquadro specificato della barra di stato.|  
|[CMFCStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile del riquadro. (Esegue l'override [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).)|  
|[CMFCStatusBar::SetPaneText](#setpanetext)||  
|[CMFCStatusBar::SetPaneTextColor](#setpanetextcolor)|Imposta il colore del testo per il riquadro specificato della barra di stato.|  
|[CMFCStatusBar::SetPaneWidth](#setpanewidth)|Imposta la larghezza in pixel del riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetTipText](#settiptext)|Imposta il testo della descrizione comando per il riquadro specificato della barra di stato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCStatusBar::OnDrawPane](#ondrawpane)|Chiamato dal framework quando lo ridisegna il riquadro della barra di stato.|  
  
## <a name="remarks"></a>Note  
 Il diagramma seguente mostra una figura della barra di stato dalla [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md) dell'applicazione.  
  
 ![Esempio di CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "cmfcstatusbar")  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra le variabili locali che l'applicazione viene utilizzata per chiamare i vari metodi di `CMFCStatusBar` classe. Queste variabili vengono dichiarate nel StatusBarDemoView.h. La cornice principale viene dichiarata in MAINFRM, il documento viene dichiarato in StatusBarDemoDoc.h e la visualizzazione viene dichiarata in StatusBarDemoView.h. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_1.h)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come ottenere un riferimento a `CMFCStatusBar` oggetto introducendo il `GetStatusBar` MainFrm e quindi chiamare questo metodo dal metodo di `GetStatusBar` metodo StatusBarDemoView.h. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_2.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_3.h)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come chiamare diversi metodi nel `CMFCStatusBar` classe in StatusBarDemoView.cpp. Le costanti vengono dichiarate nel MainFrm. Nell'esempio viene illustrato come impostare l'icona, impostare il testo della descrizione comando del riquadro della barra di stato, visualizzare un indicatore di stato nel riquadro specificato, assegnare un'animazione al riquadro specificato, impostare il testo e la larghezza del riquadro della barra di stato e impostato l'indicatore di stato corrente del corso barra di SSE per il riquadro della barra di stato. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
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
  
##  <a name="calcfixedlayout"></a>  CMFCStatusBar::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
*bStretch*<br/>
[in] [in] *bHorz*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="commandtoindex"></a>  CMFCStatusBar::CommandToIndex  

  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nIDFind*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>  CMFCStatusBar::Create  

  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
*pParentWnd*<br/>
[in] [in] *dwStyle*  
 [in] *nID*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="createex"></a>  CMFCStatusBar::CreateEx  

  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
*pParentWnd*<br/>
[in] [in] *dwCtrlStyle*  
*dwStyle*<br/>
[in] [in] *nID*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="doesallowdyninsertbefore"></a>  CMFCStatusBar::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablepanedoubleclick"></a>  CMFCStatusBar::EnablePaneDoubleClick  
 Abilita o disabilita la gestione dei mouse fa doppio clic sulla barra di stato.  
  
```  
void EnablePaneDoubleClick(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bAttivare il*<br/>
[in] Se TRUE, abilita l'elaborazione del doppio clic del mouse. In caso contrario, disabilitare l'elaborazione del doppio clic del mouse.  
  
### <a name="remarks"></a>Note  
 Se la barra di stato è abilitata per l'elaborazione il doppio clic, Windows invia la notifica WM_COMMAND insieme a un ID di risorsa al proprietario della barra ogni volta che l'utente fa doppio clic sul riquadro barra di stato di stato.  
  
##  <a name="enablepaneprogressbar"></a>  CMFCStatusBar::EnablePaneProgressBar  
 Visualizzare un indicatore di stato nel riquadro specificato.  
  
```  
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
[in] Specifica l'indice del riquadro con indicatore di stato per abilitare.  
  
*NLA*<br/>
[in] Specifica il valore massimo per l'indicatore di stato.  
  
*bDisplayText*<br/>
[in] Specifica se la barra di avanzamento deve visualizzare il valore di stato di avanzamento corrente.  
  
*clrBar*<br/>
[in] Specifica il colore di sfondo della barra di stato di avanzamento.  
  
*clrBarDest*<br/>
[in] Specifica il colore secondario dello sfondo della barra di stato di avanzamento. Usare un valore diverso rispetto a *clrBar* da riempire con un colore in una sfumatura.  
  
*clrProgressText*<br/>
[in] Specifica il colore del testo della barra di stato di avanzamento.  
  
### <a name="remarks"></a>Note  
 Se si desidera disabilitare la chiamata di barra di stato di avanzamento `EnablePaneProgressBar` con *NLA* impostato su -1. Per impostazione predefinita *NLA* è impostato su 100. Pertanto, non è necessario alcun calcolo aggiuntive per visualizzare lo stato di avanzamento come percentuale.  
  
 È necessario passare valori diversi *clrBar* e *clrBarDest* in modo che il colore di sfondo dell'indicatore di stato Visualizza un colore in una sfumatura. .  
  
 Per impostare lo stato di avanzamento corrente, chiamare il [CMFCStatusBar::SetPaneProgress](#setpaneprogress) (metodo).  
  
##  <a name="getcount"></a>  CMFCStatusBar::GetCount  
 Recupera il numero di riquadri nella barra di stato.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riquadri nella barra di stato.  
  
##  <a name="getdrawextendedarea"></a>  CMFCStatusBar::GetDrawExtendedArea  

  
```  
BOOL GetDrawExtendedArea() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getextendedarea"></a>  CMFCStatusBar::GetExtendedArea  

  
```  
virtual BOOL GetExtendedArea(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rect*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getitemid"></a>  CMFCStatusBar::GetItemID  

  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nIndex*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getitemrect"></a>  CMFCStatusBar::GetItemRect  

  
```  
void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *lpRect*  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpaneinfo"></a>  CMFCStatusBar::GetPaneInfo  

  
```  
void GetPaneInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& cxWidth) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *nID*  
*nStyle*<br/>
[in] [in] *cxWidth*  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpaneprogress"></a>  CMFCStatusBar::GetPaneProgress  

  
```  
long GetPaneProgress(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nIndex*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanestyle"></a>  CMFCStatusBar::GetPaneStyle  

  
```  
UINT GetPaneStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nIndex*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanetext"></a>  CMFCStatusBar::GetPaneText  

  
```  
void GetPaneText(
    int nIndex,  
    CString& s) const;  
  
CString GetPaneText(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *s*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanewidth"></a>  CMFCStatusBar::GetPaneWidth  
 Recupera la larghezza del riquadro di una barra di stato.  
  
```  
int GetPaneWidth(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del riquadro della barra di stato che *nIndex* specifica; in caso contrario, zero se non esiste un riquadro barra di stato.  
  
##  <a name="gettiptext"></a>  CMFCStatusBar::GetTipText  
 Recuperare il testo della descrizione comando del riquadro della barra di stato.  
  
```  
CString GetTipText(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro per il quale recuperare testo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 Il testo della descrizione comando del riquadro barra di stato che *nIndex* specifica. In caso contrario, la stringa vuota, se non esiste un riquadro barra di stato per l'oggetto specificato *nIndex* o se il testo della descrizione comando è vuoto.  
  
##  <a name="invalidatepanecontent"></a>  CMFCStatusBar::InvalidatePaneContent  
 Riquadro della barra di stato di invalidare e ridisegnare il relativo contenuto.  
  
```  
void InvalidatePaneContent(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro il cui contenuto è da invalidare e ridisegnare.  
  
### <a name="remarks"></a>Note  
 Quando viene invalidata la barra di stato, è contrassegnata per il ridisegno. Ridisegna Windows quando la `UpdateWindow` metodo invia un messaggio WM_PAINT il `OnPaint` (metodo).  
  
##  <a name="ondrawpane"></a>  CMFCStatusBar::OnDrawPane  
 Ridisegnare il riquadro della barra di stato.  
  
```  
virtual void OnDrawPane(
    CDC* pDC,  
    CMFCStatusBarPaneInfo* pPane);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo per il disegno.  
  
*pPane*<br/>
[in] Un puntatore a un `CMFCStatusBarPaneInfo` struttura che contiene le informazioni sul riquadro ridisegnate.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita `OnDrawPane` ridisegna il riquadro usando il contesto di periferica *pDC* in base a stile e il contenuto del riquadro.  
  
 L'override del metodo in un `CMFCStatusBar`-derivata per personalizzare l'aspetto di un riquadro.  
  
##  <a name="precreatewindow"></a>  CMFCStatusBar::PreCreateWindow  

  
```  
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *cs*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdrawextendedarea"></a>  CMFCStatusBar::SetDrawExtendedArea  

  
```  
void SetDrawExtendedArea(BOOL bSet = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bSet*  
  
### <a name="remarks"></a>Note  
  
##  <a name="setindicators"></a>  CMFCStatusBar::SetIndicators  

  
```  
BOOL SetIndicators(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### <a name="parameters"></a>Parametri  
*lpIDArray*<br/>
[in] [in] *nIDCount*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpaneanimation"></a>  CMFCStatusBar::SetPaneAnimation  
 Assegna un'animazione al riquadro specificato.  
  
```  
void SetPaneAnimation(
    int nIndex,  
    HIMAGELIST hImageList,  
    UINT nFrameRate=500,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro in cui si desidera assegnare a esso un'animazione.  
  
*hImageList*<br/>
[in] Specifica un handle per l'elenco di immagini che contiene i frame di animazione.  
  
*nFrameRate*<br/>
[in] Specifica la frequenza dei fotogrammi, in millisecondi, per l'animazione.  
  
*bAggiornamento*<br/>
[in] Se TRUE, è possibile aggiornare immediatamente il contenuto del riquadro. In caso contrario, il contenuto del riquadro viene aggiornato quando che venga invalidata.  
  
### <a name="remarks"></a>Note  
 Se si desidera disabilitare l'animazione corrente, chiamare `SetPaneAnimation` con `hImageList` impostato su NULL.  
  
##  <a name="setpanebackgroundcolor"></a>  CMFCStatusBar::SetPaneBackgroundColor  
 Imposta il colore di sfondo del riquadro della barra di stato.  
  
```  
void SetPaneBackgroundColor(
    int nIndex,  
    COLORREF clrBackground=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro per cui impostare un nuovo colore di sfondo.  
  
*clrBackground*<br/>
[in] Specifica il nuovo colore di sfondo.  
  
*bAggiornamento*<br/>
[in] Se TRUE, è possibile aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro fino a quando il riquadro viene invalidato da un altro metodo.  
  
##  <a name="setpaneicon"></a>  CMFCStatusBar::SetPaneIcon  
 Impostare l'icona del riquadro della barra di stato.  
  
```  
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
[in] Specifica un handle per l'icona da impostare come l'immagine del riquadro.  
  
*bAggiornamento*<br/>
[in] Specifica se aggiornare immediatamente il contenuto del riquadro.  
  
*hBmp*<br/>
[in] Specifica un handle alla bitmap da impostare come l'immagine del riquadro.  
  
*clrTransparent*<br/>
[in] Specifica il colore trasparente dell'immagine bitmap che il *hBmp* indica.  
  
### <a name="remarks"></a>Note  
 È possibile passare HICON o HBITMAP con il colore trasparente per impostare l'immagine del riquadro. Se non si desidera visualizzare l'immagine più, passare il valore NULL come handle dell'immagine.  
  
 Se è presente qualsiasi animazione in esecuzione che [CMFCStatusBar::SetPaneAnimation](#setpaneanimation) è impostata, l'animazione verrà arrestata.  
  
##  <a name="setpaneinfo"></a>  CMFCStatusBar::SetPaneInfo  

  
```  
void SetPaneInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int cxWidth);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *nID*  
*nStyle*<br/>
[in] [in] *cxWidth*  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpaneprogress"></a>  CMFCStatusBar::SetPaneProgress  
 Impostare l'indicatore di stato corrente dell'indicatore di stato per il riquadro specificato.  
  
```  
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
  
*bAggiornamento*<br/>
[in] Specifica se il riquadro deve essere aggiornato immediatamente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando si desidera aggiornare l'indicatore di stato per l'indicatore di stato nel riquadro specificato.  
  
 Per usare questa funzione per il riquadro specifico, è necessario chiamare [CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar) prima.  
  
##  <a name="setpanestyle"></a>  CMFCStatusBar::SetPaneStyle  

  
```  
void SetPaneStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *nStyle*  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanetext"></a>  CMFCStatusBar::SetPaneText  

  
```  
virtual BOOL SetPaneText(
    int nIndex,  
    LPCTSTR lpszNewText,  
    BOOL bUpdate = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] [in] *lpszNewText*  
 [in] *baggiornamento*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanetextcolor"></a>  CMFCStatusBar::SetPaneTextColor  
 Imposta il colore del testo del riquadro specificato.  
  
```  
void SetPaneTextColor(
    int nIndex,  
    COLORREF clrText=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Specifica l'indice del riquadro in cui si desidera assegnare un nuovo colore del testo.  
  
*clrText*<br/>
[in] Specifica il colore del testo.  
  
*bAggiornamento*<br/>
[in] Se TRUE, è possibile aggiornare immediatamente il contenuto del riquadro. In caso contrario, non aggiornare il contenuto del riquadro fino a quando il riquadro viene invalidato da un altro metodo.  
  
##  <a name="setpanewidth"></a>  CMFCStatusBar::SetPaneWidth  
 Impostare la larghezza del riquadro della barra di stato.  
  
```  
void SetPaneWidth(
    int nIndex,  
    int cx);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] Indice del riquadro della barra di stato per cui impostare una nuova larghezza.  
  
*CX*<br/>
[in] La nuova larghezza del riquadro barra dello stato, in pixel.  
  
##  <a name="settiptext"></a>  CMFCStatusBar::SetTipText  
 Impostare il testo della descrizione comando di un riquadro barra di stato.  
  
```  
void SetTipText(
    int nIndex,  
    LPCTSTR pszTipText);
```  
  
### <a name="parameters"></a>Parametri  
*nIndex*<br/>
[in] L'indice del riquadro in cui si desidera assegnare il testo della descrizione comando.  
  
*pszTipText*<br/>
[in] Il nuovo testo della descrizione comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)   
 [Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)
