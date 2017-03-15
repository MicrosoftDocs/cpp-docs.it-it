---
title: Classe CMFCRibbonBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonBar
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonBar class
ms.assetid: a65d06fa-1a28-4cc0-8971-bc9d7c9198fe
caps.latest.revision: 41
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
ms.openlocfilehash: 48a7fbeb72257776d132785c985221b0e8148d72
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonbar-class"></a>Classe CMFCRibbonBar
La classe `CMFCRibbonBar` implementa una barra multifunzione analoga a quella usata in Office 2007.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonBar::CMFCRibbonBar`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonBar::ActivateContextCategory](#activatecontextcategory)|Attiva una categoria contesto già visibile.|  
|[CMFCRibbonBar::AddCategory](#addcategory)|Aggiunge una nuova categoria della barra multifunzione alla barra multifunzione.|  
|[CMFCRibbonBar::AddContextCategory](#addcontextcategory)|Aggiunge una categoria contesto.|  
|[CMFCRibbonBar::AddMainCategory](#addmaincategory)|Aggiunge una nuova categoria principale della barra multifunzione.|  
|[CMFCRibbonBar::AddPrintPreviewCategory](#addprintpreviewcategory)||  
|[CMFCRibbonBar::AddQATOnlyCategory](#addqatonlycategory)||  
|[CMFCRibbonBar::AddToTabs](#addtotabs)|Aggiunge un elemento della barra multifunzione al lato destro di una barra multifunzione.|  
|[CMFCRibbonBar::CreateEx](#createex)|Crea una barra di controllo e la collega al [CPane](../../mfc/reference/cpane-class.md) oggetto. (Esegue l'override di [CPane::CreateEx](../../mfc/reference/cpane-class.md#createex).)|  
|[CMFCRibbonBar::Create](#create)|Crea un controllo della barra multifunzione e lo collega a una barra multifunzione.|  
|[CMFCRibbonBar::DeactivateKeyboardFocus](#deactivatekeyboardfocus)||  
|[CMFCRibbonBar::DrawMenuImage](#drawmenuimage)||  
|[CMFCRibbonBar::DWMCompositionChanged](#dwmcompositionchanged)||  
|[CMFCRibbonBar::EnableKeyTips](#enablekeytips)|Abilita o disabilita i suggerimenti tasto di scelta per il controllo della barra multifunzione.|  
|[CMFCRibbonBar::EnablePrintPreview](#enableprintpreview)|Abilitare il **anteprima di stampa** scheda.|  
|[CMFCRibbonBar::EnableToolTips](#enabletooltips)|Abilita o disabilita le descrizioni comando sulla barra multifunzione.|  
|[CMFCRibbonBar::FindByData](#findbydata)|Trova un elemento della barra multifunzione usando i dati specificati da un utente.|  
|[CMFCRibbonBar::FindByID](#findbyid)|Trova un elemento della barra multifunzione con l'ID di comando specificato.|  
|[CMFCRibbonBar::FindCategoryIndexByData](#findcategoryindexbydata)|Trova l'indice della categoria della barra multifunzione che contiene i dati definiti dall'utente.|  
|[CMFCRibbonBar::ForceRecalcLayout](#forcerecalclayout)||  
|[CMFCRibbonBar::GetActiveCategory](#getactivecategory)|Ottiene un puntatore per una categoria attiva.|  
|[CMFCRibbonBar::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia. (Esegue l'override di [CBasePane::GetCaptionHeight](../../mfc/reference/cbasepane-class.md#getcaptionheight).)|  
|[CMFCRibbonBar::GetCategory](#getcategory)|Ottiene il puntatore a una categoria che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonBar::GetCategoryCount](#getcategorycount)|Ottiene il numero delle categorie della barra multifunzione nella barra multifunzione.|  
|[CMFCRibbonBar::GetCategoryHeight](#getcategoryheight)||  
|[CMFCRibbonBar::GetCategoryIndex](#getcategoryindex)|Restituisce l'indice di una categoria della barra multifunzione.|  
|[CMFCRibbonBar::GetContextName](#getcontextname)|Recupera il nome della didascalia della categoria contesto specificata mediante un ID.|  
|[CMFCRibbonBar::GetDroppedDown](#getdroppeddown)||  
|[CMFCRibbonBar::GetElementsByID](#getelementsbyid)|Ottiene una matrice che contiene i puntatori a tutti gli elementi della barra multifunzione con l'ID specificato.|  
|[CMFCRibbonBar::GetApplicationButton](#getapplicationbutton)|Ottiene un puntatore a un pulsante della barra multifunzione.|  
|[CMFCRibbonBar::GetFocused](#getfocused)|Restituisce un elemento con stato attivo.|  
|[CMFCRibbonBar::GetHideFlags](#gethideflags)||  
|[CMFCRibbonBar::GetItemIDsList](#getitemidslist)||  
|[CMFCRibbonBar::GetKeyboardNavigationLevel](#getkeyboardnavigationlevel)||  
|[CMFCRibbonBar::GetKeyboardNavLevelCurrent](#getkeyboardnavlevelcurrent)||  
|[CMFCRibbonBar::GetKeyboardNavLevelParent](#getkeyboardnavlevelparent)||  
|[CMFCRibbonBar::GetMainCategory](#getmaincategory)|Restituisce un puntatore alla categoria della barra multifunzione attualmente selezionata.|  
|[CMFCRibbonBar::GetQATCommandsLocation](#getqatcommandslocation)||  
|[CMFCRibbonBar::GetQATDroppedDown](#getqatdroppeddown)||  
|[CMFCRibbonBar::GetQuickAccessCommands](#getquickaccesscommands)|Compila un elenco che include gli ID di comando di tutti gli elementi visualizzati sulla barra di accesso rapido.|  
|[CMFCRibbonBar::GetQuickAccessToolbarLocation](#getquickaccesstoolbarlocation)||  
|[CMFCRibbonBar::GetTabTrancateRatio](#gettabtrancateratio)||  
|[CMFCRibbonBar::GetTooltipFixedWidthLargeImage](#gettooltipfixedwidthlargeimage)||  
|[CMFCRibbonBar::GetTooltipFixedWidthRegular](#gettooltipfixedwidthregular)||  
|[CMFCRibbonBar::GetVisibleCategoryCount](#getvisiblecategorycount)||  
|[CMFCRibbonBar::HideAllContextCategories](#hideallcontextcategories)|Nasconde tutte le categorie attive e visibili.|  
|[CMFCRibbonBar::HideKeyTips](#hidekeytips)||  
|[CMFCRibbonBar::HitTest](#hittest)|Trova un puntatore all'elemento della barra multifunzione che si trova nel punto specificato nelle coordinate client della barra multifunzione.|  
|[CMFCRibbonBar::IsKeyTipEnabled](#iskeytipenabled)|Determina se i suggerimenti tasto di scelta sono abilitati.|  
|[CMFCRibbonBar::IsMainRibbonBar](#ismainribbonbar)||  
|[CMFCRibbonBar::IsPrintPreviewEnabled](#isprintpreviewenabled)|Determina se il **anteprima di stampa** scheda è abilitata.|  
|[CMFCRibbonBar::IsQATEmpty](#isqatempty)||  
|[CMFCRibbonBar::IsQuickAccessToolbarOnTop](#isquickaccesstoolbarontop)|Specifica se la barra di accesso rapido è posizionata sopra la barra multifunzione.|  
|[CMFCRibbonBar::IsReplaceFrameCaption](#isreplaceframecaption)|Determina se la barra multifunzione sostituisce la didascalia del frame principale o viene aggiunta sotto la didascalia del frame.|  
|[CMFCRibbonBar::IsShowGroupBorder](#isshowgroupborder)||  
|[CMFCRibbonBar::IsToolTipDescrEnabled](#istooltipdescrenabled)|Determina se le descrizioni dei comandi sono abilitate.|  
|[CMFCRibbonBar::IsToolTipEnabled](#istooltipenabled)|Determina se le descrizioni dei comandi per la barra multifunzione sono abilitate.|  
|[CMFCRibbonBar::IsTransparentCaption](#istransparentcaption)||  
|[CMFCRibbonBar::IsWindows7Look](#iswindows7look)|Indica se la barra multifunzione ha un aspetto in stile Windows 7 (piccolo pulsante di applicazione rettangolare).|  
|[CMFCRibbonBar::LoadFromResource](#loadfromresource)|Di overload. Carica una barra multifunzione dalle risorse dell'applicazione.|  
|[CMFCRibbonBar::OnClickButton](#onclickbutton)||  
|[CMFCRibbonBar::OnEditContextMenu](#oneditcontextmenu)||  
|[CMFCRibbonBar::OnRTLChanged](#onrtlchanged)|Esegue l'override di `CPane::OnRTLChanged`.|  
|[CMFCRibbonBar::OnSetAccData](#onsetaccdata)|(Esegue l'override di [CBasePane::OnSetAccData](../../mfc/reference/cbasepane-class.md#onsetaccdata).)|  
|[CMFCRibbonBar::OnShowRibbonContextMenu](#onshowribboncontextmenu)||  
|[CMFCRibbonBar::OnShowRibbonQATMenu](#onshowribbonqatmenu)||  
|[CMFCRibbonBar::OnSysKeyDown](#onsyskeydown)||  
|[CMFCRibbonBar::OnSysKeyUp](#onsyskeyup)||  
|[CMFCRibbonBar::PopTooltip](#poptooltip)||  
|[CMFCRibbonBar::PreTranslateMessage](#pretranslatemessage)|Esegue l'override di `CBasePane::PreTranslateMessage`.|  
|[CMFCRibbonBar::RecalcLayout](#recalclayout)|(Esegue l'override di [CPane::RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).)|  
|[CMFCRibbonBar::RemoveAllCategories](#removeallcategories)|Rimuove tutte le categorie della barra multifunzione dalla barra multifunzione.|  
|[CMFCRibbonBar::RemoveAllFromTabs](#removeallfromtabs)|Rimuove tutti gli elementi della barra multifunzione dall'area della scheda.|  
|[CMFCRibbonBar::RemoveCategory](#removecategory)|Rimuove la categoria della barra multifunzione che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonBar::SaveToXMLBuffer](#savetoxmlbuffer)|Salva la barra multifunzione in un buffer.|  
|[CMFCRibbonBar::SaveToXMLFile](#savetoxmlfile)|Salva la barra multifunzione in un file XML.|  
|[CMFCRibbonBar::SetActiveCategory](#setactivecategory)|Imposta una categoria specificata della barra multifunzione su attiva.|  
|[CMFCRibbonBar::SetActiveMDIChild](#setactivemdichild)||  
|[CMFCRibbonBar::SetElementKeys](#setelementkeys)|Imposta i suggerimenti tasto di scelta specificati per tutti gli elementi della barra multifunzione con ID di comando specificato.|  
|[CMFCRibbonBar::SetApplicationButton](#setapplicationbutton)|Assegna un pulsante della barra multifunzione dell'applicazione alla barra multifunzione.|  
|[CMFCRibbonBar::SetKeyboardNavigationLevel](#setkeyboardnavigationlevel)||  
|[CMFCRibbonBar::SetMaximizeMode](#setmaximizemode)||  
|[CMFCRibbonBar::SetQuickAccessCommands](#setquickaccesscommands)|Aggiunge uno o più elementi della barra multifunzione alla barra di accesso rapido.|  
|[CMFCRibbonBar::SetQuickAccessDefaultState](#setquickaccessdefaultstate)|Specifica lo stato predefinito per la barra di accesso rapido.|  
|[CMFCRibbonBar::SetQuickAccessToolbarOnTop](#setquickaccesstoolbarontop)|Posiziona la barra di accesso rapido sopra o sotto la barra multifunzione.|  
|[CMFCRibbonBar::SetTooltipFixedWidth](#settooltipfixedwidth)||  
|[CMFCRibbonBar::SetWindows7Look](#setwindows7look)|Abilita/Disabilita l'aspetto in stile Windows 7 della barra multifunzione (piccolo pulsante di applicazione rettangolare).|  
|[CMFCRibbonBar::ShowCategory](#showcategory)|Mostra o nasconde la categoria specificata della barra multifunzione.|  
|[CMFCRibbonBar::ShowContextCategories](#showcontextcategories)|Mostra o nasconde le categorie contesto con l'ID specificato.|  
|[CMFCRibbonBar::ShowKeyTips](#showkeytips)||  
|[CMFCRibbonBar::ToggleMimimizeState](#togglemimimizestate)|Visualizza la barra multifunzione ridotta a icona e ingrandita e viceversa.|  
|[CMFCRibbonBar::TranslateChar](#translatechar)||  
  
## <a name="remarks"></a>Note  
 Microsoft ha presentato la barra multifunzione di Office Fluent contemporaneamente al rilascio di Microsoft Office 2007. La barra multifunzione non è semplicemente un nuovo controllo. Rappresenta un nuovo paradigma dell'interfaccia utente. La barra multifunzione è in riquadro che include una serie di schede definite categorie. Ogni categoria è suddivisa logicamente in pannelli della barra multifunzione e ogni pannello può contenere diversi controlli e pulsanti di comando.  
  
 Gli elementi visualizzati sulla barra multifunzione si espandono e comprimono per usare al meglio lo spazio disponibile. Ad esempio, se lo spazio disponibile per la visualizzazione degli elementi di un pannello della barra multifunzione non è sufficiente, diventerà un pulsante di menu che visualizza elementi secondari in un menu a comparsa. La barra multifunzione si comporta come una barra di controllo statica (non mobile) e può essere ancorata nella parte superiore di un frame.  
  
 È possibile usare la classe `CMFCRibbonStatusBar` per implementare una barra di stato analoga a quella usata in Office 2007. Una categoria della barra multifunzione contiene (e Visualizza) un gruppo di [sulla barra multifunzione pannelli](../../mfc/reference/cmfcribbonpanel-class.md). Ogni pannello della barra multifunzione contiene uno o più elementi della barra multifunzione, che derivano dalla [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md).  
  
 Per informazioni su come aggiungere una barra multifunzione all'applicazione MFC esistente, vedere [procedura dettagliata: aggiornamento dell'applicazione MFC Scribble](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbar.h  
  
##  <a name="a-nameactivatecontextcategorya--cmfcribbonbaractivatecontextcategory"></a><a name="activatecontextcategory"></a>CMFCRibbonBar::ActivateContextCategory  
 Attiva una categoria contesto già visibile.  
  
```  
BOOL ActivateContextCategory(UINT uiContextID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiContextID`  
 L'ID di categoria contesto.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se una categoria di contesto con `uiContextID` è presente e attivato; in caso contrario `FALSE`.  
  
##  <a name="a-nameaddcategorya--cmfcribbonbaraddcategory"></a><a name="addcategory"></a>CMFCRibbonBar::AddCategory  
 Crea e Inizializza una nuova categoria della barra multifunzione della barra multifunzione.  
  
```  
CMFCRibbonCategory* AddCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage= CSize(16,
    16),  
    CSize sizeLargeImage= CSize(32,
    32),  
    int nInsertAt = -1,  
    CRuntimeClass* pRTI= NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Nome della categoria della barra multifunzione.  
  
 [in] `uiSmallImagesResID`  
 ID risorsa dell'elenco di immagini di piccole dimensioni per la categoria della barra multifunzione.  
  
 [in] `uiLargeImagesResID`  
 ID risorsa dell'elenco di immagini di grandi dimensioni per la categoria della barra multifunzione.  
  
 [in] `sizeSmallImage`  
 Specifica le dimensioni delle immagini di piccole dimensioni per la categoria della barra multifunzione.  
  
 [in] `sizeLargeImage`  
 Specifica le dimensioni delle immagini di grandi dimensioni per la categoria della barra multifunzione.  
  
 [in] `nInsertAt`  
 Indice in base zero dell'indirizzo di categoria.  
  
 [in] `pRTI`  
 Puntatore a un [CMFCRibbonCategory classe](../../mfc/reference/cmfcribboncategory-class.md) classe in fase di esecuzione per creare dinamicamente una categoria della barra multifunzione in fase di esecuzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova categoria della barra multifunzione se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Se il `pRTI` parametro non è `NULL`, viene creata la nuova categoria della barra multifunzione in modo dinamico utilizzando la classe in fase di esecuzione.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddCategory` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&5;](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_1.cpp)]  
  
##  <a name="a-nameaddcontextcategorya--cmfcribbonbaraddcontextcategory"></a><a name="addcontextcategory"></a>CMFCRibbonBar::AddContextCategory  
 Crea e Inizializza una nuova categoria di contesto per la barra multifunzione.  
  
```  
CMFCRibbonCategory* AddContextCategory(
    LPCTSTR lpszName,  
    LPCTSTR lpszContextName,  
    UINT uiContextID,  
    AFX_RibbonCategoryColor clrContext,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32),  
    CRuntimeClass* pRTI = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Nome della categoria.  
  
 [in] `lpszContextName`  
 Nome della didascalia categoria contesto.  
  
 [in] `uiContextID`  
 ID del contesto.  
  
 [in] `clrContext`  
 Colore del titolo categoria contesto.  
  
 [in] `uiSmallImagesResID`  
 ID risorsa dell'immagine di ridotte dimensioni di una categoria contesto.  
  
 [in] `uiLargeImagesResID`  
 ID risorsa dell'immagine di grandi dimensioni di una categoria contesto.  
  
 [in] `sizeSmallImage`  
 Dimensioni di un'immagine di piccole dimensioni.  
  
 [in] `sizeLargeImage`  
 Dimensioni di un'immagine di grandi dimensioni.  
  
 [in] `pRTI`  
 Puntatore a una classe di runtime.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per la categoria appena creata, o `NULL` se il `CreateObject` metodo `pRTI` Impossibile creare la categoria specificata.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere una categoria contesto. Le categorie di contesto sono un tipo speciale di categoria che può essere mostrato o nascosto in fase di esecuzione, a seconda del contesto dell'applicazione corrente. Ad esempio, quando l'utente seleziona un oggetto, è possibile visualizzare speciali schede con categorie di contesto che consente di modificare l'oggetto selezionato specifico.  
  
 Il colore di una categoria contesto può essere uno dei valori seguenti:  
  
-   AFX_CategoryColor_None  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
##  <a name="a-nameaddmaincategorya--cmfcribbonbaraddmaincategory"></a><a name="addmaincategory"></a>CMFCRibbonBar::AddMainCategory  
 Crea una nuova categoria principale della barra multifunzione della barra multifunzione.  
  
```  
CMFCRibbonMainPanel* AddMainCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Nome della categoria principale della barra multifunzione.  
  
 [in] `uiSmallImagesResID`  
 ID di risorsa di immagini di piccole dimensioni.  
  
 [in] `uiLargeImagesResID`  
 ID risorsa delle immagini di grandi dimensioni.  
  
 [in] `sizeSmallImage`  
 Le dimensioni delle immagini di piccole dimensioni.  
  
 [in] `sizeLargeImage`  
 Le dimensioni delle immagini di grandi dimensioni.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla nuova categoria principale della barra multifunzione se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Se esiste già una categoria principale della barra multifunzione, questo viene eliminato.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddMainCategory` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&4;](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_2.cpp)]  
  
##  <a name="a-nameaddprintpreviewcategorya--cmfcribbonbaraddprintpreviewcategory"></a><a name="addprintpreviewcategory"></a>CMFCRibbonBar::AddPrintPreviewCategory  
 Crea una categoria di anteprima di stampa della barra multifunzione.  
  
```  
CMFCRibbonCategory* AddPrintPreviewCategory();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova categoria della barra multifunzione se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea una categoria della barra multifunzione e i controlli necessari per fornire un'anteprima di stampa.  
  
##  <a name="a-nameaddqatonlycategorya--cmfcribbonbaraddqatonlycategory"></a><a name="addqatonlycategory"></a>CMFCRibbonBar::AddQATOnlyCategory  
 Crea una categoria della barra degli strumenti accesso rapido.  
  
```  
CMFCRibbonCategory* AddQATOnlyCategory(
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Nome della categoria.  
  
 [in] `uiSmallImagesResID`  
 ID risorsa dell'elenco di immagini per la categoria.  
  
 [in] `sizeSmallImage`  
 Dimensioni delle immagini per gli elementi della barra multifunzione nella categoria.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla nuova categoria se il metodo ha esito positivo; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 La categoria della barra multifunzione della barra degli strumenti accesso rapido viene utilizzata solo nella finestra di dialogo di personalizzazione della barra degli strumenti accesso rapido.  
  
##  <a name="a-nameaddtotabsa--cmfcribbonbaraddtotabs"></a><a name="addtotabs"></a>CMFCRibbonBar::AddToTabs  
 Aggiunge l'elemento specificato della barra multifunzione per la riga di schede della barra multifunzione.  
  
```  
void AddToTabs(CMFCRibbonBaseElement* pElement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
 Puntatore a un elemento della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 L'elemento della barra multifunzione viene posizionato prima i pulsanti di sistema.  
  
##  <a name="a-namecmfcribbonbara--cmfcribbonbarcmfcribbonbar"></a><a name="cmfcribbonbar"></a>CMFCRibbonBar::CMFCRibbonBar  
 Costruisce e Inizializza un [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) oggetto.  
  
```  
CMFCRibbonBar(BOOL bReplaceFrameCaption = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bReplaceFrameCaption`  
 `TRUE`per la barra multifunzione sostituire la didascalia della finestra cornice principale. `FALSE` per individuare la barra multifunzione sotto il titolo della finestra cornice principale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreatea--cmfcribbonbarcreate"></a><a name="create"></a>CMFCRibbonBar::Create  
 Crea una finestra per la barra multifunzione.  
  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_RIBBON_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre per la barra multifunzione.  
  
 [in] `dwStyle`  
 Combinazione logica di stili per la nuova finestra.  
  
 [in] `nID`  
 ID della nuova finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra è stata creata; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&1;](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_3.cpp)]  
  
##  <a name="a-namecreateexa--cmfcribbonbarcreateex"></a><a name="createex"></a>CMFCRibbonBar::CreateEx  
 Crea una finestra per la barra multifunzione.  
  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_RIBBON_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore alla finestra padre per la barra multifunzione.  
  
 [in] `dwCtrlStyle`  
 Questo parametro non viene usato.  
  
 [in] `dwStyle`  
 Combinazione logica di stili per la nuova finestra.  
  
 [in] `nID`  
 ID della nuova finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra è stata creata; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedeactivatekeyboardfocusa--cmfcribbonbardeactivatekeyboardfocus"></a><a name="deactivatekeyboardfocus"></a>CMFCRibbonBar::DeactivateKeyboardFocus  
 Chiude tutti i controlli di suggerimento della barra multifunzione.  
  
```  
void DeactivateKeyboardFocus(BOOL bSetFocus = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSetFocus`  
 `TRUE`Per impostare lo stato attivo alla finestra padre della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedrawmenuimagea--cmfcribbonbardrawmenuimage"></a><a name="drawmenuimage"></a>CMFCRibbonBar::DrawMenuImage  
 Disegna l'immagine per un pulsante di menu.  
  
```  
BOOL DrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuItem,  
    const CRect& rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per il pulsante di menu.  
  
 [in] `pMenuItem`  
 Puntatore a un pulsante di menu della barra degli strumenti.  
  
 [in] `rectImage`  
 Il rettangolo di visualizzazione per un pulsante di menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è stato creato l'immagine; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedwmcompositionchangeda--cmfcribbonbardwmcompositionchanged"></a><a name="dwmcompositionchanged"></a>CMFCRibbonBar::DWMCompositionChanged  
 Consente di regolare la visualizzazione della barra multifunzione quando la composizione Manager finestra Desktop (DWM) è abilitata o disabilitata.  
  
```  
virtual void DWMCompositionChanged();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenablekeytipsa--cmfcribbonbarenablekeytips"></a><a name="enablekeytips"></a>CMFCRibbonBar::EnableKeyTips  
 Abilita o disabilita la caratteristica di suggerimento per la barra multifunzione.  
  
```  
void EnableKeyTips(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare la funzionalità suggerimenti tasto di scelta; `FALSE` per disabilitare la funzionalità suggerimenti tasto di scelta.  
  
### <a name="remarks"></a>Note  
 Quando si abilita questa funzionalità, vengono visualizzate le descrizioni dei tasti quando l'utente preme il tasto ALT o F10. Quando l'utente preme il tasto ALT, vengono visualizzate le descrizioni dei tasti con un ritardo di 200 millisecondi. Questo ritardo consente ai tasti di scelta rapida essere eseguita in modo che il tasto premuto ALT non interferisce con altre combinazioni che includono il tasto ALT.  
  
##  <a name="a-nameenableprintpreviewa--cmfcribbonbarenableprintpreview"></a><a name="enableprintpreview"></a>CMFCRibbonBar::EnablePrintPreview  
 Abilita o disabilita il **anteprima di stampa** funzionalità.  
  
```  
void EnablePrintPreview(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il **anteprima di stampa** funzionalità; `FALSE` per disabilitare il **anteprima di stampa** funzionalità.  
  
### <a name="remarks"></a>Note  
 Se `bEnable` è `FALSE` ed esiste già una categoria di anteprima di stampa, questo viene eliminato.  
  
 Per impostazione predefinita il **anteprima di stampa** è abilitata la funzionalità.  
  
##  <a name="a-nameenabletooltipsa--cmfcribbonbarenabletooltips"></a><a name="enabletooltips"></a>CMFCRibbonBar::EnableToolTips  
 Abilita o disabilita le descrizioni comandi e le descrizioni facoltative della descrizione comando della barra multifunzione.  
  
```  
void EnableToolTips(
    BOOL bEnable = TRUE,  
    BOOL bEnableDescr = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare le descrizioni comandi della barra multifunzione; `FALSE` per disattivare le descrizioni comandi della barra multifunzione.  
  
 [in] `bEnableDescr`  
 `TRUE`Per abilitare le descrizioni della descrizione comando sulla descrizione comandi; `FALSE` per disattivare le descrizioni della descrizione comando sulla descrizione comandi.  
  
### <a name="remarks"></a>Note  
 Il `bEnable` parametro determina la visualizzazione di descrizioni comandi quando il puntatore del mouse viene posizionato su un elemento della barra multifunzione. Il `bEnableDescr` parametro determina se viene visualizzato testo descrittivo aggiuntivo con il testo della descrizione comando.  
  
##  <a name="a-namefindbydataa--cmfcribbonbarfindbydata"></a><a name="findbydata"></a>CMFCRibbonBar::FindByData  
 Recupera un puntatore a un elemento della barra multifunzione se i dati specificati e la visibilità.  
  
```  
CMFCRibbonBaseElement* FindByData(
    DWORD_PTR dwData,  
    BOOL bVisibleOnly = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwData`  
 I dati associati a un elemento della barra multifunzione.  
  
 [in] `bVisibleOnly`  
 `TRUE`eseguire la ricerca solo elementi visibili della barra multifunzione `FALSE` per cercare tutti gli elementi della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento della barra multifunzione se i dati specificati e la visibilità. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Un elemento della barra multifunzione è qualsiasi controllo che è possibile aggiungere alla barra multifunzione, ad esempio un pulsante della barra multifunzione, una categoria della barra multifunzione o un dispositivo di scorrimento della barra multifunzione.  
  
##  <a name="a-namefindbyida--cmfcribbonbarfindbyid"></a><a name="findbyid"></a>CMFCRibbonBar::FindByID  
 Recupera un puntatore all'elemento della barra multifunzione con i valori di ricerca e l'ID di comando specificato.  
  
```  
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID,  
    BOOL bVisibleOnly = TRUE,  
    BOOL bExcludeQAT = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 ID di comando per un elemento della barra multifunzione.  
  
 [in] `bVisibleOnly`  
 `TRUE`eseguire la ricerca solo elementi visibili della barra multifunzione `FALSE` per cercare tutti gli elementi della barra multifunzione.  
  
 [in] `bExcludeQAT`  
 `TRUE`Per escludere gli elementi della barra degli strumenti accesso rapido dalla ricerca. in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento della barra multifunzione se i valori di ricerca e ID comando specificato; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Un elemento della barra multifunzione è qualsiasi controllo della barra multifunzione che è possibile aggiungere alla barra multifunzione, ad esempio un pulsante della barra multifunzione, una categoria della barra multifunzione o un dispositivo di scorrimento della barra multifunzione.  
  
 In generale, può esistere più di un elemento della barra multifunzione che ha lo stesso ID di comando. Se si desidera ottenere puntatori a tutti gli elementi della barra multifunzione che utilizzano un ID di comando specificato, utilizzare il [CMFCRibbonBar::GetElementsByID](#getelementsbyid) metodo.  
  
##  <a name="a-namefindcategoryindexbydataa--cmfcribbonbarfindcategoryindexbydata"></a><a name="findcategoryindexbydata"></a>CMFCRibbonBar::FindCategoryIndexByData  
 Recupera l'indice della categoria della barra multifunzione che contiene i dati specificati.  
  
```  
int FindCategoryIndexByData(DWORD dwData) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwData`  
 I dati associati a una categoria della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero di una categoria della barra multifunzione se il metodo ha esito positivo; in caso contrario-1.  
  
##  <a name="a-nameforcerecalclayouta--cmfcribbonbarforcerecalclayout"></a><a name="forcerecalclayout"></a>CMFCRibbonBar::ForceRecalcLayout  
 Consente di modificare il layout di tutti gli elementi nella barra multifunzione e finestra padre e ridisegna l'intera finestra.  
  
```  
void ForceRecalcLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetactivecategorya--cmfcribbonbargetactivecategory"></a><a name="getactivecategory"></a>CMFCRibbonBar::GetActiveCategory  
 Recupera un puntatore alla categoria della barra multifunzione attivi.  
  
```  
CMFCRibbonCategory* GetActiveCategory() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla categoria della barra multifunzione attivi; o `NULL` se non è attiva alcuna categoria.  
  
### <a name="remarks"></a>Note  
 Una categoria è attiva se ha lo stato attivo. Per impostazione predefinita, la categoria attiva è la prima categoria sul lato sinistro della barra multifunzione.  
  
 La categoria principale viene visualizzata quando l'utente preme il pulsante dell'applicazione e non può essere la categoria attiva.  
  
##  <a name="a-namegetapplicationbuttona--cmfcribbonbargetapplicationbutton"></a><a name="getapplicationbutton"></a>CMFCRibbonBar::GetApplicationButton  
 Recupera un puntatore al pulsante dell'applicazione.  
  
```  
CMFCRibbonApplicationButton* GetApplicationButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al pulsante dell'applicazione; o `NULL` se il pulsante non è stato impostato.  
  
##  <a name="a-namegetcaptionheighta--cmfcribbonbargetcaptionheight"></a><a name="getcaptionheight"></a>CMFCRibbonBar::GetCaptionHeight  
 Recupera l'altezza dell'area della didascalia della barra multifunzione.  
  
```  
int GetCaptionHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, dell'area della didascalia della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcategorya--cmfcribbonbargetcategory"></a><a name="getcategory"></a>CMFCRibbonBar::GetCategory  
 Recupera un puntatore alla categoria della barra multifunzione in corrispondenza dell'indice specificato.  
  
```  
CMFCRibbonCategory* GetCategory(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Indice in base zero di una categoria della barra multifunzione nell'elenco delle categorie della barra multifunzione che è contenuto nella barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per la categoria della barra multifunzione dell'indice specificato. in caso contrario, `NULL` se `nIndex` non compreso nell'intervallo.  
  
##  <a name="a-namegetcategorycounta--cmfcribbonbargetcategorycount"></a><a name="getcategorycount"></a>CMFCRibbonBar::GetCategoryCount  
 Recupera il numero di categorie della barra multifunzione nella barra multifunzione.  
  
```  
int GetCategoryCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di categorie della barra multifunzione nella barra multifunzione.  
  
##  <a name="a-namegetcategoryheighta--cmfcribbonbargetcategoryheight"></a><a name="getcategoryheight"></a>CMFCRibbonBar::GetCategoryHeight  
 Recupera l'altezza della categoria.  
  
```  
int GetCategoryHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza della categoria.  
  
### <a name="remarks"></a>Note  
 L'altezza di categoria include l'altezza della scheda categoria.  
  
##  <a name="a-namegetcategoryindexa--cmfcribbonbargetcategoryindex"></a><a name="getcategoryindex"></a>CMFCRibbonBar::GetCategoryIndex  
 Recupera l'indice della categoria specificata della barra multifunzione.  
  
```  
int GetCategoryIndex(CMFCRibbonCategory* pCategory) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCategory`  
 Puntatore a una categoria della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero di una categoria specificata da `pCategory`; o -1 se non viene trovata la categoria della barra multifunzione.  
  
##  <a name="a-namegetcontextnamea--cmfcribbonbargetcontextname"></a><a name="getcontextname"></a>CMFCRibbonBar::GetContextName  
 Recupera il nome della didascalia categoria contesto specificato da un ID del contesto.  
  
```  
BOOL GetContextName(
    UINT uiContextID,  
    CString& strName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiContextID`  
 Un ID del contesto categoria della barra multifunzione.  
  
 [out] `strName`  
 Il nome del titolo di una categoria contesto.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario, `FALSE` se `uiContextID` è zero o la didascalia categoria contesto non è stata trovata.  
  
##  <a name="a-namegetdroppeddowna--cmfcribbonbargetdroppeddown"></a><a name="getdroppeddown"></a>CMFCRibbonBar::GetDroppedDown  
 Recupera l'elemento della barra multifunzione che è correntemente visualizzato.  
  
```  
virtual CMFCRibbonBaseElement* GetDroppedDown();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'elemento della barra multifunzione che è stato eliminato o `NULL` se non è correntemente visualizzato alcun elemento della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetelementsbyida--cmfcribbonbargetelementsbyid"></a><a name="getelementsbyid"></a>CMFCRibbonBar::GetElementsByID  
 Recupera una matrice di puntatori a tutti gli elementi della barra multifunzione con un ID di comando specifico.  
  
```  
void GetElementsByID(
    UINT uiCmdID,  
    CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& arButtons);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 ID di comando di un elemento della barra multifunzione.  
  
 [out] `arButtons`  
 Matrice di puntatori agli elementi di barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Più elementi della barra multifunzione possono avere lo stesso ID di comando perché alcuni elementi della barra multifunzione possono essere copiati alla barra degli strumenti accesso rapido.  
  
##  <a name="a-namegethideflagsa--cmfcribbonbargethideflags"></a><a name="gethideflags"></a>CMFCRibbonBar::GetHideFlags  
 Recupera i flag che indicano la quantità della barra multifunzione è visibile.  
  
```  
DWORD GetHideFlags() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Flag che indicano la quantità della barra multifunzione è visibile.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencate le possibile combinazione di flag per il valore restituito:  
  
 `AFX_RIBBONBAR_HIDE_ELEMENTS`  
 La barra multifunzione è ridotta a icona verticalmente e sono visibili solo le schede delle categorie, pulsante principale e barra di accesso rapido.  
  
 `AFX_RIBBONBAR_HIDE_ALL`  
 La larghezza della barra multifunzione è minore della larghezza di minima ed è completamente nascosta.  
  
##  <a name="a-namegetitemidslista--cmfcribbonbargetitemidslist"></a><a name="getitemidslist"></a>CMFCRibbonBar::GetItemIDsList  
 Recupera gli ID di comando per l'insieme specificato di elementi della barra multifunzione della barra multifunzione.  
  
```  
void GetItemIDsList(CList<UINT, UINT>& lstItems,  
    BOOL bHiddenOnly = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `lstItems`  
 L'elenco di ID di comando per gli elementi della barra multifunzione sono contenuti nella barra multifunzione.  
  
 [in] `bHiddenOnly`  
 `TRUE`Per escludere gli elementi della barra multifunzione che vengono visualizzati. `FALSE` per includere tutti gli elementi della barra multifunzione nella barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetkeyboardnavigationlevela--cmfcribbonbargetkeyboardnavigationlevel"></a><a name="getkeyboardnavigationlevel"></a>CMFCRibbonBar::GetKeyboardNavigationLevel  
 Recupera il livello di navigazione corrente, come l'utente preme i suggerimenti contenuti nella barra multifunzione.  
  
```  
int GetKeyboardNavigationLevel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il livello di navigazione corrente come l'utente preme i suggerimenti contenuti nella barra multifunzione. Nella tabella seguente sono elencati i possibili valori restituiti:  
  
 -1  
 Non vengono visualizzati suggerimenti tasto di scelta.  
  
 0  
 Vengono visualizzati suggerimenti tasto di scelta.  
  
 1  
 Pressione di un suggerimento visualizzato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetkeyboardnavlevelcurrenta--cmfcribbonbargetkeyboardnavlevelcurrent"></a><a name="getkeyboardnavlevelcurrent"></a>CMFCRibbonBar::GetKeyboardNavLevelCurrent  
 Recupera l'oggetto di navigazione da tastiera corrente della barra multifunzione.  
  
```  
CObject* GetKeyboardNavLevelCurrent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto di navigazione da tastiera corrente della barra multifunzione; in caso contrario `NULL` se nessun oggetto attualmente vengono visualizzati suggerimenti tasto di scelta.  
  
### <a name="remarks"></a>Note  
 L'oggetto che è attualmente visualizzato suggerimenti tasto di scelta è l'oggetto di navigazione da tastiera corrente.  
  
##  <a name="a-namegetkeyboardnavlevelparenta--cmfcribbonbargetkeyboardnavlevelparent"></a><a name="getkeyboardnavlevelparent"></a>CMFCRibbonBar::GetKeyboardNavLevelParent  
 Recupera l'oggetto di navigazione da tastiera padre della barra multifunzione.  
  
```  
CObject* GetKeyboardNavLevelParent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto di navigazione da tastiera padre della barra multifunzione; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Quando l'utente preme un suggerimento della barra multifunzione, l'oggetto di navigazione da tastiera corrente diventa l'oggetto di navigazione da tastiera padre.  
  
##  <a name="a-namegetmaincategorya--cmfcribbonbargetmaincategory"></a><a name="getmaincategory"></a>CMFCRibbonBar::GetMainCategory  
 Recupera un puntatore alla categoria principale della barra multifunzione.  
  
```  
CMFCRibbonCategory* GetMainCategory() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla categoria principale della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 La categoria della barra multifunzione principale contiene il pannello principale della barra multifunzione.  
  
##  <a name="a-namegetqatcommandslocationa--cmfcribbonbargetqatcommandslocation"></a><a name="getqatcommandslocation"></a>CMFCRibbonBar::GetQATCommandsLocation  
 Recupera il rettangolo di visualizzazione per la sezione comandi della barra di accesso rapido.  
  
```  
CRect GetQATCommandsLocation() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo di visualizzazione per la sezione comandi della barra di accesso rapido.  
  
### <a name="remarks"></a>Note  
 La sezione comandi del rettangolo di visualizzazione non include il pulsante di personalizzazione.  
  
##  <a name="a-namegetqatdroppeddowna--cmfcribbonbargetqatdroppeddown"></a><a name="getqatdroppeddown"></a>CMFCRibbonBar::GetQATDroppedDown  
 Recupera un puntatore all'elemento della barra multifunzione nella barra di accesso rapido con il relativo menu a comparsa a discesa.  
  
```  
CMFCRibbonBaseElement* GetQATDroppedDown();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'elemento della barra multifunzione nella barra di accesso rapido con il relativo menu a comparsa a discesa.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetquickaccesscommandsa--cmfcribbonbargetquickaccesscommands"></a><a name="getquickaccesscommands"></a>CMFCRibbonBar::GetQuickAccessCommands  
 Recupera un elenco di ID di comando per gli elementi della barra multifunzione nella barra di accesso rapido.  
  
```  
void GetQuickAccessCommands(CList<UINT,UINT>& lstCommands);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `lstCommands`  
 L'elenco di ID di comando per gli elementi della barra multifunzione nella barra di accesso rapido.  
  
### <a name="remarks"></a>Note  
 L'elenco non contiene elementi della barra multifunzione che presenti separatori di controllo.  
  
##  <a name="a-namegetquickaccesstoolbarlocationa--cmfcribbonbargetquickaccesstoolbarlocation"></a><a name="getquickaccesstoolbarlocation"></a>CMFCRibbonBar::GetQuickAccessToolbarLocation  
 Recupera il rettangolo di visualizzazione per la barra di accesso rapido.  
  
```  
CRect GetQuickAccessToolbarLocation() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo di visualizzazione per la barra di accesso rapido.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabtrancateratioa--cmfcribbonbargettabtrancateratio"></a><a name="gettabtrancateratio"></a>CMFCRibbonBar::GetTabTrancateRatio  
 Recupera una riduzione delle dimensioni percentuale larghezza di visualizzazione di schede di categoria.  
  
```  
int GetTabTrancateRatio() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La percentuale di dimensione di riduzione la larghezza di visualizzazione delle schede di categoria.  
  
### <a name="remarks"></a>Note  
 Schede delle categorie vengono ridotti in larghezza quando non è sufficiente larghezza della barra multifunzione.  
  
##  <a name="a-namegettooltipfixedwidthlargeimagea--cmfcribbonbargettooltipfixedwidthlargeimage"></a><a name="gettooltipfixedwidthlargeimage"></a>CMFCRibbonBar::GetTooltipFixedWidthLargeImage  
 Recupera le dimensioni della larghezza della descrizione comando della barra multifunzione.  
  
```  
int GetTooltipFixedWidthLargeImage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della descrizione comando larghezza in pixel.  
  
### <a name="remarks"></a>Note  
 Se le dimensioni della larghezza della descrizione comandi sono 0, la larghezza varia.  
  
##  <a name="a-namegettooltipfixedwidthregulara--cmfcribbonbargettooltipfixedwidthregular"></a><a name="gettooltipfixedwidthregular"></a>CMFCRibbonBar::GetTooltipFixedWidthRegular  
 Recupera le dimensioni normali della larghezza della descrizione comando della barra multifunzione.  
  
```  
int GetTooltipFixedWidthRegular() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni normali della descrizione comando larghezza in pixel.  
  
### <a name="remarks"></a>Note  
 Se le dimensioni normali della larghezza della descrizione comandi sono 0, la larghezza varia.  
  
##  <a name="a-namegetvisiblecategorycounta--cmfcribbonbargetvisiblecategorycount"></a><a name="getvisiblecategorycount"></a>CMFCRibbonBar::GetVisibleCategoryCount  
 Recupera il numero di categorie visibili nella barra multifunzione.  
  
```  
int GetVisibleCategoryCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di categorie visibili nella barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehideallcontextcategoriesa--cmfcribbonbarhideallcontextcategories"></a><a name="hideallcontextcategories"></a>CMFCRibbonBar::HideAllContextCategories  
 Consente di nascondere tutte le categorie di contesto della barra multifunzione.  
  
```  
BOOL HideAllContextCategories();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è stato nascosto categoria almeno un contesto; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se una categoria contesto è attiva, la categoria attiva viene reimpostata per la prima categoria visibile nell'elenco di categorie.  
  
##  <a name="a-namehidekeytipsa--cmfcribbonbarhidekeytips"></a><a name="hidekeytips"></a>CMFCRibbonBar::HideKeyTips  
 Nasconde tutti i suggerimenti della barra multifunzione.  
  
```  
void HideKeyTips();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehittesta--cmfcribbonbarhittest"></a><a name="hittest"></a>CMFCRibbonBar::HitTest  
 Recupera un puntatore all'elemento della barra multifunzione specificato dalla posizione del punto.  
  
```  
virtual CMFCRibbonBaseElement* HitTest(
    CPoint point,  
    BOOL bCheckActiveCategory= FALSE,  
    BOOL bCheckPanelCaption= FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Posizione del punto nelle coordinate della barra multifunzione.  
  
 [in] `bCheckActiveCategory`  
 `TRUE`Per cercare la categoria attiva; `FALSE` non eseguire la ricerca nella categoria attiva.  
  
 [in] `bCheckPanelCaption`  
 `TRUE`Per testare la didascalia del pannello della barra multifunzione con il punto in cui che si trova in tale ambiente. `FALSE` non per testare la didascalia del pannello della barra multifunzione con il punto in esso contenuto. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'elemento della barra multifunzione situato nel punto specificato; in caso contrario `NULL` se il punto non si trova in un elemento della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 La didascalia del pannello della barra multifunzione con il punto in essa contenuto non è stata testata a meno che il `bCheckActiveCategory` parametro `TRUE`.  
  
##  <a name="a-nameiskeytipenableda--cmfcribbonbariskeytipenabled"></a><a name="iskeytipenabled"></a>CMFCRibbonBar::IsKeyTipEnabled  
 Indica se è abilitata la funzionalità suggerimenti tasto di scelta.  
  
```  
BOOL IsKeyTipEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è abilitata la funzionalità suggerimenti tasto di scelta. in caso contrario `FALSE`.  
  
##  <a name="a-nameismainribbonbara--cmfcribbonbarismainribbonbar"></a><a name="ismainribbonbar"></a>CMFCRibbonBar::IsMainRibbonBar  
 Indica se la barra multifunzione è la barra multifunzione principale.  
  
```  
virtual BOOL IsMainRibbonBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo restituisce sempre `TRUE`. Eseguire l'override di questo metodo per indicare se la barra multifunzione è la barra multifunzione principale.  
  
##  <a name="a-nameisprintpreviewenableda--cmfcribbonbarisprintpreviewenabled"></a><a name="isprintpreviewenabled"></a>CMFCRibbonBar::IsPrintPreviewEnabled  
 Indica se il **anteprima di stampa** è abilitata la funzionalità.  
  
```  
BOOL IsPrintPreviewEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il **anteprima di stampa** funzionalità è abilitata; in caso contrario `FALSE`.  
  
##  <a name="a-nameisqatemptya--cmfcribbonbarisqatempty"></a><a name="isqatempty"></a>CMFCRibbonBar::IsQATEmpty  
 Indica se la barra di accesso rapido contiene pulsanti di comando.  
  
```  
BOOL IsQATEmpty() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di accesso rapido contiene pulsanti di comando. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisquickaccesstoolbarontopa--cmfcribbonbarisquickaccesstoolbarontop"></a><a name="isquickaccesstoolbarontop"></a>CMFCRibbonBar::IsQuickAccessToolbarOnTop  
 Indica se la barra di accesso rapido è superiore o inferiore della barra multifunzione.  
  
```  
BOOL IsQuickAccessToolbarOnTop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra di accesso rapido è posizionata sopra la barra multifunzione. `FALSE` se la barra di accesso rapido è disponibile nella barra multifunzione.  
  
##  <a name="a-nameisreplaceframecaptiona--cmfcribbonbarisreplaceframecaption"></a><a name="isreplaceframecaption"></a>CMFCRibbonBar::IsReplaceFrameCaption  
 Indica se la barra multifunzione sostituisce o sotto il titolo della finestra cornice principale.  
  
```  
BOOL IsReplaceFrameCaption() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra multifunzione sostituisce la didascalia della finestra cornice principale. `FALSE` se barra multifunzione è sotto la didascalia della finestra cornice principale.  
  
##  <a name="a-nameisshowgroupbordera--cmfcribbonbarisshowgroupborder"></a><a name="isshowgroupborder"></a>CMFCRibbonBar::IsShowGroupBorder  
 Indica se gruppi pulsante della barra multifunzione Visualizza un bordo gruppo.  
  
```  
virtual BOOL IsShowGroupBorder(CMFCRibbonButtonsGroup* pGroup) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pGroup`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo restituisce sempre `FALSE`. Eseguire l'override di questo metodo per indicare se i gruppi di pulsanti si trova nella barra multifunzione visualizzare un bordo gruppo.  
  
##  <a name="a-nameistooltipdescrenableda--cmfcribbonbaristooltipdescrenabled"></a><a name="istooltipdescrenabled"></a>CMFCRibbonBar::IsToolTipDescrEnabled  
 Indica se sono abilitate le descrizioni della descrizione comando.  
  
```  
BOOL IsToolTipDescrEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se sono abilitate le descrizioni della descrizione comando. `FALSE` se le descrizioni della descrizione comandi sono disabilitate.  
  
### <a name="remarks"></a>Note  
 Le descrizioni della descrizione comando sono aggiuntivo testo descrittivo visualizzato con il testo della descrizione comando.  
  
##  <a name="a-nameistooltipenableda--cmfcribbonbaristooltipenabled"></a><a name="istooltipenabled"></a>CMFCRibbonBar::IsToolTipEnabled  
 Indica se le descrizioni comandi sono abilitati o disabilitati per la barra multifunzione.  
  
```  
BOOL IsToolTipEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se sono abilitati le descrizioni comandi. `FALSE` se le descrizioni comandi sono disabilitati.  
  
##  <a name="a-nameistransparentcaptiona--cmfcribbonbaristransparentcaption"></a><a name="istransparentcaption"></a>CMFCRibbonBar::IsTransparentCaption  
 Indica se la visualizzazione è impostata per la combinazione di colori Windows Aero.  
  
```  
BOOL IsTransparentCaption() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la combinazione di colori è Windows Aero; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonclickbuttona--cmfcribbonbaronclickbutton"></a><a name="onclickbutton"></a>CMFCRibbonBar::OnClickButton  
 Questo metodo viene mantenuto per compatibilità con le applicazioni esistenti e non deve essere utilizzato per i nuovi sviluppi.  
  
```  
virtual void OnClickButton(
    CMFCRibbonButton* pButton,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Puntatore al pulsante su cui è stato fatto clic.  
  
 [in] `point`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoneditcontextmenua--cmfcribbonbaroneditcontextmenu"></a><a name="oneditcontextmenu"></a>CMFCRibbonBar::OnEditContextMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnEditContextMenu(
    CMFCRibbonRichEditCtrl* pEdit,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pEdit`  
 [in] `point`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrtlchangeda--cmfcribbonbaronrtlchanged"></a><a name="onrtlchanged"></a>CMFCRibbonBar::OnRTLChanged  
 Chiamato dal framework quando il layout cambia direzione.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsRTL`  
 `TRUE`Se il layout destra-sinistra; `FALSE` se il layout è da sinistra a destra.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di regolare il layout di tutti i controlli della barra multifunzione per la nuova direzione del layout.  
  
##  <a name="a-nameonsetaccdataa--cmfcribbonbaronsetaccdata"></a><a name="onsetaccdata"></a>CMFCRibbonBar::OnSetAccData  
 Questo metodo è interno al framework e non deve essere chiamato dal codice utente.  
  
```  
BOOL OnSetAccData(long lVal);
```  
  
### <a name="parameters"></a>Parametri  
 Long`lVal`  
 Indice dell'oggetto accessibile.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione riesce; in caso contrario, FALSE o S_FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonshowribboncontextmenua--cmfcribbonbaronshowribboncontextmenu"></a><a name="onshowribboncontextmenu"></a>CMFCRibbonBar::OnShowRibbonContextMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowRibbonContextMenu(
    CWnd* pWnd,  
    int x,  
    int y,  
    CMFCRibbonBaseElement* pHit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `x`  
 [in] `y`  
 [in] `pHit`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonshowribbonqatmenua--cmfcribbonbaronshowribbonqatmenu"></a><a name="onshowribbonqatmenu"></a>CMFCRibbonBar::OnShowRibbonQATMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowRibbonQATMenu(
    CWnd* pWnd,  
    int x,  
    int y,  
    CMFCRibbonBaseElement* pHit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `x`  
 [in] `y`  
 [in] `pHit`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsyskeydowna--cmfcribbonbaronsyskeydown"></a><a name="onsyskeydown"></a>CMFCRibbonBar::OnSysKeyDown  
 Chiamato dal framework quando l'utente preme il tasto F10 o tiene premuto il tasto ALT e quindi preme un'altra chiave.  
  
```  
BOOL OnSysKeyDown(
    CFrameWnd* pFrameWnd,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrameWnd`  
 Puntatore alla finestra cornice principale padre della barra multifunzione.  
  
 [in] `wParam`  
 Virtuale codice del tasto premuto.  
  
 [in] `lParam`  
 Quando è stato premuto il tasto della tastiera flag di stato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'evento di pressione di tasto è stato elaborato; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsyskeyupa--cmfcribbonbaronsyskeyup"></a><a name="onsyskeyup"></a>CMFCRibbonBar::OnSysKeyUp  
 Chiamato dal framework quando l'utente rilascia il tasto F10, il tasto ALT o una chiave che era premuta quando è stato premuto il tasto ALT.  
  
```  
BOOL OnSysKeyUp(
    CFrameWnd* pFrameWnd,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrameWnd`  
 Puntatore alla finestra cornice principale padre della barra multifunzione.  
  
 [in] `wParam`  
 Codice chiave virtuale della chiave viene rilasciata.  
  
 [in] `lParam`  
 Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'evento di pressione di tasto è stato elaborato; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namepoptooltipa--cmfcribbonbarpoptooltip"></a><a name="poptooltip"></a>CMFCRibbonBar::PopTooltip  
 Rimuove una descrizione comando da visualizzare.  
  
```  
void PopTooltip();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namepretranslatemessagea--cmfcribbonbarpretranslatemessage"></a><a name="pretranslatemessage"></a>CMFCRibbonBar::PreTranslateMessage  
 Determina se il messaggio specificato viene elaborato la barra multifunzione.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
 Puntatore a un messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il messaggio è stato elaborato dalla barra multifunzione; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerecalclayouta--cmfcribbonbarrecalclayout"></a><a name="recalclayout"></a>CMFCRibbonBar::RecalcLayout  
 Consente di modificare il layout di tutti i controlli della barra multifunzione.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Dopo la regolazione di layout, viene aggiornata la visualizzazione della barra multifunzione.  
  
##  <a name="a-nameremoveallcategoriesa--cmfcribbonbarremoveallcategories"></a><a name="removeallcategories"></a>CMFCRibbonBar::RemoveAllCategories  
 Elimina tutte le categorie della barra multifunzione della barra multifunzione.  
  
```  
void RemoveAllCategories();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di eliminare tutte le categorie della barra multifunzione dalla memoria e dall'elenco di categorie.  
  
##  <a name="a-nameremoveallfromtabsa--cmfcribbonbarremoveallfromtabs"></a><a name="removeallfromtabs"></a>CMFCRibbonBar::RemoveAllFromTabs  
 Rimuove tutti gli elementi della barra multifunzione dall'area della scheda.  
  
```  
void RemoveAllFromTabs();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione se si desidera rimuovere tutti gli elementi che sono state aggiunte per l'area della scheda tramite [CMFCRibbonBar::AddToTabs](#addtotabs) metodo.  
  
##  <a name="a-nameremovecategorya--cmfcribbonbarremovecategory"></a><a name="removecategory"></a>CMFCRibbonBar::RemoveCategory  
 Elimina la categoria specificata della barra multifunzione della barra multifunzione.  
  
```  
BOOL RemoveCategory(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Indice in base zero di una categoria nell'elenco delle categorie della barra multifunzione che è contenuto nella barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la categoria della barra multifunzione specificato è stata eliminata; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 La categoria della barra multifunzione specificato viene eliminata dalla memoria e dall'elenco di categorie.  
  
##  <a name="a-namesetactivecategorya--cmfcribbonbarsetactivecategory"></a><a name="setactivecategory"></a>CMFCRibbonBar::SetActiveCategory  
 Imposta la categoria della barra multifunzione specificato come la categoria attiva.  
  
```  
BOOL SetActiveCategory(
    CMFCRibbonCategory* pCategory,  
    BOOL bForceRestore= FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCategory`  
 Categoria della barra multifunzione che è contenuta nella barra multifunzione.  
  
 [in] `bForceRestore`  
 `TRUE`Per ottimizzare la barra multifunzione è ridotta a icona; `FALSE` per visualizzare la categoria attiva in una finestra popup se la barra multifunzione è ridotta a icona.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la categoria specificata è stata impostata come la categoria attiva; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 La categoria della barra multifunzione principale non può essere la categoria attiva.  
  
 Se la categoria specificata dal `pCategory` non è visualizzata, non può essere impostata come la categoria attiva.  
  
##  <a name="a-namesetactivemdichilda--cmfcribbonbarsetactivemdichild"></a><a name="setactivemdichild"></a>CMFCRibbonBar::SetActiveMDIChild  
 Associa i pulsanti di sistema della barra multifunzione che appartengono a una finestra figlio di interfaccia a documenti multipli (MDI) alla finestra figlio MDI specificata.  
  
```  
void SetActiveMDIChild(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore a una finestra figlio MDI.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetapplicationbuttona--cmfcribbonbarsetapplicationbutton"></a><a name="setapplicationbutton"></a>CMFCRibbonBar::SetApplicationButton  
 Assegna un pulsante della barra multifunzione dell'applicazione alla barra multifunzione.  
  
```  
void SetApplicationButton(
    CMFCRibbonApplicationButton* pButton,  
    CSize sizeButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Puntatore al pulsante della barra multifunzione dell'applicazione.  
  
 [in] `sizeButton`  
 Le dimensioni del pulsante della barra multifunzione dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Pulsante della barra multifunzione dell'applicazione è un pulsante arrotondato grande situato nell'angolo superiore sinistro del controllo della barra multifunzione.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetApplicationButton` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&3;](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_4.cpp)]  
  
##  <a name="a-namesetelementkeysa--cmfcribbonbarsetelementkeys"></a><a name="setelementkeys"></a>CMFCRibbonBar::SetElementKeys  
 Imposta i suggerimenti per tutti gli elementi della barra multifunzione con l'ID del comando specificato.  
  
```  
BOOL SetElementKeys(
    UINT uiCmdID,  
    LPCTSTR lpszKeys,  
    LPCTSTR lpszMenuKeys= NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 L'ID di comando di un elemento della barra multifunzione.  
  
 [in] `lpszKeys`  
 Il suggerimento.  
  
 [in] `lpszMenuKeys`  
 Il suggerimento di menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se vengono impostati i suggerimenti di elemento della barra almeno multifunzione; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Suggerimento tasto di scelta menu facoltativo sia per gli elementi della barra multifunzione con un pulsante che consente di aprire un menu di scelta rapida.  
  
##  <a name="a-namesetkeyboardnavigationlevela--cmfcribbonbarsetkeyboardnavigationlevel"></a><a name="setkeyboardnavigationlevel"></a>CMFCRibbonBar::SetKeyboardNavigationLevel  
 Imposta il livello di navigazione da tastiera come l'utente preme i suggerimenti contenuti nella barra multifunzione.  
  
```  
void SetKeyboardNavigationLevel(
    CObject* pLevel,  
    BOOL bSetFocus = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pLevel`  
 Puntatore all'oggetto di navigazione da tastiera corrente.  
  
 [in] `bSetFocus`  
 `TRUE`Per impostare lo stato attivo alla barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Navigazione tramite tastiera della barra multifunzione viene avviato quando l'utente preme il tasto ALT o F10. L'utente seleziona il livello successivo di navigazione premendo un suggerimento della barra multifunzione. L'utente può restituire il livello di navigazione precedente premendo il tasto ESC.  
  
##  <a name="a-namesetmaximizemodea--cmfcribbonbarsetmaximizemode"></a><a name="setmaximizemode"></a>CMFCRibbonBar::SetMaximizeMode  
 Consente di regolare la barra multifunzione barra quando le dimensioni della finestra di una finestra figlio di interfaccia a documenti multipli (MDI) entra o esce dallo stato ingrandito.  
  
```  
void SetMaximizeMode(
    BOOL bMax,  
    CWnd* pWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMax`  
 `TRUE`Per visualizzare i pulsanti di sistema per una finestra figlio MDI della barra multifunzione; `FALSE` per rimuovere i pulsanti di sistema per una finestra figlio MDI della barra multifunzione.  
  
 [in] `pWnd`  
 Puntatore alla finestra cornice principale per la barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Quando una finestra figlio MDI viene ingrandita, nella riga scheda viene visualizzata la barra multifunzione di pulsanti di sistema per una finestra figlio MDI.  
  
##  <a name="a-namesetquickaccesscommandsa--cmfcribbonbarsetquickaccesscommands"></a><a name="setquickaccesscommands"></a>CMFCRibbonBar::SetQuickAccessCommands  
 Aggiunge uno o più elementi della barra multifunzione alla barra di accesso rapido.  
  
```  
void SetQuickAccessCommands(
    const CList<UINT,UINT>& lstCommands,  
    BOOL bRecalcLayout=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lstCommands`  
 L'elenco dei comandi da inserire nella barra di accesso rapido.  
  
 [in] `bRecalcLayout`  
 `TRUE`Se desidera ridisegnare la barra multifunzione dopo aver aggiunto gli elementi della barra multifunzione `FALSE` in caso contrario.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetQuickAccessCommands` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp n.&8;](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_5.cpp)]  
  
##  <a name="a-namesetquickaccessdefaultstatea--cmfcribbonbarsetquickaccessdefaultstate"></a><a name="setquickaccessdefaultstate"></a>CMFCRibbonBar::SetQuickAccessDefaultState  
 Imposta la barra di accesso rapido allo stato predefinito.  
  
```  
void SetQuickAccessDefaultState(const CMFCRibbonQuickAccessToolBarDefaultState& state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `state`  
 Lo stato predefinito di accesso rapido sulla barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Lo stato della barra degli strumenti accesso rapido include un elenco di comandi e la visibilità.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetQuickAccessDefaultState` metodo la `CMFCRibbonBar` classe.  
  
 [!code-cpp[9 NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cmfcribbonbar-class_6.cpp)]  
  
##  <a name="a-namesetquickaccesstoolbarontopa--cmfcribbonbarsetquickaccesstoolbarontop"></a><a name="setquickaccesstoolbarontop"></a>CMFCRibbonBar::SetQuickAccessToolbarOnTop  
 Posiziona la barra di accesso rapido di sopra o sotto la barra multifunzione.  
  
```  
void SetQuickAccessToolbarOnTop(BOOL bOnTop);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOnTop`  
 `TRUE`per posizionare la barra di accesso rapido sopra la barra multifunzione. `FALSE` per posizionare la barra di accesso rapido di sotto della barra multifunzione.  
  
##  <a name="a-namesettooltipfixedwidtha--cmfcribbonbarsettooltipfixedwidth"></a><a name="settooltipfixedwidth"></a>CMFCRibbonBar::SetTooltipFixedWidth  
 Imposta le dimensioni regolari e grandi dimensioni di descrizione comandi larghezze fissato per la barra multifunzione.  
  
```  
void SetTooltipFixedWidth(
    int nWidthRegular,  
    int nWidthLargeImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nWidthRegular`  
 La larghezza, in pixel, della descrizione comando con dimensione fissa regolari.  
  
 [in] `nWidthLargeImage`  
 La larghezza, in pixel, di una grande fissa dimensioni descrizione comando.  
  
### <a name="remarks"></a>Note  
 Se un parametro su 0, la larghezza corrispondente a variare.  
  
##  <a name="a-nameshowcategorya--cmfcribbonbarshowcategory"></a><a name="showcategory"></a>CMFCRibbonBar::ShowCategory  
 Mostra o nasconde la categoria specificata della barra multifunzione.  
  
```  
void ShowCategory(
    int nIndex,  
    BOOL bShow=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 L'indice della categoria della barra multifunzione.  
  
 [in] `bShow`  
 Se `TRUE`, Mostra la categoria della barra multifunzione; in caso contrario, nascondere la categoria della barra multifunzione.  
  
##  <a name="a-nameshowcontextcategoriesa--cmfcribbonbarshowcontextcategories"></a><a name="showcontextcategories"></a>CMFCRibbonBar::ShowContextCategories  
 Mostra o nasconde le categorie contesto con l'ID specificato.  
  
```  
void ShowContextCategories(
    UINT uiContextID,  
    BOOL bShow=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiContextID`  
 L'ID di categoria contesto.  
  
 [in] `bShow`  
 Se `TRUE`, Mostra le categorie con l'ID specificato; in caso contrario, nascondere le categorie con l'ID specificato.  
  
##  <a name="a-nameshowkeytipsa--cmfcribbonbarshowkeytips"></a><a name="showkeytips"></a>CMFCRibbonBar::ShowKeyTips  
 Mostra i suggerimenti per ogni elemento della barra multifunzione della barra multifunzione.  
  
```  
void ShowKeyTips();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nametogglemimimizestatea--cmfcribbonbartogglemimimizestate"></a><a name="togglemimimizestate"></a>CMFCRibbonBar::ToggleMimimizeState  
 Consente di visualizzare la barra multifunzione ridotta a icona e ingrandita e viceversa.  
  
```  
void ToggleMimimizeState();
```  
  
### <a name="remarks"></a>Note  
 L'errore di ortografia nel nome del metodo è un problema noto.  
  
 In modalità ridotto a icona il controllo della barra multifunzione è nascosto e solo le schede sono visualizzate. Quando l'utente fa clic sulla scheda, il controllo della barra multifunzione viene visualizzato come finestra popup. La finestra si chiude quando l'utente fa clic altrove o esegue un comando.  
  
##  <a name="a-nametranslatechara--cmfcribbonbartranslatechar"></a><a name="translatechar"></a>CMFCRibbonBar::TranslateChar  
 Determina se il codice di carattere della sequenza di tasti specificata viene elaborato la barra multifunzione.  
  
```  
virtual BOOL TranslateChar(UINT nChar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nChar`  
 Codice utente pressione di tasto carattere.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il codice carattere è stato elaborato dalla barra multifunzione; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 La funzionalità suggerimenti tasto di scelta consente agli utenti di spostarsi tra la barra multifunzione utilizzando la tastiera.  
  
##  <a name="a-namegetfocuseda--cmfcribbonbargetfocused"></a><a name="getfocused"></a>CMFCRibbonBar::GetFocused  
 Restituisce un elemento con stato attivo.  
  
```  
virtual CMFCRibbonBaseElement* GetFocused();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento con stato attivo o `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameiswindows7looka--cmfcribbonbariswindows7look"></a><a name="iswindows7look"></a>CMFCRibbonBar::IsWindows7Look  
 Indica se la barra multifunzione dispone di Windows 7 Cerca (pulsante piccola applicazione rettangolare).  
  
```  
BOOL IsWindows7Look() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra multifunzione con Windows 7 Cerca; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameloadfromresourcea--cmfcribbonbarloadfromresource"></a><a name="loadfromresource"></a>CMFCRibbonBar::LoadFromResource  
 Di overload. Carica una barra multifunzione dalle risorse dell'applicazione.  
  
```  
virtual BOOL LoadFromResource(
    UINT uiXMLResID,  
    LPCTSTR lpszResType = RT_RIBBON,  
    HINSTANCE hInstance = NULL);

 
virtual BOOL LoadFromResource(
    LPCTSTR lpszXMLResID,  
    LPCTSTR lpszResType = RT_RIBBON,  
    HINSTANCE hInstance = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `uiXMLResID`  
 Specifica risorsa stringa ID di XML con informazioni sulla barra multifunzione.  
  
 `lpszResType`  
 Specifica tipo di risorsa che si trova in `uiXMLResID`.  
  
 `hInstance`  
 Handle per il modulo i cui file eseguibile contiene la risorsa. Se `hInstance` è `NULL`, il sistema carica la risorsa dal modulo che è stato utilizzato per creare il processo corrente.  
  
 `lpszXMLResID`  
 Specifica l'ID di risorsa, in formato stringa, con informazioni sulla barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il caricamento ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesavetoxmlbuffera--cmfcribbonbarsavetoxmlbuffer"></a><a name="savetoxmlbuffer"></a>CMFCRibbonBar::SaveToXMLBuffer  
 Salva la barra multifunzione in un buffer.  
  
```  
UINT SaveToXMLBuffer(LPBYTE* ppBuffer) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppBuffer`  
 Quando questa funzione viene restituito, `ppBuffer` punta a un buffer allocato da questo metodo e contiene informazioni sulla barra multifunzione in formato XML.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesavetoxmlfilea--cmfcribbonbarsavetoxmlfile"></a><a name="savetoxmlfile"></a>CMFCRibbonBar::SaveToXMLFile  
 Salva un file XML della barra multifunzione.  
  
```  
BOOL SaveToXMLFile(LPCTSTR lpszFilePath) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFilePath`  
 Specifica il file di output.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetwindows7looka--cmfcribbonbarsetwindows7look"></a><a name="setwindows7look"></a>CMFCRibbonBar::SetWindows7Look  
 Abilita o disabilita l'aspetto di Windows 7 (pulsante applicazione rettangolare di dimensioni ridotte) per la barra multifunzione.  
  
```  
void SetWindows7Look(
    BOOL bWindows7Look,  
    BOOL bRecalc = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bWindows7Look`  
 `TRUE`Imposta l'aspetto di Windows 7; `FALSE` in caso contrario.  
  
 `bRecalc`  
 `TRUE`Ricalcola il layout della barra multifunzione. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)   
 [Classe CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md)   
 [Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)   
 [Classe CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble](../../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)




