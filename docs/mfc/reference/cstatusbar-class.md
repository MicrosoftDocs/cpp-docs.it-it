---
title: CStatusBar (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStatusBar
- AFXEXT/CStatusBar
- AFXEXT/CStatusBar::CStatusBar
- AFXEXT/CStatusBar::CommandToIndex
- AFXEXT/CStatusBar::Create
- AFXEXT/CStatusBar::CreateEx
- AFXEXT/CStatusBar::DrawItem
- AFXEXT/CStatusBar::GetItemID
- AFXEXT/CStatusBar::GetItemRect
- AFXEXT/CStatusBar::GetPaneInfo
- AFXEXT/CStatusBar::GetPaneStyle
- AFXEXT/CStatusBar::GetPaneText
- AFXEXT/CStatusBar::GetStatusBarCtrl
- AFXEXT/CStatusBar::SetIndicators
- AFXEXT/CStatusBar::SetPaneInfo
- AFXEXT/CStatusBar::SetPaneStyle
- AFXEXT/CStatusBar::SetPaneText
dev_langs:
- C++
helpviewer_keywords:
- indicators, status bar
- CStatusBar class
- status bars
- indicators
- status indicators
ms.assetid: a3bde3db-e71c-4881-a3ca-1d5481c345ba
caps.latest.revision: 24
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
ms.openlocfilehash: e96070041ef5bcee0865991a14b6484082d8fc91
ms.lasthandoff: 02/24/2017

---
# <a name="cstatusbar-class"></a>CStatusBar (classe)
Barra di controllo con una riga di riquadri di output di testo o "indicatori".  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStatusBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CStatusBar](#cstatusbar)|Costruisce un oggetto `CStatusBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CommandToIndex](#commandtoindex)|Ottiene l'indice per un ID determinato indicatore.|  
|[CStatusBar::Create](#create)|Crea la barra di stato, lo collega al `CStatusBar` dell'oggetto e imposta l'altezza del carattere e barra iniziale.|  
|[CStatusBar:: CreateEx](#createex)|Crea un `CStatusBar` oggetto con gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl` oggetto.|  
|[CStatusBar::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un proprietario barra controllo di stato.|  
|[CStatusBar::GetItemID](#getitemid)|Ottiene l'ID di indicatore per un determinato indice.|  
|[CStatusBar::GetItemRect](#getitemrect)|Ottiene visualizzare rettangolo per un determinato indice.|  
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Ottiene l'ID di indicatori, stile e spessore per un determinato indice.|  
|[CStatusBar::GetPaneStyle](#getpanestyle)|Ottiene lo stile indicatore per un determinato indice.|  
|[CStatusBar::GetPaneText](#getpanetext)|Ottiene il testo indicatore per un determinato indice.|  
|[CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl)|Consente l'accesso diretto al controllo sottostante comune.|  
|[CStatusBar:: SetIndicators](#setindicators)|Imposta ID indicatore.|  
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Imposta l'ID di indicatori, stile e spessore per un determinato indice.|  
|[CStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile dell'indicatore per un determinato indice.|  
|[CStatusBar::SetPaneText](#setpanetext)|Imposta il testo indicatore per un determinato indice.|  
  
## <a name="remarks"></a>Note  
 I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Ad esempio le righe di messaggio della Guida dal menu che descrivono brevemente il comando di menu selezionata e gli indicatori che mostrano lo stato di BLOC SCORR, BLOC NUM e altri tasti.  
  
 [CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl), una funzione membro nuova per MFC 4.0, consente di sfruttare supporto del controllo comune di Windows per funzionalità aggiuntive e personalizzazione della barra di stato. `CStatusBar`funzioni membro consentono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare le barre di stato anche più delle caratteristiche di una barra di stato di Windows 95/98. Quando si chiama `GetStatusBarCtrl`, verrà restituito un riferimento a un `CStatusBarCtrl` oggetto. Vedere [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) per ulteriori informazioni sulla progettazione di barre degli strumenti utilizzando i controlli comuni di Windows. Per ulteriori informazioni sui controlli comuni, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Il framework memorizza le informazioni sugli indicatori in una matrice con l'indicatore più a sinistra nella posizione 0. Quando si crea una barra di stato, utilizzare una matrice di ID che il framework associa gli indicatori corrispondenti di stringa. È quindi possibile utilizzare un ID di stringa o un indice per accedere a un indicatore.  
  
 Per impostazione predefinita, il primo indicatore è "flessibile": occupa la lunghezza della barra di stato non utilizzata da altri riquadri indicatore, in modo che altri riquadri sono allineati a destra.  
  
 Per creare una barra di stato, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CStatusBar`.  
  
2.  Chiamare il [crea](#create) (o [CreateEx](#createex)) funzione per creare la finestra della barra di stato e associarlo a di `CStatusBar` oggetto.  
  
3.  Chiamare [SetIndicators](#setindicators) per associare un ID di stringa a ogni indicatore.  
  
 Esistono tre modi per aggiornare il testo in un riquadro barra di stato:  
  
1.  Chiamare [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) per aggiornare il testo nel riquadro 0.  
  
2.  Chiamare [CCmdUI::SetText](../../mfc/reference/ccmdui-class.md#settext) nella barra di stato `ON_UPDATE_COMMAND_UI` gestore.  
  
3.  Chiamare [SetPaneText](#setpanetext) per aggiornare il testo per qualsiasi riquadro.  
  
 Chiamare [SetPaneStyle](#setpanestyle) per aggiornare lo stile di un riquadro barra di stato.  
  
 Per ulteriori informazioni sull'utilizzo di `CStatusBar`, vedere l'articolo [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CStatusBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="commandtoindex"></a>CStatusBar::CommandToIndex  
 Ottiene l'indice di indicatore per un ID specificato.  
  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDFind`  
 ID di stringa dell'indicatore il cui indice è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'indicatore se ha esito positivo. –&1; se non ha esito positivo.  
  
### <a name="remarks"></a>Note  
 L'indice del primo indicatore è 0.  
  
##  <a name="create"></a>CStatusBar::Create  
 Crea una barra (una finestra figlio) di stato e la associa il `CStatusBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore al [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è il padre della barra di stato.  
  
 `dwStyle`  
 Lo stile della barra di stato. Oltre a standard di Windows [stili](../../mfc/reference/window-styles.md), questi stili sono supportati.  
  
- `CBRS_TOP`Barra di controllo è nella parte superiore della finestra cornice.  
  
- `CBRS_BOTTOM`Barra di controllo è nella parte inferiore della finestra cornice.  
  
- `CBRS_NOALIGN`Barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
 `nID`  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Imposta il tipo di carattere iniziale e imposta lo stato dell'altezza della barra su un valore predefinito.  
  
##  <a name="createex"></a>CStatusBar:: CreateEx  
 Chiamare questa funzione per creare una barra (una finestra figlio) di stato e associarlo con il `CStatusBar` oggetto.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore al [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è il padre della barra di stato.  
  
 `dwCtrlStyle`  
 Gli stili aggiuntivi per la creazione del [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto. Il valore predefinito specifica una barra di stato senza un riquadro di ridimensionamento o una descrizione comando supportano. Stili barra di stati supportati sono:  
  
- **SBARS_SIZEGRIP** controllo barra di stato include un riquadro di ridimensionamento all'estremità destra della barra di stato. Un riquadro di ridimensionamento è simile a un bordo di ridimensionamento. è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.  
  
- **SBT_TOOLTIPS** la barra di stato supporta le descrizioni comandi.  
  
 Per informazioni dettagliate su questi stili, vedere [impostazioni per CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).  
  
 `dwStyle`  
 Lo stile della barra di stato. Il valore predefinito specifica che è possibile creare una barra di stato visibile nella parte inferiore della finestra cornice. Applicare qualsiasi combinazione di stili di controllo della barra di stato [stili finestra](../../mfc/reference/window-styles.md) e [CDialogBar::Create](../../mfc/reference/cdialogbar-class.md#create). Tuttavia, questo parametro deve sempre includere gli stili WS_CHILD e WS_VISIBLE.  
  
 `nID`  
 ID della finestra figlio della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione imposta il tipo di carattere iniziale e imposta lo stato dell'altezza della barra su un valore predefinito.  
  
 Utilizzare `CreateEx`, invece di [crea](#create), quando alcuni stili devono essere presenti durante la creazione del controllo barra di stato incorporata. Ad esempio, impostare `dwCtrlStyle` a **SBT_TOOLTIPS** per visualizzare le descrizioni comandi in un oggetto barra di stato.  
  
##  <a name="cstatusbar"></a>CStatusBar::CStatusBar  
 Costruisce un `CStatusBar` oggetto, crea un tipo di carattere della barra di stato predefinito se necessario e imposta le caratteristiche del tipo di carattere per i valori predefiniti.  
  
```  
CStatusBar();
```  
  
##  <a name="drawitem"></a>CStatusBar::DrawItem  
 Questa funzione membro viene chiamata dal framework quando un aspetto visivo di un proprietario barra di stato.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura che contiene informazioni sul tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** membro del `DRAWITEMSTRUCT` struttura definisce l'operazione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CStatusBar` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del completamento di questa funzione membro.  
  
##  <a name="getitemid"></a>CStatusBar::GetItemID  
 Restituisce l'ID dell'indicatore specificato da `nIndex`.  
  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'indicatore il cui ID è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID dell'indicatore specificato da `nIndex`.  
  
##  <a name="getitemrect"></a>CStatusBar::GetItemRect  
 Copia le coordinate dell'indicatore specificato da `nIndex` nella struttura a cui puntata `lpRect`.  
  
```  
void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'indicatore il cui coordinate del rettangolo devono essere recuperate.  
  
 `lpRect`  
 Punta a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che riceverà le coordinate dell'indicatore specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra di stato.  
  
##  <a name="getpaneinfo"></a>CStatusBar::GetPaneInfo  
 Set `nID`, `nStyle`, e `cxWidth` l'ID, stile e la larghezza del riquadro indicatore nella posizione specificata da `nIndex`.  
  
```  
void GetPaneInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& cxWidth) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro sono le cui informazioni da recuperare.  
  
 `nID`  
 Fare riferimento a un **UINT** che viene impostata sull'ID del riquadro.  
  
 `nStyle`  
 Fare riferimento a un **UINT** impostato lo stile del riquadro.  
  
 `cxWidth`  
 Riferimento a un intero che è stato impostato la larghezza del riquadro.  
  
##  <a name="getpanestyle"></a>CStatusBar::GetPaneStyle  
 Chiamare questa funzione membro per recuperare lo stile del riquadro della barra di stato.  
  
```  
UINT GetPaneStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro è cui lo stile da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile del riquadro della barra di stato specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Stile del riquadro determina come viene visualizzato il riquadro.  
  
 Per un elenco di stili disponibili per le barre di stato, vedere [crea](#create).  
  
##  <a name="getpanetext"></a>CStatusBar::GetPaneText  
 Chiamare questa funzione membro per recuperare il testo visualizzato in un riquadro barra di stato.  
  
```  
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;  ```  
  
### Parameters  
 `nIndex`  
 Index of the pane whose text is to be retrieved.  
  
 `rString`  
 A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that contains the text to be retrieved.  
  
### Return Value  
 A `CString` object containing the pane's text.  
  
### Remarks  
 The second form of this member function fills a `CString` object with the string text.  
  
##  <a name="getstatusbarctrl"></a>  CStatusBar::GetStatusBarCtrl  
 This member function allows direct access to the underlying common control.  
  
```  
Delle CStatusBarCtrl / delle GetStatusBarCtrl() a const.  
```  
  
### Return Value  
 Contains a reference to a [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) object.  
  
### Remarks  
 Use `GetStatusBarCtrl` to take advantage of the functionality of the Windows status-bar common control, and to take advantage of the support [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) provides for status-bar customization. For example, by using the common control, you can specify a style that includes a sizing grip on the status bar, or you can specify a style to have the status bar appear at the top of the parent window's client area.  
  
 For more general information about common controls, See [Common Controls](http://msdn.microsoft.com/library/windows/desktop/bb775493) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setindicators"></a>  CStatusBar::SetIndicators  
 Sets each indicator's ID to the value specified by the corresponding element of the array `lpIDArray`, loads the string resource specified by each ID, and sets the indicator's text to the string.  
  
```  
BOOL SetIndicators (const UINT * lpIDArray,  
    int nIDCount);
```  
  
### Parameters  
 `lpIDArray`  
 Pointer to an array of IDs.  
  
 `nIDCount`  
 Number of elements in the array pointed to by `lpIDArray`.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="setpaneinfo"></a>  CStatusBar::SetPaneInfo  
 Sets the specified indicator pane to a new ID, style, and width.  
  
```  
void SetPaneInfo (int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int cxWidth);
```  
  
### Parameters  
 `nIndex`  
 Index of the indicator pane whose style is to be set.  
  
 `nID`  
 New ID for the indicator pane.  
  
 `nStyle`  
 New style for the indicator pane.  
  
 `cxWidth`  
 New width for the indicator pane.  
  
### Remarks  
 The following indicator styles are supported:  
  
- **SBPS_NOBORDERS** No 3-D border around the pane.  
  
- **SBPS_POPOUT** Reverse border so that text "pops out."  
  
- **SBPS_DISABLED** Do not draw text.  
  
- **SBPS_STRETCH** Stretch pane to fill unused space. Only one pane per status bar can have this style.  
  
- **SBPS_NORMAL** No stretch, borders, or pop-out.  
  
##  <a name="setpanestyle"></a>  CStatusBar::SetPaneStyle  
 Call this member function to set the style of a status bar's pane.  
  
```  
void SetPaneStyle (int nIndex,  
    UINT nStyle);
```  
  
### Parameters  
 `nIndex`  
 Index of the pane whose style is to be set.  
  
 `nStyle`  
 Style of the pane whose style is to be set.  
  
### Remarks  
 A pane's style determines how the pane appears.  
  
 For a list of styles available for status bars, see [SetPaneInfo](#setpaneinfo).  
  
##  <a name="setpanetext"></a>  CStatusBar::SetPaneText  
 Call this member function to set the pane text to the string pointed to by `lpszNewText`.  
  
```  
BOOL SetPaneText (int nIndex,  
    LpszNewText LPCTSTR,  
    BOOL baggiornamento = TRUE);
```  
  
### Parameters  
 `nIndex`  
 Index of the pane whose text is to be set.  
  
 `lpszNewText`  
 Pointer to the new pane text.  
  
 *bUpdate*  
 If **TRUE**, the pane is invalidated after the text is set.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 After you call `SetPaneText`, you must add a UI update handler to display the new text in the status bar.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]  
  
## See Also  
 [MFC Sample CTRLBARS](../../visual-cpp-samples.md)   
 [MFC Sample DLGCBR32](../../visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CStatusBarCtrl Class](../../mfc/reference/cstatusbarctrl-class.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)

