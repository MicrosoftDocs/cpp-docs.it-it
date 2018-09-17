---
title: Classe CMFCAutoHideButton | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCAutoHideButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::BringToTop
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Create
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAlignment
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetAutoHideWindow
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetParentToolBar
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetRect
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetSize
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::GetTextSize
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::HighlightButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsActive
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHighlighted
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsHorizontal
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsTop
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::IsVisible
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::Move
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDraw
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnDrawBorder
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::OnFillBackground
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ReplacePane
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowAttachedWindow
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::ShowButton
- AFXAUTOHIDEBUTTON/CMFCAutoHideButton::UnSetAutoHideMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCAutoHideButton [MFC], BringToTop
- CMFCAutoHideButton [MFC], Create
- CMFCAutoHideButton [MFC], GetAlignment
- CMFCAutoHideButton [MFC], GetAutoHideWindow
- CMFCAutoHideButton [MFC], GetParentToolBar
- CMFCAutoHideButton [MFC], GetRect
- CMFCAutoHideButton [MFC], GetSize
- CMFCAutoHideButton [MFC], GetTextSize
- CMFCAutoHideButton [MFC], HighlightButton
- CMFCAutoHideButton [MFC], IsActive
- CMFCAutoHideButton [MFC], IsHighlighted
- CMFCAutoHideButton [MFC], IsHorizontal
- CMFCAutoHideButton [MFC], IsTop
- CMFCAutoHideButton [MFC], IsVisible
- CMFCAutoHideButton [MFC], Move
- CMFCAutoHideButton [MFC], OnDraw
- CMFCAutoHideButton [MFC], OnDrawBorder
- CMFCAutoHideButton [MFC], OnFillBackground
- CMFCAutoHideButton [MFC], ReplacePane
- CMFCAutoHideButton [MFC], ShowAttachedWindow
- CMFCAutoHideButton [MFC], ShowButton
- CMFCAutoHideButton [MFC], UnSetAutoHideMode
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cc824d31f305fe36e0971704fd63025b3c1fdad2
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722956"
---
# <a name="cmfcautohidebutton-class"></a>Classe CMFCAutoHideButton
Pulsante che visualizza o nasconde una [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) configurata per nascondere elementi.  

 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.    
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCAutoHideButton : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAutoHideButton::BringToTop](#bringtotop)||  
|[CMFCAutoHideButton::Create](#create)|Crea e inizializza il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetAlignment](#getalignment)|Recupera l'allineamento del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetAutoHideWindow](#getautohidewindow)|Restituisce il [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto associato al pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetParentToolBar](#getparenttoolbar)||  
|[CMFCAutoHideButton::GetRect](#getrect)||  
|[CMFCAutoHideButton::GetSize](#getsize)|Determina le dimensioni del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::GetTextSize](#gettextsize)|Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::HighlightButton](#highlightbutton)|Evidenzia il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::IsActive](#isactive)|Indica se il pulsante Nascondi automaticamente è attivo.|  
|[CMFCAutoHideButton::IsHighlighted](#ishighlighted)|Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::IsHorizontal](#ishorizontal)|Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.|  
|[CMFCAutoHideButton::IsTop](#istop)||  
|[CMFCAutoHideButton::IsVisible](#isvisible)|Indica se il pulsante è visibile.|  
|[CMFCAutoHideButton::Move](#move)||  
|[CMFCAutoHideButton::OnDraw](#ondraw)|Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::OnDrawBorder](#ondrawborder)|Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::OnFillBackground](#onfillbackground)|Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::ReplacePane](#replacepane)||  
|[CMFCAutoHideButton::ShowAttachedWindow](#showattachedwindow)|Mostra o nasconde l'oggetto associato [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCAutoHideButton::ShowButton](#showbutton)|Mostra o nasconde il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::UnSetAutoHideMode](#unsetautohidemode)||  
  
## <a name="remarks"></a>Note  
 Al momento della creazione, la `CMFCAutoHideButton` oggetto è associato a un [CDockablePane Class](../../mfc/reference/cdockablepane-class.md). L'oggetto `CDockablePane` viene nascosto o visualizzato quando l'utente interagisce con l'oggetto `CMFCAutoHideButton`.  
  
 Per impostazione predefinita, il framework crea automaticamente un oggetto `CMFCAutoHideButton` quando l'utente attiva il pulsante Nascondi automaticamente. Il framework può creare un elemento di una classe di interfaccia utente personalizzata anziché la classe `CMFCAutoHideButton`. Per specificare la classe dell'interfaccia utente personalizzata che deve essere usata dal framework, impostare la variabile membro statica `CMFCAutoHideBar::m_pAutoHideButtonRTS` uguale alla classe dell'interfaccia utente personalizzata. Per impostazione predefinita, questa variabile è impostata su `CMFCAutoHideButton`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideButton` e usare i vari metodi nella classe `CMFCAutoHideButton`. L'esempio illustra come inizializzare un oggetto `CMFCAutoHideButton` usando il relativo metodo `Create`, visualizzare la classe `CDockablePane` associata e visualizzare il pulsante Nascondi automaticamente.  
  
 [!code-cpp[NVC_MFC_RibbonApp#32](../../mfc/reference/codesnippet/cpp/cmfcautohidebutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMFCAutoHideButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxautohidebutton.h  
  
##  <a name="bringtotop"></a>  CMFCAutoHideButton::BringToTop  

  
```  
void BringToTop();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>  CMFCAutoHideButton::Create  
 Crea e Inizializza un pulsante Nascondi automaticamente.  
  
```  
virtual BOOL Create(
    CMFCAutoHideBar* pParentBar,  
    CDockablePane* pAutoHideWnd,  
    DWORD dwAlignment);
```  
  
### <a name="parameters"></a>Parametri  
*pParentBar*<br/>
[in] Puntatore alla barra degli strumenti padre.  
  
*pAutoHideWnd*<br/>
[in] Un puntatore a un [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto. Questo pulsante Nascondi automaticamente consente di nascondere e mostra che `CDockablePane`.  
  
*dwAlignment*<br/>
[in] Un valore che specifica l'allineamento del pulsante della finestra cornice principale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando si crea una `CMFCAutoHideButton` dell'oggetto, è necessario associare il pulsante Nascondi automaticamente a uno specifico `CDockablePane`. L'utente può usare il pulsante Nascondi automaticamente per nascondere e mostrare associato `CDockablePane`.  
  
 Il *dwAlignment* parametro indica in cui si trova il pulsante Nascondi automaticamente nell'applicazione. Il parametro può essere su uno dei valori seguenti:  
  
- CBRS_ALIGN_LEFT  
  
- CBRS_ALIGN_RIGHT  
  
- CBRS_ALIGN_TOP  
  
- CBRS_ALIGN_BOTTOM  
  
##  <a name="getalignment"></a>  CMFCAutoHideButton::GetAlignment  
 Recupera l'allineamento del pulsante Nascondi automaticamente.  
  
```  
DWORD GetAlignment() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore DWORD che contiene l'allineamento corrente del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 L'allineamento del pulsante Nascondi automaticamente indica dove si trova il pulsante dell'applicazione. Può essere uno dei valori seguenti:  
  
- CBRS_ALIGN_LEFT  
  
- CBRS_ALIGN_RIGHT  
  
- CRBS_ALIGN_TOP  
  
- CBRS_ALIGN_BOTTOM  
  
##  <a name="getautohidewindow"></a>  CMFCAutoHideButton::GetAutoHideWindow  
 Restituisce il [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto associato al pulsante Nascondi automaticamente.  
  
```  
CDockablePane* GetAutoHideWindow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto associato `CDockablePane` oggetto.  
  
### <a name="remarks"></a>Note  
 Per associare un pulsante Nascondi automaticamente con un `CDockablePane`, passare il `CDockablePane` come parametro per il [CMFCAutoHideButton::Create](#create) (metodo).  
  
##  <a name="getparenttoolbar"></a>  CMFCAutoHideButton::GetParentToolBar  

  
```  
CMFCAutoHideBar* GetParentToolBar();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrect"></a>  CMFCAutoHideButton::GetRect  

  
```  
CRect GetRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getsize"></a>  CMFCAutoHideButton::GetSize  
 Determina le dimensioni del pulsante Nascondi automaticamente.  
  
```  
CSize GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene la dimensione del pulsante.  
  
### <a name="remarks"></a>Note  
 La dimensione calcolata include la dimensione del bordo del pulsante Nascondi automaticamente.  
  
##  <a name="gettextsize"></a>  CMFCAutoHideButton::GetTextSize  
 Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.  
  
```  
virtual CSize GetTextSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la dimensione del testo del pulsante Nascondi automaticamente.  
  
##  <a name="isactive"></a>  CMFCAutoHideButton::IsActive  
 Indica se il pulsante Nascondi automaticamente è attivo.  
  
```  
BOOL IsActive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante Nascondi automaticamente è attivo; FALSE in caso contrario.  
  
### <a name="remarks"></a>Note  
 Un pulsante Nascondi automaticamente è attivo quando l'oggetto associato [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) visualizzazione della finestra.  
  
##  <a name="ishorizontal"></a>  CMFCAutoHideButton::IsHorizontal  
 Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.  
  
```  
BOOL IsHorizontal() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante è orizzontale; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework imposta l'orientamento di una [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) durante la creazione dell'oggetto.  È possibile controllare l'orientamento usando il *dwAlignment* parametro nel [CMFCAutoHideButton::Create](#create) (metodo).  
  
##  <a name="istop"></a>  CMFCAutoHideButton::IsTop  

  
```  
BOOL IsTop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isvisible"></a>  CMFCAutoHideButton::IsVisible  
 Indica se il pulsante Nascondi automaticamente è visibile.  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante è visibile; FALSE in caso contrario.  
  
##  <a name="ondraw"></a>  CMFCAutoHideButton::OnDraw  
 Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare l'aspetto di pulsanti Nascondi automaticamente nell'applicazione, creare una nuova classe derivata da `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="ondrawborder"></a>  CMFCAutoHideButton::OnDrawBorder  
 Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rectBounds,  
    CRect rectBorderSize);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
*rectBounds*<br/>
[in] Il rettangolo di delimitazione del pulsante Nascondi automaticamente.  
  
*rectBorderSize*<br/>
[in] Lo spessore del bordo per ogni lato del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare il bordo di ogni pulsante Nascondi automaticamente nell'applicazione, creare una nuova classe derivata dal `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="onfillbackground"></a>  CMFCAutoHideButton::OnFillBackground  
 Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.  
  
*Rect*<br/>
[in] Il rettangolo di delimitazione del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare lo sfondo di pulsanti Nascondi automaticamente nell'applicazione, creare una nuova classe derivata dal `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="showattachedwindow"></a>  CMFCAutoHideButton::ShowAttachedWindow  
 Mostra o nasconde l'oggetto associato [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
void ShowAttachedWindow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
*bMostra*<br/>
[in] Valore booleano che specifica se questo metodo visualizza l'oggetto associato `CDockablePane`.  
  
##  <a name="showbutton"></a>  CMFCAutoHideButton::ShowButton  
 Mostra o nasconde il pulsante Nascondi automaticamente.  
  
```  
virtual void ShowButton(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
*bMostra*<br/>
[in] Valore booleano che specifica se mostrare il pulsante Nascondi automaticamente.  
  
##  <a name="move"></a>  CMFCAutoHideButton::Move  

  
```  
void Move(int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nOffset*  
  
### <a name="remarks"></a>Note  
  
##  <a name="replacepane"></a>  CMFCAutoHideButton::ReplacePane  

  
```  
void ReplacePane(CDockablePane* pNewBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pNewBar*  
  
### <a name="remarks"></a>Note  
  
##  <a name="unsetautohidemode"></a>  CMFCAutoHideButton::UnSetAutoHideMode  
 Disabilita la modalità Nascondi automaticamente.  
  
```  
virtual void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup);
```  
  
### <a name="parameters"></a>Parametri  
*pFirstBarInGroup*<br/>
[in] Puntatore alla prima barra del gruppo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="highlightbutton"></a>  CMFCAutoHideButton::HighlightButton  
 Evidenzia il pulsante Nascondi automaticamente.  
  
```  
virtual void HighlightButton(BOOL bHighlight);
```  
  
### <a name="parameters"></a>Parametri  
 *bHighlight*  
 Specifica il nuovo Nascondi dello stato del pulsante. TRUE indica che il pulsante è evidenziato, FALSE indica che il pulsante non sia più evidenziato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ishighlighted"></a>  CMFCAutoHideButton::IsHighlighted  
 Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.  
  
```  
virtual BOOL IsHighlighted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il pulsante Nascondi l'automobile è evidenziato. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)   
 [Classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md)
