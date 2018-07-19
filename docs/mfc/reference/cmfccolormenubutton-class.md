---
title: Classe CMFCColorMenuButton | Microsoft Docs
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
ms.openlocfilehash: 40e943fd6c03838c8c14e202026e10d3c7b22ace
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37852940"
---
# <a name="cmfccolormenubutton-class"></a>Classe CMFCColorMenuButton
Il `CMFCColorMenuButton` classe supporta un comando di menu o un pulsante della barra degli strumenti che avvia una finestra di dialogo di selezione colore.  
  
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
|[CMFCColorMenuButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colori normali. (Il pulsante automatico di sistema standard viene etichettato **automatica**.)|  
|[CMFCColorMenuButton::EnableDocumentColors](#enabledocumentcolors)|Consente di visualizzare i colori di specifica del documento anziché i colori di sistema.|  
|[CMFCColorMenuButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "other" che è posizionato sotto i pulsanti dei colori normali. (Il sistema standard "other" pulsante viene denominato **altri colori**.)|  
|[CMFCColorMenuButton::EnableTearOff](#enabletearoff)|Offre la possibilità di trascinare un riquadro colore.|  
|[CMFCColorMenuButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|  
|[CMFCColorMenuButton::GetColor](#getcolor)|Recupera il colore del pulsante corrente.|  
|[CMFCColorMenuButton::GetColorByCmdID](#getcolorbycmdid)|Recupera il colore che corrisponde a un ID di comando.|  
|[CMFCColorMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando cambia la finestra padre.|  
|[CMFCColorMenuButton::OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo di selezione colore.|  
|[CMFCColorMenuButton::SetColor](#setcolor)|Imposta il colore del pulsante colore corrente.|  
|[CMFCColorMenuButton::SetColorByCmdID](#setcolorbycmdid)|Imposta il colore del pulsante di menu colore specificato.|  
|[CMFCColorMenuButton::SetColorName](#setcolorname)|Imposta un nuovo nome per il colore specificato.|  
|[CMFCColorMenuButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne che vengono visualizzate per un `CMFCColorBar` oggetto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorMenuButton::CopyFrom](#copyfrom)|Copia un altro pulsante della barra degli strumenti del pulsante corrente.|  
|[CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu)|Crea una finestra di dialogo di selezione colore.|  
|[CMFCColorMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Indica se i menu vuoti sono supportati.|  
|[CMFCColorMenuButton::OnDraw](#ondraw)|Chiamata eseguita dal framework per visualizzare un'immagine su un pulsante.|  
|[CMFCColorMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework prima un `CMFCColorMenuButton` oggetto viene visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.|  
  
## <a name="remarks"></a>Note  
 Per sostituire l'originale menu comando o il pulsante con un `CMFCColorMenuButton` dell'oggetto, creare le `CMFCColorMenuButton` oggetto, imposta qualsiasi appropriata [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) stili e quindi chiamare il `ReplaceButton` metodo il [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) classe. Se si personalizza una barra degli strumenti, chiamare il [CMFCToolBarsCustomizeDialog::ReplaceButton](../../mfc/reference/cmfctoolbarscustomizedialog-class.md#replacebutton) (metodo).  
  
 La finestra di dialogo di selezione dei colori viene creato durante l'elaborazione dei [CMFCColorMenuButton::CreatePopupMenu](#createpopupmenu) gestore dell'evento. Il gestore dell'evento di notifica al frame padre con un messaggio WM_COMMAND. Il `CMFCColorMenuButton` oggetto invia l'ID di controllo che viene assegnato al pulsante sulla barra degli strumenti o comandi di menu originale.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come creare e configurare un pulsante di menu del colore utilizzando i vari metodi nel `CMFCColorMenuButton` classe. Nell'esempio, un `CPalette` oggetto viene prima creato e quindi utilizzato per costruire un oggetto del `CMFCColorMenuButton` classe. Il `CMFCColorMenuButton` oggetto viene quindi configurato abilitazione relativo automatica e gli altri pulsanti e impostando il relativo colore e il numero di colonne. Questo codice è parte di [esempio di Word Pad](../../visual-cpp-samples.md).  
  
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
 [in] *uiCmdID*  
 ID del comando un pulsante.  
  
 [in] *lpszText*  
 Il testo del pulsante.  
  
 [in] *pPalette*  
 Puntatore alla tavolozza dei colori del pulsante.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il primo costruttore è il costruttore predefinito. Il colore dell'oggetto corrente e colore automatico vengono inizializzati su nero (RGB (0, 0, 0)).  
  
 Il secondo costruttore inizializza il pulsante per il colore che corrisponde all'ID del comando specificato.  
  
##  <a name="copyfrom"></a>  CMFCColorMenuButton::CopyFrom  
 Copia uno [classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)-oggetto derivato da un altro.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *src*  
 Pulsante di origine da copiare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override per copiare oggetti derivati da questo metodo il `CMFCColorMenuButton` oggetto.  
  
##  <a name="createpopupmenu"></a>  CMFCColorMenuButton::CreatePopupMenu  
 Crea una finestra di dialogo di selezione colore.  
  
```  
virtual CMFCPopupMenu* CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto che rappresenta una finestra di dialogo di selezione colore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'utente preme un pulsante di menu del colore.  
  
##  <a name="enableautomaticbutton"></a>  CMFCColorMenuButton::EnableAutomaticButton  
 Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colori normali. (Il pulsante automatico di sistema standard viene etichettato **automatica**.)  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Specifica il testo del pulsante che viene visualizzato quando il pulsante diventa automatica.  
  
 [in] *colorAutomatic*  
 Specifica un nuovo colore automatico.  
  
 [in] *bAttivare il*  
 Specifica se il pulsante è automatica o meno.  
  
### <a name="remarks"></a>Note  
 Il pulsante automatico si applica il colore predefinito corrente.  
  
##  <a name="enabledocumentcolors"></a>  CMFCColorMenuButton::EnableDocumentColors  
 Consente di visualizzare i colori di specifica del documento anziché i colori di sistema.  
  
```  
void EnableDocumentColors(
    LPCTSTR lpszLabel,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Specifica il testo del pulsante.  
  
 [in] *bAttivare il*  
 TRUE per visualizzare i colori di specifica del documento o su FALSE per visualizzare i colori di sistema.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per visualizzare i colori del documento corrente o i colori della tavolozza del sistema quando l'utente fa clic su un pulsante di menu del colore.  
  
##  <a name="enableotherbutton"></a>  CMFCColorMenuButton::EnableOtherButton  
 Abilita e disabilita un pulsante "other" che è posizionato sotto i pulsanti dei colori normali. (Il sistema standard "other" pulsante viene denominato **altri colori**.)  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg=TRUE,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Specifica il testo del pulsante.  
  
 [in] *bAltColorDlg*  
 Specificare TRUE per visualizzare il `CMFCColorDialog` nella finestra di dialogo oppure FALSE per visualizzare la finestra di dialogo dei colori di sistema standard.  
  
 [in] *bAttivare il*  
 Specificare TRUE per visualizzare il pulsante "altro"; in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletearoff"></a>  CMFCColorMenuButton::EnableTearOff  
 Offre la possibilità di trascinare un riquadro colore.  
  
```  
void EnableTearOff(
    UINT uiID,  
    int nVertDockColumns=-1,  
    int nHorzDockRows=-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiID*  
 Specifica l'ID per il riquadro a comparsa.  
  
 [in] *nVertDockColumns*  
 Specifica il numero di colonne nel riquadro colore verticalmente ancorato mentre è in stato a comparsa.  
  
 [in] *nHorzDockRows*  
 Specifica il numero di righe per del riquadro ancorato in orizzontale colori mentre è in stato a comparsa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per abilitare la funzionalità "tear-off" per il riquadro di colore che viene visualizzato quando il `CMFCColorMenuButton` pulsante viene premuto.  
  
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
 Colore del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcolorbycmdid"></a>  CMFCColorMenuButton::GetColorByCmdID  
 Recupera il colore che corrisponde a un ID di comando.  
  
```  
static COLORREF GetColorByCmdID(UINT uiCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiCmdID*  
 Un ID di comando.  
  
### <a name="return-value"></a>Valore restituito  
 Il colore che corrisponde all'ID del comando specificato.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo quando si dispone di più pulsanti di colore in un'applicazione. Quando l'utente sceglie un pulsante colore, il pulsante Invia l'ID di comando in un messaggio WM_COMMAND al relativo elemento padre. Il `GetColorByCmdID` metodo Usa l'ID di comando per recuperare il colore corrispondente.  
  
##  <a name="isemptymenuallowed"></a>  CMFCColorMenuButton::IsEmptyMenuAllowed  
 Indica se i menu vuoti sono supportati.  
  
```  
virtual BOOL IsEmptyMenuAllowed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i menu vuoti sono consentiti; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Menu vuoti sono supportati per impostazione predefinita. Eseguire l'override di questo metodo per modificare questo comportamento nella classe derivata.  
  
##  <a name="onchangeparentwnd"></a>  CMFCColorMenuButton::OnChangeParentWnd  
 Chiamato dal framework quando cambia la finestra padre.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pWndParent*  
 Un puntatore a una nuova finestra padre.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>  CMFCColorMenuButton::OnDraw  
 Chiamata eseguita dal framework per visualizzare un'immagine su un pulsante.  
  
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
 [in] *pDC*  
 Puntatore a un contesto di dispositivo.  
  
 [in] *rect*  
 Un rettangolo che delimita l'area da ridisegnare.  
  
 [in] *pImages*  
 Punta a un elenco di immagini della barra degli strumenti.  
  
 [in] *bHorz*  
 TRUE per specificare che la barra degli strumenti è in uno stato ancorato orizzontale. in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
 [in] *bCustomizeMode*  
 TRUE per specificare che l'applicazione è in modalità di personalizzazione. in caso contrario, FALSE. Il valore predefinito è FALSE.  
  
 [in] *bHighlight*  
 TRUE per specificare che il pulsante è evidenziato. in caso contrario, FALSE. Il valore predefinito è FALSE.  
  
 [in] *bDrawBorder*  
 TRUE per specificare che il bordo del pulsante viene visualizzato; in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
 [in] *bGrayDisabledButtons*  
 TRUE per specificare che i pulsanti disabilitati sono in grigio (disattivato) in caso contrario. in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawoncustomizelist"></a>  CMFCColorMenuButton::OnDrawOnCustomizeList  
 Chiamato dal framework prima un `CMFCColorMenuButton` oggetto viene visualizzato nell'elenco di una finestra di dialogo di personalizzazione della barra degli strumenti.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Puntatore a un contesto di dispositivo.  
  
 [in] *rect*  
 Un rettangolo che delimita il pulsante da disegnare.  
  
 [in] *bSelected*  
 TRUE specifica che il pulsante è in stato selezionato. in caso contrario, FALSE.  
  
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
 [in] *colorDefault*  
 Il colore predefinito selezionato nella finestra di dialogo colore.  
  
 [out] *colorRes*  
 Restituisce il colore selezionato dall'utente nella finestra di dialogo colore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente seleziona un colore nuovo; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Quando si fa clic sul pulsante di menu, chiamare questo metodo per aprire una finestra di dialogo colore. Se il valore restituito è diverso da zero, il colore selezionato dall'utente verrà archiviato nel *colorRes* parametro. Usare la [CMFCColorMenuButton::EnableOtherButton](#enableotherbutton) metodo passare tra la finestra di dialogo colore standard e il [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) nella finestra di dialogo.  
  
##  <a name="setcolor"></a>  CMFCColorMenuButton::SetColor  
 Imposta il colore del pulsante colore corrente.  
  
```  
virtual void SetColor(
    COLORREF clr,  
    BOOL bNotify=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *clr*  
 Un valore di colore RGB.  
  
 [in] *bNotify*  
 TRUE per applicare la *clr* colore parametro a qualsiasi pulsante di menu associata o un pulsante della barra degli strumenti; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per modificare il colore del pulsante colore corrente. Se il *bNotify* parametro è diverso da zero, il colore del pulsante corrispondente in una barra degli strumenti o qualsiasi menu di scelta rapida associato viene modificato il colore specificato per il *clr* parametro.  
  
##  <a name="setcolorbycmdid"></a>  CMFCColorMenuButton::SetColorByCmdID  
 Imposta il colore del pulsante di menu colore specificato.  
  
```  
static void SetColorByCmdID(
    UINT uiCmdID,  
    COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiCmdID*  
 L'ID di risorsa di un pulsante di menu del colore.  
  
 [in] *colore*  
 Un valore di colore RGB.  
  
##  <a name="setcolorname"></a>  CMFCColorMenuButton::SetColorName  
 Imposta un nuovo nome per il colore specificato.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Il valore RGB del colore il cui nome viene modificato.  
  
 [in] *strName*  
 Il nuovo nome del colore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setcolumnsnumber"></a>  CMFCColorMenuButton::SetColumnsNumber  
 Imposta il numero di colonne da visualizzare in un controllo di selezione di colore ( [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) oggetto).  
  
```  
void SetColumnsNumber(int nColumns);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nColumns*  
 Il numero di colonne da visualizzare.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)   
 [Classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md)
