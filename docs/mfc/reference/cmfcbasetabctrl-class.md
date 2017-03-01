---
title: Classe CMFCBaseTabCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCBaseTabCtrl
dev_langs:
- C++
helpviewer_keywords:
- CMFCBaseTabCtrl class
ms.assetid: 7270c55f-6f6e-4dd2-b0d2-291afeac3882
caps.latest.revision: 41
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: d82cde70595bf6d7a4629f54cc48e2b422cd5e8c
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcbasetabctrl-class"></a>Classe CMFCBaseTabCtrl
Implementa la funzionalità di base per le finestre a schede.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCBaseTabCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::AddIcon](#addicon)||  
|[CMFCBaseTabCtrl::AddTab](#addtab)|Aggiunge una nuova scheda alla finestra a schede.|  
|[CMFCBaseTabCtrl::ApplyRestoredTabInfo](#applyrestoredtabinfo)||  
|[CMFCBaseTabCtrl::AutoDestroyWindow](#autodestroywindow)||  
|[CMFCBaseTabCtrl::CalcRectEdit](#calcrectedit)||  
|[CMFCBaseTabCtrl::CleanUp](#cleanup)||  
|[CMFCBaseTabCtrl::ClearImageList](#clearimagelist)||  
|[CMFCBaseTabCtrl::DetachTab](#detachtab)|Scollega una scheda da una finestra a schede.|  
|[CMFCBaseTabCtrl::EnableActivateLastActive](#enableactivatelastactive)||  
|[CMFCBaseTabCtrl::EnableAutoColor](#enableautocolor)|Abilita o disabilita la colorazione automatica della scheda.|  
|[CMFCBaseTabCtrl::EnableCustomToolTips](#enablecustomtooltips)|Abilita o disabilita le descrizioni comandi personalizzate per le schede.|  
|[CMFCBaseTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Abilita o disabilita la modifica diretta delle etichette delle schede.|  
|[CMFCBaseTabCtrl::EnableTabDetach](#enabletabdetach)|Abilita le schede rimovibili.|  
|[CMFCBaseTabCtrl::EnableTabSwap](#enabletabswap)|Abilita o disabilita la modifica dell'ordine delle schede con l'uso di un mouse da parte dell'utente.|  
|[CMFCBaseTabCtrl::EnsureVisible](#ensurevisible)|Scorre schede fino a quando la scheda specificata è visibile. Questo metodo non ha alcun effetto se la scheda specificata è già visibile.|  
|[CMFCBaseTabCtrl::EnterDragMode](#enterdragmode)||  
|[CMFCBaseTabCtrl::FindTargetWnd](#findtargetwnd)|Restituisce un riquadro contenente un punto specificato.|  
|[CMFCBaseTabCtrl::FireChangeActiveTab](#firechangeactivetab)||  
|[CMFCBaseTabCtrl::FireChangingActiveTab](#firechangingactivetab)||  
|[CMFCBaseTabCtrl::GetActiveTab](#getactivetab)|Restituisce l'indice della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveTabColor](#getactivetabcolor)|Restituisce il colore di sfondo della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveTabTextColor](#getactivetabtextcolor)|Restituisce il colore del testo della scheda attiva.|  
|[CMFCBaseTabCtrl::GetActiveWnd](#getactivewnd)|Restituisce un puntatore della pagina attiva del controllo scheda.|  
|[CMFCBaseTabCtrl::GetAutoColors](#getautocolors)|Restituisce un riferimento alla matrice di colori usati per la colorazione automatica.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTab](#getfirstvisibletab)|Restituisce un puntatore alla prima scheda visibile.|  
|[CMFCBaseTabCtrl::GetFirstVisibleTabNum](#getfirstvisibletabnum)||  
|[CMFCBaseTabCtrl::GetHighlightedTab](#gethighlightedtab)|Restituisce l'indice della scheda attualmente evidenziata.|  
|[CMFCBaseTabCtrl::GetImageList](#getimagelist)||  
|[CMFCBaseTabCtrl::GetImageSize](#getimagesize)||  
|[CMFCBaseTabCtrl::GetLastVisibleTab](#getlastvisibletab)||  
|[CMFCBaseTabCtrl::GetLocation](#getlocation)|Restituisce una variabile del tipo di dati LOCATION che indica dove è posizionata l'area della scheda relativa al controllo scheda. Ad esempio, nella parte superiore o inferiore.|  
|[CMFCBaseTabCtrl::GetMaxWindowSize](#getmaxwindowsize)||  
|[CMFCBaseTabCtrl::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede. La posizione dell'area della scheda viene definita usando le coordinate.|  
|[CMFCBaseTabCtrl::GetTabBkColor](#gettabbkcolor)|Restituisce il colore di sfondo della scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabBorderSize](#gettabbordersize)|Restituisce le dimensioni dei bordi della scheda del controllo scheda.|  
|[CMFCBaseTabCtrl::GetTabByID](#gettabbyid)|Restituisce l'indice della scheda identificato dall'ID specificato.|  
|[CMFCBaseTabCtrl::GetTabCloseButton](#gettabclosebutton)||  
|[CMFCBaseTabCtrl::GetTabFromHwnd](#gettabfromhwnd)|Restituisce l'indice di una scheda che contiene un oggetto HWND specificato.|  
|[CMFCBaseTabCtrl::GetTabFromPoint](#gettabfrompoint)|Restituisce la scheda contenente un punto specificato.|  
|[CMFCBaseTabCtrl::GetTabFullWidth](#gettabfullwidth)||  
|[CMFCBaseTabCtrl::GetTabHicon](#gettabhicon)|Restituisce l'icona associata alla chiave specificata.|  
|[CMFCBaseTabCtrl::GetTabID](#gettabid)|Restituisce l'ID di una scheda usando l'indice della scheda.|  
|[CMFCBaseTabCtrl::GetTabIcon](#gettabicon)|Restituisce l'ID icona per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabLabel](#gettablabel)|Restituisce il testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabRect](#gettabrect)|Recupera le dimensioni e la posizione di una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabsHeight](#gettabsheight)||  
|[CMFCBaseTabCtrl::GetTabsRect](#gettabsrect)||  
|[CMFCBaseTabCtrl::GetTabTextColor](#gettabtextcolor)|Restituisce il colore del testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabWnd](#gettabwnd)|Restituisce il puntatore a un riquadro che si trova su una scheda specificata.|  
|[CMFCBaseTabCtrl::GetTabWndNoWrapper](#gettabwndnowrapper)|Restituisce il puntatore diretto a un controllo che si trova su una scheda specificata, anche se il controllo dispone di un wrapper.|  
|[CMFCBaseTabCtrl::GetTabsNum](#gettabsnum)|Restituisce il numero di schede contenute nel controllo Struttura a schede.|  
|[CMFCBaseTabCtrl::GetToolTipCtrl](#gettooltipctrl)|Restituisce un riferimento al controllo ToolTip associato all'oggetto `CMFCBaseTabCtrl` .|  
|[CMFCBaseTabCtrl::GetVisibleTabsNum](#getvisibletabsnum)|Restituisce il numero delle schede visibili.|  
|[CMFCBaseTabCtrl::HasImage](#hasimage)||  
|[CMFCBaseTabCtrl::HideSingleTab](#hidesingletab)|Imposta un'opzione che consente di nascondere una scheda della finestra, ma solo se la finestra a schede visualizza una sola scheda visibile.|  
|[CMFCBaseTabCtrl::InsertTab](#inserttab)|Inserisce una nuova scheda.|  
|[CMFCBaseTabCtrl::InvalidateTab](#invalidatetab)||  
|[CMFCBaseTabCtrl::IsActiveTabCloseButton](#isactivetabclosebutton)||  
|[CMFCBaseTabCtrl::IsAutoColor](#isautocolor)|Restituisce un valore che indica se una finestra a schede è in modalità colore automatica.|  
|[CMFCBaseTabCtrl::IsAutoDestroyWindow](#isautodestroywindow)||  
|[CMFCBaseTabCtrl::IsColored](#iscolored)||  
|[CMFCBaseTabCtrl::IsDialogControl](#isdialogcontrol)||  
|[CMFCBaseTabCtrl::IsDrawNoPrefix](#isdrawnoprefix)||  
|[CMFCBaseTabCtrl::IsFlatFrame](#isflatframe)|Restituisce un valore che indica se il frame per l'area della scheda è piatta o 3D.|  
|[CMFCBaseTabCtrl::IsFlatTab](#isflattab)||  
|[CMFCBaseTabCtrl::IsHideSingleTab](#ishidesingletab)|Restituisce un valore che indica se il controllo scheda è configurato per nascondere una scheda, ma solo se una finestra a schede dispone di una sola scheda visibile.|  
|[CMFCBaseTabCtrl::IsIconAdded](#isiconadded)||  
|[CMFCBaseTabCtrl::IsInPlaceEdit](#isinplaceedit)|Indica se gli utenti possono modificare l'etichetta di una scheda.|  
|[CMFCBaseTabCtrl::IsLeftRightRounded](#isleftrightrounded)||  
|[CMFCBaseTabCtrl::IsMDITab](#ismditab)||  
|[CMFCBaseTabCtrl::IsOneNoteStyle](#isonenotestyle)|Indica se una finestra a schede visualizza le schede in stile Microsoft OneNote.|  
|[CMFCBaseTabCtrl::IsPtInTabArea](#isptintabarea)|Verifica l'esistenza di un punto specificato nell'area delle schede.|  
|[CMFCBaseTabCtrl::IsTabCloseButtonHighlighted](#istabclosebuttonhighlighted)||  
|[CMFCBaseTabCtrl::IsTabCloseButtonPressed](#istabclosebuttonpressed)||  
|[CMFCBaseTabCtrl::IsTabDetachable](#istabdetachable)|Indica se una scheda è rimovibile.|  
|[CMFCBaseTabCtrl::IsTabIconOnly](#istabicononly)|Indica se le schede visualizzano le icone, ma non le etichette.|  
|[CMFCBaseTabCtrl::IsTabSwapEnabled](#istabswapenabled)|Indica se l'utente può modificare le posizioni delle schede trascinando le schede.|  
|[CMFCBaseTabCtrl::IsTabVisible](#istabvisible)|Indica se una scheda specificata è visibile.|  
|[CMFCBaseTabCtrl::IsVS2005Style](#isvs2005style)||  
|[CMFCBaseTabCtrl::MoveTab](#movetab)||  
|[CMFCBaseTabCtrl::OnChangeTabs](#onchangetabs)|Chiamato dal framework quando viene modificato il numero di schede.|  
|[CMFCBaseTabCtrl::OnDragEnter](#ondragenter)||  
|[CMFCBaseTabCtrl::OnDragLeave](#ondragleave)||  
|[CMFCBaseTabCtrl::OnDragOver](#ondragover)||  
|[CMFCBaseTabCtrl::OnDrop](#ondrop)||  
|[CMFCBaseTabCtrl::OnRenameTab](#onrenametab)||  
|[CMFCBaseTabCtrl::PreTranslateMessage](#pretranslatemessage)|Utilizzato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. (Esegue l'override di [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|  
|[CMFCBaseTabCtrl::RecalcLayout](#recalclayout)|Ricalcola il layout interno di una finestra a schede.|  
|[CMFCBaseTabCtrl::RemoveAllTabs](#removealltabs)|Rimuove tutte le schede dalla finestra a schede.|  
|[CMFCBaseTabCtrl::RemoveTab](#removetab)|Rimuove una scheda dalla finestra a schede.|  
|[CMFCBaseTabCtrl::RenameTab](#renametab)||  
|[CMFCBaseTabCtrl::ResetImageList](#resetimagelist)|Reimposta l'elenco di immagini che è collegato a una finestra a schede.|  
|[CMFCBaseTabCtrl::Serialize](#serialize)|Legge o scrive l'oggetto corrente da o in un archivio. (Esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CMFCBaseTabCtrl::SetActiveTab](#setactivetab)|Attiva una scheda.|  
|[CMFCBaseTabCtrl::SetActiveTabColor](#setactivetabcolor)|Imposta il colore di sfondo per la scheda attualmente attiva.|  
|[CMFCBaseTabCtrl::SetActiveTabTextColor](#setactivetabtextcolor)|Imposta il colore del testo per le schede attive.|  
|[CMFCBaseTabCtrl::SetAutoColors](#setautocolors)|Imposta i colori di controllo della scheda che vengono applicati in modalità colore automatica.|  
|[CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#setdockingbarwrapperrtc)|Imposta la classe wrapper che viene utilizzata per tutti gli oggetti che non sono derivati da di [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCBaseTabCtrl::SetDrawNoPrefix](#setdrawnoprefix)|Abilita e disabilita l'elaborazione dei caratteri del prefisso quando vengono create le etichette delle schede.|  
|[CMFCBaseTabCtrl::SetImageList](#setimagelist)|Imposta l'elenco di immagini icona.|  
|[CMFCBaseTabCtrl::SetLocation](#setlocation)||  
|[CMFCBaseTabCtrl::SetTabBkColor](#settabbkcolor)|Imposta il colore di sfondo di una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabBorderSize](#settabbordersize)|Imposta una nuova dimensione bordo scheda.|  
|[CMFCBaseTabCtrl::SetTabHicon](#settabhicon)|Imposta l'icona di una scheda.|  
|[CMFCBaseTabCtrl::SetTabIcon](#settabicon)|Imposta l'ID icona di una scheda.|  
|[CMFCBaseTabCtrl::SetTabIconOnly](#settabicononly)|Abilita e disabilita la modalità "solo icona" per una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabLabel](#settablabel)|Imposta l'etichetta di una scheda in modo che sia uguale a un valore stringa specificato.|  
|[CMFCBaseTabCtrl::SetTabsHeight](#settabsheight)||  
|[CMFCBaseTabCtrl::SetTabTextColor](#settabtextcolor)|Restituisce il colore del testo per una scheda specificata.|  
|[CMFCBaseTabCtrl::SetTabsOrder](#settabsorder)|Dispone le schede nell'ordine specificato.|  
|[CMFCBaseTabCtrl::ShowTab](#showtab)|Mostra o nasconde la scheda specificata.|  
|[CMFCBaseTabCtrl::StartRenameTab](#startrenametab)||  
|[CMFCBaseTabCtrl::SwapTabs](#swaptabs)||  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::CreateWrapper](#createwrapper)|Crea un wrapper per un oggetto derivato da [CWnd](../../mfc/reference/cwnd-class.md) che non è derivato da `CDockablePane`. Per ancorare un oggetto `CMFCBaseTabCtrl` , ogni controllo incorporato deve includere un wrapper di ancoraggio o essere derivato da `CDockablePane`.<br /><br /> È possibile impostare la classe del wrapper usando `SetDockingBayWrapperRTC`.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCBaseTabCtrl::m_bActivateTabOnRightClick](#m_bactivatetabonrightclick)|Specifica se le schede vengono selezionate facendo clic con il pulsante sinistro o destro del mouse.|  
|[CMFCBaseTabCtrl::m_bAutoDestroyWindow](#m_bautodestroywindow)|Specifica se i riquadri contenuti nelle schede vengono eliminati automaticamente.|  
  
## <a name="remarks"></a>Note  
 La classe `CMFCBaseTabCtrl` è una classe astratta. Di conseguenza, non è possibile crearne un'istanza. Per creare una finestra a schede, è necessario derivare una classe da `CMFCBaseTabCtrl`. La libreria MFC contiene alcuni esempi di classe derivata, due dei quali sono [CMFCTabCtrl classe](../../mfc/reference/cmfctabctrl-class.md) e [CMFCOutlookBarTabCtrl classe](../../mfc/reference/cmfcoutlookbartabctrl-class.md).  
  
 A partire da [!INCLUDE[vs_dev14](../../ide/includes/vs_dev14_md.md)] questa classe supporta Microsoft Active Accessibility.  
  
## <a name="customization-tips"></a>Suggerimenti per la personalizzazione  
 I suggerimenti seguenti riguardano la `CMFCBaseTabCtrl Class` e tutte le classi che ereditano da esso:  
  
-   Se si abilitano schede rimovibili, non mantenere i puntatori sulle finestre a schede. Queste schede rimovibili possono essere create ed eliminate in modo dinamico. Di conseguenza, i puntatori possono diventare non validi.  
  
-   È possibile configurare il controllo Struttura a schede in modo che gli utenti possano spostare le schede in modo dinamico in un controllo Struttura a schede usando il mouse. Questa funzionalità è incorporata nella classe `CMFCBaseTabCtrl` . Per abilitarlo, chiamare [CMFCBaseTabCtrl::EnableTabSwap](#enabletabswap).  
  
-   Per impostazione predefinita, le schede sono rimovibili quando vengono aggiunte a un controllo Struttura a schede. È inoltre possibile aggiungere schede non rimovibili utilizzando [CMFCBaseTabCtrl::AddTab](#addtab). Se si imposta il parametro `bDetachable` su `FALSE`, la scheda non sarà rimovibile. È inoltre possibile modificare se le schede siano amovibili chiamando il metodo [CMFCBaseTabCtrl::EnableTabDetach](#enabletabdetach).  
  
-   Gli oggetti che derivano dal [classe CWnd](../../mfc/reference/cwnd-class.md) possono essere inserite in una barra di controllo ancorabile o scheda ancorata. Affinché l'intero controllo sia ancorato, è necessario rendere ancorabile l'oggetto `CWnd` . A tale scopo, MFC usa una classe wrapper. Questa classe wrapper è il [CDockablePaneAdapter classe](../../mfc/reference/cdockablepaneadapter-class.md). Qualsiasi oggetto `CWnd` aggiunto a una barra di controllo o scheda ancorabile verrà incapsulato in un oggetto `CDockablePaneAdapter` . È possibile disabilitare il ritorno a capo automatico impostando il parametro `m_bEnableWrapping` dell'oggetto `CMFCBaseTablCtrl` su `FALSE`. È inoltre possibile modificare la classe che l'applicazione verrà utilizzato come wrapper utilizzando il metodo [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#setdockingbarwrapperrtc).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbasetabctrl.h  
  
##  <a name="a-nameaddicona--cmfcbasetabctrladdicon"></a><a name="addicon"></a>CMFCBaseTabCtrl::AddIcon  
 Aggiunge un'icona all'elenco di icone protetto `CMap``m_mapAddedIcons` membro.  
  
```  
void AddIcon(
    HICON hIcon,  
    int iIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hIcon`  
 Handle per l'icona da aggiungere.  
  
 [in] `iIcon`  
 Indice in base zero dell'icona in protetto `CImageList``m_Images` membro.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddtaba--cmfcbasetabctrladdtab"></a><a name="addtab"></a>CMFCBaseTabCtrl::AddTab  
 Aggiunge una nuova scheda del controllo struttura a schede.  
  
```  
virtual void AddTab(
    CWnd* pTabWnd,  
    LPCTSTR lpszTabLabel,  
    UINT uiImageId = (UINT)-1,,  
    BOOL bDetachable = TRUE);

 
virtual void AddTab(
    CWnd* pTabWnd,  
    UINT uiResTabLabel,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTabWnd`  
 Puntatore alla finestra che questo metodo rappresenta come nuova scheda.  
  
 [in] `lpszTabLabel`  
 Stringa che contiene l'etichetta per la nuova scheda.  
  
 [in] `uiImageId`  
 ID immagine dall'elenco di immagini. Il controllo scheda viene utilizzata come icona per la nuova scheda.  
  
 [in] `uiResTabLabel`  
 L'ID di risorsa per l'etichetta.  
  
 [in] `bDetachable`  
 Un parametro booleano che determina se la nuova scheda è scollegabile.  
  
### <a name="remarks"></a>Note  
 Se `pTabWnd` punta a un oggetto che non è derivato dal [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) e se `bDetachable` è `TRUE`, il framework crea automaticamente un wrapper per il `pTabWnd` oggetto. Il wrapper rende il `pTabWnd` oggetto amovibili. Per impostazione predefinita, il wrapper è un'istanza di [CDockablePaneAdapter classe](../../mfc/reference/cdockablepaneadapter-class.md). Se le funzionalità offerte dal wrapper predefinito non sono accettabile, utilizzare il [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#setdockingbarwrapperrtc) per specificare un wrapper diversi.  
  
##  <a name="a-nameapplyrestoredtabinfoa--cmfcbasetabctrlapplyrestoredtabinfo"></a><a name="applyrestoredtabinfo"></a>CMFCBaseTabCtrl::ApplyRestoredTabInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bUseTabIndexes`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameautodestroywindowa--cmfcbasetabctrlautodestroywindow"></a><a name="autodestroywindow"></a>CMFCBaseTabCtrl::AutoDestroyWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AutoDestroyWindow(BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAutoDestroy`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecalcrectedita--cmfcbasetabctrlcalcrectedit"></a><a name="calcrectedit"></a>CMFCBaseTabCtrl::CalcRectEdit  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CalcRectEdit(CRect& rectEdit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectEdit`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecleanupa--cmfcbasetabctrlcleanup"></a><a name="cleanup"></a>CMFCBaseTabCtrl::CleanUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CleanUp();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameclearimagelista--cmfcbasetabctrlclearimagelist"></a><a name="clearimagelist"></a>CMFCBaseTabCtrl::ClearImageList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ClearImageList();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecreatewrappera--cmfcbasetabctrlcreatewrapper"></a><a name="createwrapper"></a>CMFCBaseTabCtrl::CreateWrapper  
 Crea un wrapper per una finestra cornice derivata dal [CWnd (classe)](../../mfc/reference/cwnd-class.md) ma non è derivato dal [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
virtual CWnd* CreateWrapper(
    CWnd* pWndToWrap,  
    LPCTSTR lpszTabLabel,  
    BOOL bDetachable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndToWrap`  
 Puntatore alla finestra cornice che viene eseguito il wrapping.  
  
 [in] `lpszTabLabel`  
 Stringa che contiene l'etichetta per la finestra.  
  
 [in] `bDetachable`  
 Un parametro booleano che indica se la finestra è scollegabile.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al wrapper derivato dal `CDockablePane` se classe `CreateWrapper` correttamente crea una classe wrapper per `pWndToWrap`. Se il metodo non riesce, si recupera `pWndToWrap`.  
  
### <a name="remarks"></a>Note  
 Una finestra a schede è possibile ancorare qualsiasi oggetto derivato da `CWnd`. Tuttavia, in ordine per un `CMFCBaseTabCtrl Class` oggetto ancorate, ogni oggetto nel `CMFCBaseTabCtrl` deve essere scollegabile. Di conseguenza, `CMFCBaseTabCtrl` esegue automaticamente il wrapping di tutti gli oggetti che non sono derivati da `CDockablePane`.  
  
 Per impostazione predefinita, il `CMFCBaseTabCtrl` crea istanze di [CDockablePaneAdapter classe](../../mfc/reference/cdockablepaneadapter-class.md). Per modificare la classe predefinita del wrapper, chiamare [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#setdockingbarwrapperrtc).  
  
 Se `pWndToWrap` è derivato da `CDockablePane`, questo metodo non crea un wrapper. Al contrario, avrà esito negativo e restituire `pWndToWrap`.  
  
##  <a name="a-namedetachtaba--cmfcbasetabctrldetachtab"></a><a name="detachtab"></a>CMFCBaseTabCtrl::DetachTab  
 Il framework chiama questo metodo per disconnettere una scheda di controllo struttura a schede.  
  
```  
virtual BOOL DetachTab(
    AFX_DOCK_METHOD dockMethod,  
    int nTabNum = -1,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dockMethod`  
 Un tipo di dati enumerato fornito dal [CBasePane classe](../../mfc/reference/cbasepane-class.md). Questo tipo di dati specifica il metodo utilizzato per scollegare la scheda.  
  
 [in] `nTabNum`  
 Indice in base zero della scheda da scollegare.  
  
 [in] `bHide`  
 Un parametro booleano che indica se il framework deve nascondere la scheda scollegata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se la scheda specificata da `nTabNum` è non amovibili, questa funzione ha esito negativo e restituisce `FALSE`.  
  
##  <a name="a-nameenableactivatelastactivea--cmfcbasetabctrlenableactivatelastactive"></a><a name="enableactivatelastactive"></a>CMFCBaseTabCtrl::EnableActivateLastActive  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableActivateLastActive(BOOL bLastActive = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bLastActive`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenableautocolora--cmfcbasetabctrlenableautocolor"></a><a name="enableautocolor"></a>CMFCBaseTabCtrl::EnableAutoColor  
 Controlla se il framework utilizza i colori di sfondo automatica durante il disegno di una scheda.  
  
```  
void EnableAutoColor(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Un parametro booleano che determina se il framework utilizza colori automatici.  
  
### <a name="remarks"></a>Note  
 Un controllo struttura a schede è una matrice di colori predefiniti diversi. Quando il framework utilizza colori automatici, ogni scheda in una serie di schede viene assegnato nel colore successivo da questa matrice.  
  
 Per impostazione predefinita, i colori automatici dipendono dai colori definito libreria. È possibile fornire una matrice di colori personalizzata chiamando [CMFCBaseTabCtrl::SetAutoColors](#setautocolors).  
  
##  <a name="a-nameenablecustomtooltipsa--cmfcbasetabctrlenablecustomtooltips"></a><a name="enablecustomtooltips"></a>CMFCBaseTabCtrl::EnableCustomToolTips  
 Abilita le descrizioni comandi personalizzate per il controllo scheda.  
  
```  
BOOL EnableCustomToolTips(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Valore booleano che determina se utilizzare le descrizioni comandi personalizzate.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se le descrizioni comandi personalizzate sono abilitate, il controllo scheda invia il `AFX_WM_ON_GET_TAB_TOOLTIP` messaggio sulla cornice principale. Se si desidera supportare le descrizioni comandi personalizzate dell'applicazione, la finestra cornice principale deve gestire questo metodo e fornire il testo della descrizione comando personalizzato. Per ulteriori informazioni su come fornire testo della descrizione comando personalizzato, vedere [CMFCTabToolTipInfo struttura](../../mfc/reference/cmfctabtooltipinfo-structure.md).  
  
##  <a name="a-nameenableinplaceedita--cmfcbasetabctrlenableinplaceedit"></a><a name="enableinplaceedit"></a>CMFCBaseTabCtrl::EnableInPlaceEdit  
 Consente di indirizzano la modifica delle etichette scheda dall'utente.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Un parametro booleano che specifica se abilitare la modifica diretta delle etichette di scheda.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la modifica diretta delle etichette scheda è disabilitata per i controlli delle schede.  
  
 È possibile abilitare la modifica diretta per un subset delle schede del controllo scheda. A tale scopo, eseguire l'override del metodo `CMFCBaseTabCtrl::StartRenameTab`. `StartRenameTab`deve restituire un valore diverso da zero per tutte le schede che supportano la modifica diretta dell'etichetta.  
  
 Nel `CMFCBaseTabCtrl Class`, questo metodo è una funzione virtuale pure e non dispone di implementazione. Se si deriva una classe dalla classe `CMFCBaseTabCtrl`, è necessario implementare questa funzione.  
  
##  <a name="a-nameenabletabdetacha--cmfcbasetabctrlenabletabdetach"></a><a name="enabletabdetach"></a>CMFCBaseTabCtrl::EnableTabDetach  
 Abilita le schede rimovibili.  
  
```  
virtual BOOL EnableTabDetach(
    int iTab,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda.  
  
 [in] `bEnable`  
 Valore booleano che indica se effettuare la scheda amovibili.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
##  <a name="a-nameenabletabswapa--cmfcbasetabctrlenabletabswap"></a><a name="enabletabswap"></a>CMFCBaseTabCtrl::EnableTabSwap  
 Consente all'utente di modificare l'ordine di tabulazione utilizzando il mouse.  
  
```  
void EnableTabSwap(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Valore booleano che indica se abilitare la sostituzione della scheda.  
  
### <a name="remarks"></a>Note  
 Quando è abilitato lo scambio di scheda, l'utente può trascinare una scheda e modificare la posizione relativa del controllo.  
  
##  <a name="a-nameensurevisiblea--cmfcbasetabctrlensurevisible"></a><a name="ensurevisible"></a>CMFCBaseTabCtrl::EnsureVisible  
 Scorre schede fino a quando la scheda specificata è visibile.  
  
```  
virtual BOOL EnsureVisible(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo non ha effetto se la scheda indicato da `iTab` è già visibile.  
  
 Per impostazione predefinita, questo metodo non è supportato per il `CMFCBaseTabCtrl Class`. È necessario implementare questa funzione in una classe personalizzata derivata da `CMFCBaseTabCtrl` se il controllo scheda personalizzata supporta lo scorrimento della scheda. Questo metodo è supportato per il [CMFCTabCtrl classe](../../mfc/reference/cmfctabctrl-class.md).  
  
##  <a name="a-nameenterdragmodea--cmfcbasetabctrlenterdragmode"></a><a name="enterdragmode"></a>CMFCBaseTabCtrl::EnterDragMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnterDragMode();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefindtargetwnda--cmfcbasetabctrlfindtargetwnd"></a><a name="findtargetwnd"></a>CMFCBaseTabCtrl::FindTargetWnd  
 Identifica il riquadro contenente un punto specificato.  
  
```  
virtual CWnd* FindTargetWnd(const CPoint& pt) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Coordinate di un punto che viene definito mediante l'area client del [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto in caso di esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Nel `CMFCBaseTabCtrl` (classe), questo metodo è una funzione virtuale pura: è necessario implementare se si deriva una classe dalla classe `CMFCBaseTabCtrl`.  
  
##  <a name="a-namefirechangeactivetaba--cmfcbasetabctrlfirechangeactivetab"></a><a name="firechangeactivetab"></a>CMFCBaseTabCtrl::FireChangeActiveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void FireChangeActiveTab(int nNewTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nNewTab`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namefirechangingactivetaba--cmfcbasetabctrlfirechangingactivetab"></a><a name="firechangingactivetab"></a>CMFCBaseTabCtrl::FireChangingActiveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL FireChangingActiveTab(int nNewTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nNewTab`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetactivetaba--cmfcbasetabctrlgetactivetab"></a><a name="getactivetab"></a>CMFCBaseTabCtrl::GetActiveTab  
 Recupera l'indice della scheda attualmente attiva.  
  
```  
virtual int GetActiveTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero della scheda attiva; -1 se è presente alcuna scheda attiva.  
  
##  <a name="a-namegetactivetabcolora--cmfcbasetabctrlgetactivetabcolor"></a><a name="getactivetabcolor"></a>CMFCBaseTabCtrl::GetActiveTabColor  
 Recupera il colore di sfondo della scheda attualmente attiva.  
  
```  
virtual COLORREF GetActiveTabColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che specifica il colore di sfondo della scheda attiva.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il colore di sfondo della scheda attiva è `COLOR_WINDOW`. È possibile modificare il colore di sfondo per la scheda attiva tramite il metodo [CMFCBaseTabCtrl::SetActiveTabColor](#setactivetabcolor).  
  
##  <a name="a-namegetactivetabtextcolora--cmfcbasetabctrlgetactivetabtextcolor"></a><a name="getactivetabtextcolor"></a>CMFCBaseTabCtrl::GetActiveTabTextColor  
 Recupera il colore del testo per la scheda attiva.  
  
```  
virtual COLORREF GetActiveTabTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che specifica il colore del testo della scheda attiva.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il colore del testo per le schede attive è `COLOR_WINDOWTEXT`. È possibile modificare il colore del testo con il metodo [CMFCBaseTabCtrl::SetActiveTabTextColor](#setactivetabtextcolor).  
  
##  <a name="a-namegetactivewnda--cmfcbasetabctrlgetactivewnd"></a><a name="getactivewnd"></a>CMFCBaseTabCtrl::GetActiveWnd  
 Recupera un puntatore alla finestra scheda attualmente attiva.  
  
```  
virtual CWnd* GetActiveWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una finestra.  
  
##  <a name="a-namegetautocolorsa--cmfcbasetabctrlgetautocolors"></a><a name="getautocolors"></a>CMFCBaseTabCtrl::GetAutoColors  
 Recupera la matrice di colori utilizzati per la colorazione automatica.  
  
```  
const CArray<COLORREF,COLORREF>& GetAutoColors() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a una matrice di [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) che i valori di [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto utilizza per la colorazione della scheda automatica.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework consente di inizializzare la matrice di colori per i colori definito libreria. È possibile fornire una matrice di colori personalizzata chiamando il metodo [CMFCBaseTabCtrl::SetAutoColors](#setautocolors).  
  
##  <a name="a-namegetfirstvisibletaba--cmfcbasetabctrlgetfirstvisibletab"></a><a name="getfirstvisibletab"></a>CMFCBaseTabCtrl::GetFirstVisibleTab  
 Recupera un puntatore alla prima scheda visibile.  
  
```  
virtual CWnd* GetFirstVisibleTab(int& iTabNum);

 
virtual CWnd* GetFirstVisibleTab(
    int iStartFrom,  
    int& iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `iTabNum`  
 Un riferimento a un numero intero. Questo metodo scrive l'indice in base zero della prima scheda visibile di questo parametro.  
  
 [in] `iStartFrom`  
 Indice in base zero della prima scheda da controllare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla prima scheda visibile se ha esito positivo. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Se questo metodo non riesce, viene scritto il valore -1 per `iStartFrom`.  
  
 Se `iStartFrom` è maggiore o uguale al numero di schede del controllo, `GetFirstVisibleTab` automaticamente ha esito negativo.  
  
##  <a name="a-namegetfirstvisibletabnuma--cmfcbasetabctrlgetfirstvisibletabnum"></a><a name="getfirstvisibletabnum"></a>CMFCBaseTabCtrl::GetFirstVisibleTabNum  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetFirstVisibleTabNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegethighlightedtaba--cmfcbasetabctrlgethighlightedtab"></a><a name="gethighlightedtab"></a>CMFCBaseTabCtrl::GetHighlightedTab  
 Recupera l'indice della scheda attualmente evidenziata.  
  
```  
int GetHighlightedTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della scheda evidenziata.  
  
##  <a name="a-namegetimagelista--cmfcbasetabctrlgetimagelist"></a><a name="getimagelist"></a>CMFCBaseTabCtrl::GetImageList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual const CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetimagesizea--cmfcbasetabctrlgetimagesize"></a><a name="getimagesize"></a>CMFCBaseTabCtrl::GetImageSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetImageSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetlastvisibletaba--cmfcbasetabctrlgetlastvisibletab"></a><a name="getlastvisibletab"></a>CMFCBaseTabCtrl::GetLastVisibleTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetLastVisibleTab(int& iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTabNum`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetlocationa--cmfcbasetabctrlgetlocation"></a><a name="getlocation"></a>CMFCBaseTabCtrl::GetLocation  
 Recupera la posizione della parte scheda area del controllo struttura a schede.  
  
```  
Location GetLocation() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso dell'area della scheda.  
  
### <a name="remarks"></a>Note  
 I valori di percorso area scheda possibili sono `LOCATION_BOTTOM` e `LOCATION_TOP`.  
  
##  <a name="a-namegetmaxwindowsizea--cmfcbasetabctrlgetmaxwindowsize"></a><a name="getmaxwindowsize"></a>CMFCBaseTabCtrl::GetMaxWindowSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetMaxWindowSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabareaa--cmfcbasetabctrlgettabarea"></a><a name="gettabarea"></a>CMFCBaseTabCtrl::GetTabArea  
 Recupera le dimensioni e la posizione dell'area della scheda del controllo scheda.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectTabAreaTop`  
 Riferimento a un oggetto `CRect`. `GetTabArea`l'oggetto utilizzato per archiviare le dimensioni e la posizione dell'area della scheda principale.  
  
 [in] `rectTabAreaBottom`  
 Riferimento a un oggetto `CRect`. `GetTabArea`l'oggetto utilizzato per archiviare le dimensioni e la posizione dell'area della scheda nella parte inferiore.  
  
### <a name="remarks"></a>Note  
 Dopo aver `GetTabArea` viene restituito, il `CRect` parametri contengono le dimensioni e la posizione dell'area della scheda nelle coordinate client del controllo scheda. Se è disponibile un'area all'inizio o alla parte inferiore del controllo struttura a schede, scheda `rectTabAreaTop` o `rectTabAreaBottom` sono vuoti.  
  
 Nel `CMFCBaseTabCtrl Class`, questo metodo è una funzione virtuale pure e non dispone di implementazione. Se si deriva una classe dalla classe `CMFCBaseTabCtrl`, è necessario implementare questa funzione.  
  
##  <a name="a-namegettabbkcolora--cmfcbasetabctrlgettabbkcolor"></a><a name="gettabbkcolor"></a>CMFCBaseTabCtrl::GetTabBkColor  
 Recupera il colore di sfondo della scheda specificata.  
  
```  
virtual COLORREF GetTabBkColor(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore che indica il colore di sfondo della scheda specificata, -1 se `iTab` è compreso nell'intervallo.  
  
##  <a name="a-namegettabbordersizea--cmfcbasetabctrlgettabbordersize"></a><a name="gettabbordersize"></a>CMFCBaseTabCtrl::GetTabBorderSize  
 Recupera le dimensioni dei bordi della scheda del controllo.  
  
```  
virtual int GetTabBorderSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni del bordo della scheda, espressa in pixel.  
  
### <a name="remarks"></a>Note  
 Le dimensioni predefinite per il bordo della scheda sono di tre pixel. È possibile modificare questo valore di dimensione bordo con il metodo [CMFCBaseTabCtrl::SetTabBorderSize](#settabbordersize).  
  
##  <a name="a-namegettabbyida--cmfcbasetabctrlgettabbyid"></a><a name="gettabbyid"></a>CMFCBaseTabCtrl::GetTabByID  
 Recupera l'indice di una scheda in base a un ID di scheda.  
  
```  
virtual int GetTabByID(int id) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `id`  
 Un ID di scheda.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero di una scheda, se trovato; -1 se non viene trovato l'ID della scheda.  
  
### <a name="remarks"></a>Note  
 La scheda ID vengono assegnati automaticamente quando si aggiungono schede a un controllo tab.  
  
##  <a name="a-namegettabclosebuttona--cmfcbasetabctrlgettabclosebutton"></a><a name="gettabclosebutton"></a>CMFCBaseTabCtrl::GetTabCloseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetTabCloseButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabfromhwnda--cmfcbasetabctrlgettabfromhwnd"></a><a name="gettabfromhwnd"></a>CMFCBaseTabCtrl::GetTabFromHwnd  
 Recupera l'indice della scheda che contiene l'oggetto HWND specificato.  
  
```  
virtual int GetTabFromHwnd(HWND hwnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hwnd`  
 Handle per una finestra.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero della scheda se ha esito positivo. -1 se nessuna scheda contiene `hwnd`.  
  
##  <a name="a-namegettabfrompointa--cmfcbasetabctrlgettabfrompoint"></a><a name="gettabfrompoint"></a>CMFCBaseTabCtrl::GetTabFromPoint  
 Recupera la scheda che contiene un punto specificato.  
  
```  
virtual int GetTabFromPoint(CPoint& pt) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Un punto nelle coordinate client del controllo scheda.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice della scheda che contiene `pt`; -1 se nessuna scheda contiene `pt`.  
  
##  <a name="a-namegettabfullwidtha--cmfcbasetabctrlgettabfullwidth"></a><a name="gettabfullwidth"></a>CMFCBaseTabCtrl::GetTabFullWidth  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabFullWidth(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabhicona--cmfcbasetabctrlgettabhicon"></a><a name="gettabhicon"></a>CMFCBaseTabCtrl::GetTabHicon  
 Restituisce l'ICONA associata con la scheda specificata.  
  
```  
virtual HICON GetTabHicon(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 L'ICONA associata a un'etichetta di scheda se ha esito positivo. `NULL` se è presente alcuna ICONA o se il metodo non riesce.  
  
##  <a name="a-namegettabicona--cmfcbasetabctrlgettabicon"></a><a name="gettabicon"></a>CMFCBaseTabCtrl::GetTabIcon  
 Recupera l'icona associata la scheda specificata.  
  
```  
virtual UINT GetTabIcon(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID dell'icona per la scheda specificata se ha esito positivo. -1 se l'indice non è valido.  
  
### <a name="remarks"></a>Note  
 Il [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto archivia le icone in interna [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
##  <a name="a-namegettabida--cmfcbasetabctrlgettabid"></a><a name="gettabid"></a>CMFCBaseTabCtrl::GetTabID  
 Recupera l'ID per una scheda specificata dall'indice di tabulazione.  
  
```  
int GetTabID(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 ID della scheda o -1 se `iTab` è compreso nell'intervallo.  
  
##  <a name="a-namegettablabela--cmfcbasetabctrlgettablabel"></a><a name="gettablabel"></a>CMFCBaseTabCtrl::GetTabLabel  
 Recupera il testo dell'etichetta di una scheda.  
  
```  
virtual BOOL GetTabLabel(
    int iTab,  
    CString& strLabel) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
 [out] `strLabel`  
 Riferimento a un oggetto `CString`. Questo metodo archivia l'etichetta della scheda in questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo ha esito negativo se l'indice `iTab` non è valido.  
  
 Impostare l'etichetta per una scheda quando si crea la scheda utilizzando [CMFCBaseTabCtrl::AddTab](#addtab). È inoltre possibile modificare l'etichetta dopo la creazione con il metodo [CMFCBaseTabCtrl::SetTabLabel](#settablabel).  
  
##  <a name="a-namegettabrecta--cmfcbasetabctrlgettabrect"></a><a name="gettabrect"></a>CMFCBaseTabCtrl::GetTabRect  
 Recupera le dimensioni e posizione della scheda specificata.  
  
```  
virtual BOOL GetTabRect(
    int iTab,  
    CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
 [out] `rect`  
 Riferimento a un oggetto `CRect`. Questo metodo archivia le dimensioni e posizione della scheda in questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` se l'indice di tabulazione non è valido.  
  
##  <a name="a-namegettabsheighta--cmfcbasetabctrlgettabsheight"></a><a name="gettabsheight"></a>CMFCBaseTabCtrl::GetTabsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabsHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabsnuma--cmfcbasetabctrlgettabsnum"></a><a name="gettabsnum"></a>CMFCBaseTabCtrl::GetTabsNum  
 Recupera il numero di schede del controllo.  
  
```  
virtual int GetTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede del controllo.  
  
##  <a name="a-namegettabsrecta--cmfcbasetabctrlgettabsrect"></a><a name="gettabsrect"></a>CMFCBaseTabCtrl::GetTabsRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetTabsRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabtextcolora--cmfcbasetabctrlgettabtextcolor"></a><a name="gettabtextcolor"></a>CMFCBaseTabCtrl::GetTabTextColor  
 Recupera il colore del testo per la scheda specificata.  
  
```  
virtual COLORREF GetTabTextColor(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parametro che indica il colore del testo della scheda specificata, -1 se `iTab` è compreso nell'intervallo.  
  
##  <a name="a-namegettabwnda--cmfcbasetabctrlgettabwnd"></a><a name="gettabwnd"></a>CMFCBaseTabCtrl::GetTabWnd  
 Restituisce un puntatore al riquadro che si trova nella scheda specificata.  
  
```  
virtual CWnd* GetTabWnd(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto che si trova nella scheda che `iTab` specifica. `NULL`Se `iTab` non è valido.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito è quello che l'applicazione aggiunta quando una chiamata [CMFCBaseTabCtrl::AddTab](#addtab) o [CMFCBaseTabCtrl::InsertTab](#inserttab).  
  
 Se l'oggetto in una scheda è un wrapper, questo metodo restituirà il wrapper per l'oggetto. Per ulteriori informazioni su wrapper, vedere [CMFCBaseTabCtrl::CreateWrapper](#createwrapper). Se si desidera accedere a un puntatore all'oggetto diretto senza wrapper, utilizzare il metodo [CMFCBaseTabCtrl::GetTabWndNoWrapper](#gettabwndnowrapper).  
  
##  <a name="a-namegettabwndnowrappera--cmfcbasetabctrlgettabwndnowrapper"></a><a name="gettabwndnowrapper"></a>CMFCBaseTabCtrl::GetTabWndNoWrapper  
 Restituisce un puntatore al controllo che si trova in una scheda, anche se il controllo ha un wrapper.  
  
```  
virtual CWnd* GetTabWndNoWrapper(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto che si trova nella scheda specificata. `NULL` se `iTab` non è valido.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera un puntatore diretto per il `CWnd` oggetto che è stato aggiunto tramite il metodo [CMFCBaseTabCtrl::AddTab](#addtab) o [CMFCBaseTabCtrl::InsertTab](#inserttab). `GetTabWndNoWrapper`Recupera un puntatore a oggetto aggiunto `CWnd`, anche se il framework aggiunto un wrapper per l'oggetto. Per ulteriori informazioni su wrapper e [CMFCBaseTabCtrl classe](../../mfc/reference/cmfcbasetabctrl-class.md), vedere [CMFCBaseTabCtrl::CreateWrapper](#createwrapper).  
  
 Utilizzare il metodo [CMFCBaseTabCtrl::GetTabWnd](#gettabwnd) se non si desidera ignorare la classe wrapper.  
  
##  <a name="a-namegettooltipctrla--cmfcbasetabctrlgettooltipctrl"></a><a name="gettooltipctrl"></a>CMFCBaseTabCtrl::GetToolTipCtrl  
 Recupera un riferimento a contorl la descrizione comando.  
  
```  
CToolTipCtrl& GetToolTipCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al controllo descrizione comandi.  
  
##  <a name="a-namegetvisibletabsnuma--cmfcbasetabctrlgetvisibletabsnum"></a><a name="getvisibletabsnum"></a>CMFCBaseTabCtrl::GetVisibleTabsNum  
 Recupera il numero di schede visibili.  
  
```  
virtual int GetVisibleTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede visibili.  
  
##  <a name="a-namehasimagea--cmfcbasetabctrlhasimage"></a><a name="hasimage"></a>CMFCBaseTabCtrl::HasImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasImage(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehidesingletaba--cmfcbasetabctrlhidesingletab"></a><a name="hidesingletab"></a>CMFCBaseTabCtrl::HideSingleTab  
 Imposta l'opzione per nascondere le schede per il controllo scheda quando esiste una scheda visibile.  
  
```  
virtual void HideSingleTab(BOOL bHide = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bHide`  
 Valore booleano che specifica se abilitare nascondere schede singole.  
  
### <a name="remarks"></a>Note  
 Quando l'applicazione è configurata per nascondere le schede singole, il framework visualizza automaticamente le schede quando viene aggiunta una seconda scheda controllo struttura a schede.  
  
##  <a name="a-nameinserttaba--cmfcbasetabctrlinserttab"></a><a name="inserttab"></a>CMFCBaseTabCtrl::InsertTab  
 Inserisce una scheda del controllo struttura a schede.  
  
```  
Virtual void InsertTab(
    CWnd* pNewWnd,  
    LPCTSTR lpszTabLabel,  
    int nInsertAt,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);

 
virtual void InsertTab(
    CWnd* pNewWnd,  
    UINT uiResTabLabel,  
    int nInsertAt,  
    UINT uiImageId = (UINT)-1,  
    BOOL bDetachable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pNewWnd`  
 Puntatore alla finestra di questo metodo aggiunge una nuova scheda.  
  
 [in] `lpszTabLabel`  
 Stringa che contiene l'etichetta per la nuova scheda.  
  
 [in] `nInsertAt`  
 Indice in base zero della scheda.  
  
 [in] `uiImageId`  
 ID immagine dall'elenco di immagini. Il controllo scheda viene utilizzata come icona per la nuova scheda.  
  
 [in] `bDetachable`  
 Un parametro booleano che determina se la nuova scheda è scollegabile.  
  
 [in] `uiResTabLabel`  
 L'ID di risorsa per l'etichetta.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto indicato da `pNewWnd` non è derivato dal [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) e se il `bDetachable` parametro `TRUE`, il framework crea un wrapper speciale per la nuova scheda. Per impostazione predefinita, il wrapper è un'istanza di [CDockablePaneAdapter classe](../../mfc/reference/cdockablepaneadapter-class.md). Utilizzare il [CMFCBaseTabCtrl::SetDockingBarWrapperRTC](#setdockingbarwrapperrtc) metodo per creare una classe wrapper diversi. Qualsiasi classe wrapper personalizzata deve essere derivato da `CDockablePaneAdapter`.  
  
##  <a name="a-nameinvalidatetaba--cmfcbasetabctrlinvalidatetab"></a><a name="invalidatetab"></a>CMFCBaseTabCtrl::InvalidateTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void InvalidateTab(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisactivetabclosebuttona--cmfcbasetabctrlisactivetabclosebutton"></a><a name="isactivetabclosebutton"></a>CMFCBaseTabCtrl::IsActiveTabCloseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsActiveTabCloseButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisautocolora--cmfcbasetabctrlisautocolor"></a><a name="isautocolor"></a>CMFCBaseTabCtrl::IsAutoColor  
 Determina se il controllo scheda è in modalità automatico.  
  
```  
BOOL IsAutoColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo scheda è in modalità automatico; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 È possibile abilitare o disabilitare la modalità automatico utilizzando il [CMFCBaseTabCtrl::EnableAutoColor](#enableautocolor) metodo.  
  
##  <a name="a-nameisautodestroywindowa--cmfcbasetabctrlisautodestroywindow"></a><a name="isautodestroywindow"></a>CMFCBaseTabCtrl::IsAutoDestroyWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsAutoDestroyWindow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameiscoloreda--cmfcbasetabctrliscolored"></a><a name="iscolored"></a>CMFCBaseTabCtrl::IsColored  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsColored() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisdialogcontrola--cmfcbasetabctrlisdialogcontrol"></a><a name="isdialogcontrol"></a>CMFCBaseTabCtrl::IsDialogControl  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDialogControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisdrawnoprefixa--cmfcbasetabctrlisdrawnoprefix"></a><a name="isdrawnoprefix"></a>CMFCBaseTabCtrl::IsDrawNoPrefix  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsDrawNoPrefix() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisflatframea--cmfcbasetabctrlisflatframe"></a><a name="isflatframe"></a>CMFCBaseTabCtrl::IsFlatFrame  
 Indica se il frame del controllo viene eseguito il rendering in uno stile flat o in uno stile 3D.  
  
```  
virtual BOOL IsFlatFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il frame del controllo viene eseguito il rendering bidimensionale; `FALSE` se il frame viene eseguito il rendering in uno stile 3D.  
  
### <a name="remarks"></a>Note  
 Utilizzare [CMFCTabCtrl::SetFlatFrame](../../mfc/reference/cmfctabctrl-class.md#setflatframe) di modifica dello stile per il frame del controllo struttura a schede.  
  
 Impossibile eseguire il rendering di controlli delle schede che utilizzano lo stile di Outlook con frame semplici. Ciò include la [CMFCOutlookBarTabCtrl classe](../../mfc/reference/cmfcoutlookbartabctrl-class.md) e le classi derivate da tale classe.  
  
##  <a name="a-nameisflattaba--cmfcbasetabctrlisflattab"></a><a name="isflattab"></a>CMFCBaseTabCtrl::IsFlatTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsFlatTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameishidesingletaba--cmfcbasetabctrlishidesingletab"></a><a name="ishidesingletab"></a>CMFCBaseTabCtrl::IsHideSingleTab  
 Determina se il controllo scheda consente di nascondere l'etichetta della scheda se è presente solo una scheda.  
  
```  
virtual BOOL IsHideSingleTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo scheda nasconde l'etichetta della scheda quando dispone di una scheda. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare il metodo [CMFCBaseTabCtrl::HideSingleTab](#hidesingletab) per consentire di nascondere l'etichetta della scheda quando si verifica solo una scheda.  
  
##  <a name="a-nameisiconaddeda--cmfcbasetabctrlisiconadded"></a><a name="isiconadded"></a>CMFCBaseTabCtrl::IsIconAdded  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsIconAdded(
    HICON hIcon,  
    int& iIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hIcon`  
 [in] `iIcon`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisinplaceedita--cmfcbasetabctrlisinplaceedit"></a><a name="isinplaceedit"></a>CMFCBaseTabCtrl::IsInPlaceEdit  
 Indica se il controllo struttura a schede è configurato per consentire all'utente di modificare dinamicamente le etichette di scheda.  
  
```  
virtual BOOL IsInPlaceEdit() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sul posto la modifica è abilitata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile abilitare o disabilitare la modifica sul posto chiamando il metodo [CMFCBaseTabCtrl::EnableInPlaceEdit](#enableinplaceedit).  
  
##  <a name="a-nameisleftrightroundeda--cmfcbasetabctrlisleftrightrounded"></a><a name="isleftrightrounded"></a>CMFCBaseTabCtrl::IsLeftRightRounded  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsLeftRightRounded() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameismditaba--cmfcbasetabctrlismditab"></a><a name="ismditab"></a>CMFCBaseTabCtrl::IsMDITab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsMDITab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisonenotestylea--cmfcbasetabctrlisonenotestyle"></a><a name="isonenotestyle"></a>CMFCBaseTabCtrl::IsOneNoteStyle  
 Determina se le schede vengono visualizzate nello stile di Microsoft OneNote.  
  
```  
virtual BOOL IsOneNoteStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se le schede vengono visualizzate nello stile di Microsoft OneNote; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare il metodo [CMDIFrameWndEx::EnableMDITabs](../../mfc/reference/cmdiframewndex-class.md#enablemditabs) per abilitare lo stile di Microsoft OneNote. È inoltre possibile abilitare questo stile quando crea un'istanza di [CMFCTabCtrl classe](../../mfc/reference/cmfctabctrl-class.md): è sufficiente passare lo stile STYLE_3D_ONENOTE al metodo [CMFCTabCtrl::Create](../../mfc/reference/cmfctabctrl-class.md#create).  
  
 Per impostazione predefinita, lo stile di Microsoft OneNote non è supportato in una classe personalizzata derivata dal `CMFCBaseTabCtrl Class`. Tuttavia, è supportata nella `CMFCTabCtrl` classe.  
  
##  <a name="a-nameisptintabareaa--cmfcbasetabctrlisptintabarea"></a><a name="isptintabarea"></a>CMFCBaseTabCtrl::IsPtInTabArea  
 Determina se un punto all'interno dell'area della scheda.  
  
```  
virtual BOOL IsPtInTabArea(CPoint point) const = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Punto da verificare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto dell'area della scheda. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Nel `CMFCBaseTabCtrl Class`, questo metodo è una funzione virtuale pure e non dispone di implementazione. Se si deriva una classe dalla classe `CMFCBaseTabCtrl`, è necessario implementare questa funzione.  
  
##  <a name="a-nameistabclosebuttonhighlighteda--cmfcbasetabctrlistabclosebuttonhighlighted"></a><a name="istabclosebuttonhighlighted"></a>CMFCBaseTabCtrl::IsTabCloseButtonHighlighted  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTabCloseButtonHighlighted() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameistabclosebuttonpresseda--cmfcbasetabctrlistabclosebuttonpressed"></a><a name="istabclosebuttonpressed"></a>CMFCBaseTabCtrl::IsTabCloseButtonPressed  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTabCloseButtonPressed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameistabdetachablea--cmfcbasetabctrlistabdetachable"></a><a name="istabdetachable"></a>CMFCBaseTabCtrl::IsTabDetachable  
 Determina se una scheda è scollegabile.  
  
```  
virtual BOOL IsTabDetachable(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda da controllare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la scheda amovibili; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per rendere una scheda amovibili, utilizzare il metodo [CMFCBaseTabCtrl::EnableTabDetach](#enabletabdetach).  
  
##  <a name="a-nameistabicononlya--cmfcbasetabctrlistabicononly"></a><a name="istabicononly"></a>CMFCBaseTabCtrl::IsTabIconOnly  
 Determina se un'etichetta scheda contiene solo le icone e alcun testo.  
  
```  
virtual BOOL IsTabIconOnly(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se un'etichetta scheda include solo le icone; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Per impostare le schede dell'applicazione per visualizzare solo le icone, chiamare il metodo [CMFCBaseTabCtrl::SetTabIconOnly](#settabicononly).  
  
##  <a name="a-nameistabswapenableda--cmfcbasetabctrlistabswapenabled"></a><a name="istabswapenabled"></a>CMFCBaseTabCtrl::IsTabSwapEnabled  
 Determina se il controllo struttura a schede consente all'utente di modificare le posizioni delle tabulazioni, usando il mouse.  
  
```  
BOOL IsTabSwapEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le posizioni delle tabulazioni possono essere modificate dall'utente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, gli utenti non possono modificare l'ordine delle schede in un controllo struttura a schede. Utilizzare il [CMFCBaseTabCtrl::EnableTabSwap](#enabletabswap) metodo per attivare questa funzionalità.  
  
##  <a name="a-nameistabvisiblea--cmfcbasetabctrlistabvisible"></a><a name="istabvisible"></a>CMFCBaseTabCtrl::IsTabVisible  
 Indica se la scheda specificata è visibile.  
  
```  
virtual BOOL IsTabVisible(int iTab) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda da controllare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la scheda specificata è visibile; in caso contrario 0.  
  
##  <a name="a-nameisvs2005stylea--cmfcbasetabctrlisvs2005style"></a><a name="isvs2005style"></a>CMFCBaseTabCtrl::IsVS2005Style  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsVS2005Style() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namembactivatetabonrightclicka--cmfcbasetabctrlmbactivatetabonrightclick"></a><a name="m_bactivatetabonrightclick"></a>CMFCBaseTabCtrl::m_bActivateTabOnRightClick  
 `m_bActivateTabOnRightClick`Determina se le schede sono in stato attivo quando l'utente fa clic sull'etichetta di una scheda utilizzando il pulsante destro del mouse.  
  
```  
BOOL m_bActivateTabOnRightClick;  
```  
  
### <a name="remarks"></a>Note  
 Il valore predefinito per questo membro dati è `FALSE`.  
  
##  <a name="a-namembautodestroywindowa--cmfcbasetabctrlmbautodestroywindow"></a><a name="m_bautodestroywindow"></a>CMFCBaseTabCtrl::m_bAutoDestroyWindow  
 `m_bAutoDestroyWindow`Determina se il framework Elimina automaticamente gli oggetti nelle schede quando le schede vengono rimossi.  
  
```  
BOOL m_bAutoDestroyWindow;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo membro è `FALSE`.  
  
##  <a name="a-namemovetaba--cmfcbasetabctrlmovetab"></a><a name="movetab"></a>CMFCBaseTabCtrl::MoveTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void MoveTab(
    int nSource,  
    int nDest);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSource`  
 [in] `nDest`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonchangetabsa--cmfcbasetabctrlonchangetabs"></a><a name="onchangetabs"></a>CMFCBaseTabCtrl::OnChangeTabs  
 Il framework chiama questo metodo se il numero di schede in una scheda del controllo delle modifiche.  
  
```  
virtual void OnChangeTabs();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo non esegue alcuna operazione. Eseguire l'override di questo metodo per eseguire codice personalizzato quando il numero di schede nella scheda controllare le modifiche.  
  
##  <a name="a-nameondropa--cmfcbasetabctrlondrop"></a><a name="ondrop"></a>CMFCBaseTabCtrl::OnDrop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnDrop(
    COleDataObject*,
    DROPEFFECT,
    CPoint);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `COleDataObject*`  
 [in] `DROPEFFECT`  
 [in] `CPoint`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondragovera--cmfcbasetabctrlondragover"></a><a name="ondragover"></a>CMFCBaseTabCtrl::OnDragOver  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject*,
    DWORD,
    CPoint);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `COleDataObject*`  
 [in] `DWORD`  
 [in] `CPoint`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondragleavea--cmfcbasetabctrlondragleave"></a><a name="ondragleave"></a>CMFCBaseTabCtrl::OnDragLeave  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDragLeave();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondragentera--cmfcbasetabctrlondragenter"></a><a name="ondragenter"></a>CMFCBaseTabCtrl::OnDragEnter  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject*,
    DWORD,
    CPoint);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `COleDataObject*`  
 [in] `DWORD`  
 [in] `CPoint`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonrenametaba--cmfcbasetabctrlonrenametab"></a><a name="onrenametab"></a>CMFCBaseTabCtrl::OnRenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnRenameTab(int, CString&);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `int`  
 [in] `CString&`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namepretranslatemessagea--cmfcbasetabctrlpretranslatemessage"></a><a name="pretranslatemessage"></a>CMFCBaseTabCtrl::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namerecalclayouta--cmfcbasetabctrlrecalclayout"></a><a name="recalclayout"></a>CMFCBaseTabCtrl::RecalcLayout  
 Ricalcola il layout del controllo scheda interno.  
  
```  
virtual void RecalcLayout() = 0;  
```  
  
### <a name="remarks"></a>Note  
 Nel `CMFCBaseTabCtrl Class`, questo metodo è una funzione virtuale pura. Se si deriva una classe dalla classe `CMFCBaseTabCtrl`, è necessario implementare questa funzione.  
  
##  <a name="a-nameremovealltabsa--cmfcbasetabctrlremovealltabs"></a><a name="removealltabs"></a>CMFCBaseTabCtrl::RemoveAllTabs  
 Rimuove tutte le schede del controllo tab.  
  
```  
virtual void RemoveAllTabs();
```  
  
### <a name="remarks"></a>Note  
 Se [CMFCBaseTabCtrl::m_bAutoDestroyWindow](#m_bautodestroywindow) è `TRUE`, il framework Elimina tutti i [CWnd](../../mfc/reference/cwnd-class.md) gli oggetti associati alle schede rimosse.  
  
##  <a name="a-nameremovetaba--cmfcbasetabctrlremovetab"></a><a name="removetab"></a>CMFCBaseTabCtrl::RemoveTab  
 Rimuove una scheda del controllo struttura a schede.  
  
```  
virtual BOOL RemoveTab(
    int iTab,  
    BOOL bRecalcLayout = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda.  
  
 [in] `bRecalcLayout`  
 Un parametro booleano che specifica se ricalcolare il layout della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo rimuove la scheda correttamente. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se [CMFCBaseTabCtrl::m_bAutoDestroyWindow](#m_bautodestroywindow) è `TRUE`, `RemoveTab` distrugge il [CWnd](../../mfc/reference/cwnd-class.md) oggetto associato alla scheda specificata.  
  
##  <a name="a-namerenametaba--cmfcbasetabctrlrenametab"></a><a name="renametab"></a>CMFCBaseTabCtrl::RenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL RenameTab();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameresetimagelista--cmfcbasetabctrlresetimagelist"></a><a name="resetimagelist"></a>CMFCBaseTabCtrl::ResetImageList  
 Reimposta l'elenco di immagini per un'istanza di [CMFCBaseTabCtrl classe](../../mfc/reference/cmfcbasetabctrl-class.md).  
  
```  
void ResetImageList();
```  
  
##  <a name="a-nameserializea--cmfcbasetabctrlserialize"></a><a name="serialize"></a>CMFCBaseTabCtrl::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetactivetaba--cmfcbasetabctrlsetactivetab"></a><a name="setactivetab"></a>CMFCBaseTabCtrl::SetActiveTab  
 Attiva la scheda specificata.  
  
```  
virtual BOOL SetActiveTab(int iTab) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda. `SetActiveTab`Attiva la scheda con l'indice.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Nel `CMFCBaseTabCtrl Class`, questo metodo è una funzione virtuale pura. Se si deriva una classe dalla classe `CMFCBaseTabCtrl`, è necessario implementare questa funzione.  
  
##  <a name="a-namesetactivetabcolora--cmfcbasetabctrlsetactivetabcolor"></a><a name="setactivetabcolor"></a>CMFCBaseTabCtrl::SetActiveTabColor  
 Imposta il colore di sfondo per la scheda attiva.  
  
```  
virtual void SetActiveTabColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `clr`  
 Specifica il nuovo colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Il framework Ottiene il colore di sfondo predefinito per le schede attive dal [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371)metodo.  
  
##  <a name="a-namesetactivetabtextcolora--cmfcbasetabctrlsetactivetabtextcolor"></a><a name="setactivetabtextcolor"></a>CMFCBaseTabCtrl::SetActiveTabTextColor  
 Imposta il colore del testo per le schede attive.  
  
```  
virtual void SetActiveTabTextColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `clr`  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parametro che specifica il nuovo colore del testo.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework Ottiene il colore del testo da [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371). Eseguire l'override di questo colore predefinito utilizzando il `SetActiveTabTextColor` metodo.  
  
##  <a name="a-namesetautocolorsa--cmfcbasetabctrlsetautocolors"></a><a name="setautocolors"></a>CMFCBaseTabCtrl::SetAutoColors  
 Imposta i colori del controllo struttura a schede che utilizza il framework in modalità automatica dei colori.  
  
```  
void SetAutoColors(const CArray<COLORREF,COLORREF>& arColors);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `arColors`  
 Matrice di colori RGB.  
  
### <a name="remarks"></a>Note  
 Se si specifica una matrice di colori personalizzata, la matrice di colori predefinita. Se il parametro `arColors` è vuota, il framework viene ripristinata la matrice di colori predefinita.  
  
 Per attivare la modalità automatico, utilizzare il [CMFCBaseTabCtrl::EnableAutoColor](#enableautocolor) metodo.  
  
##  <a name="a-namesetdockingbarwrapperrtca--cmfcbasetabctrlsetdockingbarwrapperrtc"></a><a name="setdockingbarwrapperrtc"></a>CMFCBaseTabCtrl::SetDockingBarWrapperRTC  
 Imposta la classe wrapper che viene utilizzata per tutti gli oggetti che non sono derivati da di [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
void SetDockingBarWrapperRTC(CRuntimeClass* pRTC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRTC`  
 Le informazioni sulla classe di runtime per la nuova classe wrapper.  
  
### <a name="remarks"></a>Note  
 Si aggiungono schede a un controllo struttura a schede utilizzando i metodi [CMFCBaseTabCtrl::AddTab](#addtab) e [CMFCBaseTabCtrl::InsertTab](#inserttab). Quando si aggiunge una scheda, ogni controllo in tale scheda deve essere ancorata. Tutti gli oggetti che non sono derivati da `CDockablePane` deve essere eseguito il wrapping. `AddTab`e `InsertTab` creare un wrapper per questi oggetti. La classe wrapper predefinita è la [CDockablePaneAdapter classe](../../mfc/reference/cdockablepaneadapter-class.md). Il metodo `SetDockingBarWrapperRTC` consente di modificare la classe che viene utilizzata come una classe wrapper. La classe wrapper fornito deve essere derivata da `CDockablePaneAdapter`.  
  
##  <a name="a-namesetdrawnoprefixa--cmfcbasetabctrlsetdrawnoprefix"></a><a name="setdrawnoprefix"></a>CMFCBaseTabCtrl::SetDrawNoPrefix  
 Abilita e disabilita l'elaborazione dei caratteri per il prefisso nell'etichetta.  
  
```  
void SetDrawNoPrefix(
    BOOL bNoPrefix,  
    BOOL bRedraw = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bNoPrefix`  
 `TRUE`Se si desidera elaborare caratteri prefisso; in caso contrario `FALSE`.  
  
 [in] `bRedraw`  
 `TRUE`Se si desidera ridisegnare la finestra a schede. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Un carattere di prefisso è un carattere mnemonico è preceduto da una e commerciale (&).  
  
##  <a name="a-namesetimagelista--cmfcbasetabctrlsetimagelist"></a><a name="setimagelist"></a>CMFCBaseTabCtrl::SetImageList  
 Imposta l'elenco di immagine icona per il controllo scheda.  
  
```  
virtual BOOL SetImageList(
    UINT uiID,  
    int cx = 15,  
    COLORREF clrTransp = RGB(255, 0, 255));  
  
virtual BOOL SetImageList(HIMAGELIST hImageList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 Un ID di risorsa bitmap. `SetImageList`Carica l'elenco di immagini da questa risorsa.  
  
 [in] `cx`  
 La larghezza di ogni immagine in pixel.  
  
 [in] `clrTransp`  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parametro che indica il colore trasparente dell'immagine.  
  
 [in] `hImageList`  
 Handle per un elenco di immagini precaricato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le immagini dall'elenco di immagini icona vengono visualizzate le etichette per la scheda. Per visualizzare un'icona, è necessario specificare il relativo indice quando si chiama [CMFCBaseTabCtrl::AddTab](#addtab).  
  
 `SetImageList`avrà esito negativo se il controllo struttura a schede è stato creato con uno stile flat. Non verrà eseguita anche se il framework non è possibile caricare l'immagine indicata dal `uiID`.  
  
 Questo metodo ricalcola l'altezza della scheda in base alle dimensioni immagine e testo.  
  
##  <a name="a-namesetlocationa--cmfcbasetabctrlsetlocation"></a><a name="setlocation"></a>CMFCBaseTabCtrl::SetLocation  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetLocation(Location location);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `location`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesettabbkcolora--cmfcbasetabctrlsettabbkcolor"></a><a name="settabbkcolor"></a>CMFCBaseTabCtrl::SetTabBkColor  
 Imposta il colore di sfondo per la scheda specificata.  
  
```  
virtual BOOL SetTabBkColor(
    int iTab,  
    COLORREF color = (COLORREF)-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
 [in] `color`  
 Il colore da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` in caso contrario.  
  
##  <a name="a-namesettabbordersizea--cmfcbasetabctrlsettabbordersize"></a><a name="settabbordersize"></a>CMFCBaseTabCtrl::SetTabBorderSize  
 Imposta una nuova dimensione del bordo per il controllo scheda.  
  
```  
virtual void SetTabBorderSize(
    int nTabBorderSize,  
    BOOL bRepaint = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTabBorderSize`  
 Nuova dimensione di bordo, in pixel.  
  
 [in] `bRepaint`  
 Un parametro booleano che indica se il framework ridisegna il controllo.  
  
##  <a name="a-namesettabhicona--cmfcbasetabctrlsettabhicon"></a><a name="settabhicon"></a>CMFCBaseTabCtrl::SetTabHicon  
 Imposta l'icona per un'etichetta di scheda.  
  
```  
virtual BOOL SetTabHicon(
    int iTab,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda. Questo metodo modifica l'icona per questa scheda.  
  
 [in] `hIcon`  
 Handle per un'icona.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
##  <a name="a-namesettabicona--cmfcbasetabctrlsettabicon"></a><a name="settabicon"></a>CMFCBaseTabCtrl::SetTabIcon  
 Imposta l'icona per una scheda.  
  
```  
virtual BOOL SetTabIcon(
    int iTab,  
    UINT uiIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda da aggiornare.  
  
 [in] `uiIcon`  
 L'ID dell'icona per la nuova icona. Questo ID fa riferimento l'oggetto interno [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
##  <a name="a-namesettabicononlya--cmfcbasetabctrlsettabicononly"></a><a name="settabicononly"></a>CMFCBaseTabCtrl::SetTabIconOnly  
 Consente di visualizzare un'icona (e nessuna etichetta di testo) su una scheda specifica.  
  
```  
virtual BOOL SetTabIconOnly(
    int iTab,  
    BOOL bIconOnly = TRUE,  
    BOOL bShowTooltipAlways = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda da modificare.  
  
 [in] `bIconOnly`  
 Un parametro booleano che determina se visualizzare solo le icone.  
  
 [in] `bShowTooltipAlways`  
 Un parametro booleano che determina se il framework Visualizza le descrizioni comandi per un'etichetta di scheda che vengono visualizzate solo le icone.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, un controllo scheda viene visualizzata l'etichetta di icona e testo per ogni scheda.  
  
##  <a name="a-namesettablabela--cmfcbasetabctrlsettablabel"></a><a name="settablabel"></a>CMFCBaseTabCtrl::SetTabLabel  
 Imposta il testo per un'etichetta di scheda.  
  
```  
virtual BOOL SetTabLabel(
    int iTab,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda da aggiornare.  
  
 [in] `strLabel`  
 Un riferimento a una stringa che contiene il nuovo testo per l'etichetta della scheda.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
##  <a name="a-namesettabsheighta--cmfcbasetabctrlsettabsheight"></a><a name="settabsheight"></a>CMFCBaseTabCtrl::SetTabsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetTabsHeight();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesettabsordera--cmfcbasetabctrlsettabsorder"></a><a name="settabsorder"></a>CMFCBaseTabCtrl::SetTabsOrder  
 Dispone le schede nell'ordine specificato.  
  
```  
BOOL SetTabsOrder(const CArray<int,int>& arOrder);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `arOrder`  
 Matrice di indici in base zero che definisce il nuovo ordine di tabulazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FAIL` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Le dimensioni del `arOrder` matrice deve essere uguale al numero di schede del controllo.  
  
##  <a name="a-namesettabtextcolora--cmfcbasetabctrlsettabtextcolor"></a><a name="settabtextcolor"></a>CMFCBaseTabCtrl::SetTabTextColor  
 Imposta il colore del testo per una scheda specifica.  
  
```  
virtual BOOL SetTabTextColor(
    int iTab,  
    COLORREF color = (COLORREF)-1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero della scheda.  
  
 [in] `color`  
 Oggetto [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parametro che indica il nuovo colore del testo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
##  <a name="a-nameshowtaba--cmfcbasetabctrlshowtab"></a><a name="showtab"></a>CMFCBaseTabCtrl::ShowTab  
 Mostra o nasconde la scheda specificata.  
  
```  
virtual BOOL ShowTab(
    int iTab,  
    BOOL bShow = TRUE,  
    BOOL bRecalcLayout = TRUE,  
    BOOL bActivate = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 L'indice della scheda che `ShowTab` verrà mostrare o nascondere.  
  
 [in] `bShow`  
 Un parametro booleano che indica se visualizzare la scheda.  
  
 [in] `bRecalcLayout`  
 Un parametro booleano che indica se eseguire immediatamente ricalcolare il layout della finestra.  
  
 [in] `bActivate`  
 Un parametro booleano che indica se selezionare la scheda specificata da `iTab`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il parametro `bActivate` si applica solo se `bShow` è `TRUE`. Se `bActivate` è `TRUE` e se `ShowTab` ha esito positivo, `ShowTab` invierà il messaggio AFX_WM_CHANGE_ACTIVE_TAB al padre della finestra della scheda.  
  
##  <a name="a-namestartrenametaba--cmfcbasetabctrlstartrenametab"></a><a name="startrenametab"></a>CMFCBaseTabCtrl::StartRenameTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL StartRenameTab(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameswaptabsa--cmfcbasetabctrlswaptabs"></a><a name="swaptabs"></a>CMFCBaseTabCtrl::SwapTabs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SwapTabs(
    int nFisrtTabID,  
    int nSecondTabID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFisrtTabID`  
 [in] `nSecondTabID`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md)   
 [Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)

