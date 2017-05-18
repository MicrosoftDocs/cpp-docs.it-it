---
title: Classe CMFCDropDownToolbarButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CopyFrom
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::DropDownToolbar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::ExportToMenuButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::GetDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsDropDown
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsExtraSize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCalculateSize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnChangeParentWnd
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClick
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClickUp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnContextHelp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCustomizeMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDraw
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDrawOnCustomizeList
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::Serialize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::SetDefaultCommand
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::m_uiShowBarDelay
dev_langs:
- C++
helpviewer_keywords:
- CMFCDropDownToolbarButton class
- OnCancelMode method
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
caps.latest.revision: 31
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 24398ddb605489bf9677bd493a1bc1f490d583b9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcdropdowntoolbarbutton-class"></a>Classe CMFCDropDownToolbarButton
Tipo di pulsante della barra degli strumenti che, quando viene selezionato, si comporta come un pulsante normale. Tuttavia, verrà aperta una barra degli strumenti dell'elenco a discesa ( [CMFCDropDownToolBar classe](../../mfc/reference/cmfcdropdowntoolbar-class.md) se l'utente tiene premuto il pulsante della barra degli strumenti verso il basso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDropDownToolbarButton : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](#cmfcdropdowntoolbarbutton)|Costruisce un oggetto `CMFCDropDownToolbarButton`.|  
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|  
|`CMFCDropDownToolbarButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar)|Verrà visualizzata una barra degli strumenti dell'elenco a discesa.|  
|[CMFCDropDownToolbarButton::ExportToMenuButton](#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti a un menu. (Esegue l'override di [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton).)|  
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#getdropdowntoolbar)|Recupera la barra degli strumenti dell'elenco a discesa associata al pulsante.|  
|`CMFCDropDownToolbarButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCDropDownToolbarButton::IsDropDown](#isdropdown)|Determina se la barra degli strumenti dell'elenco a discesa è aperto.|  
|[CMFCDropDownToolbarButton::IsExtraSize](#isextrasize)|Determina se è possibile visualizzare il pulsante con un bordo esteso. (Esegue l'override di [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).)|  
|[CMFCDropDownToolbarButton::OnCalculateSize](#oncalculatesize)|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|  
|`CMFCDropDownToolbarButton::OnCancelMode`|Chiamato dal framework per gestire il [WM_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615) messaggio. Esegue l'override di `CMCToolBarButton::OnCancelMode`.|  
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|  
|[CMFCDropDownToolbarButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|  
|[CMFCDropDownToolbarButton::OnClickUp](#onclickup)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup).)|  
|[CMFCDropDownToolbarButton::OnContextHelp](#oncontexthelp)|Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_HELPHITTEST` messaggio. (Esegue l'override di [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp).)|  
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#oncustomizemenu)|Modifica il menu fornito quando l'applicazione viene visualizzato un menu di scelta rapida nella barra degli strumenti padre. (Esegue l'override di [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu).)|  
|[CMFCDropDownToolbarButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|  
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework in cui disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|  
|[CMFCDropDownToolbarButton::Serialize](#serialize)|Legge l'oggetto da un archivio o scrive in un archivio. (Esegue l'override di [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|  
|[CMFCDropDownToolbarButton::SetDefaultCommand](#setdefaultcommand)|Imposta il comando predefinito che il framework utilizza quando un utente fa clic sul pulsante.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay)|Specifica il periodo di tempo che un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti dell'elenco a discesa.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CMFCDropDownToolBarButton` differisce da un pulsante normale poiché dispone di una piccola freccia nell'angolo in basso a destra del pulsante. Dopo che l'utente seleziona un pulsante sulla barra degli strumenti dell'elenco a discesa, il framework consente di visualizzare la relativa icona sul pulsante della barra degli strumenti principale (il pulsante con la piccola freccia nell'angolo inferiore destro).  
  
 Per informazioni su come implementare una barra degli strumenti dell'elenco a discesa, vedere [CMFCDropDownToolBar classe](../../mfc/reference/cmfcdropdowntoolbar-class.md).  
  
 Il `CMFCDropDownToolBarButton` oggetto può essere esportato in un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) dell'oggetto e visualizzato come un pulsante di menu con menu di scelta rapida.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdropdowntoolbar.h  
  
##  <a name="copyfrom"></a>CMFCDropDownToolbarButton::CopyFrom  
 Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un riferimento al pulsante origine da cui copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti di questo pulsante della barra degli strumenti. `src`deve essere di tipo `CMFCDropDownToolbarButton`.  
  
##  <a name="cmfcdropdowntoolbarbutton"></a>CMFCDropDownToolbarButton::CMFCDropDownToolbarButton  
 Costruisce un oggetto `CMFCDropDownToolbarButton`.  
  
```  
CMFCDropDownToolbarButton();

 
CMFCDropDownToolbarButton(
    LPCTSTR lpszName,  
    CMFCDropDownToolBar* pToolBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Il testo predefinito del pulsante.  
  
 [in] `pToolBar`  
 Un puntatore per il `CMFCDropDownToolBar` oggetto che viene visualizzato quando l'utente preme il pulsante.  
  
### <a name="remarks"></a>Note  
 Il secondo overload del costruttore di copia per il pulsante di menu a discesa il primo pulsante sulla barra degli strumenti che `pToolBar` specifica.  
  
 In genere, un pulsante di menu a discesa della barra degli strumenti viene utilizzato il testo degli ultimi file usati con il pulsante sulla barra degli strumenti che `pToolBar` specifica. Viene usato il testo specificato da `lpszName` quando il pulsante viene convertito in un pulsante di menu o viene visualizzato nel **comandi** scheda della finestra il **Personalizza** la finestra di dialogo. Per ulteriori informazioni sui **Personalizza** la finestra di dialogo, vedere [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCDropDownToolbarButton` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#31;](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]  
  
##  <a name="dropdowntoolbar"></a>CMFCDropDownToolbarButton::DropDownToolbar  
 Verrà visualizzata una barra degli strumenti dell'elenco a discesa.  
  
```  
BOOL DropDownToolbar(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 La finestra padre del frame di riepilogo a discesa o `NULL` come utilizzare la finestra padre del pulsante di menu a discesa della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il [CMFCDropDownToolbarButton::OnClick](#onclick) chiamato questo metodo per aprire la barra di menu a discesa quando l'utente tiene premuto il pulsante della barra degli strumenti verso il basso.  
  
 Questo metodo crea l'elenco a discesa barra degli strumenti utilizzando il [CMFCDropDownFrame::Create](../../mfc/reference/cmfcdropdownframe-class.md#create) metodo. Se la barra degli strumenti padre è ancorata in senso verticale, questo metodo posiziona la barra degli strumenti dell'elenco a discesa sia sul lato sinistro o destro della barra degli strumenti padre, a seconda dell'adattamento. In caso contrario, questo metodo posiziona la barra degli strumenti di riepilogo a discesa sotto la barra degli strumenti padre.  
  
 Questo metodo non riesce se `pWnd` è `NULL` e il pulsante di menu a discesa della barra degli strumenti non dispone di una finestra padre.  
  
##  <a name="exporttomenubutton"></a>CMFCDropDownToolbarButton::ExportToMenuButton  
 Copia il testo dal pulsante della barra degli strumenti a un menu.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `menuButton`  
 Un riferimento al pulsante di menu di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama l'implementazione della classe base ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) e quindi viene aggiunto il pulsante di menu di destinazione un menu a comparsa ogni voce di menu della barra degli strumenti di questo pulsante. Questo metodo non aggiunge sottomenu al menu di scelta rapida.  
  
 Questo metodo ha esito negativo se la barra degli strumenti principale, `m_pToolBar`, è `NULL` o l'implementazione della classe base restituisce `FALSE`.  
  
##  <a name="getdropdowntoolbar"></a>CMFCDropDownToolbarButton::GetDropDownToolBar  
 Recupera la barra degli strumenti dell'elenco a discesa associata al pulsante.  
  
```  
CMFCToolBar* GetDropDownToolBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Barra degli strumenti elenco a discesa che viene associata al pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce il `m_pToolBar` (membro dati).  
  
##  <a name="isdropdown"></a>CMFCDropDownToolbarButton::IsDropDown  
 Determina se la barra degli strumenti dell'elenco a discesa è aperto.  
  
```  
BOOL IsDropDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra degli strumenti dell'elenco a discesa è aperto; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework apre la barra degli strumenti dell'elenco a discesa utilizzando il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Il framework chiude la barra degli strumenti dell'elenco a discesa quando l'utente preme il pulsante sinistro del mouse nell'area non client della barra degli strumenti elenco a discesa.  
  
##  <a name="isextrasize"></a>CMFCDropDownToolbarButton::IsExtraSize  
 Determina se è possibile visualizzare il pulsante con un bordo esteso.  
  
```  
virtual BOOL IsExtraSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante della barra degli strumenti può essere visualizzato con un bordo esteso. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui bordi estesi, vedere [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).  
  
##  <a name="m_uishowbardelay"></a>CMFCDropDownToolbarButton::m_uiShowBarDelay  
 Specifica il periodo di tempo che un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti dell'elenco a discesa.  
  
```  
static UINT m_uiShowBarDelay;  
```  
  
### <a name="remarks"></a>Note  
 L'intervallo di tempo viene misurato in millisecondi. Il valore predefinito è 500. È possibile impostare un altro ritardo modificando il valore di questo membro dati condivisi.  
  
##  <a name="oncalculatesize"></a>CMFCDropDownToolbarButton::OnCalculateSize  
 Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio.  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che viene visualizzato il pulsante.  
  
 [in] `sizeDefault`  
 Dimensioni predefinite del pulsante.  
  
 [in] `bHorz`  
 Lo stato di ancoraggio della barra degli strumenti padre. Questo parametro è `TRUE` se la barra degli strumenti è mobile o ancorato orizzontalmente o `FALSE` se la barra degli strumenti è ancorata in senso verticale.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `SIZE` struttura che contiene le dimensioni del pulsante, in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize)) aggiungendo la larghezza della freccia a discesa per la dimensione orizzontale delle dimensioni del pulsante.  
  
##  <a name="onchangeparentwnd"></a>CMFCDropDownToolbarButton::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 La nuova finestra padre.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) deselezionando l'etichetta di testo ( [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext)) e l'impostazione di [CMFCToolBarButton::m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#m_btext) e [CMFCToolBarButton::m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#m_buserbutton) i membri dati `FALSE`.  
  
##  <a name="onclick"></a>CMFCDropDownToolbarButton::OnClick  
 Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 La finestra padre del pulsante della barra degli strumenti.  
  
 [in] `bDelay`  
 `TRUE`Se il messaggio deve essere gestito con un ritardo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante elabora il messaggio e fare clic su in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), aggiornando lo stato della barra degli strumenti elenco a discesa.  
  
 Quando un utente fa clic sul pulsante della barra degli strumenti, questo metodo crea un timer che attende il periodo di tempo specificato dal [CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay) (membro dati) e quindi viene aperto l'elenco a discesa della barra degli strumenti utilizzando il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Questo metodo chiude la barra degli strumenti dell'elenco a discesa la seconda volta, che l'utente fa clic sul pulsante della barra degli strumenti.  
  
##  <a name="onclickup"></a>CMFCDropDownToolbarButton::OnClickUp  
 Chiamato dal framework quando l'utente rilascia il pulsante del mouse.  
  
```  
virtual BOOL OnClickUp();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante elabora il messaggio e fare clic su in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup), aggiornando lo stato della barra degli strumenti elenco a discesa.  
  
 Questo metodo arresta il timer di riepilogo a discesa della barra degli strumenti se è attiva. Chiude la barra degli strumenti dell'elenco a discesa se è aperto.  
  
 Per ulteriori informazioni sull'elenco a discesa della barra degli strumenti e timer di riepilogo a discesa della barra degli strumenti, vedere [CMFCDropDownToolbarButton::OnClick](#onclick).  
  
##  <a name="oncontexthelp"></a>CMFCDropDownToolbarButton::OnContextHelp  
 Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_HELPHITTEST` messaggio.  
  
```  
virtual BOOL OnContextHelp(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 La finestra padre del pulsante della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante elabora il messaggio della Guida; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)) chiamando il [CMFCDropDownToolbarButton::OnClick](#onclick) metodo con `bDelay` impostato su `FALSE`. Questo metodo restituisce il valore restituito da [CMFCDropDownToolbarButton::OnClick](#onclick).  
  
 Per ulteriori informazioni sui `WM_HELPHITTEST message, see` [TN028: supporto della Guida sensibile al contesto](../../mfc/tn028-context-sensitive-help-support.md).  
  
##  <a name="oncustomizemenu"></a>CMFCDropDownToolbarButton::OnCustomizeMenu  
 Modifica il menu fornito quando l'applicazione viene visualizzato un menu di scelta rapida nella barra degli strumenti padre.  
  
```  
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenu`  
 Il menu da personalizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu)), disabilitare le voci di menu seguenti:  
  
- **Copiare l'immagine del pulsante**  
  
- **Aspetto del pulsante**  
  
- **Immagine**  
  
- **Testo**  
  
- **Immagine e testo**  
  
 Eseguire l'override del metodo per modificare il menu di scelta rapida visualizzato dal framework in modalità di personalizzazione.  
  
##  <a name="ondraw"></a>CMFCDropDownToolbarButton::OnDraw  
 Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz = TRUE,  
    BOOL bCustomizeMode = FALSE,  
    BOOL bHighlight = FALSE,  
    BOOL bDrawBorder = TRUE,  
    BOOL bGrayDisabledButtons = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che viene visualizzato il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante.  
  
 [in] `pImages`  
 La raccolta di immagini della barra degli strumenti che è associata al pulsante.  
  
 [in] `bHorz`  
 Lo stato di ancoraggio della barra degli strumenti padre. Questo parametro è `TRUE` quando il pulsante è ancorato in senso orizzontale e `FALSE` quando il pulsante è ancorato in senso verticale.  
  
 [in] `bCustomizeMode`  
 Specifica se la barra degli strumenti è in modalità di personalizzazione. Questo parametro è `TRUE` quando la barra degli strumenti è in modalità di personalizzazione e `FALSE` quando la barra degli strumenti non è in modalità di personalizzazione.  
  
 [in] `bHighlight`  
 Specifica se il pulsante è evidenziato. Questo parametro è `TRUE` quando il pulsante è evidenziato e `FALSE` quando il pulsante non è evidenziato.  
  
 [in] `bDrawBorder`  
 Specifica se il pulsante deve essere visualizzato un bordo. Questo parametro è `TRUE` quando il pulsante deve visualizzare un bordo e `FALSE` quando il pulsante non deve essere visualizzata sul bordo.  
  
 [in] `bGrayDisabledButtons`  
 Specifica se ombreggiate pulsanti disabilitati o utilizzare la raccolta immagini disabilitato. Questo parametro è `TRUE` quando pulsanti disabilitati devono essere disattivati e `FALSE` quando questo metodo devono utilizzare la raccolta immagini disabilitato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per personalizzare il disegno di pulsante della barra degli strumenti.  
  
##  <a name="ondrawoncustomizelist"></a>CMFCDropDownToolbarButton::OnDrawOnCustomizeList  
 Chiamato dal framework in cui disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che viene visualizzato il pulsante.  
  
 [in] `rect`  
 Il rettangolo di delimitazione del pulsante.  
  
 [in] `bSelected`  
 Se il pulsante è selezionato. Se questo parametro è `TRUE`, il pulsante è selezionato. Se questo parametro è `FALSE`, il pulsante non è selezionato.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza, in pixel, del pulsante nel contesto di dispositivo specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato per la finestra di dialogo di personalizzazione ( **comandi** scheda) quando il pulsante è obbligatoria per visualizzarlo nella casella di riepilogo di disegno personalizzato.  
  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist)) modificando l'etichetta di testo del pulsante per il nome del pulsante (vale a dire il valore il `lpszName` parametro passato al costruttore).  
  
##  <a name="serialize"></a>CMFCDropDownToolbarButton::Serialize  
 Legge l'oggetto da un archivio o scrive in un archivio.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
 Il `CArchive` oggetto dal quale o per cui si desidera serializzare.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)) serializzando l'ID risorsa della barra degli strumenti padre. Quando il caricamento dell'archivio ( [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) restituisce un valore diverso da zero), questo metodo imposta la `m_pToolBar` membro dati alla barra degli strumenti che contiene l'ID di risorsa serializzato.  
  
##  <a name="setdefaultcommand"></a>CMFCDropDownToolbarButton::SetDefaultCommand  
 Imposta il comando predefinito che il framework utilizza quando un utente fa clic sul pulsante.  
  
```  
void SetDefaultCommand(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID del comando predefinito.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare un comando predefinito che il framework viene eseguito quando l'utente fa clic sul pulsante. Un elemento con l'ID di comando specificata da `uiCmd` deve essere posizionato nella barra degli strumenti elenco a discesa padre.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe di CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)




