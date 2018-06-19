---
title: Classe CMFCColorMenuButton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CMFCColorMenuButton [MFC], CMFCColorMenuButton
- CMFCColorMenuButton [MFC], EnableAutomaticButton
- CMFCColorMenuButton [MFC], EnableDocumentColors
- CMFCColorMenuButton [MFC], EnableOtherButton
- CMFCColorMenuButton [MFC], EnableTearOff
- CMFCColorMenuButton [MFC], GetAutomaticColor
- CMFCColorMenuButton [MFC], GetColor
- CMFCColorMenuButton [MFC], GetColorByCmdID
- CMFCColorMenuButton [MFC], OnChangeParentWnd
- CMFCColorMenuButton [MFC], OpenColorDialog
- CMFCColorMenuButton [MFC], SetColor
- CMFCColorMenuButton [MFC], SetColorByCmdID
- CMFCColorMenuButton [MFC], SetColorName
- CMFCColorMenuButton [MFC], SetColumnsNumber
- CMFCColorMenuButton [MFC], CopyFrom
- CMFCColorMenuButton [MFC], CreatePopupMenu
- CMFCColorMenuButton [MFC], IsEmptyMenuAllowed
- CMFCColorMenuButton [MFC], OnDraw
- CMFCColorMenuButton [MFC], OnDrawOnCustomizeList
ms.assetid: 42685704-e994-4f7b-9553-62283c27b754
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c19386aeac0d85565ae7834a881d710d9226ef9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370705"
---
# <a name="cmfccolormenubutton-class"></a>Classe CMFCColorMenuButton
La `CMFCColorMenuButton` classe supporta un comando di menu o un pulsante che avvia una finestra di dialogo Selezione colori.  
  
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
|[CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colori normali. (Il pulsante automatico di sistema standard è denominato **automatica**.)|  
|[CMFCColorMenuButton::EnableDocumentColors](#enabledocumentcolors)|Consente la visualizzazione di colori specifici del documento anziché i colori di sistema.|  
|[CMFCColorMenuButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "altro" che viene posizionato sotto i pulsanti dei colori normali. (Il sistema standard è denominato pulsante "altro" **altri colori**.)|  
|[CMFCColorMenuButton::EnableTearOff](#enabletearoff)|Consente di estrarre un riquadro colore.|  
|[CMFCColorMenuButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|  
|[CMFCColorMenuButton::GetColor](#getcolor)|Recupera il colore del pulsante corrente.|  
|[CMFCColorMenuButton::GetColorByCmdID](#getcolorbycmdid)|Recupera il colore che corrisponde a un ID di comando specificato.|  
|[CMFCColorMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando cambia la finestra padre.|  
|[CMFCColorMenuButton::OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo di selezione colore.|  
|[CMFCColorMenuButton::SetColor](#setcolor)|Imposta il colore del pulsante colore corrente.|  
|[CMFCColorMenuButton::SetColorByCmdID](#setcolorbycmdid)|Imposta il colore del pulsante di menu colore specificato.|  
|[CMFCColorMenuButton::SetColorName](#setcolorname)|Imposta un nuovo nome per il colore specificato.|  
|[CMFCColorMenuButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne che vengono visualizzati da un `CMFCColorBar` oggetto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CopyFrom](#copyfrom)|Copia di un altro pulsante della barra degli strumenti al pulsante corrente.|  
|[CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu)|Crea una finestra di dialogo Selezione colori.|  
|[CMFCColorMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Indica se i menu vuoti sono supportati.|  
|[CMFCColorMenuButton::OnDraw](#ondraw)|Chiamato dal framework per visualizzare un'immagine su un pulsante.|  
|[CMFCColorMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework prima di un `CMFCColorMenuButton` oggetto viene visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.|  
  
## <a name="remarks"></a>Note  
 Per sostituire il menu barra degli strumenti o comando pulsante originale con un `CMFCColorMenuButton` dell'oggetto, creare il `CMFCColorMenuButton` set di oggetti, qualsiasi appropriato [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) stili e quindi chiamare il `ReplaceButton` metodo il [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) classe. Se si personalizza una barra degli strumenti, chiamare il [CMFCToolBarsCustomizeDialog::ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) metodo.  
  
 La finestra di dialogo di selezione colore viene creata durante l'elaborazione del [CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu) gestore dell'evento. Il gestore dell'evento di notifica al frame padre con un `WM_COMMAND` messaggio. Il `CMFCColorMenuButton` oggetto invia l'ID di controllo che viene assegnato al pulsante di comando o della barra degli strumenti menu originale.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare e configurare un pulsante di menu colore usando i vari metodi di `CMFCColorMenuButton` classe. Nell'esempio, un `CPalette` oggetto viene prima creato e quindi utilizzato per costruire un oggetto del `CMFCColorMenuButton` classe. Il `CMFCColorMenuButton` oggetto viene quindi configurato attivazione relativo automatico e altri pulsanti e impostando il colore e il numero di colonne. Questo codice è parte di [esempio di Word Pad](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#5](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_1.h)]  
[!code-cpp[NVC_MFC_WordPad#6](../../mfc/reference/codesnippet/cpp/cmfccolormenubutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
 [CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolormenubutton.h  
  
##  <a name="cmfccolormenubutton"></a>  CMFCColorMenuButton::CMFCColorMenuButton  
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
 Un ID di comando pulsante.  
  
 [in] `lpszText`  
 Il testo del pulsante.  
  
 [in] `pPalette`  
 Puntatore alla tavolozza di colori del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il primo costruttore rappresenta il costruttore predefinito. Il colore dell'oggetto corrente e il colore automatico vengono inizializzati su nero (RGB (0, 0, 0)).  
  
 Il secondo costruttore inizializza il pulsante colore che corrisponde all'ID di comando specificato.  
  
##  <a name="copyfrom"></a>  CMFCColorMenuButton::CopyFrom  
 Copia una [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md)-oggetto derivato da un altro.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Pulsante di origine da copiare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per copiare oggetti che derivano dal `CMFCColorMenuButton` oggetto.  
  
##  <a name="createpopupmenu"></a>  CMFCColorMenuButton::CreatePopupMenu  
 Crea una finestra di dialogo Selezione colori.  
  
```  
virtual CMFCPopupMenu* CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto che rappresenta una finestra di dialogo Selezione colori.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'utente preme un pulsante di menu del colore.  
  
##  <a name="enableautomaticbutton"></a>  CMFCColorMenuButton::EnableAutomaticButton  
 Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colori normali. (Il pulsante automatico di sistema standard è denominato **automatica**.)  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Specifica il testo del pulsante che viene visualizzato quando il pulsante diventa automatica.  
  
 [in] `colorAutomatic`  
 Specifica un nuovo colore automatico.  
  
 [in] `bEnable`  
 Specifica se il pulsante è automatico.  
  
### <a name="remarks"></a>Note  
 Il pulsante automatico si applica il colore predefinito corrente.  
  
##  <a name="enabledocumentcolors"></a>  CMFCColorMenuButton::EnableDocumentColors  
 Consente la visualizzazione di colori specifici del documento anziché i colori di sistema.  
  
```  
void EnableDocumentColors(
    LPCTSTR lpszLabel,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 Specifica il testo del pulsante.  
  
 [in] `bEnable`  
 `TRUE` Per visualizzare i colori specifici del documento o `FALSE` visualizzare colori di sistema.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per visualizzare i colori del documento corrente o i colori tavolozza di sistema quando l'utente sceglie un pulsante di menu del colore.  
  
##  <a name="enableotherbutton"></a>  CMFCColorMenuButton::EnableOtherButton  
 Abilita e disabilita un pulsante "altro" che viene posizionato sotto i pulsanti dei colori normali. (Il sistema standard è denominato pulsante "altro" **altri colori**.)  
  
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
 Specificare `TRUE` per visualizzare il `CMFCColorDialog` nella finestra di dialogo o `FALSE` per visualizzare la finestra di dialogo dei colori di sistema standard.  
  
 [in] `bEnable`  
 Specificare `TRUE` per visualizzare il pulsante "altro"; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletearoff"></a>  CMFCColorMenuButton::EnableTearOff  
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
 Specifica il numero di colonne nel riquadro ancorato in verticale di colore in stato a comparsa.  
  
 [in] `nHorzDockRows`  
 Specifica il numero di righe per il riquadro ancorato in orizzontale colore mentre è in stato a comparsa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per abilitare la funzionalità "tear-off" per il riquadro colore che viene visualizzato quando il `CMFCColorMenuButton` pressione del pulsante.  
  
##  <a name="getautomaticcolor"></a>  CMFCColorMenuButton::GetAutomaticColor  
 Recupera il colore automatico corrente.  
  
```  
COLORREF GetAutomaticColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB che rappresenta il colore automatico corrente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ottenere il colore automatico impostato da [CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton).  
  
##  <a name="getcolor"></a>  CMFCColorMenuButton::GetColor  
 Recupera il colore del pulsante corrente.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcolorbycmdid"></a>  CMFCColorMenuButton::GetColorByCmdID  
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
 Utilizzare questo metodo quando si dispone di più pulsanti di colore in un'applicazione. Quando l'utente sceglie un pulsante del colore, il pulsante Invia l'ID di comando un `WM_COMMAND` messaggio al relativo elemento padre. Il `GetColorByCmdID` metodo utilizza l'ID di comando per recuperare il colore corrispondente.  
  
##  <a name="isemptymenuallowed"></a>  CMFCColorMenuButton::IsEmptyMenuAllowed  
 Indica se i menu vuoti sono supportati.  
  
```  
virtual BOOL IsEmptyMenuAllowed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i menu vuoti sono consentiti. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Menu vuoti sono supportati per impostazione predefinita. Eseguire l'override di questo metodo per modificare questo comportamento in una classe derivata.  
  
##  <a name="onchangeparentwnd"></a>  CMFCColorMenuButton::OnChangeParentWnd  
 Chiamato dal framework quando cambia la finestra padre.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Un puntatore a una nuova finestra padre.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>  CMFCColorMenuButton::OnDraw  
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
 Un rettangolo che racchiude l'area da ridisegnare.  
  
 [in] `pImages`  
 Punta a un elenco di immagini della barra degli strumenti.  
  
 [in] `bHorz`  
 `TRUE` Per specificare che la barra degli strumenti è in uno stato ancorato orizzontale. in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `bCustomizeMode`  
 `TRUE` Per specificare che l'applicazione è in modalità di personalizzazione; in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bHighlight`  
 `TRUE` Per specificare che il pulsante è evidenziato. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bDrawBorder`  
 `TRUE` Per specificare che venga visualizzato il bordo del pulsante; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
 [in] `bGrayDisabledButtons`  
 `TRUE` Per specificare che disabilitato pulsanti vengono visualizzate in grigio (grigio) in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawoncustomizelist"></a>  CMFCColorMenuButton::OnDrawOnCustomizeList  
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
 `TRUE` Specifica che il pulsante è selezionato; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un `CMFCColorMenuButton` oggetto viene visualizzato nella casella di riepilogo durante il processo di personalizzazione della barra degli strumenti.  
  
##  <a name="opencolordialog"></a>  CMFCColorMenuButton::OpenColorDialog  
 Apre una finestra di dialogo di selezione colore.  
  
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
  
##  <a name="setcolor"></a>  CMFCColorMenuButton::SetColor  
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
 `TRUE` Per applicare la `clr` colore parametro da qualsiasi pulsante di menu associata oppure sulla barra degli strumenti; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per modificare il colore del pulsante colore corrente. Se il `bNotify` parametro è diverso da zero, il colore del pulsante corrispondente su qualsiasi menu di scelta rapida associato o una barra degli strumenti viene modificato il colore specificato da di `clr` parametro.  
  
##  <a name="setcolorbycmdid"></a>  CMFCColorMenuButton::SetColorByCmdID  
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
  
##  <a name="setcolorname"></a>  CMFCColorMenuButton::SetColorName  
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
  
##  <a name="setcolumnsnumber"></a>  CMFCColorMenuButton::SetColumnsNumber  
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
