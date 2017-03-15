---
title: Classe CMFCAutoHideButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCAutoHideButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCAutoHideButton class
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
caps.latest.revision: 33
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: f25072b4362b6add1682ce50fc5ee21cc065637a
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcautohidebutton-class"></a>Classe CMFCAutoHideButton
Un pulsante che visualizza o nasconde una [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) configurato in modo da nascondere.  
  
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
|[CMFCAutoHideButton::GetAutoHideWindow](#getautohidewindow)|Restituisce il [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto associato con il pulsante Nascondi automaticamente.|  
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
|[CMFCAutoHideButton::ShowAttachedWindow](#showattachedwindow)|Mostra o nasconde i [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCAutoHideButton::ShowButton](#showbutton)|Mostra o nasconde il pulsante Nascondi automaticamente.|  
|[CMFCAutoHideButton::UnSetAutoHideMode](#unsetautohidemode)||  
  
## <a name="remarks"></a>Note  
 Al momento della creazione, la `CMFCAutoHideButton` oggetto è associato a un [CDockablePane Class](../../mfc/reference/cdockablepane-class.md). L'oggetto `CDockablePane` viene nascosto o visualizzato quando l'utente interagisce con l'oggetto `CMFCAutoHideButton`.  
  
 Per impostazione predefinita, il framework crea automaticamente un oggetto `CMFCAutoHideButton` quando l'utente attiva il pulsante Nascondi automaticamente. Il framework può creare un elemento di una classe di interfaccia utente personalizzata anziché la classe `CMFCAutoHideButton`. Per specificare la classe dell'interfaccia utente personalizzata che deve essere usata dal framework, impostare la variabile membro statica `CMFCAutoHideBar::m_pAutoHideButtonRTS` uguale alla classe dell'interfaccia utente personalizzata. Per impostazione predefinita, questa variabile è impostata su `CMFCAutoHideButton`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideButton` e usare i vari metodi nella classe `CMFCAutoHideButton`. L'esempio illustra come inizializzare un oggetto `CMFCAutoHideButton` usando il relativo metodo `Create`, visualizzare la classe `CDockablePane` associata e visualizzare il pulsante Nascondi automaticamente.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&32;](../../mfc/reference/codesnippet/cpp/cmfcautohidebutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMFCAutoHideButton`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxautohidebutton.h  
  
##  <a name="a-namebringtotopa--cmfcautohidebuttonbringtotop"></a><a name="bringtotop"></a>CMFCAutoHideButton::BringToTop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void BringToTop();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreatea--cmfcautohidebuttoncreate"></a><a name="create"></a>CMFCAutoHideButton::Create  
 Crea e Inizializza un pulsante Nascondi automaticamente.  
  
```  
virtual BOOL Create(
    CMFCAutoHideBar* pParentBar,  
    CDockablePane* pAutoHideWnd,  
    DWORD dwAlignment);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentBar`  
 Puntatore alla barra degli strumenti padre.  
  
 [in] `pAutoHideWnd`  
 Un puntatore a un [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto. Questo pulsante Nascondi automaticamente nascosto e viene indicato che `CDockablePane`.  
  
 [in] `dwAlignment`  
 Un valore che specifica l'allineamento del pulsante con la finestra cornice principale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando si crea un `CMFCAutoHideButton` dell'oggetto, è necessario associare il pulsante Nascondi automaticamente con un valore specifico `CDockablePane`. L'utente può utilizzare il pulsante Nascondi automaticamente per nascondere e mostrare associata `CDockablePane`.  
  
 Il parametro `dwAlignment` indica se il pulsante Nascondi automaticamente è incluso nell'applicazione. Il parametro può essere su uno dei valori seguenti:  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CBRS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
##  <a name="a-namegetalignmenta--cmfcautohidebuttongetalignment"></a><a name="getalignment"></a>CMFCAutoHideButton::GetAlignment  
 Recupera l'allineamento del pulsante Nascondi automaticamente.  
  
```  
DWORD GetAlignment() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` contenente l'allineamento corrente del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 L'allineamento del pulsante Nascondi automaticamente indica dove si trova il pulsante dell'applicazione. Può essere uno dei valori seguenti:  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CRBS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
##  <a name="a-namegetautohidewindowa--cmfcautohidebuttongetautohidewindow"></a><a name="getautohidewindow"></a>CMFCAutoHideButton::GetAutoHideWindow  
 Restituisce il [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto associato con il pulsante Nascondi automaticamente.  
  
```  
CDockablePane* GetAutoHideWindow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto associato `CDockablePane` oggetto.  
  
### <a name="remarks"></a>Note  
 Per associare un pulsante Nascondi automaticamente con un `CDockablePane`, passare il `CDockablePane` come parametro per il [CMFCAutoHideButton::Create](#create) metodo.  
  
##  <a name="a-namegetparenttoolbara--cmfcautohidebuttongetparenttoolbar"></a><a name="getparenttoolbar"></a>CMFCAutoHideButton::GetParentToolBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCAutoHideBar* GetParentToolBar();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetrecta--cmfcautohidebuttongetrect"></a><a name="getrect"></a>CMFCAutoHideButton::GetRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetsizea--cmfcautohidebuttongetsize"></a><a name="getsize"></a>CMFCAutoHideButton::GetSize  
 Determina le dimensioni del pulsante Nascondi automaticamente.  
  
```  
CSize GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le dimensioni del pulsante.  
  
### <a name="remarks"></a>Note  
 Le dimensioni calcolate includono le dimensioni del bordo del pulsante Nascondi automaticamente.  
  
##  <a name="a-namegettextsizea--cmfcautohidebuttongettextsize"></a><a name="gettextsize"></a>CMFCAutoHideButton::GetTextSize  
 Restituisce le dimensioni dell'etichetta di testo per il pulsante Nascondi automaticamente.  
  
```  
virtual CSize GetTextSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la dimensione del testo del pulsante Nascondi automaticamente.  
  
##  <a name="a-nameisactivea--cmfcautohidebuttonisactive"></a><a name="isactive"></a>CMFCAutoHideButton::IsActive  
 Indica se il pulsante Nascondi automaticamente è attivo.  
  
```  
BOOL IsActive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante Nascondi automaticamente attivo. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Un pulsante Nascondi automaticamente è attivo quando l'oggetto associato [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) finestra viene visualizzata.  
  
##  <a name="a-nameishorizontala--cmfcautohidebuttonishorizontal"></a><a name="ishorizontal"></a>CMFCAutoHideButton::IsHorizontal  
 Determina se il pulsante Nascondi automaticamente è orizzontale o verticale.  
  
```  
BOOL IsHorizontal() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante è orizzontale; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework imposta l'orientamento di un [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) durante la creazione dell'oggetto.  È possibile controllare l'orientamento utilizzando il `dwAlignment` parametro il [CMFCAutoHideButton::Create](#create) metodo.  
  
##  <a name="a-nameistopa--cmfcautohidebuttonistop"></a><a name="istop"></a>CMFCAutoHideButton::IsTop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisvisiblea--cmfcautohidebuttonisvisible"></a><a name="isvisible"></a>CMFCAutoHideButton::IsVisible  
 Indica se il pulsante Nascondi automaticamente è visibile.  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante è visibile; `FALSE` in caso contrario.  
  
##  <a name="a-nameondrawa--cmfcautohidebuttonondraw"></a><a name="ondraw"></a>CMFCAutoHideButton::OnDraw  
 Il framework chiama questo metodo quando disegna il pulsante Nascondi automaticamente.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare l'aspetto dei pulsanti di opzione Nascondi automaticamente nell'applicazione, creare una nuova classe derivata da `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="a-nameondrawbordera--cmfcautohidebuttonondrawborder"></a><a name="ondrawborder"></a>CMFCAutoHideButton::OnDrawBorder  
 Il framework chiama questo metodo quando disegna il bordo di un pulsante Nascondi automaticamente.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rectBounds,  
    CRect rectBorderSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectBounds`  
 Il rettangolo di delimitazione del pulsante Nascondi automaticamente.  
  
 [in] `rectBorderSize`  
 Lo spessore del bordo per ogni lato del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare il bordo di ogni pulsante Nascondi automaticamente nell'applicazione, creare una nuova classe derivata dal `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="a-nameonfillbackgrounda--cmfcautohidebuttononfillbackground"></a><a name="onfillbackground"></a>CMFCAutoHideButton::OnFillBackground  
 Il framework chiama questo metodo quando riempie lo sfondo di un pulsante Nascondi automaticamente.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
 Se si desidera personalizzare lo sfondo per i pulsanti di opzione Nascondi automaticamente nell'applicazione, creare una nuova classe derivata dal `CMFCAutoHideButton`. Nella classe derivata, l'override del metodo.  
  
##  <a name="a-nameshowattachedwindowa--cmfcautohidebuttonshowattachedwindow"></a><a name="showattachedwindow"></a>CMFCAutoHideButton::ShowAttachedWindow  
 Mostra o nasconde i [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
void ShowAttachedWindow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 Valore booleano che specifica se questo metodo viene collegato `CDockablePane`.  
  
##  <a name="a-nameshowbuttona--cmfcautohidebuttonshowbutton"></a><a name="showbutton"></a>CMFCAutoHideButton::ShowButton  
 Mostra o nasconde il pulsante Nascondi automaticamente.  
  
```  
virtual void ShowButton(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 Valore booleano che specifica se mostrare il pulsante Nascondi automaticamente.  
  
##  <a name="a-namemovea--cmfcautohidebuttonmove"></a><a name="move"></a>CMFCAutoHideButton::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Move(int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nOffset`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namereplacepanea--cmfcautohidebuttonreplacepane"></a><a name="replacepane"></a>CMFCAutoHideButton::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ReplacePane(CDockablePane* pNewBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pNewBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameunsetautohidemodea--cmfcautohidebuttonunsetautohidemode"></a><a name="unsetautohidemode"></a>CMFCAutoHideButton::UnSetAutoHideMode  
 Disabilita la modalità Nascondi automaticamente.  
  
```  
virtual void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFirstBarInGroup`  
 Puntatore alla prima barra del gruppo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehighlightbuttona--cmfcautohidebuttonhighlightbutton"></a><a name="highlightbutton"></a>CMFCAutoHideButton::HighlightButton  
 Evidenzia il pulsante Nascondi automaticamente.  
  
```  
virtual void HighlightButton(BOOL bHighlight);
```  
  
### <a name="parameters"></a>Parametri  
 `bHighlight`  
 Specifica automatica nuovo nascondere allo stato dei pulsanti. `TRUE`indica il pulsante è evidenziato, `FALSE` indica il pulsante non è evidenziato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameishighlighteda--cmfcautohidebuttonishighlighted"></a><a name="ishighlighted"></a>CMFCAutoHideButton::IsHighlighted  
 Restituisce lo stato di evidenziazione del pulsante Nascondi automaticamente.  
  
```  
virtual BOOL IsHighlighted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se il pulsante Nascondi automaticamente è evidenziato; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)   
 [Classe CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md)

