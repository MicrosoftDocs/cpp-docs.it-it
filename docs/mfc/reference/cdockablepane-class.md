---
title: Classe CDockablePane | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDockablePane
- AFXDOCKABLEPANE/CDockablePane
- AFXDOCKABLEPANE/CDockablePane::CDockablePane
- AFXDOCKABLEPANE/CDockablePane::AttachToTabWnd
- AFXDOCKABLEPANE/CDockablePane::CalcFixedLayout
- AFXDOCKABLEPANE/CDockablePane::CanAcceptMiniFrame
- AFXDOCKABLEPANE/CDockablePane::CanAcceptPane
- AFXDOCKABLEPANE/CDockablePane::CanAutoHide
- AFXDOCKABLEPANE/CDockablePane::CanBeAttached
- AFXDOCKABLEPANE/CDockablePane::ConvertToTabbedDocument
- AFXDOCKABLEPANE/CDockablePane::CopyState
- AFXDOCKABLEPANE/CDockablePane::Create
- AFXDOCKABLEPANE/CDockablePane::CreateDefaultPaneDivider
- AFXDOCKABLEPANE/CDockablePane::CreateEx
- AFXDOCKABLEPANE/CDockablePane::CreateTabbedPane
- AFXDOCKABLEPANE/CDockablePane::DockPaneContainer
- AFXDOCKABLEPANE/CDockablePane::DockPaneStandard
- AFXDOCKABLEPANE/CDockablePane::DockToRecentPos
- AFXDOCKABLEPANE/CDockablePane::DockToWindow
- AFXDOCKABLEPANE/CDockablePane::EnableAutohideAll
- AFXDOCKABLEPANE/CDockablePane::EnableGripper
- AFXDOCKABLEPANE/CDockablePane::GetAHRestoredRect
- AFXDOCKABLEPANE/CDockablePane::GetAHSlideMode
- AFXDOCKABLEPANE/CDockablePane::GetCaptionHeight
- AFXDOCKABLEPANE/CDockablePane::GetDefaultPaneDivider
- AFXDOCKABLEPANE/CDockablePane::GetDockingStatus
- AFXDOCKABLEPANE/CDockablePane::GetDragSensitivity
- AFXDOCKABLEPANE/CDockablePane::GetLastPercentInPaneContainer
- AFXDOCKABLEPANE/CDockablePane::GetTabArea
- AFXDOCKABLEPANE/CDockablePane::GetTabbedPaneRTC
- AFXDOCKABLEPANE/CDockablePane::HasAutoHideMode
- AFXDOCKABLEPANE/CDockablePane::HitTest
- AFXDOCKABLEPANE/CDockablePane::IsAutohideAllEnabled
- AFXDOCKABLEPANE/CDockablePane::IsAutoHideMode
- AFXDOCKABLEPANE/CDockablePane::IsDocked
- AFXDOCKABLEPANE/CDockablePane::IsHideInAutoHideMode
- AFXDOCKABLEPANE/CDockablePane::IsInFloatingMultiPaneFrameWnd
- AFXDOCKABLEPANE/CDockablePane::IsResizable
- AFXDOCKABLEPANE/CDockablePane::IsTabLocationBottom
- AFXDOCKABLEPANE/CDockablePane::IsTracked
- AFXDOCKABLEPANE/CDockablePane::IsVisible
- AFXDOCKABLEPANE/CDockablePane::OnAfterChangeParent
- AFXDOCKABLEPANE/CDockablePane::OnAfterDockFromMiniFrame
- AFXDOCKABLEPANE/CDockablePane::OnBeforeChangeParent
- AFXDOCKABLEPANE/CDockablePane::OnBeforeFloat
- AFXDOCKABLEPANE/CDockablePane::RemoveFromDefaultPaneDividier
- AFXDOCKABLEPANE/CDockablePane::ReplacePane
- AFXDOCKABLEPANE/CDockablePane::RestoreDefaultPaneDivider
- AFXDOCKABLEPANE/CDockablePane::SetAutoHideMode
- AFXDOCKABLEPANE/CDockablePane::SetAutoHideParents
- AFXDOCKABLEPANE/CDockablePane::SetLastPercentInPaneContainer
- AFXDOCKABLEPANE/CDockablePane::SetRestoredDefaultPaneDivider
- AFXDOCKABLEPANE/CDockablePane::SetTabbedPaneRTC
- AFXDOCKABLEPANE/CDockablePane::ShowPane
- AFXDOCKABLEPANE/CDockablePane::Slide
- AFXDOCKABLEPANE/CDockablePane::ToggleAutoHide
- AFXDOCKABLEPANE/CDockablePane::UndockPane
- AFXDOCKABLEPANE/CDockablePane::CheckAutoHideCondition
- AFXDOCKABLEPANE/CDockablePane::CheckStopSlideCondition
- AFXDOCKABLEPANE/CDockablePane::DrawCaption
- AFXDOCKABLEPANE/CDockablePane::OnPressButtons
- AFXDOCKABLEPANE/CDockablePane::OnSlide
- AFXDOCKABLEPANE/CDockablePane::m_bDisableAnimation
- AFXDOCKABLEPANE/CDockablePane::m_bHideInAutoHideMode
- AFXDOCKABLEPANE/CDockablePane::m_nSlideSteps
dev_langs:
- C++
helpviewer_keywords:
- CDockablePane [MFC], CDockablePane
- CDockablePane [MFC], AttachToTabWnd
- CDockablePane [MFC], CalcFixedLayout
- CDockablePane [MFC], CanAcceptMiniFrame
- CDockablePane [MFC], CanAcceptPane
- CDockablePane [MFC], CanAutoHide
- CDockablePane [MFC], CanBeAttached
- CDockablePane [MFC], ConvertToTabbedDocument
- CDockablePane [MFC], CopyState
- CDockablePane [MFC], Create
- CDockablePane [MFC], CreateDefaultPaneDivider
- CDockablePane [MFC], CreateEx
- CDockablePane [MFC], CreateTabbedPane
- CDockablePane [MFC], DockPaneContainer
- CDockablePane [MFC], DockPaneStandard
- CDockablePane [MFC], DockToRecentPos
- CDockablePane [MFC], DockToWindow
- CDockablePane [MFC], EnableAutohideAll
- CDockablePane [MFC], EnableGripper
- CDockablePane [MFC], GetAHRestoredRect
- CDockablePane [MFC], GetAHSlideMode
- CDockablePane [MFC], GetCaptionHeight
- CDockablePane [MFC], GetDefaultPaneDivider
- CDockablePane [MFC], GetDockingStatus
- CDockablePane [MFC], GetDragSensitivity
- CDockablePane [MFC], GetLastPercentInPaneContainer
- CDockablePane [MFC], GetTabArea
- CDockablePane [MFC], GetTabbedPaneRTC
- CDockablePane [MFC], HasAutoHideMode
- CDockablePane [MFC], HitTest
- CDockablePane [MFC], IsAutohideAllEnabled
- CDockablePane [MFC], IsAutoHideMode
- CDockablePane [MFC], IsDocked
- CDockablePane [MFC], IsHideInAutoHideMode
- CDockablePane [MFC], IsInFloatingMultiPaneFrameWnd
- CDockablePane [MFC], IsResizable
- CDockablePane [MFC], IsTabLocationBottom
- CDockablePane [MFC], IsTracked
- CDockablePane [MFC], IsVisible
- CDockablePane [MFC], OnAfterChangeParent
- CDockablePane [MFC], OnAfterDockFromMiniFrame
- CDockablePane [MFC], OnBeforeChangeParent
- CDockablePane [MFC], OnBeforeFloat
- CDockablePane [MFC], RemoveFromDefaultPaneDividier
- CDockablePane [MFC], ReplacePane
- CDockablePane [MFC], RestoreDefaultPaneDivider
- CDockablePane [MFC], SetAutoHideMode
- CDockablePane [MFC], SetAutoHideParents
- CDockablePane [MFC], SetLastPercentInPaneContainer
- CDockablePane [MFC], SetRestoredDefaultPaneDivider
- CDockablePane [MFC], SetTabbedPaneRTC
- CDockablePane [MFC], ShowPane
- CDockablePane [MFC], Slide
- CDockablePane [MFC], ToggleAutoHide
- CDockablePane [MFC], UndockPane
- CDockablePane [MFC], CheckAutoHideCondition
- CDockablePane [MFC], CheckStopSlideCondition
- CDockablePane [MFC], DrawCaption
- CDockablePane [MFC], OnPressButtons
- CDockablePane [MFC], OnSlide
- CDockablePane [MFC], m_bDisableAnimation
- CDockablePane [MFC], m_bHideInAutoHideMode
- CDockablePane [MFC], m_nSlideSteps
ms.assetid: e2495f4c-765f-48f9-a2e2-e45e47608d91
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b30aa51f284d216332225664d07d7692bd042a1
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43223065"
---
# <a name="cdockablepane-class"></a>CDockablePane Class
Implementa un riquadro che può essere ancorato in un sito di ancoraggio o incluso in un riquadro a schede.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDockablePane : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::CDockablePane](#cdockablepane)|Costruisce e inizializza un oggetto `CDockablePane`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane:: Attachtotabwnd](#attachtotabwnd)|Collega un riquadro a un altro riquadro. Ciò consente di creare un riquadro a schede.|  
|[CDockablePane::CalcFixedLayout](#calcfixedlayout)|Restituisce le dimensioni del rettangolo di riquadro.|  
|[CDockablePane::CanAcceptMiniFrame](#canacceptminiframe)|Determina se il frame mini specificato può essere ancorato al riquadro.|  
|[CDockablePane::CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato a riquadro corrente.|  
|[CDockablePane::CanAutoHide](#canautohide)|Determina se il riquadro supporta la modalità Nascondi automaticamente. (Esegue l'override [CBasePane::CanAutoHide](../../mfc/reference/cbasepane-class.md#canautohide).)|  
|[CDockablePane::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorato a un altro riquadro.|  
|[CDockablePane::ConvertToTabbedDocument](#converttotabbeddocument)|Converte uno o più riquadri ancorabili in documenti MDI a schede.|  
|[CDockablePane::CopyState](#copystate)|Copia lo stato di un riquadro ancorato.|  
|[CDockablePane::Create](#create)|Crea il controllo di Windows e lo collega al `CDockablePane` oggetto.|  
|[CDockablePane::CreateDefaultPaneDivider](#createdefaultpanedivider)|Crea un divisore predefinito per il riquadro è ancorata in una finestra cornice.|  
|[CDockablePane:: CreateEx](#createex)|Crea il controllo di Windows e lo collega al `CDockablePane` oggetto.|  
|[CDockablePane::CreateTabbedPane](#createtabbedpane)|Crea un riquadro a schede nel riquadro corrente.|  
|[CDockablePane::DockPaneContainer](#dockpanecontainer)|Ancora un contenitore al riquadro.|  
|[CDockablePane::DockPaneStandard](#dockpanestandard)|Ancora un riquadro con contorno di ancoraggio (standard).|  
|`CDockablePane::DockToFrameWindow`|Utilizzato internamente. Per ancorare un riquadro, usare [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) oppure [CDockablePane::DockToWindow](#docktowindow).|  
|[CDockablePane::DockToRecentPos](#docktorecentpos)|Ancora un riquadro sulla propria posizione di ancoraggio recenti archiviata.|  
|[CDockablePane::DockToWindow](#docktowindow)|Ancora un riquadro ancorato a un altro riquadro ancorato.|  
|[CDockablePane::EnableAutohideAll](#enableautohideall)|Abilita o disabilita la modalità Nascondi automaticamente per il riquadro con altri riquadri nel contenitore.|  
|[CDockablePane::EnableGripper](#enablegripper)|Mostra o nasconde la didascalia (gripper).|  
|[CDockablePane::GetAHRestoredRect](#getahrestoredrect)|Specifica la posizione del riquadro quando visibile in modalità Nascondi automaticamente.|  
|[CDockablePane::GetAHSlideMode](#getahslidemode)|Recupera la modalità di presentazione Nascondi automaticamente per il riquadro.|  
|`CDockablePane::GetAutoHideButton`|Utilizzato internamente.|  
|`CDockablePane::GetAutoHideToolBar`|Utilizzato internamente.|  
|[CDockablePane::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia corrente.|  
|[CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider)|Restituisce il divisore di riquadro predefinito per il contenitore del riquadro.|  
|[CDockablePane::GetDockingStatus](#getdockingstatus)|Determina la possibilità di un riquadro ancorato in base al puntatore fornito percorso.|  
|[CDockablePane::GetDragSensitivity](#getdragsensitivity)|Restituisce la sensibilità del trascinamento di un riquadro ancorato.|  
|[CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)|Recupera la percentuale di spazio che occupa un riquadro all'interno del contenitore.|  
|[CDockablePane::GetTabArea](#gettabarea)|Recupera l'area della scheda per il riquadro.|  
|[CDockablePane::GetTabbedPaneRTC](#gettabbedpanertc)|Restituisce le informazioni sulla classe di runtime su una finestra a schede che viene creata quando un altro riquadro viene ancorato al riquadro corrente.|  
|[CDockablePane::HasAutoHideMode](#hasautohidemode)|Specifica se è possibile passare alla modalità Nascondi automaticamente un riquadro ancorato.|  
|[CDockablePane::HitTest](#hittest)|Specifica la posizione specifica in un riquadro in cui l'utente fa clic del mouse.|  
|`CDockablePane::IsAccessibilityCompatible`|Utilizzato internamente.|  
|[CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)|Indica se il riquadro ancorato e tutti gli altri riquadri nel contenitore possono essere inseriti in modalità Nascondi automaticamente.|  
|[CDockablePane::IsAutoHideMode](#isautohidemode)|Determina se un riquadro è in modalità Nascondi automaticamente.|  
|`CDockablePane::IsChangeState`|Utilizzato internamente.|  
|[CDockablePane::IsDocked](#isdocked)|Determina se il riquadro corrente è ancorato.|  
|[CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode)|Determina il comportamento di un riquadro in cui è in modalità Nascondi automaticamente se viene visualizzato (o nascosto) chiamando `ShowPane`.|  
|[CDockablePane::IsInFloatingMultiPaneFrameWnd](#isinfloatingmultipaneframewnd)|Specifica se il riquadro è in una finestra cornice a più riquadri.|  
|[CDockablePane::IsResizable](#isresizable)|Specifica se il riquadro è ridimensionabile.|  
|[CDockablePane::IsTabLocationBottom](#istablocationbottom)|Specifica se le schede si trovano nella parte superiore o inferiore del riquadro.|  
|[CDockablePane::IsTracked](#istracked)|Specifica se un riquadro viene trascinato dall'utente.|  
|[CDockablePane::IsVisible](#isvisible)|Determina se il riquadro corrente è visibile.|  
|[CDockablePane:: Loadstate](https://msdn.microsoft.com/96110136-4f46-4764-8a76-3b4abaf77917)|Utilizzato internamente.|  
|[CDockablePane::OnAfterChangeParent](#onafterchangeparent)|Chiamato dal framework quando l'elemento padre di un riquadro è stato modificato. (Esegue l'override [CPane::OnAfterChangeParent](../../mfc/reference/cpane-class.md#onafterchangeparent).)|  
|[CDockablePane::OnAfterDockFromMiniFrame](#onafterdockfromminiframe)|Chiamato dal framework quando una barra ancorabile a virgola mobile viene ancorato in una finestra cornice.|  
|[CDockablePane::OnBeforeChangeParent](#onbeforechangeparent)|Chiamato dal framework quando sta per modificare l'elemento padre del riquadro. (Esegue l'override [CPane::OnBeforeChangeParent](../../mfc/reference/cpane-class.md#onbeforechangeparent).)|  
|[CDockablePane::OnBeforeFloat](#onbeforefloat)|Chiamato dal framework quando è su un riquadro in float. (Esegue l'override [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).)|  
|[CDockablePane:: Removefromdefaultpanedividier](#removefromdefaultpanedividier)|Il framework chiama questo metodo quando un riquadro è in corso non ancorato.|  
|[CDockablePane::ReplacePane](#replacepane)|Sostituisce il riquadro con un riquadro specificato.|  
|[CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider)|Il framework chiama questo metodo come un riquadro viene deserializzato per ripristinare il divisore di riquadro predefinito.|  
|`CDockablePane::SaveState`|Utilizzato internamente.|  
|`CDockablePane::Serialize`|Serializza il riquadro. Esegue l'override`CBasePane::Serialize`.|  
|[CDockablePane::SetAutoHideMode](#setautohidemode)|Attiva/disattiva il riquadro ancorato tra visibile e modalità Nascondi automaticamente.|  
|[CDockablePane::SetAutoHideParents](#setautohideparents)|Imposta il pulsante Nascondi automaticamente e barra degli strumenti Nascondi automaticamente per il riquadro.|  
|`CDockablePane::SetDefaultPaneDivider`|Utilizzato internamente.|  
|[CDockablePane::SetLastPercentInPaneContainer](#setlastpercentinpanecontainer)|Imposta la percentuale di spazio che occupa un riquadro all'interno del contenitore.|  
|`CDockablePane::SetResizeMode`|Utilizzato internamente.|  
|[CDockablePane::SetRestoredDefaultPaneDivider](#setrestoreddefaultpanedivider)|Imposta il divisore di riquadro predefinito ripristinato.|  
|[CDockablePane:: Settabbedpanertc](#settabbedpanertc)|Imposta le informazioni sulla classe di runtime per una finestra a schede che viene creata quando due riquadri di ancoraggio tra loro.|  
|[CDockablePane::ShowPane](#showpane)|Mostra o nasconde un riquadro.|  
|[CDockablePane::Slide](#slide)|Mostra o nasconde un riquadro con un'animazione scorrevole che viene visualizzata solo quando il riquadro si trova nella modalità Nascondi automaticamente.|  
|[CDockablePane::ToggleAutoHide](#toggleautohide)|Attiva o disattiva la modalità Nascondi automaticamente. (Esegue l'override [CPane::ToggleAutoHide](../../mfc/reference/cpane-class.md#toggleautohide) .)|  
|[CDockablePane::UndockPane](#undockpane)|Verrà disancorato un riquadro dalla finestra cornice principale o un contenitore di finestra con mini-cornice.|  
|`CDockablePane::UnSetAutoHideMode`|Utilizzato internamente. Per impostare la modalità Nascondi automaticamente, usare [CDockablePane::SetAutoHideMode](#setautohidemode)|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::CheckAutoHideCondition](#checkautohidecondition)|Determina se il riquadro ancorato è nascosto (in modalità Nascondi automaticamente).|  
|[CDockablePane::CheckStopSlideCondition](#checkstopslidecondition)|Determina se un riquadro ancorato Nascondi automaticamente deve interrompere la variabile.|  
|[CDockablePane::DrawCaption](#drawcaption)|Disegna la didascalia del riquadro ancorato (gripper).|  
|[CDockablePane::OnPressButtons](#onpressbuttons)|Chiamato quando l'utente preme un pulsante della didascalia diverso dai pulsanti AFX_HTCLOSE e AFX_HTMAXBUTTON.|  
|[CDockablePane::OnSlide](#onslide)|Chiamato dal framework per il rendering dell'effetto di diapositiva Nascondi automaticamente quando il riquadro viene visualizzato o nascosto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::m_bDisableAnimation](#m_bdisableanimation)|Specifica se l'animazione Nascondi automaticamente del riquadro ancorato è disabilitato.|  
|[CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode)|Determina il comportamento del riquadro quando il riquadro si trova nella modalità Nascondi automaticamente.|  
|[CDockablePane::m_nSlideSteps](#m_nslidesteps)|Specifica la velocità dell'animazione del riquadro quando viene visualizzato o nascosto quando è in modalità Nascondi automaticamente.|  
  
## <a name="remarks"></a>Note  
 `CDockablePane` implementa le funzionalità seguenti:  
  
-   Un riquadro ancorato di tipo per una finestra cornice principale.  
  
-   Cambio di un riquadro in modalità Nascondi automaticamente.  
  
-   Collegamento di un riquadro a una finestra a schede.  
  
-   Mobile un riquadro in una finestra con mini-cornice.  
  
-   Un riquadro ancorato di tipo a un altro riquadro che è mobile in una finestra con mini-cornice.  
  
-   Ridimensionamento di un riquadro.  
  
-   Il caricamento e salvataggio dello stato per un riquadro ancorato.  
  
    > [!NOTE]
    >  Le informazioni sullo stato viene salvate nel Registro di sistema di Windows.  
  
-   Creazione di un riquadro con o senza una didascalia. La didascalia può avere un'etichetta di testo e può essere riempito con un colore sfumato.  
  
-   Trascinando un riquadro durante la visualizzazione del contenuto del riquadro  
  
-   Se si trascina un riquadro durante la visualizzazione di un rettangolo di trascinamento.  
  
 Per utilizzare un riquadro ancorato all'interno dell'applicazione, derivare la classe di riquadro dal `CDockablePane` classe. L'oggetto derivato uno incorporare nell'oggetto finestra cornice principale o in un oggetto window che controlla l'istanza del riquadro. Chiamare quindi il [CDockablePane::Create](#create) metodo o il [CDockablePane:: CreateEx](#createex) metodo quando si elabora il messaggio di notifica WM_CREATE nella finestra cornice principale. Infine, impostare l'oggetto riquadro chiamando [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking), [cbasepane:: Dockpane](../../mfc/reference/cbasepane-class.md#dockpane), o [CDockablePane:: Attachtotabwnd](#attachtotabwnd).  
  
## <a name="customization-tips"></a>Suggerimenti per la personalizzazione  
 I suggerimenti seguenti si applicano a `CDockablePane` oggetti:  
  
-   Se si chiama [CDockablePane:: Attachtotabwnd](#attachtotabwnd) per i due riquadri senza schede e ancorabili, verrà restituito un puntatore a una finestra a schede nel *ppTabbedControlBar* parametro. È possibile continuare a aggiungere schede nella finestra a schede usando questo parametro.  
  
-   Il tipo di riquadro a schede che viene creato da [CDockablePane:: Attachtotabwnd](#attachtotabwnd) varia a seconda le `CDockablePane` dell'oggetto nel *pTabControlBarAttachTo* parametro. È possibile chiamare [CDockablePane:: Settabbedpanertc](#settabbedpanertc) per impostare il tipo di riquadro a schede che il `CDockablePane` creerà. Il tipo predefinito è determinato dal `dwTabbedStyle` dei [CDockablePane::Create](#create) quando si crea innanzitutto il `CDockablePane`. Se *dwTabbedStyle* è il tipo predefinito è AFX_CBRS_OUTLOOK_TABS [classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md); se *dwTabbedStyle* è AFX_CBRS_REGULAR_TABS il tipo predefinito è [ Classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
-   Se si desidera ancorare un riquadro ancorato a un'altra, chiamare il [CDockablePane::DockToWindow](#docktowindow) (metodo). Il riquadro originale deve essere ancorato in una posizione prima di chiamare questo metodo.  
  
-   La variabile membro [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode) controlli come riquadri ancorabili si comportano in automatico nascondere modalità quando si chiama [CDockablePane::ShowPane](#showpane). Se questa variabile membro è impostata su TRUE, verranno nascoste riquadri ancorabili e i pulsanti Nascondi automaticamente. In caso contrario, essi verranno diapositiva in e out.  
  
-   È possibile disabilitare animazione Nascondi automaticamente impostando il [CDockablePane::m_bDisableAnimation](#m_bdisableanimation) variabile membro su TRUE.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come configurare un `CDockablePane` oggetti utilizzando diversi metodi nel `CDockablePane` classe. L'esempio illustra come abilitare Nascondi automaticamente tutte le funzionalità per il riquadro ancorato, abilitare la didascalia o la barra gripper, abilitare la modalità Nascondi automaticamente, visualizzare il riquadro e aggiungere un'animazione a un riquadro in modalità Nascondi automaticamente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#27](../../mfc/codesnippet/cpp/cdockablepane-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#28](../../mfc/codesnippet/cpp/cdockablepane-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockablePane.h  
  
##  <a name="attachtotabwnd"></a>  CDockablePane:: Attachtotabwnd  
 Collega il riquadro corrente a un riquadro di destinazione, la creazione di un riquadro a schede.  
  
```  
virtual CDockablePane* AttachToTabWnd(
    CDockablePane* pTabControlBarAttachTo,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bSetActive= TRUE,  
    CDockablePane** ppTabbedControlBar = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pTabControlBarAttachTo*  
 Specifica il riquadro di destinazione che connette il riquadro corrente. Il riquadro di destinazione deve essere un riquadro ancorato.  
  
 [in] *dockMethod*  
 Specifica il metodo di ancoraggio.  
  
 [in] *bSetActive*  
 TRUE per attivare il riquadro a schede dopo l'operazione di collegamento. in caso contrario, FALSE.  
  
 [out] *ppTabbedControlBar*  
 Contiene il riquadro a schede risultante dall'operazione di collegamento.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro corrente, se non è un riquadro a schede. in caso contrario un puntatore al riquadro a schede risultante dall'operazione di collegamento. Il valore restituito è NULL se non è possibile collegare il riquadro corrente o se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato allegato a un altro riquadro utilizzo di questo metodo, si verifica quanto segue:  
  
1.  I controlli di framework se il riquadro di destinazione *pTabControlBarAttachTo* è un normale ancoraggio riquadro o se è derivato da [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md).  
  
2.  Se il riquadro di destinazione è un riquadro a schede, il framework aggiunge il riquadro corrente ad esso sotto forma di scheda.  
  
3.  Se il riquadro di destinazione è un riquadro ancorato di tipo regolare, il framework crea un riquadro a schede.  
  
    -   Il framework chiama `pTabControlBarAttachTo->CreateTabbedPane`. Lo stile del nuovo riquadro a schede varia a seconda di `m_pTabbedControlBarRTC` membro. Per impostazione predefinita, questo membro è impostato per la classe di runtime del [CTabbedPane](../../mfc/reference/ctabbedpane-class.md). Se si passa lo stile AFX_CBRS_OUTLOOK_TABS come le *dwTabbedStyle* parametro per il [CDockablePane::Create](#create) metodo, l'oggetto di classe di runtime è impostato per la classe di runtime di [ CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md). È possibile modificare questo membro in qualsiasi momento per modificare lo stile del nuovo riquadro.  
  
    -   Quando questo metodo crea un riquadro a schede, il framework sostituisce il puntatore alla *pTabControlBarAttachTo* (se il riquadro viene ancorato o mobile in una finestra con mini-multi-cornice) con un puntatore al nuovo riquadro a schede.  
  
    -   Il framework aggiunge il *pTabControlBarAttachTo* riquadro al riquadro a schede come la prima tabulazione. Il framework aggiunge quindi il riquadro corrente come una seconda scheda.  
  
4.  Se il riquadro corrente è derivato da `CBaseTabbedPane`, tutte le schede vengono spostate *pTabControlBarAttachTo* e il riquadro corrente viene eliminato definitivamente. Pertanto, prestare attenzione quando si chiama questo metodo, perché quando il metodo restituisce un puntatore al riquadro corrente potrebbe essere non valido.  
  
 Se si collega un riquadro a altro durante la creazione di un layout di ancoraggio, impostare `dockMethod` a DM_SHOW.  
  
 È consigliabile ancorare il riquadro prima prima di collegare un altro riquadro ad esso.  
  
##  <a name="calcfixedlayout"></a>  CDockablePane::CalcFixedLayout  
 Restituisce le dimensioni del rettangolo di riquadro.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bStretch*  
 Non usato.  
  
 [in] *bHorz*  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le dimensioni del rettangolo di riquadro.  
  
##  <a name="canacceptminiframe"></a>  CDockablePane::CanAcceptMiniFrame  
 Determina se mini-cornice specificata può essere ancorata al riquadro.  
  
```  
virtual BOOL CanAcceptMiniFrame(CPaneFrameWnd* pMiniFrame) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pMiniFrame*  
 Puntatore a un oggetto `CPaneFrameWnd`.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se *pMiniFrame* può essere ancorata al riquadro; in caso contrario, FALSE.  
  
##  <a name="canacceptpane"></a>  CDockablePane::CanAcceptPane  
 Determina se un altro riquadro può essere ancorato a riquadro corrente.  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pBar*  
 Specifica il riquadro per ancorare il riquadro corrente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro specificato può essere ancorato a questo riquadro. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo prima di un riquadro viene ancorato al riquadro corrente.  
  
 Eseguire l'override di questa funzione in una classe derivata per abilitare o disabilitare l'ancoraggio a un riquadro specifico.  
  
 Per impostazione predefinita, questo metodo restituisce TRUE se entrambi *pBar* o il relativo elemento padre è di tipo `CDockablePane`.  
  
##  <a name="canautohide"></a>  CDockablePane::CanAutoHide  
 Determina se il riquadro è Nascondi automaticamente.  
  
```  
virtual BOOL CanAutoHide() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è Nascondi automaticamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 `CDockablePane::CanAutoHide` Restituisce FALSE in una delle situazioni seguenti:  
  
-   Il riquadro non ha elementi padre.  
  
-   Il gestore di ancoraggio non consente i riquadri da Nascondi automaticamente.  
  
-   Il riquadro non è ancorato.  
  
##  <a name="canbeattached"></a>  CDockablePane::CanBeAttached  
 Determina se il riquadro corrente può essere ancorato a un altro riquadro.  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato può essere ancorato a un altro riquadro o alla finestra cornice principale. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre TRUE. L'override del metodo in una classe derivata per abilitare o disabilitare l'aggancio senza chiamare [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).  
  
##  <a name="cdockablepane"></a>  CDockablePane::CDockablePane  
 Costruisce e Inizializza un [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto.  
  
```  
CDockablePane();
```  
  
### <a name="remarks"></a>Note  
 Dopo aver creato un oggetto riquadro ancorabile, chiamare [CDockablePane::Create](#create) oppure [CDockablePane:: CreateEx](#createex) per crearlo.  
  
##  <a name="converttotabbeddocument"></a>  CDockablePane::ConvertToTabbedDocument  
 Converte uno o più riquadri ancorabili in documenti MDI a schede.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bActiveTabOnly*  
 Quando si converte un `CTabbedPane`, specificare TRUE per convertire solo la scheda attiva. Specificare FALSE per convertire tutte le schede nel riquadro.  
  
##  <a name="checkautohidecondition"></a>  CDockablePane::CheckAutoHideCondition  
 Determina se il riquadro ancorato è nascosto (noto anche come modalità Nascondi automaticamente).  
  
```  
virtual BOOL CheckAutoHideCondition();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene soddisfatta la condizione Nascondi. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il framework Usa un timer per verificare periodicamente se nascondere un riquadro ancorabile Nascondi automaticamente. Il metodo restituisce TRUE se il riquadro non è attivo, il riquadro non viene ridimensionato e non il puntatore del mouse sul riquadro.  
  
 Se vengono soddisfatte tutte le condizioni precedenti, il framework chiama [CDockablePane::Slide](#slide) per nascondere il riquadro.  
  
##  <a name="checkstopslidecondition"></a>  CDockablePane::CheckStopSlideCondition  
 Determina se un riquadro ancorato di tipo Nascondi automaticamente deve interrompere la variabile.  
  
```  
virtual BOOL CheckStopSlideCondition(BOOL bDirection);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bDirection*  
 TRUE se il riquadro è visualizzato; FALSO se il riquadro è nascosto.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene soddisfatta la condizione di interruzione. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato è impostato sulla modalità Nascondi automaticamente, il framework utilizza gli effetti di scorrimento per mostrare o nascondere il riquadro. Il framework chiama questa funzione quando il riquadro è scorrevole. `CheckStopSlideCondition` Restituisce TRUE quando il riquadro è completamente visibile o quando è completamente nascosta.  
  
 L'override del metodo in una classe derivata per implementare gli effetti personalizzati che si nascondono automaticamente.  
  
##  <a name="copystate"></a>  CDockablePane::CopyState  
 Copia lo stato di un riquadro ancorato.  
  
```  
virtual void CopyState(CDockablePane* pOrgBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pOrgBar*  
 Un puntatore a un riquadro ancorato.  
  
### <a name="remarks"></a>Note  
 `CDockablePane::CopyState` lo stato di copia *pOrgBar* nel riquadro corrente chiamando i metodi seguenti:  
  
- [CPane::CopyState](../../mfc/reference/cpane-class.md#copystate)  
  
- [CDockablePane::GetAHRestoredRect](#getahrestoredrect)  
  
- [CDockablePane::GetAHSlideMode](#getahslidemode)  
  
- [CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)  
  
- [CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)  
  
##  <a name="create"></a>  CDockablePane::Create  
 Crea il controllo di Windows e lo collega al [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszCaption,  
    CWnd* pParentWnd,  
    const RECT& rect,  
    BOOL bHasGripper,  
    UINT nID,  
    DWORD dwStyle,  
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,  
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE,  
    CCreateContext* pContext = NULL);

 
virtual BOOL Create(
    LPCTSTR lpszWindowName,  
    CWnd* pParentWnd,  
    CSize sizeDefault,  
    BOOL bHasGripper,  
    UINT nID,  
    DWORD dwStyle = WS_CHILD|WS_VISIBLE|CBRS_TOP|CBRS_HIDE_INPLACE,  
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,  
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszCaption*  
 Specifica il nome della finestra.  
  
 [in] [out] *pParentWnd*  
 Specifica la finestra padre.  
  
 [in] *rect*  
 Specifica le dimensioni e posizione della finestra, nelle coordinate del client *pParentWnd*.  
  
 [in] *bHasGripper*  
 TRUE per creare il riquadro con una didascalia; in caso contrario, FALSE.  
  
 [in] *nID*  
 Specifica l'ID della finestra figlio. Questo valore deve essere univoco se si desidera salvare lo stato di ancoraggio per questo riquadro ancorato.  
  
 [in] *dwStyle*  
 Specifica gli attributi di stile di finestra.  
  
 [in] *dwTabbedStyle*  
 Specifica lo stile di una finestra a schede che viene creato quando l'utente trascina un riquadro sulla barra del titolo di questo riquadro a schede.  
  
 [in] *dwControlBarStyle*  
 Specifica gli attributi di stile aggiuntive.  
  
 [in] [out] *pContext*  
 Specifica il contesto di creazione della finestra.  
  
 [in] *lpszWindowName*  
 Specifica il nome della finestra.  
  
 [in] *sizeDefault*  
 Specifica le dimensioni della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato creato il riquadro ancorato; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Crea un riquadro di Windows e lo collega al `CDockablePane` oggetto.  
  
 Se il *dwStyle* styl okna presenta il flag CBRS_FLOAT_MULTI, la finestra con mini-cornice può spostarsi con altri riquadri nella finestra con mini-cornice. Per impostazione predefinita, i riquadri ancorabili può solo float singolarmente.  
  
 Se il *dwTabbedStyle* parametro presenta il flag AFX_CBRS_OUTLOOK_TABS specificato, il riquadro Crea riquadri a schede stile Outlook quando un altro riquadro è associato a questo riquadro usando la [CDockablePane:: Attachtotabwnd](#attachtotabwnd) metodo. Per impostazione predefinita, i riquadri ancorabili creano riquadri a schede normali typu [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
##  <a name="createdefaultpanedivider"></a>  CDockablePane::CreateDefaultPaneDivider  
 Crea un divisore predefinito per il riquadro è ancorata in una finestra cornice.  
  
```  
static CPaneDivider* __stdcall CreateDefaultPaneDivider(
    DWORD dwAlignment,  
    CWnd* pParent,  
    CRuntimeClass* pSliderRTC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *dwAlignment*  
 Specifica il lato del frame principale a cui il riquadro viene ancorato. Se *dwAlignment* contiene il flag CBRS_ALIGN_LEFT o CBRS_ALIGN_RIGHT, questo metodo crea un parametro vertical (`CPaneDivider::SS_VERT`) divisore; in caso contrario, questo metodo crea un oggetto orizzontale (`CPaneDivider::SS_HORZ`) divisore.  
  
 [in] *pParent*  
 Puntatore al frame padre.  
  
 [in] *pSliderRTC*  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce un puntatore per il divisore appena creata o NULL se non è possibile creare divisore.  
  
### <a name="remarks"></a>Note  
 *dwAlignment* può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|CBRS_ALIGN_TOP|Il riquadro è ancorato alla parte superiore dell'area client di una finestra cornice.|  
|CBRS_ALIGN_BOTTOM|Il riquadro è ancorato alla parte inferiore dell'area client di una finestra cornice.|  
|CBRS_ALIGN_LEFT|Il riquadro è ancorato al lato sinistro dell'area client di una finestra cornice.|  
|CBRS_ALIGN_RIGHT|Il riquadro è ancorato al lato destro dell'area client di una finestra cornice.|  
  
##  <a name="createex"></a>  CDockablePane:: CreateEx  
 Crea il controllo di Windows e lo collega al [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    LPCTSTR lpszCaption,  
    CWnd* pParentWnd,  
    const RECT& rect,  
    BOOL bHasGripper,  
    UINT nID,  
    DWORD dwStyle,  
    DWORD dwTabbedStyle = AFX_CBRS_REGULAR_TABS,  
    DWORD dwControlBarStyle = AFX_DEFAULT_DOCKING_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *dwStyleEx*  
 Specifica gli attributi di stile esteso per la nuova finestra.  
  
 [in] *lpszCaption*  
 Specifica il nome della finestra.  
  
 [in] [out] *pParentWnd*  
 Specifica la finestra padre.  
  
 [in] *rect*  
 Specifica le dimensioni e posizione della finestra, nelle coordinate del client *pParentWnd*.  
  
 [in] *bHasGripper*  
 TRUE per creare il riquadro con una didascalia; in caso contrario, FALSE.  
  
 [in] *nID*  
 Specifica l'ID della finestra figlio. Questo valore deve essere univoco se si desidera salvare lo stato di ancoraggio per questo riquadro ancorato.  
  
 [in] *dwStyle*  
 Specifica gli attributi di stile di finestra.  
  
 [in] *dwTabbedStyle*  
 Specifica lo stile di una finestra a schede che viene creato quando l'utente trascina un riquadro sulla barra del titolo di questo riquadro a schede.  
  
 [in] *dwControlBarStyle*  
 Specifica gli attributi di stile aggiuntive.  
  
 [in] [out] *pContext*  
 Specifica il contesto di creazione della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato creato il riquadro ancorato; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Crea un riquadro di Windows e lo collega al `CDockablePane` oggetto.  
  
 Se il *dwStyle* styl okna presenta il flag CBRS_FLOAT_MULTI, la finestra con mini-cornice può spostarsi con altri riquadri nella finestra con mini-cornice. Per impostazione predefinita, i riquadri ancorabili può solo float singolarmente.  
  
 Se il *dwTabbedStyle* parametro presenta il flag AFX_CBRS_OUTLOOK_TABS specificato, il riquadro Crea riquadri a schede stile Outlook quando un altro riquadro è associato a questo riquadro usando la [CDockablePane:: Attachtotabwnd](#attachtotabwnd) metodo. Per impostazione predefinita, i riquadri ancorabili creano riquadri a schede normali typu [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
##  <a name="createtabbedpane"></a>  CDockablePane::CreateTabbedPane  
 Crea un riquadro a schede nel riquadro corrente.  
  
```  
virtual CTabbedPane* CreateTabbedPane();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo riquadro a schede, o NULL se l'operazione di creazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo durante la creazione di un riquadro a schede per sostituire questo riquadro. Per altre informazioni, vedere [CDockablePane:: Attachtotabwnd](#attachtotabwnd).  
  
 Override del metodo in una classe derivata per personalizzare i riquadri a schede come vengono creati e inizializzati.  
  
 Il riquadro a schede viene creato in base alle informazioni sulla classe di runtime archiviati nel `m_pTabbedControlBarRTC` member, che viene inizializzato tramite il [CDockablePane:: CreateEx](#createex) (metodo).  
  
##  <a name="dockpanecontainer"></a>  CDockablePane::DockPaneContainer  
 Ancora un contenitore al riquadro.  
  
```  
virtual BOOL DockPaneContainer(
    CPaneContainerManager& barContainerManager,  
    DWORD dwAlignment,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *barContainerManager*  
 Un riferimento al gestore del contenitore del contenitore in cui è ancorato.  
  
 [in] *dwAlignment*  
 DWORD che specifica il lato del riquadro in cui è ancorato al contenitore.  
  
 [in] *dockMethod*  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il contenitore è stato ancorato correttamente per il riquadro attività. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 *dwAlignment* può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|CBRS_ALIGN_TOP|Il contenitore è ancorato alla parte superiore del riquadro.|  
|CBRS_ALIGN_BOTTOM|Il contenitore è ancorato alla parte inferiore del riquadro.|  
|CBRS_ALIGN_LEFT|Il contenitore è ancorato a sinistra del riquadro.|  
|CBRS_ALIGN_RIGHT|Il contenitore è ancorato a destra del riquadro.|  
  
##  <a name="dockpanestandard"></a>  CDockablePane::DockPaneStandard  
 Ancora un riquadro con contorno di ancoraggio (standard).  
  
```  
virtual CPane* DockPaneStandard(BOOL& bWasDocked);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bWasDocked*  
 Quando il metodo termina, questo valore contiene TRUE se il riquadro è stato correttamente ancorato; in caso contrario, contiene FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 Se il riquadro è stato ancorato di una finestra a schede o se una finestra a schede è stata creata come risultato di ancoraggio, questo metodo restituisce un puntatore alla finestra a schede. Se il riquadro è stato in caso contrario, è stata ancorata, questo metodo restituisce il **ciò** puntatore. Se l'ancoraggio non è riuscita, questo metodo restituisce NULL.  
  
##  <a name="docktorecentpos"></a>  CDockablePane::DockToRecentPos  
 Ancora un riquadro sulla propria posizione di ancoraggio stored.  
  
```  
BOOL CDockablePane::DockToRecentPos();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro viene ancorato correttamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Riquadri ancorabili archiviano informazioni di ancoraggio recenti in una [CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md) oggetto.  
  
##  <a name="docktowindow"></a>  CDockablePane::DockToWindow  
 Ancora un riquadro ancorato a un altro riquadro ancorato.  
  
```  
virtual BOOL DockToWindow(
    CDockablePane* pTargetWindow,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pTargetWindow*  
 Specifica il riquadro ancorato per ancorare il riquadro.  
  
 [in] *dwAlignment*  
 Specifica l'allineamento di ancoraggio del riquadro. Potrebbe essere uno dei CBRS_ALIGN_LEFT, CBRS_ALIGN_TOP, CBRS_ALIGN_RIGHT, CBRS_ALIGN_BOTTOM o CBRS_ALIGN_ANY. (Definito in AFXRES. h).  
  
 [in] *lpRect*  
 Specifica il rettangolo di ancoraggio del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è stato ancorato correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ancorare un riquadro a un altro riquadro con l'allineamento specificato da *dwAlignment*.  
  
##  <a name="drawcaption"></a>  CDockablePane::DrawCaption  
 Disegna la didascalia (detta anche la barra gripper) di un riquadro ancorato.  
  
```  
virtual void DrawCaption(
    CDC* pDC,  
    CRect rectCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Rappresenta il contesto di dispositivo usato per il disegno.  
  
 [in] *rectCaption*  
 Specifica il rettangolo di delimitazione della didascalia del riquadro.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per disegnare la didascalia di un riquadro ancorata.  
  
 L'override del metodo in una classe derivata per personalizzare l'aspetto della didascalia.  
  
##  <a name="enableautohideall"></a>  CDockablePane::EnableAutohideAll  
 Abilita o disabilita la modalità Nascondi automaticamente per questo riquadro e per gli altri riquadri nel contenitore.  
  
```  
void EnableAutohideAll(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per abilitare la funzione Nascondi automaticamente tutte le funzionalità per il riquadro ancorato. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Quando un utente tiene premuto il **Ctrl** chiave e fa clic sul pulsante Aggiungi per passare un riquadro alla modalità Nascondi automaticamente, tutti gli altri riquadri nello stesso contenitore si invertono anche alla modalità Nascondi automaticamente.  
  
 Chiamare questo metodo con *bAttivare il* impostato su FALSE per disabilitare questa funzionalità per un riquadro specifico.  
  
##  <a name="enablegripper"></a>  CDockablePane::EnableGripper  
 Mostra o nasconde la didascalia (detta anche la barra gripper).  
  
```  
virtual void EnableGripper(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per abilitare la didascalia; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Quando il framework crea riquadri ancorabili, non hanno lo stile della finestra WS_STYLE, anche se specificato. Ciò significa che la didascalia del riquadro è un'area non client controllata dal framework, ma quest'area è diversa dalla didascalia della finestra standard.  
  
 È possibile visualizzare o nascondere la didascalia in qualsiasi momento. Il framework nasconde la didascalia quando viene aggiunto un riquadro sotto forma di scheda a una finestra a schede o quando un riquadro viene resa in una finestra con mini-cornice.  
  
##  <a name="getahrestoredrect"></a>  CDockablePane::GetAHRestoredRect  
 Specifica la posizione del riquadro in modalità Nascondi automaticamente.  
  
```  
CRect GetAHRestoredRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che contiene la posizione del riquadro quando è in modalità Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getahslidemode"></a>  CDockablePane::GetAHSlideMode  
 Recupera la modalità di presentazione Nascondi automaticamente per il riquadro.  
  
```  
virtual UINT GetAHSlideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 UINT che specifica la modalità di presentazione Nascondi automaticamente per il riquadro. Il valore restituito può essere AFX_AHSM_MOVE o AFX_AHSM_STRETCH, ma l'implementazione Usa solo AFX_AHSM_MOVE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcaptionheight"></a>  CDockablePane::GetCaptionHeight  
 Restituisce l'altezza, in pixel, della didascalia corrente.  
  
```  
virtual int GetCaptionHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza della didascalia, in pixel.  
  
### <a name="remarks"></a>Note  
 Altezza della didascalia è 0 se la didascalia è stata nascosta per il [CDockablePane::EnableGripper](#enablegripper) metodo, o se il riquadro non dispone di una didascalia.  
  
##  <a name="getdefaultpanedivider"></a>  CDockablePane::GetDefaultPaneDivider  
 Restituisce il divisore di riquadro predefinito per il contenitore del riquadro.  
  
```  
CPaneDivider* GetDefaultPaneDivider() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore valido [CPaneDivider](../../mfc/reference/cpanedivider-class.md) oggetto se il riquadro ancorato è ancorato alla finestra cornice principale, o `NULL` se non è ancorato il riquadro ancorato o se è mobile.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni sui divisori di riquadro, vedere [classe CPaneDivider](../../mfc/reference/cpanedivider-class.md).  
  
##  <a name="getdockingstatus"></a>  CDockablePane::GetDockingStatus  
 Determina la possibilità di un riquadro ancorato in base al puntatore fornito percorso.  
  
```  
virtual AFX_CS_STATUS GetDockingStatus(
    CPoint pt,  
    int nSensitivity);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pt*  
 La posizione del puntatore in coordinate dello schermo.  
  
 [in] *nSensitivity*  
 Distanza, espressa in pixel, la distanza di un rettangolo per attivare l'ancoraggio deve essere il puntatore del mouse.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di stato seguenti:  
  
|Valore AFX_CS_STATUS|Significato|  
|---------------------------|-------------|  
|CS_NOTHING|Il puntatore non è presente in un sito di ancoraggio. Il framework non ancorare il riquadro.|  
|CS_DOCK_IMMEDIATELY|Il puntatore è posizionato su sito di ancoraggio in modalità immediata (il riquadro Usa la modalità di ancoraggio DT_IMMEDIATE). Il framework ancora il riquadro immediatamente.|  
|CS_DELAY_DOCK|Il puntatore è posizionato un sito di ancoraggio è un bordo del frame principale o un altro riquadro ancorato. Il framework ancora il riquadro dopo un ritardo. Vedere la sezione Osservazioni per altre informazioni su questo ritardo.|  
|CS_DELAY_DOCK_TO_TAB|Il puntatore è posizionato su un sito di ancoraggio che fa sì che il riquadro per essere ancorata in una finestra a schede. Ciò si verifica quando il puntatore è posizionato sulla didascalia del riquadro ancorato di un'altra o sull'area della scheda di un riquadro a schede.|  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per gestire l'ancoraggio di un riquadro mobile.  
  
 Barre degli strumenti mobili o i riquadri che utilizzano la modalità di ancoraggio DT_IMMEDIATE ancorabili, il framework ritarda il comando di ancoraggio per consentire all'utente la finestra viene spostata all'esterno dell'area client del frame padre prima che venga eseguita di ancoraggio. La lunghezza del ritardo è misurata in millisecondi e viene controllata per il [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) membro dati... Il valore predefinito [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) è 200. Questo comportamento emula il comportamento di ancoraggio di Microsoft Word 2007.  
  
 Gli stati di ancoraggio ritardati (CS_DELAY_DOCK e CS_DELAY_DOCK_TO_TAB), il framework non esegue ancoraggio fino a quando l'utente rilascia il pulsante del mouse. Se un riquadro viene utilizzata la modalità di ancoraggio DT_STANDARD, il framework visualizza un rettangolo in corrispondenza della posizione di ancoraggio prevista. Se un riquadro viene utilizzata la modalità di ancoraggio DT_SMART, il framework Visualizza marcatori di ancoraggio e rettangoli semi-trasparenti in corrispondenza della posizione di ancoraggio prevista. Per specificare la modalità di ancoraggio per il riquadro, chiamare il [CBasePane::SetDockingMode](../../mfc/reference/cbasepane-class.md#setdockingmode) (metodo). Per altre informazioni sull'ancoraggio intelligente, vedere [CDockingManager::GetSmartDockingParams](../../mfc/reference/cdockingmanager-class.md#getsmartdockingparams).  
  
##  <a name="getdragsensitivity"></a>  CDockablePane::GetDragSensitivity  
 Restituisce la sensibilità del trascinamento di un riquadro ancorato.  
  
```  
static const CSize& GetDragSensitivity();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la larghezza e altezza, in pixel, di un rettangolo centrato su un punto di trascinamento. L'operazione di trascinamento non inizia fino a quando il puntatore del mouse viene spostato all'esterno di questo rettangolo.  
  
##  <a name="getlastpercentinpanecontainer"></a>  CDockablePane::GetLastPercentInPaneContainer  
 Recupera la percentuale di spazio che occupa un riquadro relativo contenitore ( [classe CPaneContainer](../../mfc/reference/cpanecontainer-class.md)).  
  
```  
int GetLastPercentInPaneContainer() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un' *int* che specifica la percentuale di spazio che occupa il riquadro relativo contenitore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato quando il contenitore consente di regolare il relativo layout.  
  
##  <a name="gettabarea"></a>  CDockablePane::GetTabArea  
 Recupera l'area della scheda per il riquadro.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rectTabAreaTop*  
 `GetTabArea` Questa variabile viene compilata con l'area della scheda se le schede si trovano nella parte superiore del riquadro. Se le schede si trovano nella parte inferiore del riquadro, questa variabile viene riempita con un rettangolo vuoto.  
  
 [in] *rectTabAreaBottom*  
 `GetTabArea` Questa variabile viene compilata con l'area della scheda se le schede si trovano nella parte inferiore del riquadro. Se le schede si trovano nella parte superiore del riquadro, questa variabile viene riempita con un rettangolo vuoto.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato solo nelle classi che derivano da `CDockablePane` e dispongano di schede. Per altre informazioni, vedere [CTabbedPane::GetTabArea](../../mfc/reference/ctabbedpane-class.md#gettabarea) e [CMFCOutlookBar::GetTabArea](../../mfc/reference/cmfcoutlookbar-class.md#gettabarea).  
  
##  <a name="gettabbedpanertc"></a>  CDockablePane::GetTabbedPaneRTC  
 Restituisce le informazioni sulla classe di runtime su una finestra a schede che viene creata quando un altro riquadro viene ancorato al riquadro corrente.  
  
```  
CRuntimeClass* GetTabbedPaneRTC() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le informazioni sulla classe di runtime per il riquadro ancorato.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare le informazioni sulla classe di runtime per i riquadri a schede che vengono creati in modo dinamico. Ciò può verificarsi quando si trascina un riquadro per la didascalia di un altro riquadro, o se si chiama il [CDockablePane:: Attachtotabwnd](#attachtotabwnd) metodo per creare a livello di codice un riquadro a schede da due riquadri ancorabili.  
  
 È possibile impostare le informazioni sulla classe di runtime chiamando il [CDockablePane:: Settabbedpanertc](#settabbedpanertc) (metodo).  
  
##  <a name="hasautohidemode"></a>  CDockablePane::HasAutoHideMode  
 Specifica se è possibile passare alla modalità Nascondi automaticamente un riquadro ancorato.  
  
```  
virtual BOOL HasAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato possa essere passato alla modalità Nascondi automaticamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per disabilitare la modalità Nascondi automaticamente per un riquadro ancorata specifico.  
  
##  <a name="hittest"></a>  CDockablePane::HitTest  
 Specifica il percorso in un riquadro in cui l'utente fa clic del mouse.  
  
```  
virtual int HitTest(
    CPoint point,  
    BOOL bDetectCaption = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *punto*  
 Specifica il punto da testare.  
  
 [in] *bDetectCaption*  
 TRUE se HTCAPTION deve essere restituito se il punto si trova in una didascalia del riquadro in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
- HTNOWHERE se *puntare* non si trova nel riquadro ancorato.  
  
- HTCLIENT se *puntare* si trova nell'area client del riquadro ancorato.  
  
- HTCAPTION se *puntare* è nell'area della didascalia del riquadro ancorato.  
  
- AFX_HTCLOSE se *puntare* è attivato il pulsante chiude.  
  
- HTMAXBUTTON se *puntare* è attivato il pulsante Aggiungi.  
  
##  <a name="isautohideallenabled"></a>  CDockablePane::IsAutohideAllEnabled  
 Indica se il riquadro ancorato e tutti gli altri riquadri nel contenitore possono essere usati in modalità Nascondi automaticamente.  
  
```  
virtual BOOL IsAutohideAllEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato e tutti gli altri riquadri del contenitore, è possono passare alla modalità Nascondi automaticamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Un utente Abilita modalità Nascondi automaticamente facendo clic sul pulsante Aggiungi alloggiamento tenendo il **Ctrl** chiave  
  
 Per abilitare o disabilitare questo comportamento, chiama il [CDockablePane::EnableAutohideAll](#enableautohideall) (metodo).  
  
##  <a name="isautohidemode"></a>  CDockablePane::IsAutoHideMode  
 Determina se un riquadro è in modalità Nascondi automaticamente.  
  
```  
virtual BOOL IsAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato è in modalità Nascondi automaticamente. in caso contrario, FALSE.  
  
##  <a name="isdocked"></a>  CDockablePane::IsDocked  
 Determina se il riquadro corrente è ancorato.  
  
```  
virtual BOOL IsDocked() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato non appartiene a una finestra con mini-cornice o se è mobile in una finestra con mini-cornice con un altro riquadro. FALSE se il riquadro è un elemento figlio di una finestra con mini-cornice e non vi sono alcun altri pannelli che appartengono alla finestra con mini-cornice.  
  
### <a name="remarks"></a>Note  
 Per determinare se il riquadro viene ancorato alla finestra cornice principale, chiamare [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider). Se il metodo restituisce un puntatore non NULL, il riquadro viene ancorato alla finestra cornice principale.  
  
##  <a name="ishideinautohidemode"></a>  CDockablePane::IsHideInAutoHideMode  
 Determina il comportamento di un riquadro in cui è in modalità Nascondi automaticamente se viene visualizzato (o nascosto) chiamando [CDockablePane::ShowPane](#showpane).  
  
```  
virtual BOOL IsHideInAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato deve essere nascosto quando è in modalità Nascondi automaticamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato è in modalità Nascondi automaticamente, si comporta in modo diverso quando si chiama `ShowPane` per mostrare o nascondere il riquadro. Questo comportamento è controllato da un membro statico [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode). Se questo membro è TRUE, il riquadro ancorato e relativa barra degli strumenti Nascondi automaticamente correlati o pulsante Nascondi automaticamente è nascosto o visualizzato quando si chiama `ShowPane`. In caso contrario, il riquadro ancorato è attivato o disattivato e relativa barra degli strumenti Nascondi automaticamente correlati o un pulsante Nascondi automaticamente è sempre visibile.  
  
 L'override del metodo in una classe derivata per modificare il comportamento predefinito per i singoli riquadri.  
  
 Il valore predefinito per `m_bHideInAutoHideMode` è FALSE.  
  
##  <a name="isinfloatingmultipaneframewnd"></a>  CDockablePane::IsInFloatingMultiPaneFrameWnd  
 Specifica se il riquadro si trova in una finestra cornice a più riquadri ( [classe CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)).  
  
```  
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro si trova in una finestra cornice a più riquadri; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isresizable"></a>  CDockablePane::IsResizable  
 Specifica se il riquadro è ridimensionabile.  
  
```  
virtual BOOL IsResizable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è ridimensionabile. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, sono possibile ridimensionare i riquadri ancorabili. Per evitare il ridimensionamento, l'override del metodo in una classe derivata e restituisce FALSE. Si noti che il valore FALSE provoca un tentativo fallito **ASSERT** nelle [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane). Uso [CDockingManager::AddPane](../../mfc/reference/cdockingmanager-class.md#addpane) invece per ancorare un riquadro all'interno di un frame padre.  
  
 Non è possibile che non possono essere ridimensionati i riquadri float né attivare la modalità Nascondi automaticamente e sono sempre posizionati all'esterno del frame padre.  
  
##  <a name="istablocationbottom"></a>  CDockablePane::IsTabLocationBottom  
 Specifica se le schede si trovano nella parte superiore o inferiore del riquadro.  
  
```  
virtual BOOL IsTabLocationBottom() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le schede si trovano nella parte inferiore del riquadro; FALSO se le schede si trovano nella parte superiore del riquadro.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [CTabbedPane::IsTabLocationBottom](../../mfc/reference/ctabbedpane-class.md#istablocationbottom).  
  
##  <a name="istracked"></a>  CDockablePane::IsTracked  
 Specifica se un riquadro viene spostato dall'utente.  
  
```  
BOOL IsTracked() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro di spostamento; in caso contrario, FALSE.  
  
##  <a name="isvisible"></a>  CDockablePane::IsVisible  
 Determina se il riquadro corrente è visibile.  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro ancorato è visibile; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare se un riquadro ancorato è visibile. È possibile usare questo metodo invece di chiamare [CWnd::IsWindowVisible](../../mfc/reference/cwnd-class.md#iswindowvisible) o il test per lo stile WS_VISIBLE. Lo stato di visibilità restituito dipende dal fatto modalità Nascondi automaticamente è abilitata o disabilitata e il valore dei [CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode) proprietà.  
  
 Se il riquadro ancorato è in modalità Nascondi automaticamente e `IsHideInAutoHideMode` restituisce FALSE lo stato di visibilità sia sempre FALSE.  
  
 Se il riquadro ancorato è in modalità Nascondi automaticamente e `IsHideInAutoHideMode` restituisce TRUE lo stato di visibilità dipende lo stato di visibilità della barra degli strumenti correlati che si nascondono automaticamente.  
  
 Se il riquadro ancorato non è in modalità Nascondi automaticamente, lo stato di visibilità è determinato dal [CBasePane::IsVisible](../../mfc/reference/cbasepane-class.md#isvisible) (metodo).  
  
##  <a name="m_bdisableanimation"></a>  CDockablePane::m_bDisableAnimation  
 Specifica se l'animazione Nascondi automaticamente del riquadro ancorato è disabilitato.  
  
```  
AFX_IMPORT_DATA static BOOL m_bDisableAnimation;  
```  
  
##  <a name="m_bhideinautohidemode"></a>  CDockablePane::m_bHideInAutoHideMode  
 Determina il comportamento del riquadro quando il riquadro si trova nella modalità Nascondi automaticamente.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHideInAutoHideMode;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore influisce su tutti i riquadri ancorati nell'applicazione.  
  
 Se questo membro è impostato su TRUE, ancorabili riquadri sono nascosti o visualizzati con i pulsanti e le barre degli strumenti Nascondi automaticamente correlati quando si chiama [CDockablePane::ShowPane](#showpane).  
  
 Se questo membro è impostato su FALSE, ancorabili riquadri viene attivata o disattivata quando si chiama [CDockablePane::ShowPane](#showpane).  
  
##  <a name="m_nslidesteps"></a>  CDockablePane::m_nSlideSteps  
 Specifica la velocità dell'animazione del riquadro quando è in modalità Nascondi automaticamente.  
  
```  
AFX_IMPORT_DATA static int m_nSlideSteps;  
```  
  
### <a name="remarks"></a>Note  
 Per un effetto di animazione più veloce, ridurre questo valore. Per un effetto di animazione più lento, aumentare questo valore.  
  
##  <a name="onafterchangeparent"></a>  CDockablePane::OnAfterChangeParent  
 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pWndOldParent*  
  
### <a name="remarks"></a>Note  
  
##  <a name="onafterdockfromminiframe"></a>  CDockablePane::OnAfterDockFromMiniFrame  
 Chiamato dal framework quando una barra ancorabile a virgola mobile viene ancorato in una finestra cornice.  
  
```  
virtual void OnAfterDockFromMiniFrame();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo non esegue alcuna operazione.  
  
##  <a name="onbeforechangeparent"></a>  CDockablePane::OnBeforeChangeParent  
 Il framework chiama questo metodo prima di modificare l'elemento padre del riquadro.  
  
```  
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,  
    BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pWndNewParent*  
 Un puntatore a una nuova finestra padre.  
  
 [in] *bDelay*  
 BOOL che specifica se vuoi ritardare il ricalcolo del layout di ancoraggio, se il riquadro non ancorato. Per altre informazioni, vedere [CDockablePane::UndockPane](#undockpane).  
  
### <a name="remarks"></a>Note  
 Se il riquadro viene ancorato e il nuovo elemento padre non consente l'ancoraggio, questo metodo verrà disancorato del riquadro.  
  
 Se il riquadro viene convertito in un documento a schede, questo metodo archivia posizione di ancoraggio recenti. Il framework utilizza la posizione di ancoraggio recente per ripristinare la posizione del riquadro quando viene convertito tornato a uno stato ancorato.  
  
##  <a name="onbeforefloat"></a>  CDockablePane::OnBeforeFloat  
 Il framework chiama questo metodo prima di un riquadro passa a uno stato a virgola mobile.  
  
```  
virtual BOOL OnBeforeFloat(
    CRect& rectFloat,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rectFloat*  
 Specifica la posizione e dimensioni del riquadro quando è in uno stato a virgola mobile.  
  
 [in] *dockMethod*  
 Specifica il metodo di ancoraggio. Visualizzare [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) per un elenco di valori possibili.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro può essere resa; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando è su un riquadro in float. È possibile eseguire l'override di questo metodo in una classe derivata se si desidera eseguire l'elaborazione prima di spostarla nel riquadro.  
  
##  <a name="onpressbuttons"></a>  CDockablePane::OnPressButtons  
 Chiamato quando l'utente preme un pulsante della didascalia diverso dai pulsanti AFX_HTCLOSE e AFX_HTMAXBUTTON.  
  
```  
virtual void OnPressButtons(UINT nHit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nHit*  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
 Se si aggiunge un pulsante personalizzato per la didascalia di un riquadro ancorata, eseguire l'override di questo metodo per ricevere notifiche quando un utente preme il pulsante.  
  
##  <a name="onslide"></a>  CDockablePane::OnSlide  
 Chiamato dal framework per animare il riquadro quando è in modalità Nascondi automaticamente.  
  
```  
virtual void OnSlide(BOOL bSlideOut);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bSlideOut*  
 TRUE per mostrare il riquadro attività. FALSE per nascondere il riquadro.  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata per implementare gli effetti personalizzati che si nascondono automaticamente.  
  
##  <a name="removefromdefaultpanedividier"></a>  CDockablePane:: Removefromdefaultpanedividier  
 Il framework chiama questo metodo quando un riquadro è in corso non ancorato.  
  
```  
void RemoveFromDefaultPaneDividier();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta il divisore di riquadro predefinito su NULL e rimuove il riquadro dal relativo contenitore.  
  
##  <a name="replacepane"></a>  CDockablePane::ReplacePane  
 Sostituisce il riquadro con un riquadro specificato.  
  
```  
BOOL ReplacePane(
    CDockablePane* pBarToReplaceWith,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bRegisterWithFrame = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pBarToReplaceWith*  
 Un puntatore a un riquadro ancorato.  
  
 [in] *dockMethod*  
 Non usato.  
  
 [in] *bRegisterWithFrame*  
 Se TRUE, il nuovo riquadro è registrato con il gestore di ancoraggio dell'elemento padre del riquadro precedente. Il nuovo riquadro viene inserito in corrispondenza dell'indice del riquadro precedente nell'elenco dei riquadri manutenuti dal gestore di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la sostituzione prevede l'esito positivo. in caso contrario, FALSE.  
  
##  <a name="restoredefaultpanedivider"></a>  CDockablePane::RestoreDefaultPaneDivider  
 Quando un riquadro viene deserializzato, il framework chiama questo metodo per ripristinare il divisore di riquadro predefinito.  
  
```  
void RestoreDefaultPaneDivider();
```  
  
### <a name="remarks"></a>Note  
 Il divisore di riquadro predefinito ripristinato sostituisce il divisore di riquadro predefinito corrente, se presente.  
  
##  <a name="setautohidemode"></a>  CDockablePane::SetAutoHideMode  
 Attiva/disattiva il riquadro ancorato tra visibile e la modalità Nascondi automaticamente.  
  
```  
virtual CMFCAutoHideBar* SetAutoHideMode(
    BOOL bMode,  
    DWORD dwAlignment,  
    CMFCAutoHideBar* pCurrAutoHideBar = NULL,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bMode*  
 TRUE per abilitare la modalità Nascondi automaticamente. FALSE per abilitare la modalità di ancoraggio standard.  
  
 [in] *dwAlignment*  
 Specifica l'allineamento del riquadro che si nascondono automaticamente da creare.  
  
 [in] [out] *pCurrAutoHideBar*  
 Puntatore a barra Nascondi automaticamente corrente. Può essere NULL.  
  
 [in] *bUseTimer*  
 Specifica se utilizzare l'effetto che si nascondono automaticamente quando l'utente attiva il riquadro di modalità Nascondi automaticamente o per nascondere il riquadro immediatamente.  
  
### <a name="return-value"></a>Valore restituito  
 Barra degli strumenti Nascondi automaticamente che è stato creato come risultato di passaggio alla modalità Nascondi automaticamente, o NULL.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un utente fa clic sul pulsante Aggiungi per passare il riquadro ancorato alla modalità Nascondi automaticamente o alla modalità di ancoraggio normale.  
  
 Chiamare questo metodo per un riquadro ancorato alla modalità Nascondi automaticamente a livello di codice. Il riquadro deve essere ancorato nella finestra cornice principale ( [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider) devono restituire un puntatore valido per il [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).  
  
##  <a name="setautohideparents"></a>  CDockablePane::SetAutoHideParents  
 Imposta il pulsante Nascondi automaticamente e barra degli strumenti Nascondi automaticamente per il riquadro.  
  
```  
void SetAutoHideParents(
    CMFCAutoHideBar* pToolBar,  
    CMFCAutoHideButton* pBtn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pToolBar*  
 Puntatore a una barra degli strumenti Nascondi automaticamente.  
  
 [in] *pBtn*  
 Puntatore a un pulsante Nascondi automaticamente.  
  
##  <a name="setlastpercentinpanecontainer"></a>  CDockablePane::SetLastPercentInPaneContainer  
 Imposta la percentuale di spazio che occupa un riquadro relativo contenitore.  
  
```  
void SetLastPercentInPaneContainer(int n);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *n*  
 Un' **int** che specifica la percentuale di spazio che occupa il riquadro relativo contenitore.  
  
### <a name="remarks"></a>Note  
 Il framework consente di regolare il riquadro per usare il nuovo valore quando il layout viene ricalcolato.  
  
##  <a name="setrestoreddefaultpanedivider"></a>  CDockablePane::SetRestoredDefaultPaneDivider  
 Imposta il divisore di riquadro predefinito ripristinato.  
  
```  
void SetRestoredDefaultPaneDivider(HWND hRestoredSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *hRestoredSlider*  
 Handle per un divisore di riquadro (dispositivo di scorrimento).  
  
### <a name="remarks"></a>Note  
 Un divisore di riquadro ripristinato predefinito viene ottenuto quando viene deserializzato un riquadro. Per altre informazioni, vedere [CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider).  
  
##  <a name="settabbedpanertc"></a>  CDockablePane:: Settabbedpanertc  
 Imposta le informazioni sulla classe di runtime per una finestra a schede che viene creata quando due riquadri di ancoraggio tra loro.  
  
```  
void SetTabbedPaneRTC(CRuntimeClass* pRTC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pRTC*  
 Le informazioni sulla classe di runtime per il riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare le informazioni sulla classe di runtime per i riquadri a schede che vengono creati in modo dinamico. Ciò può verificarsi quando si trascina un riquadro per la didascalia di un altro riquadro, o se si chiama il [CDockablePane:: Attachtotabwnd](#attachtotabwnd) metodo per creare a livello di codice un riquadro a schede da due riquadri ancorabili.  
  
 La classe di runtime predefinito viene impostata in base al *dwTabbedStyle* del parametro [CDockablePane::Create](#create) e [CDockablePane:: CreateEx](#createex). Per personalizzare i riquadri a schede nuovo, derivare la classe da una delle classi seguenti:  
  
- [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
- [Classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md)  
  
- [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Quindi, chiamare questo metodo con il puntatore per le informazioni sulle classi di runtime.  
  
##  <a name="showpane"></a>  CDockablePane::ShowPane  
 Mostra o nasconde un riquadro.  
  
```  
virtual void ShowPane(
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bMostra*  
 TRUE per mostrare il riquadro attività. FALSE per nascondere il riquadro.  
  
 [in] *bDelay*  
 True per ritardo modificando il layout di ancoraggio. Se ha valore FALSE, modificare il layout di ancoraggio immediatamente.  
  
 [in] *bActivate*  
 TRUE per attivare il riquadro quando visualizzata; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo anziché il [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) se mostrare o nascondere i riquadri ancorabili.  
  
##  <a name="slide"></a>  CDockablePane::Slide  
 Aggiunge un'animazione a un riquadro in modalità Nascondi automaticamente.  
  
```  
virtual void Slide(
    BOOL bSlideOut,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bSlideOut*  
 TRUE per mostrare il riquadro attività. FALSE per nascondere il riquadro.  
  
 [in] *bUseTimer*  
 TRUE per mostrare o nascondere il riquadro con l'effetto che si nascondono automaticamente. FALSE per mostrare o nascondere il riquadro immediatamente.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per aggiungere un'animazione a un riquadro in modalità Nascondi automaticamente.  
  
 Questo metodo Usa il `CDockablePane::m_nSlideDefaultTimeOut` valore per determinare il valore di timeout per l'effetto diapositiva. Il valore predefinito per il valore di timeout è 1. Se si personalizza l'algoritmo che si nascondono automaticamente, è possibile modificare questo membro per modificare il valore di timeout.  
  
##  <a name="toggleautohide"></a>  CDockablePane::ToggleAutoHide  
 Attiva/disattiva il riquadro tra sempre visibile e la modalità Nascondi automaticamente.  
  
```  
virtual void ToggleAutoHide();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo attiva/disattiva modalità Nascondi automaticamente per il riquadro chiamando [CDockablePane::SetAutoHideMode](#setautohidemode).  
  
##  <a name="undockpane"></a>  CDockablePane::UndockPane  
 Verrà disancorato un riquadro dalla finestra cornice principale o un contenitore di finestra con mini-cornice.  
  
```  
virtual void UndockPane(BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bDelay*  
 True in ritardo calcolando il layout di ancoraggio. FALSE per ricalcolare il layout di ancoraggio immediatamente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per annullare l'ancoraggio di un riquadro da una finestra cornice principale o da un contenitore di multi-con mini-cornice finestra (un riquadro in cui è ancorata in una finestra con mini-cornice singola con gli altri riquadri).  
  
 È necessario annullare l'ancoraggio di un riquadro prima di eseguire qualsiasi operazione esterna che non viene eseguita dal [CDockingManager](../../mfc/reference/cdockingmanager-class.md). Ad esempio, è necessario annullare l'ancoraggio un riquadro per spostare a livello di codice da una posizione a un'altra.  
  
 Il framework ancorate automaticamente i riquadri prima vengono eliminati.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)
