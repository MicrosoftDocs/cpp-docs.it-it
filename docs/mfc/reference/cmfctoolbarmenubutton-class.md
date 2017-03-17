---
title: Classe CMFCToolBarMenuButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarMenuButton
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CMFCToolBarMenuButton
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CompareWith
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CopyFrom
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CreateFromMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CreateMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::CreatePopupMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::EnableQuickCustomize
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::GetCommands
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::GetImageRect
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::GetPaletteRows
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::GetPopupMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::HasButton
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::HaveHotBorder
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsBorder
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsClickedOnMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsDroppedDown
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsEmptyMenuAllowed
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsExclusive
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsMenuPaletteMode
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsQuickMode
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::IsTearOffMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnAfterCreatePopupMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnBeforeDrag
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnCalculateSize
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnCancelMode
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnChangeParentWnd
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnClick
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnClickMenuItem
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnContextHelp
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnDraw
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OnDrawOnCustomizeList
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::OpenPopupMenu
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::ResetImageToDefault
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SaveBarState
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::Serialize
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetACCData
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetMenuOnly
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetMenuPaletteMode
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetMessageWnd
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetRadio
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::SetTearOff
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::DrawDocumentIcon
- AFXTOOLBARMENUBUTTON/CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolBarMenuButton class
ms.assetid: cfa50176-7e4b-4527-9904-86a1b48fc1bc
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: a06fd323862c6869463b4db0977816b5707c3e18
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctoolbarmenubutton-class"></a>Classe CMFCToolBarMenuButton
Pulsante della barra degli strumenti contenente un menu di scelta rapida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarMenuButton : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CMFCToolBarMenuButton](#cmfctoolbarmenubutton)|Costruisce un oggetto `CMFCToolBarMenuButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CompareWith](#comparewith)|Confronta questa istanza con il parametro `CMFCToolBarButton` oggetto. (Esegue l'override di [CMFCToolBarButton::CompareWith](../../mfc/reference/cmfctoolbarbutton-class.md#comparewith).)|  
|[CMFCToolBarMenuButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|  
|[CMFCToolBarMenuButton::CreateFromMenu](#createfrommenu)|Inizializza il menu della barra degli strumenti da un handle di menu di Windows.|  
|[CMFCToolBarMenuButton::CreateMenu](#createmenu)|Crea un menu di Windows che include i comandi nel menu della barra degli strumenti. Restituisce un handle per il menu di Windows.|  
|[CMFCToolBarMenuButton::CreatePopupMenu](#createpopupmenu)|Crea un oggetto dal menu a comparsa ( [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md)) per visualizzare il menu della barra degli strumenti.|  
|[CMFCToolBarMenuButton::EnableQuickCustomize](#enablequickcustomize)||  
|[CMFCToolBarMenuButton::GetCommands](#getcommands)|Fornisce accesso in lettura all'elenco di comandi nel menu della barra degli strumenti.|  
|[CMFCToolBarMenuButton::GetImageRect](#getimagerect)|Recupera il rettangolo di delimitazione per l'immagine del pulsante.|  
|[CMFCToolBarMenuButton::GetPaletteRows](#getpaletterows)|Restituisce il numero di righe nel menu a comparsa quando il menu si trova in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::GetPopupMenu](#getpopupmenu)|Restituisce un puntatore all'oggetto menu di scelta rapida che viene associata al pulsante.|  
|[CMFCToolBarMenuButton::HasButton](#hasbutton)||  
|[CMFCToolBarMenuButton::HaveHotBorder](#havehotborder)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante. (Esegue l'override di [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|  
|[CMFCToolBarMenuButton::IsBorder](#isborder)||  
|[CMFCToolBarMenuButton::IsClickedOnMenu](#isclickedonmenu)||  
|[CMFCToolBarMenuButton::IsDroppedDown](#isdroppeddown)|Determina se viene visualizzato il menu a comparsa.|  
|[CMFCToolBarMenuButton::IsEmptyMenuAllowed](#isemptymenuallowed)|Chiamato dal framework per determinare se un utente può aprire un sottomenu dalla voce di menu selezionata.|  
|[CMFCToolBarMenuButton::IsExclusive](#isexclusive)|Determina se il pulsante è in modalità esclusiva, vale a dire, se il menu a comparsa rimane aperto anche quando l'utente sposta il puntatore su un'altra barra degli strumenti o un pulsante.|  
|[CMFCToolBarMenuButton::IsMenuPaletteMode](#ismenupalettemode)|Determina se il menu a comparsa è in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::IsQuickMode](#isquickmode)||  
|[CMFCToolBarMenuButton::IsTearOffMenu](#istearoffmenu)|Determina se il menu a comparsa dispone di una barra a comparsa.|  
|[CMFCToolBarMenuButton::OnAfterCreatePopupMenu](#onaftercreatepopupmenu)||  
|[CMFCToolBarMenuButton::OnBeforeDrag](#onbeforedrag)|Specifica se è possibile trascinare il pulsante. (Esegue l'override di [CMFCToolBarButton::OnBeforeDrag](../../mfc/reference/cmfctoolbarbutton-class.md#onbeforedrag).)|  
|[CMFCToolBarMenuButton::OnCalculateSize](#oncalculatesize)|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|  
|[CMFCToolBarMenuButton::OnCancelMode](#oncancelmode)|Chiamato dal framework per gestire il [WM_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615) messaggio. (Esegue l'override di [CMFCToolBarButton::OnCancelMode](../../mfc/reference/cmfctoolbarbutton-class.md#oncancelmode).)|  
|[CMFCToolBarMenuButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](cmfctoolbarbutton-class.md#onchangeparentwnd).)|  
|[CMFCToolBarMenuButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|  
|[CMFCToolBarMenuButton::OnClickMenuItem](#onclickmenuitem)|Chiamato dal framework quando l'utente seleziona un elemento del menu a comparsa.|  
|[CMFCToolBarMenuButton::OnContextHelp](#oncontexthelp)|Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_HELPHITTEST` messaggio. (Esegue l'override di [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp).)|  
|[CMFCToolBarMenuButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|  
|[CMFCToolBarMenuButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework in cui disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|  
|[CMFCToolBarMenuButton::OpenPopupMenu](#openpopupmenu)|Chiamato dal framework quando l'utente apre il menu a comparsa.|  
|[CMFCToolBarMenuButton::ResetImageToDefault](#resetimagetodefault)|Imposta il valore predefinito l'immagine associata al pulsante. (Esegue l'override di [CMFCToolBarButton::ResetImageToDefault](../../mfc/reference/cmfctoolbarbutton-class.md#resetimagetodefault).)|  
|[CMFCToolBarMenuButton::SaveBarState](#savebarstate)|Salva lo stato del pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SaveBarState](../../mfc/reference/cmfctoolbarbutton-class.md#savebarstate).)|  
|[CMFCToolBarMenuButton::Serialize](#serialize)|Legge l'oggetto da un archivio o scrive in un archivio. (Esegue l'override di [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|  
|[CMFCToolBarMenuButton::SetACCData](#setaccdata)|Popola l'oggetto specificato `CAccessibilityData` oggetto con i dati di accesso facilitato dal pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).)|  
|[CMFCToolBarMenuButton::SetMenuOnly](#setmenuonly)|Specifica se il pulsante può essere aggiunto a una barra degli strumenti.|  
|[CMFCToolBarMenuButton::SetMenuPaletteMode](#setmenupalettemode)|Specifica se il menu a comparsa è in modalità della tavolozza.|  
|[CMFCToolBarMenuButton::SetMessageWnd](#setmessagewnd)||  
|[CMFCToolBarMenuButton::SetRadio](#setradio)|Forza il pulsante di menu della barra degli strumenti per visualizzare un'icona che indica che è selezionato.|  
|[CMFCToolBarMenuButton::SetTearOff](#settearoff)|Specifica un tear-off barra ID per il menu a comparsa.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::DrawDocumentIcon](#drawdocumenticon)|Disegna un'icona sul pulsante di menu.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw](#m_balwayscallownerdraw)|Se `TRUE`, il framework chiama sempre [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#ondrawmenuimage) quando viene disegnato un pulsante.|  
  
## <a name="remarks"></a>Note  
 Oggetto `CMFCToolBarMenuButton` può essere visualizzato come un menu, una voce di menu che presenta un sottomenu, un pulsante che esegue un comando o visualizza un menu o un pulsante che consente di visualizzare solo un menu. Determinare il comportamento e l'aspetto del pulsante di menu specificando i parametri, ad esempio l'immagine, testo, l'handle di menu e comandi ID associato con il pulsante nel costruttore `CMFCToolbarMenuButton::CMFCToolbarMenuButton`.  
  
 Una classe personalizzata derivata dal `CMFCToolbarMenuButton` classe deve utilizzare il [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) (macro). Il [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) macro genera un errore durante la chiusura dell'applicazione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come configurare un `CMFCToolBarMenuButton` oggetto. Il codice viene illustrato come specificare che la casella a discesa è in modalità tavolozza e specificare l'ID per la barra a comparsa che viene creata quando l'utente trascina il pulsante di menu da una barra dei menu. Questo frammento di codice fa parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad&#10;](../../mfc/reference/codesnippet/cpp/cmfctoolbarmenubutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarmenubutton.h  
  
##  <a name="cmfctoolbarmenubutton"></a>CMFCToolBarMenuButton::CMFCToolBarMenuButton  
 Costruisce un oggetto `CMFCToolBarMenuButton`.  
  
```  
CMFCToolBarMenuButton();
CMFCToolBarMenuButton(const CMFCToolBarMenuButton& src);

CMFCToolBarMenuButton(
    UINT uiID,  
    HMENU hMenu,  
    int iImage,  
    LPCTSTR lpszText=NULL,  
    BOOL bUserButton=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un oggetto esistente `CMFCToolBarMenuButton` oggetto deve essere copiato `CMFCToolBarMenuButton` oggetto.  
  
 [in] `uiID`  
 L'ID del comando da eseguire quando un utente fa clic sul pulsante; o ( `UINT`) -1 per un pulsante di menu che non viene eseguito direttamente un comando.  
  
 [in] `hMenu`  
 Un handle per un menu. o `NULL` se il pulsante non dispone di un menu.  
  
 [in] `iImage`  
 Indice dell'immagine del pulsante; oppure -1 se questo pulsante non dispone di un'icona o viene utilizzata l'icona per il comando specificato da `uiID`. L'indice è lo stesso per ogni `CMFCToolBarImages` oggetto nell'applicazione.  
  
 [in] `lpszText`  
 Il testo del pulsante di menu della barra degli strumenti.  
  
 [in] `bUserButton`  
 `TRUE`Se il pulsante Visualizza un'immagine definita dall'utente; `FALSE` se il pulsante Visualizza un'immagine predefinita associata al comando specificato da `uiID`.  
  
### <a name="remarks"></a>Note  
 Se `uiID` è un ID di comando, il pulsante esegue il comando quando viene selezionato dall'utente. Se `hMenu` è un handle di menu valido, il pulsante fornisce un menu a discesa quando viene visualizzato in una barra degli strumenti o un sottomenu quando viene visualizzato in un menu. Se entrambi `uiID` e `hMenu` sono validi, il pulsante è un pulsante di menu combinato con una parte che eseguirà il comando quando l'utente fa clic su di esso e una parte con una freccia rivolta verso il basso che verrà elenco a discesa un menu quando l'utente fa clic su di esso. Tuttavia, se `hMenu` è valido, un utente non sarà in grado di fare clic sul pulsante per eseguire un comando quando il pulsante viene inserito in un menu.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCToolBarMenuButton` classe. Questo frammento di codice fa parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[9 NVC_MFC_WordPad](../../mfc/reference/codesnippet/cpp/cmfctoolbarmenubutton-class_2.cpp)]  
  
##  <a name="comparewith"></a>CMFCToolBarMenuButton::CompareWith  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CompareWith(const CMFCToolBarButton& other) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `other`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="copyfrom"></a>CMFCToolBarMenuButton::CopyFrom  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
  
### <a name="remarks"></a>Note  
  
##  <a name="createfrommenu"></a>CMFCToolBarMenuButton::CreateFromMenu  
 Inizializza il menu della barra degli strumenti da un handle di menu di Windows.  
  
```  
virtual void CreateFromMenu(HMENU hMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hMenu`  
 Un handle a un menu.  
  
### <a name="remarks"></a>Note  
 Un pulsante di menu della barra degli strumenti è possibile visualizzare un sottomenu del menu a discesa.  
  
 Il framework chiama questo metodo per inizializzare i comandi nel sottomenu da un menu.  
  
##  <a name="createmenu"></a>CMFCToolBarMenuButton::CreateMenu  
 Crea un menu che include i comandi nel menu della barra degli strumenti. Restituisce un handle per il menu.  
  
```  
virtual HMENU CreateMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per il menu se esito positivo. `NULL`Se l'elenco di comandi associati con il pulsante di menu della barra degli strumenti è vuota.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questo metodo in una classe derivata per personalizzare il modo in cui che viene generato il menu.  
  
##  <a name="createpopupmenu"></a>CMFCToolBarMenuButton::CreatePopupMenu  
 Crea un `CMFCPopupMenu` oggetto per visualizzare il menu della barra degli strumenti.  
  
```  
virtual CMFCPopupMenu* CreatePopupMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMFCPopupMenu` oggetto che visualizza il menu a discesa associato al pulsante di menu della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per preparare la visualizzazione del menu di riepilogo a discesa associata al pulsante.  
  
 L'implementazione predefinita è sufficiente costruisce e restituisce un nuovo `CMFCPopupMenu` oggetto. Eseguire l'override di questo metodo se si desidera utilizzare un tipo derivato di [CMFCPopupMenu classe](cmfcpopupmenu-class.md) o per eseguire un'inizializzazione aggiuntiva.  
  
##  <a name="drawdocumenticon"></a>CMFCToolBarMenuButton::DrawDocumentIcon  
 Disegna l'icona del documento sul pulsante di menu.  
  
```  
void DrawDocumentIcon(
    CDC* pDC,  
    const CRect& rectImage,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo.  
  
 [in] `rectImage`  
 Coordinate dell'immagine del rettangolo di delimitazione.  
  
 [in] `hIcon`  
 Handle dell'icona.  
  
### <a name="remarks"></a>Note  
 Questo metodo accetta un'icona di documento e viene tracciato sul pulsante di menu, centrato nell'area specificata da `rectImage`.  
  
##  <a name="enablequickcustomize"></a>CMFCToolBarMenuButton::EnableQuickCustomize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableQuickCustomize();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="hasbutton"></a>CMFCToolBarMenuButton::HasButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="havehotborder"></a>CMFCToolBarMenuButton::HaveHotBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HaveHotBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isborder"></a>CMFCToolBarMenuButton::IsBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isclickedonmenu"></a>CMFCToolBarMenuButton::IsClickedOnMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsClickedOnMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isquickmode"></a>CMFCToolBarMenuButton::IsQuickMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsQuickMode();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcommands"></a>CMFCToolBarMenuButton::GetCommands  
 Fornisce accesso in lettura all'elenco di comandi nel menu della barra degli strumenti.  
  
```  
const CObList& GetCommands() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento const a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che contiene una raccolta di [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) oggetti.  
  
### <a name="remarks"></a>Note  
 Un pulsante di menu della barra degli strumenti è possibile visualizzare un sottomenu. È possibile fornire l'elenco dei comandi nel sottomenu nel costruttore o in [CMFCToolBarMenuButton::CreateFromMenu](#createfrommenu) come handle di un menu ( `HMENU`). Il menu viene convertito in un elenco di oggetti che derivano da [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) e archiviati in interna `CObList` oggetto. È possibile accedere a questo elenco chiamando questo metodo.  
  
##  <a name="getimagerect"></a>CMFCToolBarMenuButton::GetImageRect  
 Recupera il rettangolo di delimitazione per l'immagine del pulsante.  
  
```  
void GetImageRect(CRect& rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectImage`  
 Un riferimento a un `CRect` oggetto che riceve le coordinate dell'immagine del rettangolo di delimitazione.  
  
##  <a name="getpaletterows"></a>CMFCToolBarMenuButton::GetPaletteRows  
 Restituisce il numero di righe nel menu a discesa quando il menu si trova in modalità della tavolozza.  
  
```  
int GetPaletteRows() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di righe nella tavolozza.  
  
### <a name="remarks"></a>Note  
 Quando il pulsante di menu è impostato su modalità della tavolozza, voci di menu verranno visualizzato in più colonne con solo un numero limitato di righe. Chiamare questo metodo per ottenere il numero di righe. È possibile abilitare o disabilitare la modalità della tavolozza e specificare il numero di righe utilizzando [CMFCToolBarMenuButton::SetMenuPaletteMode](#setmenupalettemode).  
  
##  <a name="getpopupmenu"></a>CMFCToolBarMenuButton::GetPopupMenu  
 Restituisce un puntatore per il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto che rappresenta il menu a discesa del pulsante.  
  
```  
CMFCPopupMenu* GetPopupMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto creato quando il framework disegnato il sottomenu del pulsante di menu della barra degli strumenti; `NULL` se non viene visualizzato alcun sottomenu.  
  
### <a name="remarks"></a>Note  
 Quando un pulsante di menu della barra degli strumenti Visualizza un menu a discesa, il pulsante Crea un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto per rappresentare il menu. Chiamare questo metodo per ottenere un puntatore per il `CMFCPopupMenu` oggetto. È consigliabile non archiviare il puntatore restituito, poiché è temporaneo e diventerà non valido se l'utente chiude il menu di scelta rapida.  
  
##  <a name="isdroppeddown"></a>CMFCToolBarMenuButton::IsDroppedDown  
 Indica se è attualmente visualizzato nel menu a comparsa.  
  
```  
virtual BOOL IsDroppedDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante di menu della barra degli strumenti consente di visualizzare il relativo sottomenu; in caso contrario `FALSE`.  
  
##  <a name="isemptymenuallowed"></a>CMFCToolBarMenuButton::IsEmptyMenuAllowed  
 Specifica se le voci di menu Visualizza sottomenu vuoti.  
  
```  
virtual BOOL IsEmptyMenuAllowed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il framework viene aperto un sottomenu dalla voce di menu selezionata anche quando il sottomenu è vuoto. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un utente tenta di aprire il sottomenu dalla voce di menu selezionata. Se il sottomenu è vuoto e `IsEmptyMenuAllowed` restituisce `FALSE`, non si apre il sottomenu.  
  
 L'implementazione predefinita restituisce `FALSE`. Eseguire l'override di questo metodo per personalizzare questo comportamento.  
  
##  <a name="isexclusive"></a>CMFCToolBarMenuButton::IsExclusive  
 Indica se il pulsante è in modalità esclusiva.  
  
```  
virtual BOOL IsExclusive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante funziona in modalità esclusiva. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando un utente apre un menu di scelta rapida per un pulsante e quindi sposta il puntatore del mouse su un altro pulsante della barra degli strumenti o menu, menu di scelta rapida viene chiusa, a meno che il pulsante non è in modalità esclusiva.  
  
 L'implementazione predefinita restituisce sempre `FALSE`. Eseguire l'override di questo metodo in una classe derivata se si desidera attivare la modalità esclusiva.  
  
##  <a name="ismenupalettemode"></a>CMFCToolBarMenuButton::IsMenuPaletteMode  
 Determina se il menu di scelta rapida è in modalità della tavolozza.  
  
```  
BOOL IsMenuPaletteMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è attivata la modalità della tavolozza `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando il pulsante di menu è impostato su modalità della tavolozza, voci di menu vengono visualizzate in più colonne con solo un numero limitato di righe. Chiamare questo metodo per ottenere il numero di righe. È possibile abilitare o disabilitare la modalità della tavolozza chiamando [CMFCToolBarMenuButton::SetMenuPaletteMode](#setmenupalettemode).  
  
##  <a name="istearoffmenu"></a>CMFCToolBarMenuButton::IsTearOffMenu  
 Indica se il menu a discesa dispone di una barra a comparsa.  
  
```  
virtual BOOL IsTearOffMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante di menu della barra degli strumenti dispone di una barra a comparsa. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per abilitare la funzionalità tear-off e impostare la comparsa barra ID, chiamare [CMFCToolBarMenuButton::SetTearOff](#settearoff).  
  
##  <a name="m_balwayscallownerdraw"></a>CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw  
 Specifica se il framework chiama sempre [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#ondrawmenuimage) quando viene disegnato un pulsante.  
  
```  
static BOOL m_bAlwaysCallOwnerDraw;  
```  
  
### <a name="remarks"></a>Note  
 Quando questa variabile membro è impostata su `TRUE`, sul pulsante chiama sempre [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#ondrawmenuimage) metodo per visualizzare l'immagine del pulsante. Quando `m_bAlwaysCallOwnerDraw` è `FALSE`, il pulsante stesso Disegna l'immagine se l'immagine è già definito. In caso contrario, chiama `OnDrawMenuImage`.  
  
##  <a name="onaftercreatepopupmenu"></a>CMFCToolBarMenuButton::OnAfterCreatePopupMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnAfterCreatePopupMenu();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onbeforedrag"></a>CMFCToolBarMenuButton::OnBeforeDrag  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnBeforeDrag() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="oncalculatesize"></a>CMFCToolBarMenuButton::OnCalculateSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `sizeDefault`  
 [in] `bHorz`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="oncancelmode"></a>CMFCToolBarMenuButton::OnCancelMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnCancelMode();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onchangeparentwnd"></a>CMFCToolBarMenuButton::OnChangeParentWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onclick"></a>CMFCToolBarMenuButton::OnClick  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `bDelay`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onclickmenuitem"></a>CMFCToolBarMenuButton::OnClickMenuItem  
 Chiamato dal framework quando l'utente seleziona una voce nel menu a discesa.  
  
```  
virtual BOOL OnClickMenuItem();
```  
  
### <a name="return-value"></a>Valore restituito  
 `FALSE`Se il framework deve continuare il menu predefinito di elaborazione elemento; in caso contrario `TRUE`. L'implementazione predefinita restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic su una voce di menu, il framework esegue un comando che è associato a quell'elemento.  
  
 Per personalizzare l'elaborazione di voce di menu, eseguire l'override `OnClickMenuItem` in una classe derivata da `CMFCToolBarMenuButton` (classe). È inoltre necessario eseguire l'override [CFrameWndEx::OnShowPopupMenu](../../mfc/reference/cframewndex-class.md#onshowpopupmenu) e sostituire i pulsanti di menu che richiedono un'elaborazione speciale con istanze della classe derivata.  
  
##  <a name="oncontexthelp"></a>CMFCToolBarMenuButton::OnContextHelp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnContextHelp(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCToolBarMenuButton::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `rect`  
 [in] `pImages`  
 [in] `bHorz`  
 [in] `bCustomizeMode`  
 [in] `bHighlight`  
 [in] `bDrawBorder`  
 [in] `bGrayDisabledButtons`  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawoncustomizelist"></a>CMFCToolBarMenuButton::OnDrawOnCustomizeList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bSelected`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="openpopupmenu"></a>CMFCToolBarMenuButton::OpenPopupMenu  
 Chiamato dal framework quando l'utente apre il menu a discesa di un pulsante di menu della barra degli strumenti.  
  
```  
virtual BOOL OpenPopupMenu(CWnd* pWnd=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Specifica l'intervallo che riceve i comandi di menu a discesa. Può essere `NULL` solo se il pulsante di menu della barra degli strumenti dispone di una finestra padre.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Quando un [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) l'oggetto è stato creato e aperto correttamente; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dal framework quando l'utente apre un menu a discesa di un pulsante di menu della barra degli strumenti.  
  
##  <a name="resetimagetodefault"></a>CMFCToolBarMenuButton::ResetImageToDefault  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResetImageToDefault();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="savebarstate"></a>CMFCToolBarMenuButton::SaveBarState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SaveBarState();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando viene creato un pulsante della barra degli strumenti come il risultato di un'operazione di trascinamento e rilascio. Questo metodo chiama il [CMFCPopupMenu::SaveState](../../mfc/reference/cmfcpopupmenu-class.md#savestate) metodo del menu a comparsa principale, in modo che il pulsante principale del menu a comparsa per ricreare il relativo menu.  
  
##  <a name="serialize"></a>CMFCToolBarMenuButton::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setaccdata"></a>CMFCToolBarMenuButton::SetACCData  
 Imposta i dati di accessibilità per l'elemento della barra multifunzione.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### <a name="parameters"></a>Parametri  
 `pParent`  
 Finestra padre per l'elemento della barra multifunzione.  
  
 `data`  
 Dati di accessibilità per l'elemento della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo imposta i dati di accessibilità per l'elemento della barra multifunzione e restituisce sempre `TRUE`. Eseguire l'override di questo metodo per impostare i dati di accessibilità e restituire un valore che indica l'esito positivo o negativo.  
  
##  <a name="setmenuonly"></a>CMFCToolBarMenuButton::SetMenuOnly  
 Specifica se il pulsante viene visualizzato come un pulsante di menu o un controllo split button quando ha un ID di comando valido e un sottomenu.  
  
```  
void SetMenuOnly(BOOL bMenuOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMenuOnly`  
 `TRUE`Per visualizzare questo pulsante come pulsante di menu quando ha un ID di comando valido e un sottomenu, `FALSE` per mostrare il pulsante come un pulsante di divisione quando ha un ID di comando valido e un sottomenu.  
  
### <a name="remarks"></a>Note  
 In genere, quando un pulsante di menu della barra degli strumenti ha un sottomenu e un ID di comando, viene visualizzato il menu di un pulsante di menu combinato con un pulsante principale e un oggetto associato pulsante freccia giù. Se si chiama questo metodo e `bMenuOnly` è `TRUE`, viene invece visualizzato il pulsante di un pulsante di menu singolo con una freccia in giù del pulsante. Quando l'utente fa clic sulla freccia in entrambe le modalità, verrà visualizzato il sottomenu e quando l'utente seleziona la parte non freccia del pulsante in una delle due modalità, il framework esegue il comando.  
  
##  <a name="setmenupalettemode"></a>CMFCToolBarMenuButton::SetMenuPaletteMode  
 Specifica se il menu di scelta rapida è in modalità della tavolozza.  
  
```  
void SetMenuPaletteMode(
    BOOL bMenuPaletteMode=TRUE,  
    int nPaletteRows=1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMenuPaletteMode`  
 Specifica se il menu di scelta rapida è in modalità della tavolozza.  
  
 [in] `nPaletteRows`  
 Numero di righe nella tavolozza.  
  
### <a name="remarks"></a>Note  
 Nella modalità di tavolozza, tutte le voci di menu vengono visualizzate come una tavolozza a più colonne. Specificare il numero di righe utilizzando `nPaletteRows`.  
  
##  <a name="setmessagewnd"></a>CMFCToolBarMenuButton::SetMessageWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetMessageWnd(CWnd* pWndMessage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndMessage`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setradio"></a>CMFCToolBarMenuButton::SetRadio  
 Imposta il pulsante di menu della barra degli strumenti per visualizzare un'icona di stile di pulsante di opzione quando è selezionato.  
  
```  
virtual void SetRadio();
```  
  
### <a name="remarks"></a>Note  
 Quando il pulsante di menu viene disegnato mentre l'opzione è selezionata, viene chiamato [CMFCVisualManager::OnDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenucheck) per disegnare un'icona di segno di spunta. Per impostazione predefinita, `OnDrawMenuCheck` le richieste che il gestore visualizzazione corrente disegna una casella di controllo di stile segno di spunta sul pulsante di menu. Dopo aver chiamato questo metodo, il gestore visualizzazione corrente invece consente di disegnare un segno di spunta radio stile pulsante sul pulsante di menu. Questa modifica non può essere annullata.  
  
 Quando si chiama questo metodo e il pulsante di menu è attualmente visualizzato, verrà aggiornata.  
  
##  <a name="settearoff"></a>CMFCToolBarMenuButton::SetTearOff  
 Specifica l'ID della barra a comparsa per il menu a discesa.  
  
```  
virtual void SetTearOff(UINT uiBarID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiBarID`  
 Specifica un nuovo comparsa barra ID.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare l'ID per la barra a comparsa che viene creata quando l'utente trascina il pulsante di menu da una barra dei menu. Se il `uiBarID` parametro è 0, l'utente non può far scomparire il pulsante di menu.  
  
 Chiamare [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#enabletearoffmenus) per abilitare la funzionalità di menu a comparsa nell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)
