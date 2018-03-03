---
title: Classe di CMFCStatusBar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a235b88b676f7cf643a878e9a06408c87b20bcba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcstatusbar-class"></a>Classe di CMFCStatusBar
Il `CMFCStatusBar` implementa una barra di stato simile per la `CStatusBar` classe. Tuttavia, la classe `CMFCStatusBar` offre funzionalità non fornite dalla classe `CStatusBar` , ad esempio le capacità di visualizzare immagini, animazioni e indicatori di stato, oltre alla possibilità di rispondere al doppio clic del mouse. 

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]   
  
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
|[CMFCStatusBar::EnablePaneDoubleClick](#enablepanedoubleclick)|Abilita o disabilita la gestione del mouse fa doppio clic sulla barra di stato.|  
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
|[CMFCStatusBar::GetTipText](#gettiptext)|Restituisce il testo della descrizione comando per il riquadro della barra di stato specificato.|  
|[CMFCStatusBar::InvalidatePaneContent](#invalidatepanecontent)|Invalida il riquadro specificato e ridisegna il contenuto.|  
|[CMFCStatusBar::PreCreateWindow](#precreatewindow)|Chiamato dal framework prima della creazione della finestra di Windows associata a questo `CWnd` oggetto. (Esegue l'override [CWnd::PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow).)|  
|[CMFCStatusBar::SetDrawExtendedArea](#setdrawextendedarea)||  
|[CMFCStatusBar::SetIndicators](#setindicators)||  
|[CMFCStatusBar::SetPaneAnimation](#setpaneanimation)|Assegna un'animazione al riquadro specificato.|  
|[CMFCStatusBar::SetPaneBackgroundColor](#setpanebackgroundcolor)|Imposta il colore di sfondo per il riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetPaneIcon](#setpaneicon)|Imposta l'icona dell'indicatore per il riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetPaneInfo](#setpaneinfo)||  
|[CMFCStatusBar::SetPaneProgress](#setpaneprogress)|Imposta lo stato corrente dell'indicatore di stato per il riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile del riquadro. (Esegue l'override [CBasePane::SetPaneStyle](../../mfc/reference/cbasepane-class.md#setpanestyle).)|  
|[CMFCStatusBar::SetPaneText](#setpanetext)||  
|[CMFCStatusBar::SetPaneTextColor](#setpanetextcolor)|Imposta il colore del testo per il riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetPaneWidth](#setpanewidth)|Imposta la larghezza in pixel, del riquadro della barra di stato specificato.|  
|[CMFCStatusBar::SetTipText](#settiptext)|Imposta il testo della descrizione comando per il riquadro della barra di stato specificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCStatusBar::OnDrawPane](#ondrawpane)|Chiamato dal framework quando ridisegna il riquadro della barra di stato.|  
  
## <a name="remarks"></a>Note  
 Il diagramma seguente mostra una figura della barra di stato da [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md) dell'applicazione.  
  
 ![Esempio di CMFCStatusBar](../../mfc/reference/media/cmfcstatusbar.png "cmfcstatusbar")  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra le variabili locali che l'applicazione utilizza per chiamare metodi diversi di `CMFCStatusBar` classe. Queste variabili vengono dichiarate in StatusBarDemoView.h. La cornice principale è dichiarata in MAINFRM, il documento viene dichiarato in StatusBarDemoDoc.h e la vista viene dichiarata in StatusBarDemoView.h. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#9](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_1.h)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come ottenere un riferimento a `CMFCStatusBar` oggetto introducendo il `GetStatusBar` metodo MainFrm e quindi chiamare questo metodo il `GetStatusBar` metodo StatusBarDemoView.h. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#7](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_2.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#8](../../mfc/reference/codesnippet/cpp/cmfcstatusbar-class_3.h)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come chiamare metodi diversi di `CMFCStatusBar` classe StatusBarDemoView.cpp. Le costanti vengono dichiarate in MainFrm. Nell'esempio viene illustrato come impostare l'icona, impostare il testo della descrizione comando del riquadro della barra di stato, visualizzare un indicatore di stato nel riquadro specificato, assegnare un'animazione al riquadro specificato, impostare il testo e la larghezza del riquadro della barra di stato e impostare l'indicatore di stato corrente del processo di batch barra di accesso per il riquadro della barra di stato. Questo frammento di codice fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
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
  
##  <a name="calcfixedlayout"></a>CMFCStatusBar::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bStretch`  
 [in] `bHorz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="commandtoindex"></a>CMFCStatusBar::CommandToIndex  

  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIDFind`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>CMFCStatusBar::Create  

  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 [in] `dwStyle`  
 [in] `nID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="createex"></a>CMFCStatusBar::CreateEx  

  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 [in] `dwCtrlStyle`  
 [in] `dwStyle`  
 [in] `nID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="doesallowdyninsertbefore"></a>CMFCStatusBar::DoesAllowDynInsertBefore  

  
```  
virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablepanedoubleclick"></a>CMFCStatusBar::EnablePaneDoubleClick  
 Abilita o disabilita la gestione del mouse fa doppio clic sulla barra di stato.  
  
```  
void EnablePaneDoubleClick(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Se `TRUE`, abilitare l'elaborazione del mouse fare doppio clic su. In caso contrario, disabilitare l'elaborazione di doppio clic del mouse.  
  
### <a name="remarks"></a>Note  
 Se la barra di stato è abilitata per elaborare il doppio clic, Windows invia i `WM_COMMAND` notifica con un ID di risorsa al proprietario dello stato della barra ogni volta che l'utente fa doppio clic sul riquadro barra di stato.  
  
##  <a name="enablepaneprogressbar"></a>CMFCStatusBar::EnablePaneProgressBar  
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
 [in] `nIndex`  
 Specifica l'indice del riquadro per abilitare il cui indicatore di stato.  
  
 [in] `nTotal`  
 Specifica il valore massimo per l'indicatore di stato.  
  
 [in] `bDisplayText`  
 Specifica se l'indicatore di stato deve essere visualizzato il valore di stato di avanzamento corrente.  
  
 [in] `clrBar`  
 Specifica il colore di sfondo della barra di stato.  
  
 [in] `clrBarDest`  
 Specifica il colore secondario di sfondo della barra di stato di avanzamento. Utilizzare un valore diverso rispetto a `clrBar` per immettere un colore di blend in una sfumatura.  
  
 [in] `clrProgressText`  
 Specifica il colore del testo della barra di stato.  
  
### <a name="remarks"></a>Note  
 Se si desidera disabilitare la chiamata di barra di stato di avanzamento `EnablePaneProgressBar` con `nTotal` impostato su -1. Per impostazione predefinita `nTotal` è impostato su 100. Pertanto, non è necessario alcun calcolo aggiuntive per visualizzare lo stato di avanzamento come percentuale.  
  
 È necessario passare valori diversi `clrBar` e `clrBarDest` in modo che il colore di sfondo della barra di stato consente di visualizzare un colore di blend in una sfumatura. .  
  
 Per impostare lo stato corrente, chiamare il [CMFCStatusBar::SetPaneProgress](#setpaneprogress) metodo.  
  
##  <a name="getcount"></a>CMFCStatusBar::GetCount  
 Recupera il numero di riquadri nella barra di stato.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riquadri nella barra di stato.  
  
##  <a name="getdrawextendedarea"></a>CMFCStatusBar::GetDrawExtendedArea  

  
```  
BOOL GetDrawExtendedArea() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getextendedarea"></a>CMFCStatusBar::GetExtendedArea  

  
```  
virtual BOOL GetExtendedArea(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getitemid"></a>CMFCStatusBar::GetItemID  

  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getitemrect"></a>CMFCStatusBar::GetItemRect  

  
```  
void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `lpRect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpaneinfo"></a>CMFCStatusBar::GetPaneInfo  

  
```  
void GetPaneInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& cxWidth) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `nID`  
 [in] `nStyle`  
 [in] `cxWidth`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpaneprogress"></a>CMFCStatusBar::GetPaneProgress  

  
```  
long GetPaneProgress(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanestyle"></a>CMFCStatusBar::GetPaneStyle  

  
```  
UINT GetPaneStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanetext"></a>CMFCStatusBar::GetPaneText  

  
```  
void GetPaneText(
    int nIndex,  
    CString& s) const;  
  
CString GetPaneText(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `s`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanewidth"></a>CMFCStatusBar::GetPaneWidth  
 Recupera la larghezza del riquadro della barra di stato.  
  
```  
int GetPaneWidth(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del riquadro della barra di stato che `nIndex` specifica; in caso contrario, zero se non esiste un riquadro barra di stato.  
  
##  <a name="gettiptext"></a>CMFCStatusBar::GetTipText  
 Recuperare il testo della descrizione comando del riquadro della barra di stato.  
  
```  
CString GetTipText(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro per il quale recuperare testo della descrizione comando.  
  
### <a name="return-value"></a>Valore restituito  
 Il testo della descrizione comando del riquadro barra di stato che `nIndex` specifica. In caso contrario, la stringa vuota, se per l'oggetto specificato non esiste un riquadro della barra di stato `nIndex` o se il testo della descrizione comando è vuoto.  
  
##  <a name="invalidatepanecontent"></a>CMFCStatusBar::InvalidatePaneContent  
 Riquadro della barra di stato di invalidare e ridisegnare il relativo contenuto.  
  
```  
void InvalidatePaneContent(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro il cui contenuto è e ridisegnato.  
  
### <a name="remarks"></a>Note  
 Quando viene invalidata la barra di stato, è contrassegnato per il disegno. Ridisegna Windows quando il `UpdateWindow` metodo invia un `WM_PAINT` messaggio per il `OnPaint` metodo.  
  
##  <a name="ondrawpane"></a>CMFCStatusBar::OnDrawPane  
 Il riquadro della barra di stato di visualizzazione.  
  
```  
virtual void OnDrawPane(
    CDC* pDC,  
    CMFCStatusBarPaneInfo* pPane);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il disegno.  
  
 [in] `pPane`  
 Un puntatore a un `CMFCStatusBarPaneInfo` struttura che contiene le informazioni sul riquadro da ridisegnare.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `OnDrawPane` ridisegna riquadro utilizzando il contesto di dispositivo `pDC` in base a stile e il contenuto del riquadro.  
  
 Eseguire l'override di questo metodo in un `CMFCStatusBar`-derivata per personalizzare l'aspetto di un riquadro.  
  
##  <a name="precreatewindow"></a>CMFCStatusBar::PreCreateWindow  

  
```  
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `cs`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdrawextendedarea"></a>CMFCStatusBar::SetDrawExtendedArea  

  
```  
void SetDrawExtendedArea(BOOL bSet = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSet`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setindicators"></a>CMFCStatusBar::SetIndicators  

  
```  
BOOL SetIndicators(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpIDArray`  
 [in] `nIDCount`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpaneanimation"></a>CMFCStatusBar::SetPaneAnimation  
 Assegna un'animazione al riquadro specificato.  
  
```  
void SetPaneAnimation(
    int nIndex,  
    HIMAGELIST hImageList,  
    UINT nFrameRate=500,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro in cui si desidera assegnare a esso un'animazione.  
  
 [in] `hImageList`  
 Specifica un handle all'elenco di immagini che contiene i frame di animazione.  
  
 [in] `nFrameRate`  
 Specifica la frequenza dei fotogrammi, in millisecondi, per l'animazione.  
  
 [in] `bUpdate`  
 Se `TRUE`, aggiornare il contenuto del riquadro immediatamente. In caso contrario, il contenuto del riquadro viene aggiornata quando viene invalidato.  
  
### <a name="remarks"></a>Note  
 Se si desidera disabilitare l'animazione corrente, chiamare `SetPaneAnimation` con `hImageList` impostato su `NULL`.  
  
##  <a name="setpanebackgroundcolor"></a>CMFCStatusBar::SetPaneBackgroundColor  
 Imposta il colore di sfondo del riquadro barra di stato.  
  
```  
void SetPaneBackgroundColor(
    int nIndex,  
    COLORREF clrBackground=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro per cui impostare un nuovo colore di sfondo.  
  
 [in] `clrBackground`  
 Specifica il nuovo colore di sfondo.  
  
 [in] `bUpdate`  
 Se `TRUE`, aggiornare il contenuto del riquadro immediatamente. In caso contrario, si aggiorna il contenuto del riquadro fino a quando non viene invalidato il riquadro da un altro metodo.  
  
##  <a name="setpaneicon"></a>CMFCStatusBar::SetPaneIcon  
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
 [in] `nIndex`  
 Specifica l'indice del riquadro per cui impostare l'immagine.  
  
 [in] `hIcon`  
 Specifica un handle per l'icona da impostare come l'immagine del riquadro.  
  
 [in] `bUpdate`  
 Specifica se aggiornare il contenuto del riquadro immediatamente.  
  
 [in] `hBmp`  
 Specifica un handle di bitmap da impostare come l'immagine del riquadro.  
  
 [in] `clrTransparent`  
 Specifica il colore trasparente dell'immagine bitmap che il `hBmp` indica.  
  
### <a name="remarks"></a>Note  
 È possibile passare una `HICON` o `HBITMAP` con il colore trasparente per impostare l'immagine del riquadro. Se non si desidera visualizzare l'immagine più, passare il `NULL` valore come handle dell'immagine.  
  
 Se è presente un'animazione in esecuzione che [CMFCStatusBar::SetPaneAnimation](#setpaneanimation) è impostata, l'animazione verrà arrestato.  
  
##  <a name="setpaneinfo"></a>CMFCStatusBar::SetPaneInfo  

  
```  
void SetPaneInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int cxWidth);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `nID`  
 [in] `nStyle`  
 [in] `cxWidth`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpaneprogress"></a>CMFCStatusBar::SetPaneProgress  
 Impostare l'indicatore di stato corrente dell'indicatore di stato per il riquadro specificato.  
  
```  
void SetPaneProgress(
    int nIndex,  
    long nCurr,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro per cui aggiornare l'indicatore di stato.  
  
 [in] `nCurr`  
 Specifica il valore corrente dell'indicatore di stato.  
  
 [in] `bUpdate`  
 Specifica se il riquadro deve essere aggiornato immediatamente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando si desidera aggiornare l'indicatore di stato per l'indicatore di stato nel riquadro specificato.  
  
 Per utilizzare questa funzione per il riquadro specifico, è necessario chiamare [CMFCStatusBar::EnablePaneProgressBar](#enablepaneprogressbar) prima.  
  
##  <a name="setpanestyle"></a>CMFCStatusBar::SetPaneStyle  

  
```  
void SetPaneStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `nStyle`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanetext"></a>CMFCStatusBar::SetPaneText  

  
```  
virtual BOOL SetPaneText(
    int nIndex,  
    LPCTSTR lpszNewText,  
    BOOL bUpdate = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 [in] `lpszNewText`  
 [in] `bUpdate`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanetextcolor"></a>CMFCStatusBar::SetPaneTextColor  
 Imposta il colore del testo del riquadro specificato.  
  
```  
void SetPaneTextColor(
    int nIndex,  
    COLORREF clrText=(COLORREF)-1,  
    BOOL bUpdate=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Specifica l'indice del riquadro in cui si desidera assegnare un nuovo colore del testo.  
  
 [in] `clrText`  
 Specifica il colore del testo.  
  
 [in] `bUpdate`  
 Se `TRUE`, aggiornare il contenuto del riquadro immediatamente. In caso contrario, si aggiorna il contenuto del riquadro fino a quando non viene invalidato il riquadro da un altro metodo.  
  
##  <a name="setpanewidth"></a>CMFCStatusBar::SetPaneWidth  
 Impostare la larghezza del riquadro barra di stato.  
  
```  
void SetPaneWidth(
    int nIndex,  
    int cx);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Indice del riquadro della barra di stato per cui impostare una nuova larghezza.  
  
 [in] `cx`  
 La nuova larghezza del riquadro barra dello stato, in pixel.  
  
##  <a name="settiptext"></a>CMFCStatusBar::SetTipText  
 Impostare il testo della descrizione comando di un riquadro barra di stato.  
  
```  
void SetTipText(
    int nIndex,  
    LPCTSTR pszTipText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 L'indice del riquadro in cui si desidera assegnare il testo della descrizione comando.  
  
 [in] `pszTipText`  
 Il nuovo testo della descrizione comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)   
 [Classe CStatusBar](../../mfc/reference/cstatusbar-class.md)
