---
title: Classe CMFCColorMenuButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CMFCColorMenuButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableAutomaticButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableDocumentColors
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableOtherButton
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::EnableTearOff
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetAutomaticColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::GetColorByCmdID
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnChangeParentWnd
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OpenColorDialog
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColor
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorByCmdID
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColorName
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::SetColumnsNumber
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CopyFrom
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::CreatePopupMenu
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::IsEmptyMenuAllowed
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDraw
- AFXCOLORMENUBUTTON/CMFCColorMenuButton::OnDrawOnCustomizeList
dev_langs:
- C++
helpviewer_keywords:
- CMFCColorMenuButton class
ms.assetid: 42685704-e994-4f7b-9553-62283c27b754
caps.latest.revision: 29
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
ms.openlocfilehash: a9b1e7a3dbfe4d98b3d51850723eb22ec1f9da06
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccolormenubutton-class"></a>Classe CMFCColorMenuButton
La `CMFCColorMenuButton` classe supporta un comando di menu o un pulsante della barra degli strumenti che attiva una finestra di dialogo Selezione colori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCColorMenuButton : public CMFCToolBarMenuButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CMFCColorMenuButton](#cmfccolormenubutton)|Costruisce un oggetto `CMFCColorMenuButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colore regolari. (Il pulsante automatico di sistema standard è denominato **automatica**.)|  
|[CMFCColorMenuButton::EnableDocumentColors](#enabledocumentcolors)|Consente di visualizzare i colori di specifiche del documento anziché i colori di sistema.|  
|[CMFCColorMenuButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "altro" che si trova sotto i pulsanti di colore regolari. (Il sistema standard con l'etichetta "altro" pulsante **più colori... **.)|  
|[CMFCColorMenuButton::EnableTearOff](#enabletearoff)|Consente di estrarre un riquadro colore.|  
|[CMFCColorMenuButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatica corrente.|  
|[CMFCColorMenuButton::GetColor](#getcolor)|Recupera il colore del pulsante corrente.|  
|[CMFCColorMenuButton::GetColorByCmdID](#getcolorbycmdid)|Recupera il colore che corrisponde a un ID di comando specificato.|  
|[CMFCColorMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando la finestra padre.|  
|[CMFCColorMenuButton::OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo Selezione colore.|  
|[CMFCColorMenuButton::SetColor](#setcolor)|Imposta il colore del pulsante colore corrente.|  
|[CMFCColorMenuButton::SetColorByCmdID](#setcolorbycmdid)|Imposta il colore del pulsante di menu colore specificato.|  
|[CMFCColorMenuButton::SetColorName](#setcolorname)|Imposta un nuovo nome per il colore specificato.|  
|[CMFCColorMenuButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne visualizzate da un `CMFCColorBar` oggetto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CopyFrom](#copyfrom)|Copia un altro pulsante della barra degli strumenti al pulsante corrente.|  
|[CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu)|Crea una finestra di dialogo Selezione colori.|  
|[CMFCColorMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Indica se sono supportati i menu vuoti.|  
|[CMFCColorMenuButton::OnDraw](#ondraw)|Chiamato dal framework per visualizzare un'immagine su un pulsante.|  
|[CMFCColorMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework prima di un `CMFCColorMenuButton` oggetto viene visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.|  
  
## <a name="remarks"></a>Note  
 Per sostituire l'originale dal menu comando o il pulsante con un `CMFCColorMenuButton` dell'oggetto, creare il `CMFCColorMenuButton` oggetto, imposta appropriato in qualsiasi [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) stili e quindi chiamare il `ReplaceButton` metodo il [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) (classe). Se si personalizza una barra degli strumenti, chiamare il [CMFCToolBarsCustomizeDialog::ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) metodo.  
  
 La finestra di dialogo Selezione colori viene creato durante l'elaborazione di [CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu) gestore dell'evento. Il gestore dell'evento notifica al frame padre con un `WM_COMMAND` messaggio. Il `CMFCColorMenuButton` oggetto invia l'ID di controllo che viene assegnato al pulsante di comando o della barra degli strumenti menu originale.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare e configurare un pulsante di menu colore tramite i vari metodi di `CMFCColorMenuButton` (classe). Nell'esempio, un `CPalette` oggetto viene prima creato e quindi utilizzato per costruire un oggetto della `CMFCColorMenuButton` classe. Il `CMFCColorMenuButton` oggetto viene quindi configurato per abilitare l'automatica e gli altri pulsanti e impostare il colore e il numero di colonne. Questo codice è parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad n.&5;](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_1.h)]  
[!code-cpp[6 NVC_MFC_WordPad](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
 [CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolormenubutton.h  
  
##  <a name="cmfccolormenubutton"></a>CMFCColorMenuButton::CMFCColorMenuButton  
 Costruisce un oggetto `CMFCColorMenuButton`.  
  
```  
CMFCColorMenuButton();

 
CMFCColorMenuButton(
    UINT uiCmdID,  
    LPCTSTR lpszText,  
    CPalette* pPalette=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 Un ID comando del pulsante.  
  
 [in] `lpszText`  
 Il testo del pulsante.  
  
 [in] `pPalette`  
 Puntatore alla tavolozza dei colori del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il primo costruttore è il costruttore predefinito. Il colore dell'oggetto corrente e il colore automatico vengono inizializzati su nero (RGB (0, 0, 0)).  
  
 Il secondo costruttore inizializza il pulsante per il colore che corrisponde all'ID di comando specificato.  
  
##  <a name="copyfrom"></a>CMFCColorMenuButton::CopyFrom  
 Copia una [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md)-l'oggetto derivato da un altro.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Pulsante di origine da copiare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per copiare gli oggetti che derivano da di `CMFCColorMenuButton` oggetto.  
  
##  <a name="createpopupmenu"></a>CMFCColorMenuButton::CreatePopupMenu  
 Crea una finestra di dialogo Selezione colori.  
  
```  
virtual CMFCPopupMenu* CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto che rappresenta una finestra di dialogo Selezione colori.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'utente preme un pulsante di menu colore.  
  
##  <a name="enableautomaticbutton"></a>CMFCColorMenuButton::EnableAutomaticButton  
 Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colore regolari. (Il pulsante automatico di sistema standard è denominato **automatica**.)  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Specifica il testo del pulsante che viene visualizzato quando il pulsante diventa automatico.  
  
 [in] `colorAutomatic`  
 Specifica un nuovo colore automatico.  
  
 [in] `bEnable`  
 Specifica se il pulsante è automatica o meno.  
  
### <a name="remarks"></a>Note  
 Pulsante automatico si applica il colore predefinito corrente.  
  
##  <a name="enabledocumentcolors"></a>CMFCColorMenuButton::EnableDocumentColors  
 Consente di visualizzare i colori di specifiche del documento anziché i colori di sistema.  
  
```  
void EnableDocumentColors(
    LPCTSTR lpszLabel,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Specifica il testo del pulsante.  
  
 [in] `bEnable`  
 `TRUE`Per visualizzare i colori di specifiche per i documenti o `FALSE` per visualizzare i colori di sistema.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per visualizzare i colori del documento corrente o i colori della tavolozza del sistema quando l'utente fa clic su un pulsante di menu colore.  
  
##  <a name="enableotherbutton"></a>CMFCColorMenuButton::EnableOtherButton  
 Abilita e disabilita un pulsante "altro" che si trova sotto i pulsanti di colore regolari. (Il sistema standard con l'etichetta "altro" pulsante **più colori... **.)  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg=TRUE,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Specifica il testo del pulsante.  
  
 [in] `bAltColorDlg`  
 Specificare `TRUE` per visualizzare il `CMFCColorDialog` nella finestra di dialogo o `FALSE` da visualizzare nella finestra di dialogo dei colori di sistema standard.  
  
 [in] `bEnable`  
 Specificare `TRUE` per visualizzare il pulsante "altro"; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletearoff"></a>CMFCColorMenuButton::EnableTearOff  
 Consente di estrarre un riquadro colore.  
  
```  
void EnableTearOff(
    UINT uiID,  
    int nVertDockColumns=-1,  
    int nHorzDockRows=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 Specifica l'ID per il riquadro a comparsa.  
  
 [in] `nVertDockColumns`  
 Specifica il numero di colonne del riquadro ancorato verticalmente colori mentre è in stato tear-off.  
  
 [in] `nHorzDockRows`  
 Specifica il numero di righe per il riquadro ancorato in orizzontale colore nello stato tear-off.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per abilitare la funzionalità "tear-off" per il riquadro di colore che viene visualizzata quando il `CMFCColorMenuButton` pulsante.  
  
##  <a name="getautomaticcolor"></a>CMFCColorMenuButton::GetAutomaticColor  
 Recupera il colore automatica corrente.  
  
```  
COLORREF GetAutomaticColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB che rappresenta il colore automatica corrente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ottenere il colore automatico impostato da [CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton).  
  
##  <a name="getcolor"></a>CMFCColorMenuButton::GetColor  
 Recupera il colore del pulsante corrente.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcolorbycmdid"></a>CMFCColorMenuButton::GetColorByCmdID  
 Recupera il colore che corrisponde a un ID di comando specificato.  
  
```  
static COLORREF GetColorByCmdID(UINT uiCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 Un ID di comando.  
  
### <a name="return-value"></a>Valore restituito  
 Il colore che corrisponde all'ID di comando specificato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo quando si dispone di diversi pulsanti di colore in un'applicazione. Quando l'utente sceglie un pulsante del colore, il pulsante Invia l'ID di comando un `WM_COMMAND` messaggio al relativo padre. Il `GetColorByCmdID` metodo utilizza l'ID di comando per recuperare il colore corrispondente.  
  
##  <a name="isemptymenuallowed"></a>CMFCColorMenuButton::IsEmptyMenuAllowed  
 Indica se sono supportati i menu vuoti.  
  
```  
virtual BOOL IsEmptyMenuAllowed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se menu vuoti sono consentiti. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Menu vuoti sono supportati per impostazione predefinita. Eseguire l'override di questo metodo per modificare questo comportamento nella classe derivata.  
  
##  <a name="onchangeparentwnd"></a>CMFCColorMenuButton::OnChangeParentWnd  
 Chiamato dal framework quando la finestra padre.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Un puntatore a una nuova finestra padre.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCColorMenuButton::OnDraw  
 Chiamato dal framework per visualizzare un'immagine su un pulsante.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz=TRUE,  
    BOOL bCustomizeMode=FALSE,  
    BOOL bHighlight=FALSE,  
    BOOL bDrawBorder=TRUE,  
    BOOL bGrayDisabledButtons=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Un rettangolo che limita l'area da ridisegnare.  
  
 [in] `pImages`  
 Punta a un elenco di immagini della barra degli strumenti.  
  
 [in] `bHorz`  
 `TRUE`Per specificare che la barra degli strumenti è in uno stato ancorato orizzontale. in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `bCustomizeMode`  
 `TRUE`Per specificare che l'applicazione è in modalità di personalizzazione. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bHighlight`  
 `TRUE`Per specificare che il pulsante è evidenziato. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bDrawBorder`  
 `TRUE`Per specificare che il bordo del pulsante viene visualizzato. in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `bGrayDisabledButtons`  
 `TRUE`Per specificare che disabilitato pulsanti sono disattivati (grigio). in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawoncustomizelist"></a>CMFCColorMenuButton::OnDrawOnCustomizeList  
 Chiamato dal framework prima di un `CMFCColorMenuButton` oggetto viene visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rect`  
 Un rettangolo che racchiude il pulsante da disegnare.  
  
 [in] `bSelected`  
 `TRUE`Specifica che il pulsante è selezionato; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un `CMFCColorMenuButton` oggetto viene visualizzato nella casella di riepilogo durante il processo di personalizzazione della barra degli strumenti.  
  
##  <a name="opencolordialog"></a>CMFCColorMenuButton::OpenColorDialog  
 Apre una finestra di dialogo Selezione colore.  
  
```  
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,  
    COLORREF& colorRes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `colorDefault`  
 Il colore predefinito selezionato nella finestra di dialogo colore.  
  
 [out] `colorRes`  
 Restituisce il colore selezionato dall'utente nella finestra di dialogo colore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente seleziona un nuovo colore; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Quando si fa clic sul pulsante di menu, chiamare questo metodo per aprire una finestra di dialogo colore. Se il valore restituito è diverso da zero, il colore selezionato dall'utente viene archiviato nel `colorRes` parametro. Utilizzare il [CMFCColorMenuButton::EnableOtherButton](#enableotherbutton) per passare tra la finestra di dialogo colore standard e [CMFCColorDialog classe](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo.  
  
##  <a name="setcolor"></a>CMFCColorMenuButton::SetColor  
 Imposta il colore del pulsante colore corrente.  
  
```  
virtual void SetColor(
    COLORREF clr,  
    BOOL bNotify=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `clr`  
 Un valore di colore RGB.  
  
 [in] `bNotify`  
 `TRUE`Per applicare il `clr` colore parametro a qualsiasi pulsante di menu associata o un pulsante della barra degli strumenti; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per modificare il colore del pulsante colore corrente. Se il `bNotify` parametro è diverso da zero, il colore del pulsante corrispondente sulla qualsiasi barra degli strumenti o menu di scelta rapida associato viene modificato il colore specificato per il `clr` parametro.  
  
##  <a name="setcolorbycmdid"></a>CMFCColorMenuButton::SetColorByCmdID  
 Imposta il colore del pulsante di menu colore specificato.  
  
```  
static void SetColorByCmdID(
    UINT uiCmdID,  
    COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 L'ID di risorsa di un pulsante di menu colore.  
  
 [in] `color`  
 Un valore di colore RGB.  
  
##  <a name="setcolorname"></a>CMFCColorMenuButton::SetColorName  
 Imposta un nuovo nome per il colore specificato.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Il valore RGB del colore il cui nome viene modificato.  
  
 [in] `strName`  
 Il nuovo nome del colore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setcolumnsnumber"></a>CMFCColorMenuButton::SetColumnsNumber  
 Imposta il numero di colonne da visualizzare in un controllo di selezione colore ( [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) oggetto).  
  
```  
void SetColumnsNumber(int nColumns);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nColumns`  
 Il numero di colonne da visualizzare.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)   
 [Classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md)

