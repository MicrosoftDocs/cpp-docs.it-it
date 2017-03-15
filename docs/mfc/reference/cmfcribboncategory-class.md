---
title: Classe CMFCRibbonCategory | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonCategory
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonCategory class
ms.assetid: 99ba25b6-d060-4fdd-bfab-3c46c22981bb
caps.latest.revision: 38
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
ms.openlocfilehash: dccbaac6450985f0d5255a790d83f374b52f06f9
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribboncategory-class"></a>Classe CMFCRibbonCategory
Il `CMFCRibbonCategory` classe implementa una scheda della barra multifunzione che contiene un gruppo di [sulla barra multifunzione pannelli](../../mfc/reference/cmfcribbonpanel-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonCategory : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCategory::CMFCRibbonCategory](#cmfcribboncategory)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCategory::AddHidden](#addhidden)|Aggiunge un elemento nascosto per la categoria della barra multifunzione.|  
|[CMFCRibbonCategory::AddPanel](#addpanel)|Aggiunge un nuovo pannello per la categoria della barra multifunzione.|  
|[CMFCRibbonCategory::CopyFrom](#copyfrom)||  
|[CMFCRibbonCategory::FindByData](#findbydata)||  
|[CMFCRibbonCategory::FindByID](#findbyid)||  
|[CMFCRibbonCategory::FindPanelWithElem](#findpanelwithelem)||  
|[CMFCRibbonCategory::GetContextID](#getcontextid)|Restituisce l'ID del contesto della categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetData](#getdata)|Restituisce i dati definiti dall'utente che sono associati alla categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetDroppedDown](#getdroppeddown)||  
|[CMFCRibbonCategory::GetElements](#getelements)||  
|[CMFCRibbonCategory::GetElementsByID](#getelementsbyid)||  
|[CMFCRibbonCategory::GetFirstVisibleElement](#getfirstvisibleelement)|Ottenere un primo elemento visibile che appartengono alla categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetFocused](#getfocused)|Restituisce un elemento con stato attivo.|  
|[CMFCRibbonCategory::GetHighlighted](#gethighlighted)|Restituisce un elemento evidenziato.|  
|[CMFCRibbonCategory::GetImageCount](#getimagecount)||  
|[CMFCRibbonCategory::GetImageSize](#getimagesize)||  
|[CMFCRibbonCategory::GetItemIDsList](#getitemidslist)||  
|[CMFCRibbonCategory::GetLastVisibleElement](#getlastvisibleelement)|Ottenere un ultimo elemento visibile che appartengono alla categoria della barra multifunzione|  
|[CMFCRibbonCategory::GetLargeImages](#getlargeimages)|Restituisce un riferimento all'elenco di immagini di grandi dimensioni che utilizza la categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetMaxHeight](#getmaxheight)||  
|[CMFCRibbonCategory::GetName](#getname)||  
|[CMFCRibbonCategory::GetPanel](#getpanel)|Restituisce un puntatore al pannello della barra multifunzione che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonCategory::GetPanelCount](#getpanelcount)|Restituisce il numero di pannelli della barra multifunzione nella categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetPanelFromPoint](#getpanelfrompoint)||  
|[CMFCRibbonCategory::GetPanelIndex](#getpanelindex)|Restituisce l'indice del pannello della barra multifunzione specificato.|  
|[CMFCRibbonCategory::GetParentButton](#getparentbutton)||  
|[CMFCRibbonCategory::GetParentMenuBar](#getparentmenubar)||  
|[CMFCRibbonCategory::GetParentRibbonBar](#getparentribbonbar)||  
|[CMFCRibbonCategory::GetRect](#getrect)||  
|[CMFCRibbonCategory::GetSmallImages](#getsmallimages)|Restituisce un riferimento all'elenco di immagini di piccole dimensioni che utilizza la categoria.|  
|[CMFCRibbonCategory::GetTabColor](#gettabcolor)|Restituisce il colore corrente della scheda di categoria della barra multifunzione.|  
|[CMFCRibbonCategory::GetTabRect](#gettabrect)||  
|[CMFCRibbonCategory::GetTextTopLine](#gettexttopline)||  
|[CMFCRibbonCategory::GetVisibleElements](#getvisibleelements)|Ottenere tutti gli elementi visibili che appartengono alla categoria della barra multifunzione.|  
|[CMFCRibbonCategory::HighlightPanel](#highlightpanel)||  
|[CMFCRibbonCategory::HitTest](#hittest)||  
|[CMFCRibbonCategory::HitTestEx](#hittestex)||  
|[CMFCRibbonCategory::HitTestScrollButtons](#hittestscrollbuttons)||  
|[CMFCRibbonCategory::IsActive](#isactive)||  
|[CMFCRibbonCategory::IsVisible](#isvisible)|Determina se la categoria della barra multifunzione è visibile.|  
|[CMFCRibbonCategory::IsWindows7Look](#iswindows7look)|Indica se la barra multifunzione padre ha Windows 7-stile aspetto (pulsante applicazione rettangolare di dimensioni ridotte)|  
|[CMFCRibbonCategory::NotifyControlCommand](#notifycontrolcommand)||  
|[CMFCRibbonCategory::OnCancelMode](#oncancelmode)||  
|[CMFCRibbonCategory::OnDraw](#ondraw)||  
|[CMFCRibbonCategory::OnDrawImage](#ondrawimage)||  
|[CMFCRibbonCategory::OnDrawMenuBorder](#ondrawmenuborder)||  
|[CMFCRibbonCategory::OnKey](#onkey)|Chiamato dal framework quando un utente preme un tasto.|  
|[CMFCRibbonCategory::OnLButtonDown](#onlbuttondown)||  
|[CMFCRibbonCategory::OnLButtonUp](#onlbuttonup)||  
|[CMFCRibbonCategory::OnMouseMove](#onmousemove)||  
|[CMFCRibbonCategory::OnRTLChanged](#onrtlchanged)||  
|[CMFCRibbonCategory::OnScrollHorz](#onscrollhorz)||  
|[CMFCRibbonCategory::OnUpdateCmdUI](#onupdatecmdui)||  
|[CMFCRibbonCategory::RecalcLayout](#recalclayout)||  
|[CMFCRibbonCategory::RemovePanel](#removepanel)||  
|[CMFCRibbonCategory::ReposPanels](#repospanels)||  
|[CMFCRibbonCategory::SetCollapseOrder](#setcollapseorder)|Definisce l'ordine di compressione dei pannelli della barra multifunzione che sono presenti nella categoria della barra multifunzione.|  
|[CMFCRibbonCategory::SetData](#setdata)|Archivia i dati definiti dall'utente nella categoria della barra multifunzione.|  
|[CMFCRibbonCategory::SetKeys](#setkeys)|Assegna un suggerimento per la categoria della barra multifunzione.|  
|[CMFCRibbonCategory::SetName](#setname)||  
|[CMFCRibbonCategory::SetTabColor](#settabcolor)|Imposta il colore della categoria della barra multifunzione.|  
  
## <a name="remarks"></a>Note  
 In genere, si crea una categoria della barra multifunzione indirettamente chiamando [CMFCRibbonBar::AddCategory](../../mfc/reference/cmfcribbonbar-class.md#addcategory), che restituisce un puntatore alla categoria della barra multifunzione appena creato. Per aggiungere pannelli alla categoria, chiamare [CMFCRibbonCategory::AddPanel](#addpanel).  
  
 La `CMFCRibbonTab` classe disegna categorie della barra multifunzione. Deriva da [CMFCRibbonBaseElement classe](../../mfc/reference/cmfcribbonbaseelement-class.md).  
  
 Nell'esempio seguente viene illustrato come creare una categoria della barra multifunzione e aggiungere un pannello.  
  
 `// Create a new ribbon category and get a pointer to it`  
  
 `CMFCRibbonCategory* pCategory = m_wndRibbonBar.AddCategory`  
  
 `(_T("&Write"),           // Category name`  
  
 `IDB_WRITE,              // Category small images (16 x 16)`  
  
 `IDB_WRITE_LARGE);   // Category large images (32 x 32)`  
  
 `// Add a panel to the new category`  
  
 `CMFCRibbonPanel* pPanel = pCategory->AddPanel (`  
  
 `_T("Clipboard"),                       // Panel name`  
  
 `m_PanelIcons.ExtractIcon (0));  // Panel icon`  
  
 Il diagramma seguente illustra una figura della categoria Home dall'applicazione di esempio RibbonApp.  
  
 ![Immagine CMFCRibbonCategory](../../mfc/reference/media/cmfcribboncategory.png "cmfcribboncategory")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMFCRibbonCategory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncategory. h  
  
##  <a name="a-nameaddhiddena--cmfcribboncategoryaddhidden"></a><a name="addhidden"></a>CMFCRibbonCategory::AddHidden  
 Aggiunge l'elemento della barra multifunzione specificata alla matrice di elementi della barra multifunzione che vengono visualizzati nella finestra di dialogo di personalizzazione.  
  
```  
void AddHidden(CMFCRibbonBaseElement* pElem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElem`  
 Puntatore a un elemento della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Elementi della barra multifunzione nella finestra di dialogo di personalizzazione sono i comandi che è possibile aggiungere alla barra degli strumenti accesso rapido.  
  
##  <a name="a-nameaddpanela--cmfcribboncategoryaddpanel"></a><a name="addpanel"></a>CMFCRibbonCategory::AddPanel  
 Crea un pannello della barra multifunzione per la categoria della barra multifunzione.  
  
```  
CMFCRibbonPanel* AddPanel(
    LPCTSTR lpszPanelName,  
    HICON hIcon = 0,  
    CRuntimeClass* pRTI = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPanelName`  
 Puntatore al nome del nuovo pannello della barra multifunzione.  
  
 [in] `hIcon`  
 Handle per l'icona predefinita per il nuovo pannello della barra multifunzione.  
  
 [in] `pRTI`  
 Puntatore a informazioni sulla classe di runtime per un pannello della barra multifunzione personalizzata.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al pannello della barra multifunzione nuovo se il metodo ha esito positivo; in caso contrario `NULL` se il pannello non è stato creato.  
  
### <a name="remarks"></a>Note  
 Se si desidera creare un pannello della barra multifunzione personalizzata, è necessario specificare le informazioni sulle classi di runtime in `pRTI`. La classe di pannello della barra multifunzione personalizzata deve essere derivata dalla `CMFCRibbonPanel` classe.  
  
 L'icona predefinita per il pannello della barra multifunzione viene visualizzata quando vi è spazio sufficiente per visualizzare gli elementi della barra multifunzione.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddPanel` metodo la `CMFCRibbonCategory` classe.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#10;](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_1.cpp)]  
  
##  <a name="a-namecmfcribboncategorya--cmfcribboncategorycmfcribboncategory"></a><a name="cmfcribboncategory"></a>CMFCRibbonCategory::CMFCRibbonCategory  
 Costruisce e Inizializza un [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) oggetto.  
  
```  
CMFCRibbonCategory(
    CMFCRibbonBar* pParenrRibbonBar,  
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParenrRibbonBar`  
 Puntatore alla barra multifunzione padre della categoria della barra multifunzione.  
  
 [in] `lpszName`  
 Nome della categoria della barra multifunzione.  
  
 [in] `uiSmallImagesResID`  
 ID risorsa dell'elenco di immagini per le immagini piccole che vengono utilizzati dagli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
 [in] `uiLargeImagesResID`  
 ID risorsa dell'elenco di immagini per le immagini di grandi dimensioni che vengono utilizzati dagli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
 [in] `sizeSmallImage`  
 Dimensioni predefinite del piccole immagini per gli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
 [in] `sizeLargeImage`  
 Dimensioni predefinite del immagini di grandi dimensioni per gli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
##  <a name="a-namecopyfroma--cmfcribboncategorycopyfrom"></a><a name="copyfrom"></a>CMFCRibbonCategory::CopyFrom  
 Copia lo stato dell'oggetto specificato [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) corrente [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) oggetto.  
  
```  
virtual void CopyFrom(CMFCRibbonCategory& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Oggetto `CMFCRibbonCategory` di origine.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindbydataa--cmfcribboncategoryfindbydata"></a><a name="findbydata"></a>CMFCRibbonCategory::FindByData  
 Recupera l'elemento della barra multifunzione associato i dati specificati.  
  
```  
CMFCRibbonBaseElement* FindByData(
    DWORD_PTR dwData,  
    BOOL bVisibleOnly = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwData`  
 I dati associati a un elemento della barra multifunzione.  
  
 [in] `bVisibleOnly`  
 `TRUE`Per includere gli elementi della barra multifunzione di accesso rapido nella ricerca; `FALSE` per escludere gli elementi della barra multifunzione di accesso rapido nella ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindbyida--cmfcribboncategoryfindbyid"></a><a name="findbyid"></a>CMFCRibbonCategory::FindByID  
 Recupera l'elemento della barra multifunzione associato all'ID di comando specificato.  
  
```  
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID,  
    BOOL bVisibleOnly = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 ID di comando associata a un elemento della barra multifunzione.  
  
 [in] `bVisibleOnly`  
 `TRUE`Per includere gli elementi della barra multifunzione di accesso rapido nella ricerca; `FALSE` per escludere gli elementi della barra multifunzione di accesso rapido nella ricerca.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindpanelwithelema--cmfcribboncategoryfindpanelwithelem"></a><a name="findpanelwithelem"></a>CMFCRibbonCategory::FindPanelWithElem  
 Recupera il pannello della barra multifunzione che contiene l'elemento specificato della barra multifunzione.  
  
```  
CMFCRibbonPanel* FindPanelWithElem(const CMFCRibbonBaseElement* pElement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pElement`  
 Puntatore a un elemento della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un pannello della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcontextida--cmfcribboncategorygetcontextid"></a><a name="getcontextid"></a>CMFCRibbonCategory::GetContextID  
 Recupera l'ID del contesto della categoria della barra multifunzione.  
  
```  
UINT GetContextID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 ID del contesto della categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 L'ID del contesto è 0 se la categoria della barra multifunzione non è una categoria contesto.  
  
##  <a name="a-namegetdataa--cmfcribboncategorygetdata"></a><a name="getdata"></a>CMFCRibbonCategory::GetData  
 Recupera i dati definiti dall'utente che sono associati alla categoria della barra multifunzione.  
  
```  
DWORD_PTR GetData() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I dati definiti dall'utente che sono associati alla categoria della barra multifunzione.  
  
##  <a name="a-namegetdroppeddowna--cmfcribboncategorygetdroppeddown"></a><a name="getdroppeddown"></a>CMFCRibbonCategory::GetDroppedDown  
 Recupera un puntatore all'elemento della barra multifunzione che attualmente ha visualizzato il menu a comparsa.  
  
```  
CMFCRibbonBaseElement* GetDroppedDown();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetelementsa--cmfcribboncategorygetelements"></a><a name="getelements"></a>CMFCRibbonCategory::GetElements  
 Recupera tutti gli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
```  
void GetElements(
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `arElements`  
 Fare riferimento a un [CArray](../../mfc/reference/carray-class.md) di elementi della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Gli elementi della barra multifunzione che sono progettati per l'utilizzo nella barra di accesso rapido sono inclusi nella matrice.  
  
##  <a name="a-namegetelementsbyida--cmfcribboncategorygetelementsbyid"></a><a name="getelementsbyid"></a>CMFCRibbonCategory::GetElementsByID  
 Recupera tutti gli elementi della barra multifunzione associati con l'ID del comando specificato.  
  
```  
void GetElementsByID(
    UINT uiCmdID,  
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmdID`  
 ID di comando associata a un elemento della barra multifunzione.  
  
 [in, out] `arElements`  
 Fare riferimento a un [CArray](../../mfc/reference/carray-class.md) di elementi della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Gli elementi della barra multifunzione che sono progettati per l'utilizzo nella barra di accesso rapido sono inclusi nella matrice.  
  
##  <a name="a-namegetfirstvisibleelementa--cmfcribboncategorygetfirstvisibleelement"></a><a name="getfirstvisibleelement"></a>CMFCRibbonCategory::GetFirstVisibleElement  
 Recupera il primo elemento visibile appartenente alla categoria della barra multifunzione.  
  
```  
CMFCRibbonBaseElement* GetFirstVisibleElement() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo elemento visibile; potrebbe essere `NULL` se categoria non dispone di alcun elemento visibile.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetfocuseda--cmfcribboncategorygetfocused"></a><a name="getfocused"></a>CMFCRibbonCategory::GetFocused  
 Restituisce un elemento con stato attivo.  
  
```  
CMFCRibbonBaseElement* GetFocused();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento con stato attivo o `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegethighlighteda--cmfcribboncategorygethighlighted"></a><a name="gethighlighted"></a>CMFCRibbonCategory::GetHighlighted  
 Restituisce un elemento evidenziato.  
  
```  
CMFCRibbonBaseElement* GetHighlighted();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un elemento evidenziato o `NULL` se nessun elemento viene evidenziato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetimagecounta--cmfcribboncategorygetimagecount"></a><a name="getimagecount"></a>CMFCRibbonCategory::GetImageCount  
 Recupera il numero di immagini nell'elenco immagine specificata è contenuta nella categoria della barra multifunzione.  
  
```  
int GetImageCount(BOOL bIsLargeImage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsLargeImage`  
 `TRUE`per il numero di immagini nell'elenco immagine di grandi dimensioni. `FALSE` per il numero di immagini nell'elenco di immagini di piccole dimensioni.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di immagini nell'elenco di immagini specificato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetimagesizea--cmfcribboncategorygetimagesize"></a><a name="getimagesize"></a>CMFCRibbonCategory::GetImageSize  
 Recupera le dimensioni di un'immagine nell'elenco immagine specificata è contenuta nella categoria della barra multifunzione.  
  
```  
CSize GetImageSize(BOOL bIsLargeImage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsLargeImage`  
 `TRUE`per le dimensioni delle immagini di grandi dimensioni. `FALSE` per le dimensioni delle immagini di piccole dimensioni.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni di un'immagine nell'elenco di immagini specificato.  
  
### <a name="remarks"></a>Note  
 Le dimensioni recuperate includono il fattore di scala immagine globale.  
  
##  <a name="a-namegetitemidslista--cmfcribboncategorygetitemidslist"></a><a name="getitemidslist"></a>CMFCRibbonCategory::GetItemIDsList  
 Recupera gli ID di comando per gli elementi della barra multifunzione sono contenuti nella categoria della barra multifunzione.  
  
```  
void GetItemIDsList(
    CList<UINT, UINT>& lstItems,  
    BOOL bHiddenOnly = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `lstItems`  
 L'elenco di ID di comando per gli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
 [in] `bHiddenOnly`  
 `TRUE`Per escludere gli elementi della barra multifunzione visualizzati in pannelli della barra multifunzione nella categoria della barra multifunzione; `FALSE` per includere tutti gli elementi della barra multifunzione nella categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetlargeimagesa--cmfcribboncategorygetlargeimages"></a><a name="getlargeimages"></a>CMFCRibbonCategory::GetLargeImages  
 Recupera l'elenco di immagini di grandi dimensioni che sono contenuti nella categoria della barra multifunzione.  
  
```  
CMFCToolBarImages& GetLargeImages();
```  
  
### <a name="return-value"></a>Valore restituito  
 Elenco di immagini di grandi dimensioni che sono contenuti nella categoria della barra multifunzione.  
  
##  <a name="a-namegetlastvisibleelementa--cmfcribboncategorygetlastvisibleelement"></a><a name="getlastvisibleelement"></a>CMFCRibbonCategory::GetLastVisibleElement  
 Recupera l'ultimo elemento visibile appartenente alla categoria della barra multifunzione.  
  
```  
CMFCRibbonBaseElement* GetLastVisibleElement() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'ultimo elemento visibile; potrebbe essere `NULL` se la categoria non dispone di alcun elemento visibile.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetmaxheighta--cmfcribboncategorygetmaxheight"></a><a name="getmaxheight"></a>CMFCRibbonCategory::GetMaxHeight  
 Recupera l'altezza massima dei pannelli della barra multifunzione che sono contenuti nella categoria della barra multifunzione.  
  
```  
int GetMaxHeight(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per i pannelli della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza massima dei pannelli della barra multifunzione che sono contenuti nella categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Il valore recuperato include l'altezza dei margini superiore e inferiore per i pannelli della barra multifunzione.  
  
##  <a name="a-namegetnamea--cmfcribboncategorygetname"></a><a name="getname"></a>CMFCRibbonCategory::GetName  
 Recupera il nome della categoria della barra multifunzione.  
  
```  
LPCTSTR GetName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome della categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetpanela--cmfcribboncategorygetpanel"></a><a name="getpanel"></a>CMFCRibbonCategory::GetPanel  
 Restituisce un puntatore al pannello della barra multifunzione che si trova in corrispondenza dell'indice specificato.  
  
```  
CMFCRibbonPanel* GetPanel(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Indice in base zero di un pannello della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al pannello della barra multifunzione che si trova in corrispondenza dell'indice specificato.  
  
### <a name="remarks"></a>Note  
 Viene generata un'eccezione se `nIndex` è compreso nell'intervallo.  
  
##  <a name="a-namegetpanelcounta--cmfcribboncategorygetpanelcount"></a><a name="getpanelcount"></a>CMFCRibbonCategory::GetPanelCount  
 Restituisce il numero di pannelli della barra multifunzione nella categoria della barra multifunzione.  
  
```  
int GetPanelCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di pannelli della barra multifunzione nella categoria della barra multifunzione.  
  
##  <a name="a-namegetpanelfrompointa--cmfcribboncategorygetpanelfrompoint"></a><a name="getpanelfrompoint"></a>CMFCRibbonCategory::GetPanelFromPoint  
 Recupera un puntatore a un pannello della barra multifunzione se il punto specificato si trova in essa contenuti.  
  
```  
CMFCRibbonPanel* GetPanelFromPoint(CPoint point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un pannello della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Vengono testati solo i pannelli della barra multifunzione che sono contenuti nella categoria della barra multifunzione.  
  
##  <a name="a-namegetpanelindexa--cmfcribboncategorygetpanelindex"></a><a name="getpanelindex"></a>CMFCRibbonCategory::GetPanelIndex  
 Recupera l'indice in base zero del pannello della barra multifunzione specificato.  
  
```  
int GetPanelIndex(const CMFCRibbonPanel* pPanel) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pPanel`  
 Puntatore a un pannello della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero del pannello della barra multifunzione specificato se il metodo ha esito positivo; in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 Sono disponibili solo i pannelli della barra multifunzione che sono contenuti nella categoria della barra multifunzione.  
  
##  <a name="a-namegetparentbuttona--cmfcribboncategorygetparentbutton"></a><a name="getparentbutton"></a>CMFCRibbonCategory::GetParentButton  
 Recupera l'elemento della barra multifunzione padre della categoria della barra multifunzione.  
  
```  
CMFCRibbonBaseElement* GetParentButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'elemento padre della barra multifunzione, o `NULL` se è presente alcun elemento padre.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetparentmenubara--cmfcribboncategorygetparentmenubar"></a><a name="getparentmenubar"></a>CMFCRibbonCategory::GetParentMenuBar  
 Restituisce un puntatore alla barra dei menu principale di `CMFCRibbonCategory` oggetto.  
  
```  
CMFCRibbonPanelMenuBar* GetParentMenuBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il contenuto di `m_pParentMenuBar` membri protetti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetparentribbonbara--cmfcribboncategorygetparentribbonbar"></a><a name="getparentribbonbar"></a>CMFCRibbonCategory::GetParentRibbonBar  
 Recupera la barra multifunzione padre per la categoria della barra multifunzione.  
  
```  
CMFCRibbonBar* GetParentRibbonBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla barra multifunzione padre per la categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetrecta--cmfcribboncategorygetrect"></a><a name="getrect"></a>CMFCRibbonCategory::GetRect  
 Recupera il rettangolo di visualizzazione per la categoria della barra multifunzione.  
  
```  
CRect GetRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo di visualizzazione per la categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Il rettangolo di visualizzazione per la categoria della barra multifunzione non include la scheda di categoria.  
  
##  <a name="a-namegetsmallimagesa--cmfcribboncategorygetsmallimages"></a><a name="getsmallimages"></a>CMFCRibbonCategory::GetSmallImages  
 Recupera l'elenco di immagini di piccole dimensioni che sono contenuti nella categoria della barra multifunzione.  
  
```  
CMFCToolBarImages& GetSmallImages();
```  
  
### <a name="return-value"></a>Valore restituito  
 Elenco di immagini di piccole dimensioni che sono contenuti nella categoria della barra multifunzione.  
  
##  <a name="a-namegettabcolora--cmfcribboncategorygettabcolor"></a><a name="gettabcolor"></a>CMFCRibbonCategory::GetTabColor  
 Restituisce il colore corrente della scheda di categoria della barra multifunzione.  
  
```  
AFX_RibbonCategoryColor GetTabColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il colore corrente della scheda di categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Il valore restituito può essere uno dei seguenti valori enumerati:  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
##  <a name="a-namegettabrecta--cmfcribboncategorygettabrect"></a><a name="gettabrect"></a>CMFCRibbonCategory::GetTabRect  
 Recupera il rettangolo di visualizzazione per la scheda di categoria della barra multifunzione.  
  
```  
CRect GetTabRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo di visualizzazione per la scheda di categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettexttoplinea--cmfcribboncategorygettexttopline"></a><a name="gettexttopline"></a>CMFCRibbonCategory::GetTextTopLine  
 Recupera la posizione verticale del testo dei pulsanti della barra multifunzione nella categoria della barra multifunzione che consentono di visualizzare immagini di grandi dimensioni.  
  
```  
int GetTextTopLine() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione verticale del testo, in pixel, dei pulsanti della barra multifunzione che consentono di visualizzare immagini di grandi dimensioni.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetvisibleelementsa--cmfcribboncategorygetvisibleelements"></a><a name="getvisibleelements"></a>CMFCRibbonCategory::GetVisibleElements  
 Recupera tutti gli elementi visibili che appartengono alla categoria della barra multifunzione.  
  
```  
void GetVisibleElements(
    CArray <CMFCRibbonBaseElement*,  
    CMFCRibbonBaseElement*>& arElements);
```  
  
### <a name="parameters"></a>Parametri  
 `arElements`  
 Matrice di tutti gli elementi visibili.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehighlightpanela--cmfcribboncategoryhighlightpanel"></a><a name="highlightpanel"></a>CMFCRibbonCategory::HighlightPanel  
 Evidenzia il pannello della barra multifunzione specificato.  
  
```  
CMFCRibbonPanel* HighlightPanel(
    CMFCRibbonPanel* pHLPanel,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pHLPanel`  
 Puntatore al pannello della barra multifunzione per evidenziare.  
  
 [in] `point`  
 Le coordinate x e y del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al pannello della barra multifunzione evidenziato in precedenza; in caso contrario `NULL` se nessun pannello della barra multifunzione viene evidenziato quando questo metodo viene richiamato.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su come evidenziare un pannello della barra multifunzione, vedere [CMFCRibbonPanel::Highlight](../../mfc/reference/cmfcribbonpanel-class.md#highlight).  
  
##  <a name="a-namehittesta--cmfcribboncategoryhittest"></a><a name="hittest"></a>CMFCRibbonCategory::HitTest  
 Recupera un puntatore a un elemento della barra multifunzione se il punto specificato si trova in essa contenuti.  
  
```  
CMFCRibbonBaseElement* HitTest(
    CPoint point,  
    BOOL bCheckPanelCaption = FALSE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore del mouse, rispetto all'angolo superiore sinistro della finestra.  
  
 [in] `bCheckPanelCaption`  
 `TRUE`Per testare la didascalia del pannello della barra multifunzione; `FALSE` per escludere la didascalia del pannello della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Solo gli elementi della barra multifunzione sono contenuti nella categoria della barra multifunzione vengono testati.  
  
##  <a name="a-namehittestexa--cmfcribboncategoryhittestex"></a><a name="hittestex"></a>CMFCRibbonCategory::HitTestEx  
 Recupera l'indice in base zero di un elemento della barra multifunzione se il punto specificato si trova in essa contenuti.  
  
```  
int HitTestEx(CPoint point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore del mouse, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero di un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 Solo gli elementi della barra multifunzione sono contenuti nella categoria della barra multifunzione vengono testati.  
  
##  <a name="a-namehittestscrollbuttonsa--cmfcribboncategoryhittestscrollbuttons"></a><a name="hittestscrollbuttons"></a>CMFCRibbonCategory::HitTestScrollButtons  
 Se un punto rientra nel pulsante di scorrimento sinistro o destro di una categoria barra multifunzione, restituisce un puntatore a tale pulsante.  
  
```  
CMFCRibbonBaseElement* HitTestScrollButtons(CPoint point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Punto da verificare.  
  
### <a name="return-value"></a>Valore restituito  
 Se `point` rientra il rettangolo di delimitazione di sinistra o il pulsante di scorrimento a destra della categoria della barra multifunzione, restituisce un puntatore a tale pulsante o in caso contrario, restituisce `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisactivea--cmfcribboncategoryisactive"></a><a name="isactive"></a>CMFCRibbonCategory::IsActive  
 Indica se la categoria della barra multifunzione è la categoria attiva della barra multifunzione.  
  
```  
BOOL IsActive() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la categoria della barra multifunzione nella categoria attiva; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 La categoria della barra multifunzione attivi vengono visualizzati i pannelli della barra multifunzione.  
  
##  <a name="a-nameisvisiblea--cmfcribboncategoryisvisible"></a><a name="isvisible"></a>CMFCRibbonCategory::IsVisible  
 Indica se la categoria della barra multifunzione è visibile.  
  
```  
BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la categoria della barra multifunzione è visibile; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Le categorie della barra multifunzione che sono visibili vengono visualizzate una scheda di categoria.  
  
##  <a name="a-nameiswindows7looka--cmfcribboncategoryiswindows7look"></a><a name="iswindows7look"></a>CMFCRibbonCategory::IsWindows7Look  
 Indica se la barra multifunzione padre dispone di Windows 7 Cerca (pulsante piccola applicazione rettangolare).  
  
```  
BOOL IsWindows7Look() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la barra multifunzione padre con Windows 7 Cerca; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namenotifycontrolcommanda--cmfcribboncategorynotifycontrolcommand"></a><a name="notifycontrolcommand"></a>CMFCRibbonCategory::NotifyControlCommand  
 Recapita un messaggio di comando WM_NOTIFY a tutti `CMFCRibbonPanel` gli elementi di `CMFCRibbonCategory` fino a quando non viene gestito il messaggio.  
  
```  
virtual BOOL NotifyControlCommand(
    BOOL bAccelerator,  
    int nNotifyCode,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAccelerator`  
 `TRUE`Se questo comando ha origine da un tasto di scelta rapida, o `FALSE` in caso contrario.  
  
 [in] `nNotifyCode`  
 Il codice di notifica.  
  
 [in] `wParam`  
 Il campo WPARAM del messaggio.  
  
 [in] `lParam`  
 Il campo LPARAM del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se il messaggio è stato gestito, o `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncancelmodea--cmfcribboncategoryoncancelmode"></a><a name="oncancelmode"></a>CMFCRibbonCategory::OnCancelMode  
 Richiama la modalità di annullamento in tutte le `CMFCRibbonPanel` elementi del `CMFCRibbonCategory`.  
  
```  
virtual void OnCancelMode();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawa--cmfcribboncategoryondraw"></a><a name="ondraw"></a>CMFCRibbonCategory::OnDraw  
 Chiamato dal framework per creare la categoria della barra multifunzione.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per la categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawimagea--cmfcribboncategoryondrawimage"></a><a name="ondrawimage"></a>CMFCRibbonCategory::OnDrawImage  
 Chiamato dal framework per disegnare l'immagine specificata alla categoria della barra multifunzione.  
  
```  
virtual BOOL OnDrawImage(
    CDC* pDC,  
    CRect rect,  
    CMFCRibbonBaseElement* pElement,  
    BOOL bIsLargeImage,  
    BOOL nImageIndex,  
    BOOL bCenter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per l'immagine.  
  
 [in] `rect`  
 Rettangolo di visualizzazione per l'immagine.  
  
 [in] `pElement`  
 Puntatore all'elemento della barra multifunzione che contiene l'immagine.  
  
 [in] `bIsLargeImage`  
 `TRUE`Se l'immagine di grandi dimensioni; `FALSE` se l'immagine è di piccole dimensioni.  
  
 [in] `nImageIndex`  
 Indice in base zero dell'immagine nella matrice di immagine che si trova nella categoria della barra multifunzione.  
  
 [in] `bCenter`  
 `TRUE`Per centrare l'immagine nel rettangolo di visualizzazione; `FALSE` per disegnare l'immagine nell'angolo superiore sinistro del rettangolo di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenubordera--cmfcribboncategoryondrawmenuborder"></a><a name="ondrawmenuborder"></a>CMFCRibbonCategory::OnDrawMenuBorder  
 Chiamato dal framework per disegnare il bordo del menu di scelta rapida.  
  
```  
virtual void OnDrawMenuBorder(
    CDC* pDC,  
    CMFCRibbonPanelMenuBar* pMenuBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Questo parametro non viene usato.  
  
 [in] `pMenuBar`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per disegnare il bordo del menu di scelta rapida.  
  
##  <a name="a-nameonkeya--cmfcribboncategoryonkey"></a><a name="onkey"></a>CMFCRibbonCategory::OnKey  
 Chiamato dal framework quando un utente preme un tasto.  
  
```  
virtual BOOL OnKey(UINT nChar);
```  
  
### <a name="parameters"></a>Parametri  
 `nChar`  
 Il codice tasto virtuale per la chiave che un utente ha premuto.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonlbuttondowna--cmfcribboncategoryonlbuttondown"></a><a name="onlbuttondown"></a>CMFCRibbonCategory::OnLButtonDown  
 Chiamato dal framework per recuperare l'elemento della barra multifunzione sotto il punto specificato quando l'utente preme il pulsante sinistro del mouse.  
  
```  
virtual CMFCRibbonBaseElement* OnLButtonDown(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore del mouse, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un elemento della barra multifunzione se il metodo ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonlbuttonupa--cmfcribboncategoryonlbuttonup"></a><a name="onlbuttonup"></a>CMFCRibbonCategory::OnLButtonUp  
 Chiamato dal framework quando l'utente rilascia il pulsante sinistro del mouse e il puntatore viene spostato la categoria della barra multifunzione.  
  
```  
virtual void OnLButtonUp(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonmousemovea--cmfcribboncategoryonmousemove"></a><a name="onmousemove"></a>CMFCRibbonCategory::OnMouseMove  
 Chiamato dal framework quando il puntatore viene spostato nella barra multifunzione per aggiornare la visualizzazione di categoria della barra multifunzione.  
  
```  
virtual void OnMouseMove(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Le coordinate x e y del puntatore, rispetto all'angolo superiore sinistro della finestra.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrtlchangeda--cmfcribboncategoryonrtlchanged"></a><a name="onrtlchanged"></a>CMFCRibbonCategory::OnRTLChanged  
 Chiamato dal framework quando il layout cambia direzione.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsRTL`  
 `TRUE`Se il layout destra-sinistra; `FALSE` se il layout è da sinistra a destra.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di regolare il layout di tutti i pannelli della barra multifunzione e gli elementi della barra multifunzione sono contenuti nella categoria della barra multifunzione.  
  
##  <a name="a-nameonscrollhorza--cmfcribboncategoryonscrollhorz"></a><a name="onscrollhorz"></a>CMFCRibbonCategory::OnScrollHorz  
 Consente di scorrere la categoria della barra multifunzione in direzione orizzontale.  
  
```  
virtual BOOL OnScrollHorz(
    BOOL bScrollLeft,  
    int nScrollOffset = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bScrollLeft`  
 `TRUE`Scorrere verso sinistra. `FALSE` per scorrere verso destra.  
  
 [in] `nScrollOffset`  
 La distanza di scorrimento in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la categoria della barra multifunzione spostata in direzione orizzontale; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdatecmduia--cmfcribboncategoryonupdatecmdui"></a><a name="onupdatecmdui"></a>CMFCRibbonCategory::OnUpdateCmdUI  
 Chiamate di `OnUpdateCmdUI` funzione membro in ogni il `CMFCRibbonPanel` elementi del `CMFCRibbonCategory` per abilitare o disabilitare gli elementi dell'interfaccia utente in essi contenuti.  
  
```  
virtual void OnUpdateCmdUI(
    CMFCRibbonCmdUI* pCmdUI,  
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCmdUI`  
 Puntatore a di `CMFCRibbonCmdUI` oggetto che specifica quali elementi dell'interfaccia utente devono essere attivate e che deve essere disabilitata.  
  
 [in] `pTarget`  
 Puntatore alla finestra che controlla l'attivazione o disattivazione degli elementi dell'interfaccia utente.  
  
 [in] `bDisableIfNoHndler`  
 `TRUE`Per disabilitare l'elemento dell'interfaccia utente se nessun gestore è definito in una mappa dei messaggi; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerecalclayouta--cmfcribboncategoryrecalclayout"></a><a name="recalclayout"></a>CMFCRibbonCategory::RecalcLayout  
 Consente di modificare il layout di tutti i controlli per la categoria della barra multifunzione.  
  
```  
virtual void RecalcLayout(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per la categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremovepanela--cmfcribboncategoryremovepanel"></a><a name="removepanel"></a>CMFCRibbonCategory::RemovePanel  
 Rimuove un pannello della barra multifunzione dalla categoria della barra multifunzione.  
  
```cpp  
BOOL RemovePanel(
    int nIndex,  
    BOOL bDelete = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIndex`  
 Numero di indice del pannello da rimuovere. Ottenuto mediante una chiamata di [CMFCRibbonCategory::GetPanelIndex](#getpanelindex) metodo.  
  
 [in] `bDelete`  
 `TRUE`Per eliminare l'oggetto pannello dalla memoria. `FALSE` per rimuovere l'oggetto pannello senza eliminarlo.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se il metodo riesce. In caso contrario, `FALSE`.  
  
##  <a name="a-namerepospanelsa--cmfcribboncategoryrepospanels"></a><a name="repospanels"></a>CMFCRibbonCategory::ReposPanels  
 Consente di modificare il layout di tutti i controlli pannelli della barra multifunzione che sono contenuti nella categoria della barra multifunzione.  
  
```  
virtual void ReposPanels(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo per i pannelli della barra multifunzione sono contenuti nella categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcollapseordera--cmfcribboncategorysetcollapseorder"></a><a name="setcollapseorder"></a>CMFCRibbonCategory::SetCollapseOrder  
 Definisce l'ordine in cui comprimere i pannelli della barra multifunzione della categoria della barra multifunzione.  
  
```  
void SetCollapseOrder(const CArray<int,int>& arCollapseOrder);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `arCollapseOrder`  
 Specifica l'ordine di compressione. La matrice contiene gli indici in base zero di pannelli della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 La libreria definisce l'ordine di compressione. Tuttavia, è possibile personalizzare questo comportamento, fornendo la categoria con l'elenco di indici che specifica l'ordine di compressione.  
  
 Quando la categoria rileva che è possibile comprimere un pannello della barra multifunzione, Cerca l'elemento successivo nell'elenco specificato. Se l'elenco è vuoto o non sono stati specificati gli elementi necessari, la categoria utilizza l'algoritmo interno.  
  
 Ad esempio, la categoria dispone di tre pannelli della barra multifunzione e può essere compresso più volte fino a quando tutti i pannelli sono nello stato completamente compresso. È possibile impostare l'ordine di compressione seguenti: 0, 0, 2, 2. In questo caso, la categoria di comprimere il pannello 0 due volte, il pannello 2 due volte. Il pannello che dispone dell'indice 1 rimane espansa.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SetCollapseOrder` metodo la `CMFCRibbonCategory` classe. Nell'esempio viene illustrato come costruire una matrice per l'ordine di compressione e come impostare l'ordine di compressione per la categoria della barra multifunzione.  
  
 [!code-cpp[13 NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_2.cpp)]  
  
##  <a name="a-namesetdataa--cmfcribboncategorysetdata"></a><a name="setdata"></a>CMFCRibbonCategory::SetData  
 Imposta i dati definiti dall'utente da associare con la categoria della barra multifunzione.  
  
```  
void SetData(DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwData`  
 Dati definiti dall'utente.  
  
##  <a name="a-namesetkeysa--cmfcribboncategorysetkeys"></a><a name="setkeys"></a>CMFCRibbonCategory::SetKeys  
 Assegna un suggerimento per la categoria della barra multifunzione.  
  
```  
void SetKeys(LPCTSTR lpszKeys);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszKeys`  
 Il testo di suggerimento.  
  
### <a name="remarks"></a>Note  
 Suggerimenti vengono visualizzati quando l'utente preme il tasto Alt o F10.  
  
##  <a name="a-namesetnamea--cmfcribboncategorysetname"></a><a name="setname"></a>CMFCRibbonCategory::SetName  
 Assegna un nome e un suggerimento per la categoria della barra multifunzione.  
  
```  
void SetName(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Il nome e il suggerimento della categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Per impostare il suggerimento per la categoria della barra multifunzione, aggiungere una sequenza di escape di nuova riga seguita dai caratteri suggerimento a `lpszName`.  
  
##  <a name="a-namesettabcolora--cmfcribboncategorysettabcolor"></a><a name="settabcolor"></a>CMFCRibbonCategory::SetTabColor  
 Imposta il colore della categoria della barra multifunzione.  
  
```  
void SetTabColor(AFX_RibbonCategoryColor color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `color`  
 Specifica il nuovo colore della categoria della barra multifunzione.  
  
### <a name="remarks"></a>Note  
 Colore può essere uno dei valori seguenti:  
  
-   AFX_CategoryColor_None  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)

