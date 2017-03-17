---
title: Classe CMFCColorBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCColorBar
- AFXCOLORBAR/CMFCColorBar
- AFXCOLORBAR/CMFCColorBar::CMFCColorBar
- AFXCOLORBAR/CMFCColorBar::ContextToSize
- AFXCOLORBAR/CMFCColorBar::CreateControl
- AFXCOLORBAR/CMFCColorBar::Create
- AFXCOLORBAR/CMFCColorBar::EnableAutomaticButton
- AFXCOLORBAR/CMFCColorBar::EnableOtherButton
- AFXCOLORBAR/CMFCColorBar::GetColor
- AFXCOLORBAR/CMFCColorBar::GetCommandID
- AFXCOLORBAR/CMFCColorBar::GetHighlightedColor
- AFXCOLORBAR/CMFCColorBar::GetHorzMargin
- AFXCOLORBAR/CMFCColorBar::GetVertMargin
- AFXCOLORBAR/CMFCColorBar::IsTearOff
- AFXCOLORBAR/CMFCColorBar::SetColor
- AFXCOLORBAR/CMFCColorBar::SetColorName
- AFXCOLORBAR/CMFCColorBar::SetCommandID
- AFXCOLORBAR/CMFCColorBar::SetDocumentColors
- AFXCOLORBAR/CMFCColorBar::SetHorzMargin
- AFXCOLORBAR/CMFCColorBar::SetVertMargin
- AFXCOLORBAR/CMFCColorBar::AdjustLocations
- AFXCOLORBAR/CMFCColorBar::AllowChangeTextLabels
- AFXCOLORBAR/CMFCColorBar::AllowShowOnList
- AFXCOLORBAR/CMFCColorBar::CalcSize
- AFXCOLORBAR/CMFCColorBar::CreatePalette
- AFXCOLORBAR/CMFCColorBar::GetColorGridSize
- AFXCOLORBAR/CMFCColorBar::GetExtraHeight
- AFXCOLORBAR/CMFCColorBar::InitColors
- AFXCOLORBAR/CMFCColorBar::OnKey
- AFXCOLORBAR/CMFCColorBar::OnSendCommand
- AFXCOLORBAR/CMFCColorBar::OnUpdateCmdUI
- AFXCOLORBAR/CMFCColorBar::OpenColorDialog
- AFXCOLORBAR/CMFCColorBar::Rebuild
- AFXCOLORBAR/CMFCColorBar::SelectPalette
- AFXCOLORBAR/CMFCColorBar::SetPropList
- AFXCOLORBAR/CMFCColorBar::ShowCommandMessageString
dev_langs:
- C++
helpviewer_keywords:
- CMFCColorBar class
- CMFCColorBar::m_ColorAutomatic data member
- CMFCColorBar::m_bInternal data member
- CMFCColorBar::m_bIsEnabled data member
- CMFCColorBar::m_nNumColumnsVert data member
- CMFCColorBar::m_nVertMargin data member
- CMFCColorBar::m_strDocColors data member
- CMFCColorBar::m_BoxSize data member
- CMFCColorBar::m_pParentBtn data member
- CMFCColorBar::m_bIsTearOff data member
- CMFCColorBar::m_nHorzOffset data member
- CMFCColorBar::m_pParentRibbonBtn data member
- CMFCColorBar::m_nNumRowsHorz data member
- CMFCColorBar::m_bStdColorDlg data member
- CMFCColorBar::m_strAutoColor data member
- CMFCColorBar::m_ColorNames data member
- CMFCColorBar::m_strOtherColor data member
- CMFCColorBar::m_lstDocColors data member
- CMFCColorBar::m_pWndPropList data member
- CMFCColorBar::m_ColorSelected data member
- CMFCColorBar::m_nCommandID data member
- CMFCColorBar::m_nHorzMargin data member
- CMFCColorBar::m_nRowHeight data member
- CMFCColorBar::m_Palette data member
- CMFCColorBar::m_colors data member
- CMFCColorBar::m_nVertOffset data member
- CMFCColorBar::m_nNumColumns data member
- CMFCColorBar::m_bShowDocColorsWhenDocked data member
ms.assetid: 4756ee40-25a5-4cee-af7f-acab7993d1c7
caps.latest.revision: 35
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
ms.openlocfilehash: bf4d431a3f3237587dc9f86be91f11b9b5016fe2
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccolorbar-class"></a>Classe CMFCColorBar
La `CMFCColorBar` classe rappresenta una barra di controllo ancorabile che consente di selezionare colori in un documento o un'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCColorBar : public CMFCPopupMenuBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::CMFCColorBar](#cmfccolorbar)|Costruisce un oggetto `CMFCColorBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::ContextToSize](#contexttosize)|Calcola i margini verticali e orizzontali che sono necessarie per contenere i pulsanti nella barra di colore e quindi modifica la posizione dei pulsanti.|  
|[CMFCColorBar::CreateControl](#createcontrol)|Crea una finestra del controllo barra di colore, lo collega al `CMFCColorBar` dell'oggetto e ridimensiona il controllo in modo che contenga la tavolozza di colori specificata.|  
|[CMFCColorBar::Create](#create)|Crea una finestra del controllo barra di colore e lo collega a di `CMFCColorBar` oggetto.|  
|[CMFCColorBar::EnableAutomaticButton](#enableautomaticbutton)|Mostra o nasconde il pulsante automatica.|  
|[CMFCColorBar::EnableOtherButton](#enableotherbutton)|Abilita o disabilita la visualizzazione di una finestra di dialogo che consente all'utente di selezionare più colori.|  
|[CMFCColorBar::GetColor](#getcolor)|Recupera il colore selezionato.|  
|[CMFCColorBar::GetCommandID](#getcommandid)|Recupera l'ID di comando del controllo barra di colore corrente.|  
|[CMFCColorBar::GetHighlightedColor](#gethighlightedcolor)|Recupera il colore che indica che un pulsante colore ha lo stato attivo; Ciò significa che il pulsante è *hot*.|  
|[CMFCColorBar::GetHorzMargin](#gethorzmargin)|Recupera il margine orizzontale, ovvero lo spazio tra sinistra o destra colore cella e il limite dell'area client.|  
|[CMFCColorBar::GetVertMargin](#getvertmargin)|Recupera il margine verticale, ovvero lo spazio tra la parte superiore o cella di colore inferiore e il limite dell'area client.|  
|[CMFCColorBar::IsTearOff](#istearoff)|Indica se la barra dei colori corrente è ancorata.|  
|[CMFCColorBar::SetColor](#setcolor)|Imposta il colore selezionato.|  
|[CMFCColorBar::SetColorName](#setcolorname)|Imposta un nuovo nome per un colore specificato.|  
|[CMFCColorBar::SetCommandID](#setcommandid)|Imposta un nuovo ID di comando per un controllo barra dei colori.|  
|[CMFCColorBar::SetDocumentColors](#setdocumentcolors)|Imposta l'elenco dei colori utilizzati nel documento corrente.|  
|[CMFCColorBar::SetHorzMargin](#sethorzmargin)|Imposta il margine orizzontale, ovvero lo spazio tra sinistra o destra colore cella e il limite dell'area client.|  
|[CMFCColorBar::SetVertMargin](#setvertmargin)|Imposta il margine verticale, ovvero lo spazio tra la cella superiore o inferiore di colore e il limite dell'area client.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCColorBar::AdjustLocations](#adjustlocations)|Regola le posizioni dei pulsanti di colore nella barra di colore.|  
|[CMFCColorBar::AllowChangeTextLabels](#allowchangetextlabels)|Indica se è possibile modificare l'etichetta di testo dei pulsanti di colore.|  
|[CMFCColorBar::AllowShowOnList](#allowshowonlist)|Indica se l'oggetto controllo barra dei colori può essere visualizzato in un elenco della barra degli strumenti durante il processo di personalizzazione.|  
|[CMFCColorBar::CalcSize](#calcsize)|Chiamato dal framework come parte del processo di calcolo di layout.|  
|[CMFCColorBar::CreatePalette](#createpalette)|Inizializza una tavolozza di colori in una matrice di colori specificata.|  
|[CMFCColorBar::GetColorGridSize](#getcolorgridsize)|Calcola il numero di righe e colonne nella griglia di un controllo barra di colore.|  
|[CMFCColorBar::GetExtraHeight](#getextraheight)|Calcola l'altezza aggiuntiva necessarie per visualizzare gli elementi dell'interfaccia utente, ad esempio la barra dei colori corrente di **altri** pulsante, i colori del documento e così via.|  
|[CMFCColorBar::InitColors](#initcolors)|Inizializza una matrice di colori con i colori in una tavolozza specificata o la tavolozza predefinita di sistema.|  
|[CMFCColorBar::OnKey](#onkey)|Chiamato dal framework quando un utente preme un tasto.|  
|[CMFCColorBar::OnSendCommand](#onsendcommand)|Chiamato dal framework per chiudere una gerarchia di controlli popup.|  
|[CMFCColorBar::OnUpdateCmdUI](#onupdatecmdui)|Chiamato dal framework per abilitare o disabilitare un elemento dell'interfaccia utente di un controllo barra di colore prima che venga visualizzato l'elemento.|  
|[CMFCColorBar::OpenColorDialog](#opencolordialog)|Verrà visualizzata una finestra di dialogo colore.|  
|[CMFCColorBar::Rebuild](#rebuild)|Ridisegna completamente il controllo barra dei colori.|  
|[CMFCColorBar::SelectPalette](#selectpalette)|Imposta la tavolozza logica del contesto di dispositivo specificato per la tavolozza del pulsante padre del controllo barra di colore corrente.|  
|[CMFCColorBar::SetPropList](#setproplist)|Imposta il `m_pWndPropList` protetto membro dati per il puntatore specificato a un controllo griglia delle proprietà.|  
|[CMFCColorBar::ShowCommandMessageString](#showcommandmessagestring)|Richiede la finestra cornice proprietario del controllo barra dei colori per aggiornare la riga messaggio nella barra di stato.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_bInternal`|Un campo booleano che determina se vengono elaborati gli eventi del mouse. In genere, vengono elaborati gli eventi del mouse quando questo campo è `TRUE` e modalità di personalizzazione è `FALSE`.|  
|`m_bIsEnabled`|Valore booleano che indica se un controllo è abilitato.|  
|`m_bIsTearOff`|Valore booleano che indica se il controllo barra dei colori supporta l'ancoraggio.|  
|`m_BoxSize`|Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica la dimensione di una cella in una griglia sulla barra dei colori.|  
|`m_bShowDocColorsWhenDocked`|Valore booleano che indica se visualizzare i colori del documento se la barra dei colori è ancorata. Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](#setdocumentcolors).|  
|`m_bStdColorDlg`|Valore booleano che indica se si desidera visualizzare nella finestra di dialogo dei colori di sistema standard o [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo. Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|  
|`m_ColorAutomatic`|Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che archivia il colore automatica corrente. Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|  
|`m_ColorNames`|Un [CMap](../../mfc/reference/cmap-class.md) oggetto che associa un set di RGB colori con i relativi nomi.|  
|`m_colors`|Oggetto [CArray](../../mfc/reference/carray-class.md) di [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valori che contiene i colori visualizzati nella barra di colore.|  
|`m_ColorSelected`|Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che rappresenta il colore che l'utente ha attualmente selezionato nel controllo della barra dei colori.|  
|`m_lstDocColors`|Oggetto [CList](../../mfc/reference/clist-class.md) di [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valori che contiene i colori che sono attualmente in uso in un documento.|  
|`m_nCommandID`|Intero senza segno che rappresenta l'ID di comando di un pulsante del colore.|  
|`m_nHorzMargin`|Un intero che rappresenta il margine orizzontale tra i pulsanti di colore in una griglia di colori.|  
|`m_nHorzOffset`|Valore intero che rappresenta l'offset orizzontale al centro del pulsante del colore. Questo valore è significativo se il pulsante Visualizza il testo o un'immagine oltre a un colore.|  
|`m_nNumColumns`|Valore intero che indica il numero di colonne in una griglia di controllo barra dei colori di colori.|  
|`m_nNumColumnsVert`|Valore intero che indica il numero di colonne in una griglia verticale di colori.|  
|`m_nNumRowsHorz`|Valore intero che indica il numero di colonne in una griglia di colori orientata orizzontalmente.|  
|`m_nRowHeight`|Un intero che rappresenta l'altezza di una riga di pulsanti di colore in una griglia di colori.|  
|`m_nVertMargin`|Un intero che rappresenta il margine verticale tra i pulsanti di colore in una griglia di colori.|  
|`m_nVertOffset`|Un intero che rappresenta l'offset verticale al centro del pulsante del colore. Questo valore è significativo se il pulsante Visualizza il testo o un'immagine oltre a un colore.|  
|`m_Palette`|Oggetto [CPalette](../../mfc/reference/cpalette-class.md) dei colori utilizzati nella barra di colore.|  
|`m_pParentBtn`|Un puntatore a un [CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md) oggetto che rappresenta l'elemento padre del pulsante corrente. Questo valore è significativo se il pulsante del colore in una gerarchia dei controlli della barra degli strumenti o in un controllo griglia delle proprietà di colore.|  
|`m_pParentRibbonBtn`|Un puntatore a un [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md) che sulla barra multifunzione e il pulsante principale del pulsante corrente. Questo valore è significativo se il pulsante del colore in una gerarchia dei controlli della barra degli strumenti o in un controllo griglia delle proprietà di colore.|  
|`m_pWndPropList`|Un puntatore a un [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) oggetto.|  
|`m_strAutoColor`|Un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo che viene visualizzato il **automatica** pulsante. Per ulteriori informazioni, vedere [CMFCColorBar::EnableAutomaticButton](#enableautomaticbutton).|  
|`m_strDocColors`|Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato sul pulsante colori documento. Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](#setdocumentcolors).|  
|`m_strOtherColor`|Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo che viene visualizzato il *altri* pulsante. Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|  
  
## <a name="remarks"></a>Note  
 In genere, non è stato creato un `CMFCColorBar` direttamente l'oggetto. Al contrario, il [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md) (utilizzata nei menu e barre degli strumenti) o [CMFCColorButton classe](../../mfc/reference/cmfccolorbutton-class.md) crea il `CMFCColorBar` oggetto.  
  
 La `CMFCColorBar` classe fornisce le funzionalità seguenti:  
  
-   Regola automaticamente l'elenco dei colori del documento.  
  
-   Salva e ripristina lo stato, insieme allo stato di documento.  
  
-   Gestisce il pulsante "automatico".  
  
-   Usa il [CMFCColorPickerCtrl classe](../../mfc/reference/cmfccolorpickerctrl-class.md) controllo per selezionare un colore personalizzato.  
  
-   Supporta uno stato "tear-off" (se viene creata utilizzando il [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md)).  
  
 Per incorporare il `CMFCColorBar` funzionalità nell'applicazione:  
  
1.  Creare un pulsante di menu regolari e assegnarle un ID, ad esempio ID_CHAR_COLOR.  
  
2.  Nella classe della finestra cornice, eseguire l'override di [CFrameWndEx::OnShowPopupMenu](../../mfc/reference/cframewndex-class.md#onshowpopupmenu) metodo e sostituire il menu regolari pulsante con un [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md) oggetto (chiamando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)).  
  
3.  Impostare tutti gli stili e abilitare o disabilitare le funzionalità di `CMFCColorBar` durante [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md) creazione. Il `CMFCColorMenuButton` oggetto crea dinamicamente la `CMFCColorBar` oggetto dopo il framework chiama la `CreatePopupMenu` metodo.  
  
 Quando l'utente sceglie un pulsante della barra di colore del controllo, il framework utilizza il `ON_COMMAND` macro per notificare l'elemento padre del controllo barra dei colori. Nella macro, il parametro ID del comando è il valore assegnato al pulsante di controllo barra dei colori nel passaggio 1 (ID_CHAR_COLOR in questo esempio). Per ulteriori informazioni, vedere il [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md), [CMFCColorButton classe](../../mfc/reference/cmfccolorbutton-class.md), [CMFCColorPickerCtrl classe](../../mfc/reference/cmfccolorpickerctrl-class.md), [CFrameWndEx classe](../../mfc/reference/cframewndex-class.md), e [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) classi.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare una barra dei colori tramite i vari metodi di `CMFCColorBar` (classe). I metodi di impostano i margini orizzontali e verticali, abilitare il pulsante altro, creano una finestra di controllo della barra dei colori e imposta il colore selezionato. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls n.&1;](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls n.&2;](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)  
  
 [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcolorbar.h  
  
##  <a name="adjustlocations"></a>CMFCColorBar::AdjustLocations  
 Regola le posizioni dei pulsanti di colore nella barra di colore.  
  
```  
virtual void AdjustLocations();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework durante `WM_SIZE` l'elaborazione dei messaggi.  
  
##  <a name="allowchangetextlabels"></a>CMFCColorBar::AllowChangeTextLabels  
 Indica se è possibile modificare l'etichetta di testo dei pulsanti di colore.  
  
```  
virtual BOOL AllowChangeTextLabels() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre `FALSE`, ovvero le etichette di testo non può essere modificato. Eseguire l'override di questo metodo per consentire la modifica delle etichette di testo.  
  
##  <a name="allowshowonlist"></a>CMFCColorBar::AllowShowOnList  
 Indica se l'oggetto controllo barra dei colori può essere visualizzato in un elenco della barra degli strumenti durante il processo di personalizzazione.  
  
```  
virtual BOOL AllowShowOnList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre `TRUE`, ovvero il framework può visualizzare il controllo barra dei colori durante il processo di personalizzazione. Eseguire l'override di questo metodo per implementare un comportamento diverso.  
  
##  <a name="calcsize"></a>CMFCColorBar::CalcSize  
 Chiamato dal framework come parte del processo di calcolo di layout.  
  
```  
virtual CSize CalcSize(BOOL bVertDock);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bVertDock`  
 `TRUE`Per specificare che il controllo barra dei colori è ancorato in senso verticale; `FALSE` per specificare che il controllo barra dei colori è ancorato in senso orizzontale.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della matrice di pulsanti di colore in un controllo barra dei colori.  
  
##  <a name="cmfccolorbar"></a>CMFCColorBar::CMFCColorBar  
 Costruisce un oggetto `CMFCColorBar`.  
  
```  
CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    int nColumns,  
    int nRowsDockHorz,  
    int nColDockVert,  
    COLORREF colorAutomatic,  
    UINT nCommandID,  
    CMFCColorButton* pParentBtn);

 
CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    int nColumns,  
    COLORREF colorAutomatic,  
    UINT nCommandID,  
    CMFCRibbonColorButton* pParentRibbonBtn);

 
CMFCColorBar(
    CMFCColorBar& src,  
    UINT uiCommandID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `colors`  
 Matrice di colori che consente di visualizzare il framework del controllo barra dei colori.  
  
 [in] `color`  
 Il colore selezionato.  
  
 [in] `lpszAutoColor`  
 L'etichetta di testo di *automatica* pulsante colore (impostazione predefinita), o `NULL`.  
  
 L'etichetta standard per il pulsante automatica è **automatica**.  
  
 [in] `lpszOtherColor`  
 L'etichetta di testo di *altri* pulsante che consente di visualizzare più colori, o `NULL`.  
  
 L'etichetta del pulsante altri standard è **altri colori... **.  
  
 [in] `lpszDocColors`  
 L'etichetta di testo del pulsante colori documento. La tavolozza dei colori del documento sono elencati tutti i colori attualmente utilizzati nel documento.  
  
 [in] `lstDocColors`  
 Un elenco di colori attualmente utilizzati nel documento.  
  
 [in] `nColumns`  
 Il numero di colonne con la matrice di colori.  
  
 [in] `nRowsDockHorz`  
 Il numero di righe con la barra dei colori quando è ancorato in senso orizzontale.  
  
 [in] `nColDockVert`  
 Il numero di colonne nella barra dei colori con cui è ancorato in senso verticale.  
  
 [in] `colorAutomatic`  
 Il colore predefinito che il framework applica quando si fa clic sul pulsante automatica.  
  
 [in] `nCommandID`  
 ID di comando del controllo barra dei colori.  
  
 [in] `pParentBtn`  
 Un puntatore a un pulsante padre.  
  
 [in] `src`  
 Un oggetto esistente `CMFCColorBar` oggetto da copiare nel nuovo `CMFCColorBar` oggetto.  
  
 [in] `uiCommandID`  
 ID di comando.  
  
##  <a name="contexttosize"></a>CMFCColorBar::ContextToSize  
 Calcola i margini verticali e orizzontali che sono necessarie per contenere i pulsanti nella barra di colore e modifica la posizione dei pulsanti.  
  
```  
void ContextToSize(
    BOOL bSquareButtons = TRUE,   
    BOOL bCenterButtons = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `bSquareButtons`|`TRUE`Per specificare che la forma dei pulsanti in un controllo barra di colore quadrato; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.|  
|[in] `bCenterButtons`|`TRUE`Per specificare che il contenuto sull'interfaccia di un controllo pulsante di barra dei colori è centrato; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.|  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>CMFCColorBar::Create  
 Crea una finestra del controllo barra di colore e lo collega a di `CMFCColorBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle,  
    UINT nID,  
    CPalette* pPalette=NULL,  
    int nColumns=0,  
    int nRowsDockHorz=0,  
    int nColDockVert=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre.  
  
 [in] `dwStyle`  
 Una combinazione bit per bit (OR) di [stili finestra](../../mfc/reference/window-styles.md).  
  
 [in] `nID`  
 ID di comando.  
  
 [in] `pPalette`  
 Puntatore a una tavolozza di colori. Il valore predefinito è `NULL`.  
  
 [in] `nColumns`  
 Il numero di colonne nel controllo barra dei colori. Il valore predefinito è 0.  
  
 [in] `nRowsDockHorz`  
 Il numero di righe nel controllo barra dei colori quando è ancorata in senso orizzontale. Il valore predefinito è 0.  
  
 [in] `nColDockVert`  
 Il numero di colonne nel controllo barra dei colori quando è ancorata in senso verticale. Il valore predefinito è 0.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per costruire un `CMFCColorBar` dell'oggetto, chiamare il costruttore della classe, il metodo. Il `Create` metodo crea il controllo di Windows e Inizializza un elenco di colori.  
  
##  <a name="createcontrol"></a>CMFCColorBar::CreateControl  
 Crea una finestra del controllo barra di colore, lo collega al `CMFCColorBar` dell'oggetto e ridimensiona la finestra di controllo per contenere la tavolozza di colori specificata.  
  
```  
virtual BOOL CreateControl(
    CWnd* pParentWnd,  
    const CRect& rect,  
    UINT nID,  
    int nColumns=-1,  
    CPalette* pPalette=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre. Non può essere `NULL`.  
  
 [in] `rect`  
 Un rettangolo di delimitazione che specifica la posizione in cui disegnare il controllo barra dei colori.  
  
 [in] `nID`  
 ID del controllo.  
  
 [in] `nColumns`  
 Il numero ideale di colonne nel controllo barra dei colori. Questo metodo consente di modificare tale numero per adattare la tavolozza di colori specificata. Il valore predefinito è -1, che significa che questo parametro viene omesso.  
  
 [in] `pPalette`  
 Puntatore a una tavolozza di colori o `NULL`. Se questo parametro è `NULL`, questo metodo calcola le dimensioni del controllo barra dei colori come se fosse specificati 20 colori. Il valore predefinito è `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo utilizza il `rect`, `nColumns`, e `pPalette` i parametri per calcolare il numero appropriato o righe e colonne nel controllo della barra dei colori, quindi chiama il [CMFCColorBar::Create](#create) metodo.  
  
##  <a name="createpalette"></a>CMFCColorBar::CreatePalette  
 Inizializza una tavolozza di colori in una matrice di colori specificata.  
  
```  
static BOOL CreatePalette(
    const CArray<COLORREF, COLORREF>& arColors,   
    CPalette& palette);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `arColors`|Matrice di colori.|  
|[in] `palette`|Una tavolozza di colori.|  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
##  <a name="enableautomaticbutton"></a>CMFCColorBar::EnableAutomaticButton  
 Mostra o nasconde il pulsante automatica.  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 L'etichetta di testo di *automatica* pulsante colore (impostazione predefinita), o `NULL`.  
  
 L'etichetta standard per il pulsante automatica è **automatica**.  
  
 [in] `colorAutomatic`  
 Il colore predefinito che il framework applica quando si fa clic sul pulsante automatica.  
  
 [in] `bEnable`  
 `TRUE`Per abilitare il pulsante automatico; `FALSE` per disattivare il pulsante automatica. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 L'etichetta di testo del pulsante automatico viene eliminata se il `lpszLabel` parametro `NULL` o `bEnable` parametro `FALSE`.  
  
##  <a name="enableotherbutton"></a>CMFCColorBar::EnableOtherButton  
 Abilita o disabilita la visualizzazione di una finestra di dialogo che consente all'utente di selezionare più colori.  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg=TRUE,  
    BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 L'etichetta di testo di *altri* pulsante che consente di visualizzare più colori, o `NULL`.  
  
 L'etichetta standard per questo pulsante è **altri colori... **.  
  
 [in] `bAltColorDlg`  
 `TRUE`Per visualizzare il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) finestra di dialogo. `FALSE` per visualizzare la finestra di [CColorDialog](../../mfc/reference/ccolordialog-class.md) la finestra di dialogo. Il valore predefinito è `TRUE`.  
  
 [in] `bEnable`  
 `TRUE`Per abilitare il pulsante; `FALSE` per disattivare il pulsante. Il valore predefinito è `TRUE`.  
  
##  <a name="getcolor"></a>CMFCColorBar::GetColor  
 Recupera il colore selezionato.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore selezionato.  
  
##  <a name="getcolorgridsize"></a>CMFCColorBar::GetColorGridSize  
 Calcola il numero di righe e colonne nella griglia di un controllo barra di colore.  
  
```  
CSize GetColorGridSize(BOOL bVertDock) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `bVertDock`|`TRUE`Per eseguire il calcolo di un controllo ancorato verticalmente barra dei colori. in caso contrario, eseguire il calcolo per un controllo ancorato in orizzontale.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) il cui `cx` componente contiene il numero di colonne e il cui `cy` componente contiene il numero di righe.  
  
##  <a name="getcommandid"></a>CMFCColorBar::GetCommandID  
 Recupera l'ID di comando del controllo barra di colore corrente.  
  
```  
UINT GetCommandID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un ID di comando.  
  
### <a name="remarks"></a>Note  
 Quando l'utente seleziona un nuovo colore, il framework invia l'ID di comando un `WM_COMMAND` messaggio per informare l'elemento padre di `CMFCColorBar` oggetto.  
  
##  <a name="getextraheight"></a>CMFCColorBar::GetExtraHeight  
 Calcola l'altezza aggiuntiva necessarie per visualizzare gli elementi dell'interfaccia utente, ad esempio la barra dei colori corrente di **altri** colori pulsante o un documento.  
  
```  
int GetExtraHeight(int nNumColumns) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nNumColumns`|Se il controllo barra dei colori contiene colori del documento, il numero di colonne da visualizzare nella griglia di colori del documento. In caso contrario, questo valore non viene utilizzato.|  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza aggiuntiva calcolato che è obbligatorio.  
  
##  <a name="gethighlightedcolor"></a>CMFCColorBar::GetHighlightedColor  
 Recupera il colore che indica che un pulsante colore ha lo stato attivo; Ciò significa che il pulsante è *hot*.  
  
```  
COLORREF GetHighlightedColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore RGB.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gethorzmargin"></a>CMFCColorBar::GetHorzMargin  
 Recupera il margine orizzontale, ovvero lo spazio tra sinistra o destra colore cella e il limite dell'area client.  
  
```  
int GetHorzMargin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il margine orizzontale.  
  
##  <a name="getvertmargin"></a>CMFCColorBar::GetVertMargin  
 Recupera il margine verticale, ovvero lo spazio tra la parte superiore o cella di colore inferiore e il limite dell'area client.  
  
```  
int GetVertMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il margine verticale.  
  
##  <a name="initcolors"></a>CMFCColorBar::InitColors  
 Inizializza una matrice di colori con i colori in una tavolozza specificato o con la tavolozza predefinita di sistema.  
  
```  
static int InitColors(
    CPalette* pPalette,   
    CArray<COLORREF, COLORREF>& arColors);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pPalette`|Un puntatore a un oggetto tavolozza, o `NULL`. Se questo parametro è `NULL`, questo metodo utilizza la tavolozza predefinita del sistema operativo.|  
|[in] `arColors`|Matrice di colori.|  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella matrice di colori.  
  
##  <a name="istearoff"></a>CMFCColorBar::IsTearOff  
 Indica se la barra dei colori corrente è ancorata.  
  
```  
BOOL IsTearOff() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo barra dei colori corrente è ancorato; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se il controllo barra dei colori è ancorato, può essere estratto una barra di controllo e ancorata in un'altra posizione.  
  
##  <a name="onkey"></a>CMFCColorBar::OnKey  
 Chiamato dal framework quando un utente preme un tasto.  
  
```  
virtual BOOL OnKey(UINT nChar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nChar`  
 Il codice tasto virtuale per la chiave che un utente ha premuto.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo metodo elabora la chiave specificata. in caso contrario, `FALSE`.  
  
##  <a name="onsendcommand"></a>CMFCColorBar::OnSendCommand  
 Chiamato dal framework per chiudere una gerarchia di controlli popup.  
  
```  
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pButton`|Puntatore a un controllo che si trova su una barra degli strumenti.|  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
##  <a name="onupdatecmdui"></a>CMFCColorBar::OnUpdateCmdUI  
 Chiamato dal framework per abilitare o disabilitare un elemento dell'interfaccia utente di un controllo barra di colore prima che venga visualizzato l'elemento.  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTarget`  
 Puntatore a una finestra che contiene un elemento dell'interfaccia utente da aggiornare.  
  
 [in] `bDisableIfNoHndler`  
 `TRUE`Per disabilitare l'elemento dell'interfaccia utente se nessun gestore è definito in una mappa dei messaggi; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando un utente dell'applicazione fa clic su un elemento dell'interfaccia utente, l'elemento è necessario sapere se deve essere visualizzato come abilitato o disabilitato. La destinazione del messaggio di comando fornisce queste informazioni mediante l'implementazione di un `ON_UPDATE_COMMAND_UI` gestore del comando. Utilizzare questo metodo per elaborare il comando. Per ulteriori informazioni, vedere [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md).  
  
##  <a name="opencolordialog"></a>CMFCColorBar::OpenColorDialog  
 Verrà visualizzata una finestra di dialogo colore.  
  
```  
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,  
    COLORREF& colorRes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `colorDefault`  
 Il colore selezionato per impostazione predefinita quando si apre la finestra di dialogo colore.  
  
 [out] `colorRes`  
 Il colore che un utente ha selezionato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'utente ha selezionato un colore; `FALSE` se l'utente ha annullato la finestra di dialogo colore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="rebuild"></a>CMFCColorBar::Rebuild  
 Ridisegna completamente il controllo barra dei colori.  
  
```  
virtual void Rebuild();
```  
  
##  <a name="selectpalette"></a>CMFCColorBar::SelectPalette  
 Imposta la tavolozza logica del contesto di dispositivo specificato per la tavolozza del pulsante padre del controllo barra di colore corrente.  
  
```  
CPalette* SelectPalette(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pDC`|Puntatore al contesto di dispositivo del pulsante padre del controllo barra di colore corrente.|  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla tavolozza che viene sostituita con la tavolozza del pulsante padre del controllo barra di colore corrente.  
  
##  <a name="setcolor"></a>CMFCColorBar::SetColor  
 Imposta il colore selezionato.  
  
```  
void SetColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Un valore di colore RGB.  
  
##  <a name="setcolorname"></a>CMFCColorBar::SetColorName  
 Imposta un nuovo nome per un colore specificato.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Il valore di un colore RGB.  
  
 [in] `strName`  
 Il nuovo nome per il colore specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo modifica il nome del colore specificato in tutti `CMFCColorBar` oggetti nell'applicazione.  
  
##  <a name="setcommandid"></a>CMFCColorBar::SetCommandID  
 Imposta un nuovo ID di comando per un controllo barra dei colori.  
  
```  
void SetCommandID(UINT nCommandID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nCommandID`  
 Un ID di comando.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per modificare l'ID di comando di un controllo barra di colore e la finestra padre del controllo che è stato modificato l'ID di notifica.  
  
##  <a name="setdocumentcolors"></a>CMFCColorBar::SetDocumentColors  
 Imposta l'elenco dei colori utilizzati nel documento corrente.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszCaption,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    BOOL bShowWhenDocked=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszCaption`  
 Una didascalia che viene visualizzata quando non è ancorato il controllo barra dei colori.  
  
 [in] `lstDocColors`  
 Un elenco di colori che sostituisce i colori del documento corrente.  
  
 [in] `bShowWhenDocked`  
 `TRUE`Per visualizzare i colori del documento quando è ancorato il controllo barra dei colori; in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
### <a name="remarks"></a>Note  
 *I colori del documento* i colori che sono attualmente in uso in un documento. Il framework gestisce automaticamente un elenco di colori del documento, ma è possibile utilizzare questo metodo per modificare l'elenco.  
  
##  <a name="sethorzmargin"></a>CMFCColorBar::SetHorzMargin  
 Imposta il margine orizzontale, ovvero lo spazio tra sinistra o destra colore cella e il limite dell'area client.  
  
```  
void SetHorzMargin(int nHorzMargin);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHorzMargin`  
 Il margine orizzontale, in pixel.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il [CMFCColorBar::CMFCColorBar](#cmfccolorbar) costruttore imposta il margine orizzontale a 4 pixel.  
  
##  <a name="setproplist"></a>CMFCColorBar::SetPropList  
 Imposta il `m_pWndPropList` protetto membro dati per il puntatore specificato a un controllo griglia delle proprietà.  
  
```  
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `pWndList`|Puntatore all'oggetto controllo griglia delle proprietà.|  
  
##  <a name="setvertmargin"></a>CMFCColorBar::SetVertMargin  
 Imposta il margine verticale, ovvero lo spazio tra la cella superiore o inferiore di colore e il limite dell'area client.  
  
```  
void SetVertMargin(int nVertMargin);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nVertMargin`  
 Il margine verticale, in pixel.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il [CMFCColorBar::CMFCColorBar](#cmfccolorbar) costruttore imposta il margine verticale a 4 pixel.  
  
##  <a name="showcommandmessagestring"></a>CMFCColorBar::ShowCommandMessageString  
 Richiede la finestra cornice proprietario del controllo barra dei colori per aggiornare la riga messaggio nella barra di stato.  
  
```  
virtual void ShowCommandMessageString(UINT uiCmdId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdId`  
 Un ID di comando. (Questo parametro viene ignorato).  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il `WM_SETMESSAGESTRING` messaggio al proprietario del controllo barra dei colori.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

