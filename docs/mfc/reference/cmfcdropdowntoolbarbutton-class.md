---
title: Classe CMFCDropDownToolbarButton | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords:
- CMFCDropDownToolbarButton [MFC], CMFCDropDownToolbarButton
- CMFCDropDownToolbarButton [MFC], CopyFrom
- CMFCDropDownToolbarButton [MFC], DropDownToolbar
- CMFCDropDownToolbarButton [MFC], ExportToMenuButton
- CMFCDropDownToolbarButton [MFC], GetDropDownToolBar
- CMFCDropDownToolbarButton [MFC], IsDropDown
- CMFCDropDownToolbarButton [MFC], IsExtraSize
- CMFCDropDownToolbarButton [MFC], OnCalculateSize
- CMFCDropDownToolbarButton [MFC], OnChangeParentWnd
- CMFCDropDownToolbarButton [MFC], OnClick
- CMFCDropDownToolbarButton [MFC], OnClickUp
- CMFCDropDownToolbarButton [MFC], OnContextHelp
- CMFCDropDownToolbarButton [MFC], OnCustomizeMenu
- CMFCDropDownToolbarButton [MFC], OnDraw
- CMFCDropDownToolbarButton [MFC], OnDrawOnCustomizeList
- CMFCDropDownToolbarButton [MFC], Serialize
- CMFCDropDownToolbarButton [MFC], SetDefaultCommand
- CMFCDropDownToolbarButton [MFC], m_uiShowBarDelay
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
caps.latest.revision: "31"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2f9481583c56676d206225ad76f8131c2a79821f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcdropdowntoolbarbutton-class"></a>Classe CMFCDropDownToolbarButton
Tipo di pulsante della barra degli strumenti che, quando viene selezionato, si comporta come un pulsante normale. Tuttavia, visualizzata una barra degli strumenti elenco a discesa ( [CMFCDropDownToolBar classe](../../mfc/reference/cmfcdropdowntoolbar-class.md) se l'utente tiene premuto il pulsante della barra verso il basso.  
  
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
|[CMFCDropDownToolbarButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente. (Esegue l'override [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|  
|`CMFCDropDownToolbarButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar)|Verrà visualizzata una barra degli strumenti elenco a discesa.|  
|[CMFCDropDownToolbarButton::ExportToMenuButton](#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti a un menu. (Esegue l'override [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton).)|  
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#getdropdowntoolbar)|Recupera la barra degli strumenti dell'elenco a discesa associato al pulsante.|  
|`CMFCDropDownToolbarButton::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCDropDownToolbarButton::IsDropDown](#isdropdown)|Determina se la barra degli strumenti elenco a discesa è aperto.|  
|[CMFCDropDownToolbarButton::IsExtraSize](#isextrasize)|Determina se è possibile visualizzare il pulsante con un bordo esteso. (Esegue l'override [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).)|  
|[CMFCDropDownToolbarButton::OnCalculateSize](#oncalculatesize)|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|  
|`CMFCDropDownToolbarButton::OnCancelMode`|Chiamato dal framework per gestire il [WM_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615) messaggio. Esegue l'override`CMCToolBarButton::OnCancelMode`.|  
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|  
|[CMFCDropDownToolbarButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|  
|[CMFCDropDownToolbarButton::OnClickUp](#onclickup)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse. (Esegue l'override [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup).)|  
|[CMFCDropDownToolbarButton::OnContextHelp](#oncontexthelp)|Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_HELPHITTEST` messaggio. (Esegue l'override [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp).)|  
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#oncustomizemenu)|Modifica il menu specificato quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre. (Esegue l'override [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu).)|  
|[CMFCDropDownToolbarButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare il pulsante utilizzando le opzioni e gli stili specificati. (Esegue l'override [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|  
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework per disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo. (Esegue l'override [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|  
|[CMFCDropDownToolbarButton::Serialize](#serialize)|Legge l'oggetto da un archivio o scrive in un archivio. (Esegue l'override [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|  
|[CMFCDropDownToolbarButton::SetDefaultCommand](#setdefaultcommand)|Imposta il comando predefinito che il framework utilizza quando un utente fa clic sul pulsante.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay)|Specifica il periodo di tempo che un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti elenco a discesa.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CMFCDropDownToolBarButton` differisce da un pulsante normale, in quanto dispone di una piccola freccia nell'angolo in basso a destra del pulsante. Dopo che l'utente seleziona un pulsante nella barra degli strumenti elenco a discesa, il framework Visualizza la relativa icona sul pulsante della barra degli strumenti principale (il pulsante con la piccola freccia nell'angolo in basso a destra).  
  
 Per informazioni su come implementare una barra degli strumenti elenco a discesa, vedere [CMFCDropDownToolBar classe](../../mfc/reference/cmfcdropdowntoolbar-class.md).  
  
 Il `CMFCDropDownToolBarButton` oggetto può essere esportato in un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) dell'oggetto e visualizzato come pulsante di menu con menu a comparsa.  
  
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
 Un riferimento al pulsante di origine da cui copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti per questo pulsante sulla barra degli strumenti. `src`deve essere di tipo `CMFCDropDownToolbarButton`.  
  
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
 Testo del pulsante predefinito.  
  
 [in] `pToolBar`  
 Un puntatore al `CMFCDropDownToolBar` oggetto che viene visualizzata quando l'utente preme il pulsante.  
  
### <a name="remarks"></a>Note  
 Il secondo overload del costruttore di copia al pulsante di menu a discesa il primo pulsante nella barra degli strumenti che `pToolBar` specifica.  
  
 In genere, un pulsante di menu a discesa della barra degli strumenti viene utilizzato il testo dal pulsante degli ultimi file usato nella barra degli strumenti che `pToolBar` specifica. Viene usato il testo specificato da `lpszName` quando il pulsante viene convertito in un pulsante di menu o viene visualizzato nel **comandi** scheda della finestra il **Personalizza** la finestra di dialogo. Per ulteriori informazioni sul **Personalizza** la finestra di dialogo, vedere [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCDropDownToolbarButton` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#31](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]  
  
##  <a name="dropdowntoolbar"></a>CMFCDropDownToolbarButton::DropDownToolbar  
 Verrà visualizzata una barra degli strumenti elenco a discesa.  
  
```  
BOOL DropDownToolbar(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 La finestra padre del frame, elenco a discesa o `NULL` come utilizzare la finestra padre del pulsante di menu a discesa della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il [CMFCDropDownToolbarButton::OnClick](#onclick) chiama questo metodo per aprire la barra degli strumenti elenco a discesa quando l'utente tiene premuto il pulsante della barra verso il basso.  
  
 Questo metodo crea la barra degli strumenti elenco a discesa tramite il [CMFCDropDownFrame::Create](../../mfc/reference/cmfcdropdownframe-class.md#create) metodo. Se la barra degli strumenti padre è ancorato in verticale, questo metodo posiziona la barra degli strumenti elenco a discesa per il lato sinistro o destro della barra degli strumenti padre, a seconda dell'adattamento. In caso contrario, questo metodo posiziona la barra degli strumenti elenco a discesa sotto la barra degli strumenti padre.  
  
 Questo metodo ha esito negativo se `pWnd` è `NULL` e il pulsante di menu a discesa della barra degli strumenti non dispone di una finestra padre.  
  
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
 Questo metodo chiama l'implementazione della classe di base ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) e quindi viene aggiunto il pulsante di menu di destinazione un menu a comparsa che contiene ogni voce di menu della barra degli strumenti di questo pulsante. Questo metodo non aggiunge sottomenu al menu di scelta rapida.  
  
 Questo metodo ha esito negativo se la barra degli strumenti padre, `m_pToolBar`, è `NULL` o l'implementazione della classe base restituisce `FALSE`.  
  
##  <a name="getdropdowntoolbar"></a>CMFCDropDownToolbarButton::GetDropDownToolBar  
 Recupera la barra degli strumenti dell'elenco a discesa associato al pulsante.  
  
```  
CMFCToolBar* GetDropDownToolBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Barra degli strumenti elenco a discesa associata con il pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce il `m_pToolBar` (membro dati).  
  
##  <a name="isdropdown"></a>CMFCDropDownToolbarButton::IsDropDown  
 Determina se la barra degli strumenti elenco a discesa è aperto.  
  
```  
BOOL IsDropDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra degli strumenti elenco a discesa è attualmente aperto. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il framework si apre la barra degli strumenti elenco a discesa tramite il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Il framework chiude la barra degli strumenti elenco a discesa quando l'utente preme il pulsante sinistro del mouse nell'area non client della barra degli strumenti elenco a discesa.  
  
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
 Specifica il periodo di tempo che un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti elenco a discesa.  
  
```  
static UINT m_uiShowBarDelay;  
```  
  
### <a name="remarks"></a>Note  
 L'intervallo di tempo viene misurato in millisecondi. Il valore predefinito è 500. È possibile impostare un altro ritardo modificando il valore di questo membro dei dati condivisa.  
  
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
 Le dimensioni predefinite del pulsante.  
  
 [in] `bHorz`  
 Lo stato di ancoraggio della barra degli strumenti padre. Questo parametro è `TRUE` se la barra degli strumenti è ancorato in orizzontale o se è mobile, o `FALSE` se la barra degli strumenti è ancorato in verticale.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `SIZE` struttura che contiene le dimensioni del pulsante, in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize)) aggiungendo la larghezza della freccia a discesa per la dimensione orizzontale del pulsante.  
  
##  <a name="onchangeparentwnd"></a>CMFCDropDownToolbarButton::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 La nuova finestra padre.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) deselezionando l'etichetta di testo ( [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext)) e impostando il [ CMFCToolBarButton::m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#m_btext) e [CMFCToolBarButton::m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#m_buserbutton) i membri dati `FALSE`.  
  
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
 Diverso da zero se il pulsante elabora il messaggio fare clic su in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), aggiornando lo stato della barra degli strumenti elenco a discesa.  
  
 Quando un utente fa clic sul pulsante della barra degli strumenti, questo metodo crea un timer che attende il periodo di tempo specificato da di [CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay) (membro dati) e quindi apre l'elenco a discesa della barra degli strumenti utilizzando il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Questo metodo chiude la barra degli strumenti trascinare la seconda volta, che l'utente fa clic sul pulsante della barra degli strumenti.  
  
##  <a name="onclickup"></a>CMFCDropDownToolbarButton::OnClickUp  
 Chiamato dal framework quando l'utente rilascia il pulsante del mouse.  
  
```  
virtual BOOL OnClickUp();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante elabora il messaggio fare clic su in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup), aggiornando lo stato della barra degli strumenti elenco a discesa.  
  
 Se è attivo, questo metodo arresta il timer di elenco a discesa della barra degli strumenti. Chiude la barra degli strumenti elenco a discesa se è aperto.  
  
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
 Diverso da zero se il pulsante elabora il messaggio della Guida in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)) chiamando il [CMFCDropDownToolbarButton::OnClick](#onclick) metodo con `bDelay` impostato su `FALSE` . Questo metodo restituisce il valore restituito da [CMFCDropDownToolbarButton::OnClick](#onclick).  
  
 Per ulteriori informazioni sul `WM_HELPHITTEST message, see` [TN028: supporto della Guida sensibile al contesto](../../mfc/tn028-context-sensitive-help-support.md).  
  
##  <a name="oncustomizemenu"></a>CMFCDropDownToolbarButton::OnCustomizeMenu  
 Modifica il menu specificato quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre.  
  
```  
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenu`  
 Il menu da personalizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu)), disabilitare le voci di menu seguenti:  
  
- **Copiare l'immagine del pulsante**  
  
- **Aspetto del pulsante**  
  
- **Immagine**  
  
- **per**  
  
- **Immagine e testo**  
  
 Eseguire l'override di questo metodo per modificare il menu di scelta rapida visualizzato dal framework in modalità di personalizzazione.  
  
##  <a name="ondraw"></a>CMFCDropDownToolbarButton::OnDraw  
 Chiamato dal framework per disegnare il pulsante utilizzando le opzioni e gli stili specificati.  
  
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
 Lo stato di ancoraggio della barra degli strumenti padre. Questo parametro è `TRUE` quando il pulsante è ancorato in orizzontale e `FALSE` quando il pulsante è ancorato in verticale.  
  
 [in] `bCustomizeMode`  
 Specifica se la barra degli strumenti è in modalità di personalizzazione. Questo parametro è `TRUE` quando la barra degli strumenti è in modalità di personalizzazione e `FALSE` quando la barra degli strumenti non è in modalità di personalizzazione.  
  
 [in] `bHighlight`  
 Specifica se il pulsante è evidenziato. Questo parametro è `TRUE` quando il pulsante è evidenziato e `FALSE` quando il pulsante non sia più evidenziato.  
  
 [in] `bDrawBorder`  
 Specifica se il pulsante deve essere visualizzato un bordo. Questo parametro è `TRUE` quando il pulsante deve essere visualizzato un bordo e `FALSE` quando il pulsante non dovrebbe visualizzare il bordo.  
  
 [in] `bGrayDisabledButtons`  
 Specifica se ombreggiate pulsanti disabilitati o utilizzare la raccolta di immagini disabilitato. Questo parametro è `TRUE` quando pulsanti disabilitati devono essere disattivati e `FALSE` quando questo metodo devono utilizzare la raccolta di immagini disabilitato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per personalizzare il disegno di pulsante della barra degli strumenti.  
  
##  <a name="ondrawoncustomizelist"></a>CMFCDropDownToolbarButton::OnDrawOnCustomizeList  
 Chiamato dal framework per disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo.  
  
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
 La larghezza, in pixel, del pulsante di contesto di dispositivo specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato per la finestra di dialogo di personalizzazione ( **comandi** scheda) quando il pulsante è necessario per visualizzarlo nella casella di riepilogo di disegno personalizzato.  
  
 Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist)) modificando l'etichetta di testo del pulsante per il nome del pulsante (, ovvero il valore di `lpszName` parametro che è stato passato al costruttore).  
  
##  <a name="serialize"></a>CMFCDropDownToolbarButton::Serialize  
 Legge l'oggetto da un archivio o scrive in un archivio.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
 Il `CArchive` oggetto da cui o in cui serializzare.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)) serializzando l'ID risorsa della barra degli strumenti padre. Quando il caricamento dell'archivio ( [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) restituisce un valore diverso da zero), questo metodo imposta la `m_pToolBar` membro dati alla barra degli strumenti che contiene l'ID di risorsa serializzata.  
  
##  <a name="setdefaultcommand"></a>CMFCDropDownToolbarButton::SetDefaultCommand  
 Imposta il comando predefinito che il framework utilizza quando un utente fa clic sul pulsante.  
  
```  
void SetDefaultCommand(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID del comando predefinito.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare un comando predefinito eseguito dal framework quando l'utente fa clic sul pulsante. Un elemento con l'ID di comando specificato dal `uiCmd` deve essere presente nella barra degli strumenti elenco a discesa padre.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe di CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)



