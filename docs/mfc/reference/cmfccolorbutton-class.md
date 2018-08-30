---
title: Classe CMFCColorButton | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton::CMFCColorButton
- AFXCOLORBUTTON/CMFCColorButton::EnableAutomaticButton
- AFXCOLORBUTTON/CMFCColorButton::EnableOtherButton
- AFXCOLORBUTTON/CMFCColorButton::GetAutomaticColor
- AFXCOLORBUTTON/CMFCColorButton::GetColor
- AFXCOLORBUTTON/CMFCColorButton::SetColor
- AFXCOLORBUTTON/CMFCColorButton::SetColorName
- AFXCOLORBUTTON/CMFCColorButton::SetColumnsNumber
- AFXCOLORBUTTON/CMFCColorButton::SetDocumentColors
- AFXCOLORBUTTON/CMFCColorButton::SetPalette
- AFXCOLORBUTTON/CMFCColorButton::SizeToContent
- AFXCOLORBUTTON/CMFCColorButton::IsDrawXPTheme
- AFXCOLORBUTTON/CMFCColorButton::OnDraw
- AFXCOLORBUTTON/CMFCColorButton::OnDrawBorder
- AFXCOLORBUTTON/CMFCColorButton::OnDrawFocusRect
- AFXCOLORBUTTON/CMFCColorButton::OnShowColorPopup
- AFXCOLORBUTTON/CMFCColorButton::RebuildPalette
- AFXCOLORBUTTON/CMFCColorButton::UpdateColor
- AFXCOLORBUTTON/CMFCColorButton::m_bEnabledInCustomizeMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCColorButton [MFC], CMFCColorButton
- CMFCColorButton [MFC], EnableAutomaticButton
- CMFCColorButton [MFC], EnableOtherButton
- CMFCColorButton [MFC], GetAutomaticColor
- CMFCColorButton [MFC], GetColor
- CMFCColorButton [MFC], SetColor
- CMFCColorButton [MFC], SetColorName
- CMFCColorButton [MFC], SetColumnsNumber
- CMFCColorButton [MFC], SetDocumentColors
- CMFCColorButton [MFC], SetPalette
- CMFCColorButton [MFC], SizeToContent
- CMFCColorButton [MFC], IsDrawXPTheme
- CMFCColorButton [MFC], OnDraw
- CMFCColorButton [MFC], OnDrawBorder
- CMFCColorButton [MFC], OnDrawFocusRect
- CMFCColorButton [MFC], OnShowColorPopup
- CMFCColorButton [MFC], RebuildPalette
- CMFCColorButton [MFC], UpdateColor
- CMFCColorButton [MFC], m_bEnabledInCustomizeMode
ms.assetid: 9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fbabd502ca6d9d81c569831f9dcb0b344523bb3e
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215328"
---
# <a name="cmfccolorbutton-class"></a>Classe CMFCColorButton
Il `CMFCColorButton` e [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) classi vengono usate insieme per implementare un controllo di selezione colore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCColorButton : public CMFCButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::CMFCColorButton](#cmfccolorbutton)|Costruisce un nuovo oggetto `CMFCColorButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton)|Abilita e disabilita un pulsante "automatico" in cui è posizionato sopra i pulsanti di colori normali. (Il pulsante automatico di sistema standard viene etichettato **automatica**.)|  
|[CMFCColorButton::EnableOtherButton](#enableotherbutton)|Abilita e disabilita un pulsante "other" che è posizionato sotto i pulsanti dei colori normali. (Il sistema standard "other" pulsante viene denominato **altri colori**.)|  
|[CMFCColorButton::GetAutomaticColor](#getautomaticcolor)|Recupera il colore automatico corrente.|  
|[CMFCColorButton::GetColor](#getcolor)|Recupera il colore del pulsante.|  
|[CMFCColorButton::SetColor](#setcolor)|Imposta il colore del pulsante.|  
|[CMFCColorButton::SetColorName](#setcolorname)|Imposta un nome di colore.|  
|[CMFCColorButton::SetColumnsNumber](#setcolumnsnumber)|Imposta il numero di colonne nella finestra di dialogo di selezione colore.|  
|[CMFCColorButton::SetDocumentColors](#setdocumentcolors)|Specifica un elenco di colori specifiche per i documenti che vengono visualizzati nella finestra di dialogo di selezione colore.|  
|[CMFCColorButton::SetPalette](#setpalette)|Specifica una tavolozza di colori di visualizzazione standard.|  
|[CMFCColorButton::SizeToContent](#sizetocontent)|Modifica la dimensione del controllo button, a seconda delle dimensioni di testo e immagine.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorButton::IsDrawXPTheme](#isdrawxptheme)|Indica se il pulsante colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.|  
|[CMFCColorButton::OnDraw](#ondraw)|Chiamato dal framework per visualizzare un'immagine del pulsante.|  
|[CMFCColorButton::OnDrawBorder](#ondrawborder)|Chiamata eseguita dal framework per visualizzare il bordo del pulsante.|  
|[CMFCColorButton::OnDrawFocusRect](#ondrawfocusrect)|Chiamata eseguita dal framework per visualizzare un rettangolo di attivazione quando il pulsante ha un'attenzione particolare.|  
|[CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)|Chiamato dal framework quando sta per essere visualizzata la finestra di dialogo di selezione dei colori.|  
|[CMFCColorButton::RebuildPalette](#rebuildpalette)|Inizializza il `m_pPalette` protetti membro dati per la tavolozza specificata o la tavolozza di sistema predefinito.|  
|[CMFCColorButton::UpdateColor](#updatecolor)|Chiamato dal framework quando l'utente seleziona un colore dalla tavolozza della finestra di dialogo di selezione colore.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|`m_bAltColorDlg`|Valore booleano. Se TRUE, il framework Visualizza il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) finestra di dialogo colore quando i *altri* fa clic sul pulsante, o se è FALSE, il sistema a colori nella finestra di dialogo. Il valore predefinito è TRUE. Per altre informazioni, vedere [CMFCColorButton::EnableOtherButton](#enableotherbutton).|  
|`m_bAutoSetFocus`|Valore booleano. Se TRUE, il framework imposta lo stato attivo nel menu colore quando viene visualizzato il menu di scelta o se è FALSE, non viene modificato lo stato attivo. Il valore predefinito è TRUE.|  
|[CMFCColorButton::m_bEnabledInCustomizeMode](#m_benabledincustomizemode)|Indica se la modalità di personalizzazione è abilitata per il pulsante colore.|  
|`m_Color`|Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore. Contiene il colore attualmente selezionato.|  
|`m_ColorAutomatic`|Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore. Contiene il colore predefinito attualmente selezionato.|  
|`m_Colors`|Oggetto [CArray](../../mfc/reference/carray-class.md) dei [COLORREF](/windows/desktop/gdi/colorref) valori. Contiene i colori disponibili attualmente.|  
|`m_lstDocColors`|Oggetto [CList](../../mfc/reference/clist-class.md) dei [COLORREF](/windows/desktop/gdi/colorref) valori. Contiene i colori del documento corrente.|  
|`m_nColumns`|Intero. Contiene il numero di colonne da visualizzare nella griglia dei colori in un menu di selezione colore.|  
|`m_pPalette`|Un puntatore a un [CPalette](../../mfc/reference/cpalette-class.md). Contiene i colori disponibili nel menu di selezione colore corrente.|  
|`m_pPopup`|Un puntatore a un [classe CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md) oggetto. Menu di selezione di colore che viene visualizzato quando si fa clic sul pulsante del colore.|  
|`m_strAutoColorText`|Stringa. L'etichetta del pulsante "automatico" in un menu di selezione colore.|  
|`m_strDocColorsText`|Stringa. L'etichetta del pulsante in un menu di selezione colori che visualizza i colori del documento.|  
|`m_strOtherText`|Stringa. Etichetta del pulsante "" in un menu di selezione colore.|  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, il `CMFCColorButton` classe si comporta come un pulsante di comando che verrà visualizzata una finestra di dialogo Selezione colore. La finestra di dialogo di selezione dei colori contiene una matrice di pulsanti di colore piccoli e un pulsante "other" che visualizza una selezione colori personalizzati. (Il sistema standard "other" pulsante viene denominato **altri colori**.) Quando un utente seleziona un nuovo colore, il `CMFCColorButton` oggetto riflette la modifica e visualizza il colore selezionato.  
  
 Creare un controllo pulsante colore direttamente nel codice o tramite il **ClassWizard** strumento e un modello di finestra di dialogo. Se si crea direttamente un controllo pulsante colore, aggiungere un `CMFCColorButton` variabile all'applicazione, e quindi chiamare il costruttore e `Create` metodi del `CMFCColorButton` oggetto. Se si usa la **ClassWizard**, aggiungere un `CButton` variabile all'applicazione e quindi modificare il tipo della variabile dal `CButton` a `CMFCColorButton`.  
  
 La finestra di dialogo di selezione colori ( [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)) viene visualizzato per il [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) metodo quando il framework chiama il `OnLButtonDown` gestore dell'evento. Il [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup) può eseguire l'override di metodo per supportare la selezione dei colori personalizzati.  
  
 Il `CMFCColorButton` oggetto notifica al relativo elemento padre di un colore modifica mediante l'invio di un WM_COMMAND | Notifica BN_CLICKED. L'elemento padre utilizza il [CMFCColorButton::GetColor](#getcolor) metodo per recuperare il colore corrente.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare un pulsante del colore utilizzando i vari metodi nel `CMFCColorButton` classe. I metodi di impostare il colore del pulsante del colore e il relativo numero di colonne e abilitare automatico e gli altri pulsanti. In questo esempio fa parte di [esempio dimostrativo di barra di stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_1.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolorbutton.h  
  
##  <a name="cmfccolorbutton"></a>  CMFCColorButton::CMFCColorButton  
 Costruisce un nuovo oggetto `CMFCColorButton`.  
  
```  
CMFCColorButton();
```  
  
##  <a name="enableautomaticbutton"></a>  CMFCColorButton::EnableAutomaticButton  
 Abilitare o disabilitare il pulsante "automatico" di un controllo di selezione di colore e impostare il colore automatico (predefinito).  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Specifica il testo del pulsante automatico.  
  
 [in] *colorAutomatic*  
 Un valore RGB che specifica il colore di predefinito del pulsante automatico.  
  
 [in] *bAttivare il*  
 Specifica se il pulsante automatico è abilitato o disabilitato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enableotherbutton"></a>  CMFCColorButton::EnableOtherButton  
 Abilitare o disabilitare il pulsante "altro", che viene visualizzato sotto pulsanti dei colori normali.  
  
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
 Specifica se il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) si apre la finestra di dialogo o la finestra di dialogo colore di sistema quando l'utente fa clic sul pulsante.  
  
 [in] *bAttivare il*  
 Specifica se il pulsante "altro" è abilitato o disabilitato.  
  
### <a name="remarks"></a>Note  
 Fare clic sul pulsante "altro" per visualizzare una finestra di dialogo dei colori. Se il *bAltColorDlg* parametro è TRUE, il [classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) viene visualizzato; in caso contrario, viene visualizzata la finestra di dialogo colore di sistema.  
  
##  <a name="getautomaticcolor"></a>  CMFCColorButton::GetAutomaticColor  
 Recupera il colore automatico (predefinito) corrente.  
  
```  
COLORREF GetAutomaticColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore RGB che rappresenta il colore automatico corrente.  
  
### <a name="remarks"></a>Note  
 Il colore automatico corrente è impostato il [CMFCColorButton::EnableAutomaticButton](#enableautomaticbutton) (metodo).  
  
##  <a name="getcolor"></a>  CMFCColorButton::GetColor  
 Recupera il colore attualmente selezionato.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdrawxptheme"></a>  CMFCColorButton::IsDrawXPTheme  
 Indica se il pulsante colore corrente viene visualizzato nello stile di visualizzazione di Windows XP.  
  
```  
BOOL IsDrawXPTheme() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se gli stili visivi sono supportati e sul pulsante del colore corrente viene visualizzato nello stile di visualizzazione di Windows XP. in caso contrario, FALSE.  
  
##  <a name="m_benabledincustomizemode"></a>  CMFCColorButton::m_bEnabledInCustomizeMode  
 Imposta un pulsante colore alla modalità di personalizzazione.  
  
```  
BOOL m_bEnabledInCustomizeMode;  
```  
  
### <a name="remarks"></a>Note  
 Se è necessario aggiungere un pulsante colore alla pagina della finestra di dialogo una personalizzazione (o consentire all'utente di effettuare un altro colore selezione durante la personalizzazione), abilitare il pulsante impostando il `m_bEnabledInCustomizeMode` membro su TRUE. Per impostazione predefinita, questo membro è impostato su FALSE.  
  
##  <a name="ondraw"></a>  CMFCColorButton::OnDraw  
 Chiamato dal framework per eseguire il rendering di un'immagine del pulsante.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Punta al contesto di dispositivo usato per il rendering dell'immagine del pulsante.  
  
 [in] *rect*  
 Un rettangolo che delimita il pulsante.  
  
 [in] *uiState*  
 Specifica lo stato di visualizzazione del pulsante.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per personalizzare il processo di rendering.  
  
##  <a name="ondrawborder"></a>  CMFCColorButton::OnDrawBorder  
 Chiamato dal framework per visualizzare il bordo del pulsante.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect& rectClient,  
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Punta al contesto di dispositivo utilizzato per disegnare il bordo.  
  
 [in] *rectClient*  
 Un rettangolo nel contesto di periferica specificato per il *pDC* parametri che definisce i limiti del pulsante deve essere disegnato.  
  
 [in] *uiState*  
 Specifica lo stato di visualizzazione del pulsante.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare l'aspetto del pulsante il colore del bordo.  
  
##  <a name="ondrawfocusrect"></a>  CMFCColorButton::OnDrawFocusRect  
 Chiamata eseguita dal framework per visualizzare un rettangolo di attivazione quando il pulsante ha lo stato attivo.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Punta al contesto di dispositivo utilizzato per disegnare il rettangolo di attivazione.  
  
 [in] *rectClient*  
 Un rettangolo nel contesto di periferica specificato per il *pDC* parametri che definisce i limiti del pulsante.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per personalizzare l'aspetto del rettangolo di attivazione.  
  
##  <a name="onshowcolorpopup"></a>  CMFCColorButton::OnShowColorPopup  
 Chiamato prima che venga visualizzato nella barra dei colori popup.  
  
```  
virtual void OnShowColorPopup();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="rebuildpalette"></a>  CMFCColorButton::RebuildPalette  
 Inizializza il `m_pPalette` protetti membro dati per la tavolozza specificata o la tavolozza di sistema predefinito.  
  
```  
void RebuildPalette(CPalette* pPal);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *pPal*|Puntatore a una tavolozza logica o NULL. Se NULL, viene utilizzata la tavolozza di sistema predefinito.|  
  
##  <a name="setcolor"></a>  CMFCColorButton::SetColor  
 Specifica il colore del pulsante.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Un valore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setcolorname"></a>  CMFCColorButton::SetColorName  
 Specifica il nome di un colore.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Il valore del colore RGB.  
  
 [in] *strName*  
 Nome del colore.  
  
### <a name="remarks"></a>Note  
 L'elenco dei nomi di colore è globale per ogni applicazione. Di conseguenza, questo metodo trasferisce i parametri [CMFCColorBar::SetColorName](../../mfc/reference/cmfccolorbar-class.md#setcolorname).  
  
##  <a name="setcolumnsnumber"></a>  CMFCColorButton::SetColumnsNumber  
 Definisce il numero di colonne che vengono visualizzate nella tabella dei colori che viene presentata all'utente durante il processo di selezione di colore dell'utente.  
  
```  
void SetColumnsNumber(int nColumns);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nColumns*  
 Specifica il numero di colonne.  
  
### <a name="remarks"></a>Note  
 L'utente può selezionare un colore da una barra dei colori popup contenente una tabella dei colori predefiniti. Utilizzare questo metodo per definire il numero di colonne nella tabella.  
  
##  <a name="setdocumentcolors"></a>  CMFCColorButton::SetDocumentColors  
 Specifica un set di colori e il relativo nome. Il set di colori viene visualizzato tramite un [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) oggetto.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszLabel,  
    CList<COLORREF,COLORREF>& lstColors);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Specifica l'etichetta da visualizzare con il set di colori del documento.  
  
 [in] *lstColors*  
 Un riferimento a un elenco di valori RGB.  
  
### <a name="remarks"></a>Note  
 Oggetto `CMFCColorButton` oggetto gestisce un elenco di valori RGB che vengono trasferiti a un [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) oggetto. Quando viene visualizzata la barra dei colori, i colori vengono visualizzati in una sezione speciale la cui etichetta specificato dal *lpszLabel* parametro.  
  
##  <a name="setpalette"></a>  CMFCColorButton::SetPalette  
 Specifica i colori standard da visualizzare nella barra dei colori popup.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pPalette*  
 Puntatore a una tavolozza dei colori.  
  
### <a name="remarks"></a>Note  
  
##  <a name="sizetocontent"></a>  CMFCColorButton::SizeToContent  
 Ridimensiona il controllo pulsante per adattare il testo e immagine.  
  
```  
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bCalcOnly*  
 Se diverso da zero, viene calcolata la nuova dimensione del controllo pulsante ma non viene modificata la dimensione effettiva.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che specifica la nuova dimensione del controllo pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="updatecolor"></a>  CMFCColorButton::UpdateColor  
 Chiamato dal framework quando l'utente seleziona un colore dalla barra dei colori che viene visualizzato quando l'utente fa clic sul pulsante del colore.  
  
```  
virtual void UpdateColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Colore selezionato dall'utente.  
  
### <a name="remarks"></a>Note  
 Il `UpdateColor` funzione Cambia colore del pulsante attualmente selezionato e invia una notifica padre inviando un messaggio WM_COMMAND con una notifica standard BN_CLICKED. Usare la [CMFCColorButton::GetColor](#getcolor) metodo per recuperare il colore selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)   
 [Classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)   
 [CMFCColorButton::OnShowColorPopup](#onshowcolorpopup)   
 [COLORREF](/windows/desktop/gdi/colorref)   
 [CPalette (classe)](../../mfc/reference/cpalette-class.md)   
 [CArray (classe)](../../mfc/reference/carray-class.md)   
 [Classe CList](../../mfc/reference/clist-class.md)   
 [CString](../../atl-mfc-shared/reference/cstringt-class.md)
