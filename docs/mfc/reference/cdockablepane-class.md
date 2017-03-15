---
title: Classe CDockablePane | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDockablePane
dev_langs:
- C++
helpviewer_keywords:
- CDockablePane class
ms.assetid: e2495f4c-765f-48f9-a2e2-e45e47608d91
caps.latest.revision: 34
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
ms.openlocfilehash: dea1f1ce66c0e9bedbe83109ab62055a4af2ebce
ms.lasthandoff: 02/24/2017

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
|[CDockablePane::AttachToTabWnd](#attachtotabwnd)|Collega un riquadro a un altro riquadro. Questo crea un riquadro a schede.|  
|[CDockablePane::CalcFixedLayout](#calcfixedlayout)|Restituisce le dimensioni del rettangolo di riquadro.|  
|[CDockablePane::CanAcceptMiniFrame](#canacceptminiframe)|Determina se il frame mini specificato può essere ancorato al riquadro.|  
|[CDockablePane::CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato al riquadro corrente.|  
|[CDockablePane::CanAutoHide](#canautohide)|Determina se il riquadro supporta la modalità Nascondi automaticamente. (Esegue l'override di [CBasePane::CanAutoHide](../../mfc/reference/cbasepane-class.md#canautohide).)|  
|[CDockablePane::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorato a un altro riquadro.|  
|[CDockablePane::ConvertToTabbedDocument](#converttotabbeddocument)|Converte uno o più riquadri ancorabili ai documenti MDI a schede.|  
|[CDockablePane::CopyState](#copystate)|Copia lo stato di un riquadro ancorato.|  
|[CDockablePane::Create](#create)|Crea il controllo di Windows e lo collega a di `CDockablePane` oggetto.|  
|[CDockablePane::CreateDefaultPaneDivider](#createdefaultpanedivider)|Crea un divisore predefinito per il riquadro ancorato in una finestra cornice.|  
|[CDockablePane::CreateEx](#createex)|Crea il controllo di Windows e lo collega a di `CDockablePane` oggetto.|  
|[CDockablePane::CreateTabbedPane](#createtabbedpane)|Crea un riquadro a schede nel riquadro corrente.|  
|[CDockablePane::DockPaneContainer](#dockpanecontainer)|Consente l'ancoraggio di un contenitore nel riquadro.|  
|[CDockablePane::DockPaneStandard](#dockpanestandard)|Ancora un riquadro con contorno di ancoraggio (standard).|  
|`CDockablePane::DockToFrameWindow`|Utilizzato internamente. Per ancorare un riquadro, utilizzare [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) o [CDockablePane::DockToWindow](#docktowindow).|  
|[CDockablePane::DockToRecentPos](#docktorecentpos)|Un riquadro viene ancorato alla posizione di ancoraggio recenti stored.|  
|[CDockablePane::DockToWindow](#docktowindow)|Il controllo viene ancorato un riquadro ancorato a un altro riquadro ancorato.|  
|[CDockablePane::EnableAutohideAll](#enableautohideall)|Abilita o disabilita la modalità Nascondi automaticamente per questo riquadro insieme altri riquadri nel contenitore.|  
|[CDockablePane::EnableGripper](#enablegripper)|Mostra o nasconde la didascalia (spostamento).|  
|[CDockablePane::GetAHRestoredRect](#getahrestoredrect)|Specifica la posizione del riquadro quando visibile in modalità Nascondi automaticamente.|  
|[CDockablePane::GetAHSlideMode](#getahslidemode)|Recupera la modalità di presentazione Nascondi automaticamente per il riquadro.|  
|`CDockablePane::GetAutoHideButton`|Utilizzato internamente.|  
|`CDockablePane::GetAutoHideToolBar`|Utilizzato internamente.|  
|[CDockablePane::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia corrente.|  
|[CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider)|Restituisce il divisore di riquadro predefinito per il contenitore del riquadro.|  
|[CDockablePane::GetDockingStatus](#getdockingstatus)|Determina la capacità di un riquadro ancorato in base alla posizione del puntatore fornito.|  
|[CDockablePane::GetDragSensitivity](#getdragsensitivity)|Restituisce la sensibilità del trascinamento di un riquadro ancorato.|  
|[CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)|Recupera la percentuale di spazio che occupa un riquadro all'interno del contenitore.|  
|[CDockablePane::GetTabArea](#gettabarea)|Recupera l'area della scheda per il riquadro.|  
|[CDockablePane::GetTabbedPaneRTC](#gettabbedpanertc)|Restituisce le informazioni sulla classe di runtime su una finestra a schede che viene creata quando un altro riquadro ancorato al riquadro corrente.|  
|[CDockablePane::HasAutoHideMode](#hasautohidemode)|Specifica se è possibile passare alla modalità Nascondi automaticamente un riquadro ancorato.|  
|[CDockablePane::HitTest](#hittest)|Specifica il percorso specifico in un riquadro in cui l'utente fa clic del mouse.|  
|`CDockablePane::IsAccessibilityCompatible`|Utilizzato internamente.|  
|[CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)|Indica se il riquadro ancorato e tutti gli altri riquadri nel contenitore possono essere inseriti in modalità Nascondi automaticamente.|  
|[CDockablePane::IsAutoHideMode](#isautohidemode)|Determina se un riquadro è in modalità Nascondi automaticamente.|  
|`CDockablePane::IsChangeState`|Utilizzato internamente.|  
|[CDockablePane::IsDocked](#isdocked)|Determina se il riquadro corrente è ancorato.|  
|[CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode)|Determina il comportamento di un riquadro che è in modalità Nascondi automaticamente se viene visualizzato (o nascosto) chiamando `ShowPane`.|  
|[CDockablePane::IsInFloatingMultiPaneFrameWnd](#isinfloatingmultipaneframewnd)|Specifica se il riquadro è in una finestra cornice a più riquadri.|  
|[CDockablePane::IsResizable](#isresizable)|Specifica se il riquadro è ridimensionabile.|  
|[CDockablePane::IsTabLocationBottom](#istablocationbottom)|Specifica se le schede si trovano all'inizio o alla parte inferiore del riquadro.|  
|[CDockablePane::IsTracked](#istracked)|Specifica se un riquadro trascinato dall'utente.|  
|[CDockablePane::IsVisible](#isvisible)|Determina se il riquadro corrente è visibile.|  
|[CDockablePane::LoadState](http://msdn.microsoft.com/en-us/96110136-4f46-4764-8a76-3b4abaf77917)|Utilizzato internamente.|  
|[CDockablePane::OnAfterChangeParent](#onafterchangeparent)|Chiamato dal framework quando viene modificato l'elemento padre di un riquadro. (Esegue l'override di [CPane::OnAfterChangeParent](../../mfc/reference/cpane-class.md#onafterchangeparent).)|  
|[CDockablePane::OnAfterDockFromMiniFrame](#onafterdockfromminiframe)|Chiamato dal framework quando una barra ancorabile a virgola mobile viene ancorato in una finestra cornice.|  
|[CDockablePane::OnBeforeChangeParent](#onbeforechangeparent)|Chiamato dal framework quando l'elemento padre del riquadro sta per essere modificata. (Esegue l'override di [CPane::OnBeforeChangeParent](../../mfc/reference/cpane-class.md#onbeforechangeparent).)|  
|[CDockablePane::OnBeforeFloat](#onbeforefloat)|Chiamato dal framework quando un riquadro è float. (Esegue l'override di [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).)|  
|[CDockablePane::RemoveFromDefaultPaneDividier](#removefromdefaultpanedividier)|Il framework chiama questo metodo quando un riquadro è viene disinserito.|  
|[CDockablePane::ReplacePane](#replacepane)|Sostituisce il riquadro con un riquadro specificato.|  
|[CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider)|Il framework chiama questo metodo come un riquadro viene deserializzato per ripristinare il divisore di riquadro predefinito.|  
|`CDockablePane::SaveState`|Utilizzato internamente.|  
|`CDockablePane::Serialize`|Serializza il riquadro. Esegue l'override di `CBasePane::Serialize`.|  
|[CDockablePane::SetAutoHideMode](#setautohidemode)|Attiva o disattiva il riquadro ancorato tra visibile e modalità Nascondi automaticamente.|  
|[CDockablePane::SetAutoHideParents](#setautohideparents)|Imposta il pulsante Nascondi automaticamente e Nascondi barra degli strumenti del riquadro.|  
|`CDockablePane::SetDefaultPaneDivider`|Utilizzato internamente.|  
|[CDockablePane::SetLastPercentInPaneContainer](#setlastpercentinpanecontainer)|Imposta la percentuale di spazio che occupa un riquadro all'interno del contenitore.|  
|`CDockablePane::SetResizeMode`|Utilizzato internamente.|  
|[CDockablePane::SetRestoredDefaultPaneDivider](#setrestoreddefaultpanedivider)|Imposta il divisore di riquadro predefinito ripristinato.|  
|[CDockablePane::SetTabbedPaneRTC](#settabbedpanertc)|Imposta le informazioni sulla classe di runtime per una finestra a schede che viene creata quando due riquadri ancorare insieme.|  
|[CDockablePane::ShowPane](#showpane)|Mostra o nasconde un riquadro.|  
|[CDockablePane::Slide](#slide)|Mostra o nasconde un riquadro con un'animazione scorrevole che viene visualizzato solo quando il riquadro è in modalità Nascondi automaticamente.|  
|[CDockablePane::ToggleAutoHide](#toggleautohide)|Attiva la modalità Nascondi automaticamente. (Esegue l'override di [CPane::ToggleAutoHide](../../mfc/reference/cpane-class.md#toggleautohide) .)|  
|[CDockablePane::UndockPane](#undockpane)|Cornice un riquadro da un contenitore di finestra mini o finestra cornice principale.|  
|`CDockablePane::UnSetAutoHideMode`|Utilizzato internamente. Per impostare la modalità Nascondi automaticamente, utilizzare [CDockablePane::SetAutoHideMode](#setautohidemode)|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::CheckAutoHideCondition](#checkautohidecondition)|Determina se il riquadro ancorato è nascosto (in modalità Nascondi automaticamente).|  
|[CDockablePane::CheckStopSlideCondition](#checkstopslidecondition)|Determina se un riquadro ancorato di tipo Nascondi automaticamente deve interrompere la variabile.|  
|[CDockablePane::DrawCaption](#drawcaption)|Disegna la didascalia riquadro ancorato di tipo (spostamento).|  
|[CDockablePane::OnPressButtons](#onpressbuttons)|Chiamato quando l'utente preme un pulsante della didascalia oltre il `AFX_HTCLOSE` e `AFX_HTMAXBUTTON` pulsanti.|  
|[CDockablePane::OnSlide](#onslide)|Chiamato dal framework per il rendering dell'effetto di diapositiva Nascondi automaticamente quando il riquadro viene visualizzato o nascosto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::m_bDisableAnimation](#m_bdisableanimation)|Specifica se l'animazione Nascondi del riquadro ancorato è disabilitato.|  
|[CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode)|Determina il comportamento del riquadro quando il riquadro è in modalità Nascondi automaticamente.|  
|[CDockablePane::m_nSlideSteps](#m_nslidesteps)|Specifica la velocità dell'animazione del riquadro quando viene visualizzato o nascosto in modalità Nascondi automaticamente.|  
  
## <a name="remarks"></a>Note  
 `CDockablePane`implementa le funzionalità seguenti:  
  
-   Un riquadro ancorato di tipo per una finestra cornice principale.  
  
-   Cambio di un riquadro in modalità Nascondi automaticamente.  
  
-   Collegamento di un riquadro a una finestra a schede.  
  
-   Mobile un riquadro a una finestra cornice.  
  
-   Un riquadro ancorato di tipo a un altro riquadro che è mobile all'interno una finestra.  
  
-   Ridimensionamento di un riquadro.  
  
-   Caricamento e salvataggio dello stato per un riquadro ancorato.  
  
    > [!NOTE]
    >  Le informazioni sullo stato viene salvate nel Registro di sistema di Windows.  
  
-   Creazione di un riquadro con o senza una didascalia. La didascalia può avere un'etichetta di testo e può essere riempito con un colore sfumato.  
  
-   Trascinando un riquadro durante la visualizzazione del contenuto del riquadro  
  
-   Se si trascina un riquadro durante la visualizzazione di un rettangolo di trascinamento.  
  
 Per utilizzare un riquadro ancorato all'interno dell'applicazione, derivare la classe riquadro dalla `CDockablePane` classe. Incorporare l'oggetto derivato è nell'oggetto finestra cornice principale o in un oggetto finestra che controlla l'istanza del riquadro. Quindi chiamare il [CDockablePane::Create](#create) metodo o [CDockablePane::CreateEx](#createex) metodo quando si elabora il `WM_CREATE` messaggio visualizzato nella finestra cornice principale. Infine, impostare l'oggetto riquadro chiamando [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking), [CBasePane::DockPane](../../mfc/reference/cbasepane-class.md#dockpane), o [CDockablePane::AttachToTabWnd](#attachtotabwnd).  
  
## <a name="customization-tips"></a>Suggerimenti per la personalizzazione  
 I suggerimenti seguenti si applicano a `CDockablePane` oggetti:  
  
-   Se si chiama [CDockablePane::AttachToTabWnd](#attachtotabwnd) per i due riquadri senza schede e ancorabili, verrà restituito un puntatore a una finestra a schede nel `ppTabbedControlBar` parametro. È possibile continuare ad aggiungere schede nella finestra a schede tramite questo parametro.  
  
-   Il tipo di riquadro a schede che viene creato da [CDockablePane::AttachToTabWnd](#attachtotabwnd) varia a seconda di `CDockablePane` oggetto il `pTabControlBarAttachTo` parametro. È possibile chiamare [CDockablePane::SetTabbedPaneRTC](#settabbedpanertc) per impostare il tipo di riquadro a schede che il `CDockablePane` verrà creato. Il tipo predefinito è il `dwTabbedStyle` di [CDockablePane::Create](#create) quando si crea innanzitutto il `CDockablePane`. Se `dwTabbedStyle` è il tipo predefinito è AFX_CBRS_OUTLOOK_TABS [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md); se `dwTabbedStyle` è il tipo predefinito è AFX_CBRS_REGULAR_TABS [CTabbedPane classe](../../mfc/reference/ctabbedpane-class.md).  
  
-   Se si desidera ancorare un riquadro ancorato a un altro, chiamare il [CDockablePane::DockToWindow](#docktowindow) metodo. Nel riquadro originale deve essere ancorato in un punto prima di chiamare questo metodo.  
  
-   La variabile membro [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode) controlli come riquadri ancorabili si comportano in automatico nascondere modalità quando si chiama [CDockablePane::ShowPane](#showpane). Se questa variabile membro è impostata su `TRUE`, verranno nascoste ancorabili riquadri e i pulsanti di Nascondi automaticamente. In caso contrario, essi verranno far scorrere avanti e indietro.  
  
-   È possibile disattivare Nascondi automaticamente animazione impostando il [CDockablePane::m_bDisableAnimation](#m_bdisableanimation) variabile membro per `TRUE`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come configurare un `CDockablePane` oggetto tramite i vari metodi di `CDockablePane` (classe). Nell'esempio viene illustrato come abilitare l'opzione per nascondere automaticamente tutte le funzionalità per il riquadro ancorato, abilitare la didascalia o gripper, abilitare la modalità Nascondi automaticamente, visualizzare il riquadro e animare un riquadro che si trova in modalità Nascondi automaticamente. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#27;](../../mfc/codesnippet/cpp/cdockablepane-class_1.cpp)]  
[!code-cpp[28 NVC_MFC_VisualStudioDemo](../../mfc/codesnippet/cpp/cdockablepane-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockablePane.h  
  
##  <a name="a-nameattachtotabwnda--cdockablepaneattachtotabwnd"></a><a name="attachtotabwnd"></a>CDockablePane::AttachToTabWnd  
 Collega il riquadro corrente a un riquadro di destinazione, la creazione di un riquadro a schede.  
  
```  
virtual CDockablePane* AttachToTabWnd(
    CDockablePane* pTabControlBarAttachTo,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bSetActive= TRUE,  
    CDockablePane** ppTabbedControlBar = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pTabControlBarAttachTo`  
 Specifica il riquadro di destinazione che connette il riquadro corrente. Il riquadro di destinazione deve essere un riquadro ancorato.  
  
 [in] `dockMethod`  
 Specifica il metodo di ancoraggio.  
  
 [in] `bSetActive`  
 `TRUE`Per attivare il riquadro a schede dopo l'operazione di collegamento; in caso contrario, `FALSE`.  
  
 [out] `ppTabbedControlBar`  
 Contiene il riquadro a schede risultante dall'operazione di collegamento.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro corrente, se non è un riquadro a schede. in caso contrario un puntatore al riquadro a schede risultante dall'operazione di collegamento. Il valore restituito è `NULL` se non è possibile collegare il riquadro corrente o se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato si connette a un altro riquadro utilizzando questo metodo, si verifica quanto segue:  
  
1.  I controlli di framework se il riquadro di destinazione `pTabControlBarAttachTo` è un normale ancoraggio riquadro o se è derivato da [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md).  
  
2.  Se il riquadro di destinazione è un riquadro a schede, il framework aggiunge il riquadro corrente, come una scheda.  
  
3.  Se il riquadro di destinazione è un riquadro ancorato di tipo regolare, il framework crea un riquadro a schede.  
  
    -   Il framework chiama `pTabControlBarAttachTo->CreateTabbedPane`. Lo stile del riquadro a schede nuovo dipende il `m_pTabbedControlBarRTC` membro. Per impostazione predefinita, questo membro è impostato per la classe di runtime di [CTabbedPane](../../mfc/reference/ctabbedpane-class.md). Se si passa il `AFX_CBRS_OUTLOOK_TABS` stile come il `dwTabbedStyle` parametro per il [CDockablePane::Create](#create) metodo, l'oggetto di classe di runtime è impostato per la classe di runtime di [CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md). Questo membro è possibile modificare in qualsiasi momento per modificare lo stile del nuovo riquadro.  
  
    -   Quando questo metodo crea un riquadro a schede, il framework sostituisce il puntatore alla `pTabControlBarAttachTo` (se il riquadro è ancorato o mobile in una finestra più mini) con un puntatore al nuovo riquadro a schede.  
  
    -   Il framework aggiunge la `pTabControlBarAttachTo` riquadro al riquadro a schede come prima scheda. Il framework aggiunge quindi il riquadro corrente come una seconda scheda.  
  
4.  Se il riquadro corrente deriva da `CBaseTabbedPane`, tutte le schede vengono spostate in `pTabControlBarAttachTo` e il riquadro corrente viene eliminato. Pertanto, prestare attenzione quando si chiama questo metodo, perché quando il metodo restituisce un puntatore al riquadro corrente potrebbe essere non valido.  
  
 Se si collega un riquadro a altro durante la creazione di un layout di ancoraggio, impostare `dockMethod` a `DM_SHOW`.  
  
 È necessario ancorare il riquadro prima prima di collegare un altro riquadro ad esso.  
  
##  <a name="a-namecalcfixedlayouta--cdockablepanecalcfixedlayout"></a><a name="calcfixedlayout"></a>CDockablePane::CalcFixedLayout  
 Restituisce le dimensioni del rettangolo di riquadro.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bStretch`  
 Non usato.  
  
 [in] `bHorz`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le dimensioni del rettangolo di riquadro.  
  
##  <a name="a-namecanacceptminiframea--cdockablepanecanacceptminiframe"></a><a name="canacceptminiframe"></a>CDockablePane::CanAcceptMiniFrame  
 Determina se il frame minima specificato può essere ancorato al riquadro.  
  
```  
virtual BOOL CanAcceptMiniFrame(CPaneFrameWnd* pMiniFrame) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMiniFrame`  
 Puntatore a un oggetto `CPaneFrameWnd`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se `pMiniFrame` può essere ancorata al riquadro; in caso contrario, `FALSE`.  
  
##  <a name="a-namecanacceptpanea--cdockablepanecanacceptpane"></a><a name="canacceptpane"></a>CDockablePane::CanAcceptPane  
 Determina se un altro riquadro può essere ancorato al riquadro corrente.  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Specifica il riquadro per ancorare il riquadro corrente.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro specificato può essere ancorato a questo riquadro. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo prima di un riquadro ancorato al riquadro corrente.  
  
 Eseguire l'override di questa funzione in una classe derivata per abilitare o disabilitare l'ancoraggio di un riquadro specifico.  
  
 Per impostazione predefinita, questo metodo restituisce `TRUE` se `pBar` o il relativo elemento padre è di tipo `CDockablePane`.  
  
##  <a name="a-namecanautohidea--cdockablepanecanautohide"></a><a name="canautohide"></a>CDockablePane::CanAutoHide  
 Determina se il riquadro è nascosta.  
  
```  
virtual BOOL CanAutoHide() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è nascosta; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 `CDockablePane::CanAutoHide`Restituisce `FALSE` in una delle situazioni seguenti:  
  
-   Il riquadro non ha elementi padre.  
  
-   Gestione di ancoraggio non riquadri Nascondi automaticamente.  
  
-   Il riquadro non è ancorato.  
  
##  <a name="a-namecanbeattacheda--cdockablepanecanbeattached"></a><a name="canbeattached"></a>CDockablePane::CanBeAttached  
 Determina se il riquadro corrente può essere ancorato a un altro riquadro.  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato può essere ancorato a un altro riquadro o alla finestra cornice principale. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo restituisce sempre `TRUE`. L'override del metodo in una classe derivata per abilitare o disabilitare l'ancoraggio senza chiamare il metodo [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).  
  
##  <a name="a-namecdockablepanea--cdockablepanecdockablepane"></a><a name="cdockablepane"></a>CDockablePane::CDockablePane  
 Costruisce e Inizializza un [CDockablePane](../../mfc/reference/cdockablepane-class.md) oggetto.  
  
```  
CDockablePane();
```  
  
### <a name="remarks"></a>Note  
 Dopo la creazione di un oggetto riquadro ancorabile, chiamare [CDockablePane::Create](#create) o [CDockablePane::CreateEx](#createex) per la sua creazione.  
  
##  <a name="a-nameconverttotabbeddocumenta--cdockablepaneconverttotabbeddocument"></a><a name="converttotabbeddocument"></a>CDockablePane::ConvertToTabbedDocument  
 Converte uno o più riquadri ancorabili ai documenti MDI a schede.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActiveTabOnly`  
 Quando si converte un `CTabbedPane`, specificare `TRUE` per convertire solo la scheda attiva. Specificare `FALSE` per convertire tutte le schede nel riquadro.  
  
##  <a name="a-namecheckautohideconditiona--cdockablepanecheckautohidecondition"></a><a name="checkautohidecondition"></a>CDockablePane::CheckAutoHideCondition  
 Determina se il riquadro ancorato è nascosto (nota anche come modalità Nascondi automaticamente).  
  
```  
virtual BOOL CheckAutoHideCondition();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene soddisfatta la condizione Nascondi; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza un timer per controllare periodicamente se nascondere un riquadro ancorabile Nascondi automaticamente. Il metodo restituisce `TRUE` quando il riquadro non è attivo, il riquadro non viene ridimensionato e non il puntatore del mouse sul riquadro.  
  
 Se vengono soddisfatte tutte le condizioni precedenti, il framework chiama [CDockablePane::Slide](#slide) per nascondere il riquadro.  
  
##  <a name="a-namecheckstopslideconditiona--cdockablepanecheckstopslidecondition"></a><a name="checkstopslidecondition"></a>CDockablePane::CheckStopSlideCondition  
 Determina se un riquadro ancorato di tipo Nascondi automaticamente deve interrompere la variabile.  
  
```  
virtual BOOL CheckStopSlideCondition(BOOL bDirection);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDirection`  
 `TRUE`Se il riquadro è visibile; `FALSE` se il riquadro è nascosto.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene soddisfatta la condizione di interruzione. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato è impostato sulla modalità Nascondi automaticamente, il framework utilizza effetti scorrevoli per mostrare o nascondere il riquadro. Il framework chiama questa funzione quando il riquadro è scorrevole. `CheckStopSlideCondition`Restituisce `TRUE` quando il riquadro è completamente visibile o quando è completamente nascosta.  
  
 L'override del metodo in una classe derivata per implementare gli effetti personalizzati Nascondi automaticamente.  
  
##  <a name="a-namecopystatea--cdockablepanecopystate"></a><a name="copystate"></a>CDockablePane::CopyState  
 Copia lo stato di un riquadro ancorato.  
  
```  
virtual void CopyState(CDockablePane* pOrgBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pOrgBar`  
 Un puntatore a un riquadro ancorato.  
  
### <a name="remarks"></a>Note  
 `CDockablePane::CopyState`lo stato della copia `pOrgBar` al riquadro corrente, chiamando i metodi seguenti:  
  
- [CPane::CopyState](../../mfc/reference/cpane-class.md#copystate)  
  
- [CDockablePane::GetAHRestoredRect](#getahrestoredrect)  
  
- [CDockablePane::GetAHSlideMode](#getahslidemode)  
  
- [CDockablePane::GetLastPercentInPaneContainer](#getlastpercentinpanecontainer)  
  
- [CDockablePane::IsAutohideAllEnabled](#isautohideallenabled)  
  
##  <a name="a-namecreatea--cdockablepanecreate"></a><a name="create"></a>CDockablePane::Create  
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
 [in] `lpszCaption`  
 Specifica il nome della finestra.  
  
 [in] [out]`pParentWnd`  
 Specifica la finestra padre.  
  
 [in] `rect`  
 Specifica le dimensioni e posizione della finestra, nelle coordinate del client di `pParentWnd`.  
  
 [in] `bHasGripper`  
 `TRUE`Per creare il riquadro con una didascalia; in caso contrario, `FALSE`.  
  
 [in] `nID`  
 Specifica l'ID della finestra figlio. Questo valore deve essere univoco se si desidera salvare lo stato di ancoraggio per questo riquadro ancorato.  
  
 [in] `dwStyle`  
 Specifica gli attributi di stile di finestra.  
  
 [in] `dwTabbedStyle`  
 Specifica lo stile di una finestra a schede che viene creato quando l'utente trascina un riquadro sulla barra del titolo del riquadro a schede.  
  
 [in] `dwControlBarStyle`  
 Specifica gli attributi di stile aggiuntive.  
  
 [in] [out]`pContext`  
 Specifica il contesto di creazione della finestra.  
  
 [in] `lpszWindowName`  
 Specifica il nome della finestra.  
  
 [in] `sizeDefault`  
 Specifica le dimensioni della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato è stato creato correttamente; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Crea un riquadro di Windows e lo collega a di `CDockablePane` oggetto.  
  
 Se il `dwStyle` stile della finestra è il `CBRS_FLOAT_MULTI` flag, la finestra mini può spostarsi con altri riquadri al finestra. Per impostazione predefinita, i riquadri di ancoraggio può solo mobile singolarmente.  
  
 Se il `dwTabbedStyle` parametro ha il `AFX_CBRS_OUTLOOK_TABS` flag specificato, nel riquadro Crea riquadri a schede stile Outlook quando un altro riquadro è associato a questo riquadro utilizzando il [CDockablePane::AttachToTabWnd](#attachtotabwnd) metodo. Per impostazione predefinita, riquadri ancorabili creano schede regolare del tipo [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
##  <a name="a-namecreatedefaultpanedividera--cdockablepanecreatedefaultpanedivider"></a><a name="createdefaultpanedivider"></a>CDockablePane::CreateDefaultPaneDivider  
 Crea un divisore predefinito per il riquadro ancorato in una finestra cornice.  
  
```  
static CPaneDivider* __stdcall CreateDefaultPaneDivider(
    DWORD dwAlignment,  
    CWnd* pParent,  
    CRuntimeClass* pSliderRTC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlignment`  
 Specifica il lato del frame principale a cui il riquadro ancorato. Se `dwAlignment` contiene il `CBRS_ALIGN_LEFT` o `CBRS_ALIGN_RIGHT` flag, questo metodo crea un oggetto verticale ( `CPaneDivider::SS_VERT`) divisore; in caso contrario, questo metodo crea un oggetto orizzontale ( `CPaneDivider::SS_HORZ`) divisore.  
  
 [in] `pParent`  
 Puntatore al frame padre.  
  
 [in] `pSliderRTC`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce un puntatore nel divisore appena creato, o `NULL` Se divisore creazione avrà esito negativo.  
  
### <a name="remarks"></a>Note  
 `dwAlignment`può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`CBRS_ALIGN_TOP`|Il riquadro viene viene ancorato alla parte superiore dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_BOTTOM`|Il riquadro viene viene ancorato alla parte inferiore dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_LEFT`|Il riquadro viene viene ancorato al lato sinistro dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_RIGHT`|Il riquadro è viene ancorato al lato destro dell'area client di una finestra cornice.|  
  
##  <a name="a-namecreateexa--cdockablepanecreateex"></a><a name="createex"></a>CDockablePane::CreateEx  
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
 [in] `dwStyleEx`  
 Specifica gli attributi di stile esteso per la nuova finestra.  
  
 [in] `lpszCaption`  
 Specifica il nome della finestra.  
  
 [in] [out]`pParentWnd`  
 Specifica la finestra padre.  
  
 [in] `rect`  
 Specifica le dimensioni e posizione della finestra, nelle coordinate del client di `pParentWnd`.  
  
 [in] `bHasGripper`  
 `TRUE`Per creare il riquadro con una didascalia; in caso contrario, `FALSE`.  
  
 [in] `nID`  
 Specifica l'ID della finestra figlio. Questo valore deve essere univoco se si desidera salvare lo stato di ancoraggio per questo riquadro ancorato.  
  
 [in] `dwStyle`  
 Specifica gli attributi di stile di finestra.  
  
 [in] `dwTabbedStyle`  
 Specifica lo stile di una finestra a schede che viene creato quando l'utente trascina un riquadro sulla barra del titolo del riquadro a schede.  
  
 [in] `dwControlBarStyle`  
 Specifica gli attributi di stile aggiuntive.  
  
 [in] [out]`pContext`  
 Specifica il contesto di creazione della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato è stato creato correttamente; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Crea un riquadro di Windows e lo collega a di `CDockablePane` oggetto.  
  
 Se il `dwStyle` stile della finestra è il `CBRS_FLOAT_MULTI` flag, la finestra mini può spostarsi con altri riquadri al finestra. Per impostazione predefinita, i riquadri di ancoraggio può solo mobile singolarmente.  
  
 Se il `dwTabbedStyle` parametro ha il `AFX_CBRS_OUTLOOK_TABS` flag specificato, nel riquadro Crea riquadri a schede stile Outlook quando un altro riquadro è associato a questo riquadro utilizzando il [CDockablePane::AttachToTabWnd](#attachtotabwnd) metodo. Per impostazione predefinita, riquadri ancorabili creano schede regolare del tipo [CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
##  <a name="a-namecreatetabbedpanea--cdockablepanecreatetabbedpane"></a><a name="createtabbedpane"></a>CDockablePane::CreateTabbedPane  
 Crea un riquadro a schede nel riquadro corrente.  
  
```  
virtual CTabbedPane* CreateTabbedPane();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo riquadro a schede, o `NULL` se l'operazione di creazione non riuscita.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando crea un riquadro a schede per sostituire questo riquadro. Per ulteriori informazioni, vedere [CDockablePane::AttachToTabWnd](#attachtotabwnd).  
  
 Override di questo metodo in una classe derivata per personalizzare come schede vengono creati e inizializzati.  
  
 Il riquadro a schede che viene creato in base alle informazioni di classe di runtime archiviate nel `m_pTabbedControlBarRTC` membro, che viene inizializzata per il [CDockablePane::CreateEx](#createex) (metodo).  
  
##  <a name="a-namedockpanecontainera--cdockablepanedockpanecontainer"></a><a name="dockpanecontainer"></a>CDockablePane::DockPaneContainer  
 Consente l'ancoraggio di un contenitore nel riquadro.  
  
```  
virtual BOOL DockPaneContainer(
    CPaneContainerManager& barContainerManager,  
    DWORD dwAlignment,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `barContainerManager`  
 Un riferimento al gestore del contenitore del contenitore in cui è ancorato.  
  
 [in] `dwAlignment`  
 `DWORD`che specifica il lato del riquadro in cui è ancorato il contenitore.  
  
 [in] `dockMethod`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il contenitore è stato correttamente ancorato al riquadro. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 `dwAlignment`può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`CBRS_ALIGN_TOP`|Il contenitore viene ancorato alla parte superiore del riquadro.|  
|`CBRS_ALIGN_BOTTOM`|Il contenitore viene ancorato alla parte inferiore del riquadro.|  
|`CBRS_ALIGN_LEFT`|Il contenitore è ancorato a sinistra del riquadro.|  
|`CBRS_ALIGN_RIGHT`|Il contenitore è ancorato a destra del riquadro.|  
  
##  <a name="a-namedockpanestandarda--cdockablepanedockpanestandard"></a><a name="dockpanestandard"></a>CDockablePane::DockPaneStandard  
 Ancora un riquadro con contorno di ancoraggio (standard).  
  
```  
virtual CPane* DockPaneStandard(BOOL& bWasDocked);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bWasDocked`  
 Quando il metodo termina, questo valore contiene `TRUE` se il riquadro è stato correttamente ancorato; in caso contrario, contiene `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Se il riquadro è ancorato in una finestra a schede o se una finestra a schede è stata creata come risultato di ancoraggio, questo metodo restituisce un puntatore alla finestra a schede. Se il riquadro è stato in caso contrario ancorato correttamente, questo metodo restituisce il `this` puntatore. Se ancoraggio ha esito negativo, questo metodo restituisce `NULL`.  
  
##  <a name="a-namedocktorecentposa--cdockablepanedocktorecentpos"></a><a name="docktorecentpos"></a>CDockablePane::DockToRecentPos  
 Un riquadro viene ancorato alla posizione di ancoraggio stored.  
  
```  
BOOL CDockablePane::DockToRecentPos();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è ancorato correttamente; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Riquadri ancorabili archiviano informazioni ancoraggio recenti in un [CRecentDockSiteInfo](../../mfc/reference/crecentdocksiteinfo-class.md) oggetto.  
  
##  <a name="a-namedocktowindowa--cdockablepanedocktowindow"></a><a name="docktowindow"></a>CDockablePane::DockToWindow  
 Il controllo viene ancorato un riquadro ancorato a un altro riquadro ancorato.  
  
```  
virtual BOOL DockToWindow(
    CDockablePane* pTargetWindow,  
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pTargetWindow`  
 Specifica il riquadro ancorato per ancorare il riquadro.  
  
 [in] `dwAlignment`  
 Specifica l'allineamento di ancoraggio del riquadro. Può essere uno dei CBRS_ALIGN_LEFT, CBRS_ALIGN_TOP, CBRS_ALIGN_RIGHT, CBRS_ALIGN_BOTTOM o CBRS_ALIGN_ANY. (Definito in AFXRES.)  
  
 [in] `lpRect`  
 Specifica il rettangolo di ancoraggio del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è ancorato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ancorare un riquadro a un altro riquadro con l'allineamento specificato `dwAlignment`.  
  
##  <a name="a-namedrawcaptiona--cdockablepanedrawcaption"></a><a name="drawcaption"></a>CDockablePane::DrawCaption  
 Disegna la didascalia (detta anche gripper) di un riquadro ancorato.  
  
```  
virtual void DrawCaption(
    CDC* pDC,  
    CRect rectCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Rappresenta il contesto di dispositivo usato per disegnare.  
  
 [in] `rectCaption`  
 Specifica il rettangolo di delimitazione del titolo del riquadro.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per creare la didascalia di un riquadro ancorata.  
  
 L'override del metodo in una classe derivata per personalizzare l'aspetto della didascalia.  
  
##  <a name="a-nameenableautohidealla--cdockablepaneenableautohideall"></a><a name="enableautohideall"></a>CDockablePane::EnableAutohideAll  
 Abilita o disabilita la modalità Nascondi automaticamente per questo riquadro e per altri riquadri nel contenitore.  
  
```  
void EnableAutohideAll(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare la funzione Nascondi automaticamente tutte le funzionalità per il riquadro ancorato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando un utente tiene il `Ctrl` chiave e fa clic sul pulsante pin per passare un riquadro in modalità Nascondi automaticamente, tutti gli altri riquadri nello stesso contenitore vengono inoltre passati alla modalità Nascondi automaticamente.  
  
 Chiamare questo metodo con `bEnable` impostato su `FALSE` per disabilitare questa funzionalità per un determinato riquadro.  
  
##  <a name="a-nameenablegrippera--cdockablepaneenablegripper"></a><a name="enablegripper"></a>CDockablePane::EnableGripper  
 Mostra o nasconde la didascalia (detta anche gripper).  
  
```  
virtual void EnableGripper(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare la didascalia; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando il framework crea riquadri ancorabili, non dispongono di **WS_STYLE** stile della finestra, anche se non specificato. Ciò significa che il titolo del riquadro è un'area non client controllata dal framework, ma questa area è diversa dalla didascalia della finestra standard.  
  
 È possibile visualizzare o nascondere la didascalia in qualsiasi momento. Il framework nasconde la didascalia quando viene aggiunto un riquadro come una scheda a una finestra a schede o quando un riquadro è resa mobile all'interno una finestra.  
  
##  <a name="a-namegetahrestoredrecta--cdockablepanegetahrestoredrect"></a><a name="getahrestoredrect"></a>CDockablePane::GetAHRestoredRect  
 Specifica la posizione del riquadro in modalità Nascondi automaticamente.  
  
```  
CRect GetAHRestoredRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che contiene la posizione del riquadro quando è in modalità Nascondi automaticamente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetahslidemodea--cdockablepanegetahslidemode"></a><a name="getahslidemode"></a>CDockablePane::GetAHSlideMode  
 Recupera la modalità di presentazione Nascondi automaticamente per il riquadro.  
  
```  
virtual UINT GetAHSlideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `UINT` che specifica la modalità di presentazione Nascondi automaticamente per il riquadro. Il valore restituito può essere `AFX_AHSM_MOVE` o `AFX_AHSM_STRETCH`, ma utilizza solo l'implementazione `AFX_AHSM_MOVE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcaptionheighta--cdockablepanegetcaptionheight"></a><a name="getcaptionheight"></a>CDockablePane::GetCaptionHeight  
 Restituisce l'altezza, in pixel, della didascalia corrente.  
  
```  
virtual int GetCaptionHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza della didascalia, in pixel.  
  
### <a name="remarks"></a>Note  
 Altezza della didascalia è 0 se la didascalia nascosto mediante il [CDockablePane::EnableGripper](#enablegripper) (metodo), o se il riquadro non dispone di una didascalia.  
  
##  <a name="a-namegetdefaultpanedividera--cdockablepanegetdefaultpanedivider"></a><a name="getdefaultpanedivider"></a>CDockablePane::GetDefaultPaneDivider  
 Restituisce il divisore di riquadro predefinito per il contenitore del riquadro.  
  
```  
CPaneDivider* GetDefaultPaneDivider() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valido [CPaneDivider](../../mfc/reference/cpanedivider-class.md) oggetto se il riquadro ancorato viene ancorato nella finestra cornice principale, o `NULL` se non è ancorato riquadro ancorato o se è mobile.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su divisori di riquadro, vedere [CPaneDivider classe](../../mfc/reference/cpanedivider-class.md).  
  
##  <a name="a-namegetdockingstatusa--cdockablepanegetdockingstatus"></a><a name="getdockingstatus"></a>CDockablePane::GetDockingStatus  
 Determina la capacità di un riquadro ancorato in base alla posizione del puntatore fornito.  
  
```  
virtual AFX_CS_STATUS GetDockingStatus(
    CPoint pt,  
    int nSensitivity);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Posizione del puntatore nelle coordinate dello schermo.  
  
 [in] `nSensitivity`  
 La distanza in pixel, dal bordo di un rettangolo il puntatore deve essere per attivare l'ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di stato seguenti:  
  
|Valore di `AFX_CS_STATUS`|Significato|  
|---------------------------|-------------|  
|`CS_NOTHING`|Il puntatore non è presente su un sito di ancoraggio. Il framework non ancorare il riquadro.|  
|`CS_DOCK_IMMEDIATELY`|Il puntatore è posizionato sopra il sito di ancoraggio in modalità immediata (nel riquadro viene utilizzato il `DT_IMMEDIATE` modalità di ancoraggio). Il riquadro viene ancorato immediatamente il framework.|  
|`CS_DELAY_DOCK`|Il puntatore è su un sito di ancoraggio che è un altro riquadro ancorato di tipo o un bordo della cornice principale. Il framework, il riquadro viene ancorato dopo un ritardo. Vedere la sezione Osservazioni per ulteriori informazioni su questo ritardo.|  
|`CS_DELAY_DOCK_TO_TAB`|Il puntatore è posizionato su un sito di ancoraggio che causa il riquadro per essere inserito in una finestra a schede. Ciò si verifica quando il puntatore si trova la didascalia di un altro riquadro ancorato o l'area della scheda di un riquadro a schede.|  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per gestire l'ancoraggio di un riquadro mobile.  
  
 Barre degli strumenti mobili o ancoraggio riquadri che utilizzano il `DT_IMMEDIATE` ancoraggio modalità, il framework ritarda il comando di ancoraggio per consentire all'utente di spostare la finestra all'esterno dell'area client del frame padre prima di ancoraggio. La lunghezza del ritardo è misurata in millisecondi e viene controllata dalla [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) (membro dati)... Il valore predefinito di [CDockingManager::m_nTimeOutBeforeToolBarDock](../../mfc/reference/cdockingmanager-class.md#m_ntimeoutbeforetoolbardock) è 200. Questo comportamento emula il comportamento di ancoraggio [!INCLUDE[ofprword](../../mfc/reference/includes/ofprword_md.md)] 2007.  
  
 Per ritardato ancoraggio stati ( `CS_DELAY_DOCK` e `CS_DELAY_DOCK_TO_TAB`), il framework non esegue l'ancoraggio fino a quando l'utente rilascia il pulsante del mouse. Se viene utilizzato un riquadro di `DT_STANDARD` ancoraggio modalità, il framework visualizza un rettangolo in corrispondenza della posizione di ancoraggio proiettata. Se viene utilizzato un riquadro di `DT_SMART` ancoraggio modalità, il framework Visualizza marcatori di ancoraggio e rettangoli semi-trasparenti in corrispondenza della posizione di ancoraggio proiettata. Per specificare la modalità di ancoraggio del riquadro, chiamare il [CBasePane::SetDockingMode](../../mfc/reference/cbasepane-class.md#setdockingmode) metodo. Per ulteriori informazioni su ancoraggio intelligente, vedere [CDockingManager::GetSmartDockingParams](../../mfc/reference/cdockingmanager-class.md#getsmartdockingparams).  
  
##  <a name="a-namegetdragsensitivitya--cdockablepanegetdragsensitivity"></a><a name="getdragsensitivity"></a>CDockablePane::GetDragSensitivity  
 Restituisce la sensibilità del trascinamento di un riquadro ancorato.  
  
```  
static const CSize& GetDragSensitivity();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la larghezza e altezza, in pixel, di un rettangolo centrato su un punto di trascinamento. L'operazione di trascinamento non inizia fino a quando il puntatore del mouse viene spostato all'esterno di questo rettangolo.  
  
##  <a name="a-namegetlastpercentinpanecontainera--cdockablepanegetlastpercentinpanecontainer"></a><a name="getlastpercentinpanecontainer"></a>CDockablePane::GetLastPercentInPaneContainer  
 Recupera la percentuale di spazio che occupa un riquadro relativo contenitore ( [CPaneContainer classe](../../mfc/reference/cpanecontainer-class.md)).  
  
```  
int GetLastPercentInPaneContainer() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `int` che specifica la percentuale di spazio occupata dal riquadro relativo contenitore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato quando il contenitore viene regolato il layout.  
  
##  <a name="a-namegettabareaa--cdockablepanegettabarea"></a><a name="gettabarea"></a>CDockablePane::GetTabArea  
 Recupera l'area della scheda per il riquadro.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectTabAreaTop`  
 `GetTabArea`Riempie la variabile con l'area della scheda se le schede nella parte superiore del riquadro. Se le schede nella parte inferiore del riquadro, questa variabile viene riempita con un rettangolo vuoto.  
  
 [in] `rectTabAreaBottom`  
 `GetTabArea`Riempie la variabile con l'area della scheda se le schede nella parte inferiore del riquadro. Se le schede nella parte superiore del riquadro, questa variabile viene riempita con un rettangolo vuoto.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato solo nelle classi che derivano da `CDockablePane` e schede. Per ulteriori informazioni, vedere [CTabbedPane::GetTabArea](../../mfc/reference/ctabbedpane-class.md#gettabarea) e [CMFCOutlookBar::GetTabArea](../../mfc/reference/cmfcoutlookbar-class.md#gettabarea).  
  
##  <a name="a-namegettabbedpanertca--cdockablepanegettabbedpanertc"></a><a name="gettabbedpanertc"></a>CDockablePane::GetTabbedPaneRTC  
 Restituisce le informazioni sulla classe di runtime su una finestra a schede che viene creata quando un altro riquadro ancorato al riquadro corrente.  
  
```  
CRuntimeClass* GetTabbedPaneRTC() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le informazioni sulla classe di runtime per il riquadro ancorato.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare le informazioni sulla classe di runtime per i riquadri a schede che vengono creati dinamicamente. Ciò può verificarsi quando un utente trascina un riquadro per la didascalia di un altro riquadro, o se si chiama il [CDockablePane::AttachToTabWnd](#attachtotabwnd) creare a livello di codice in un riquadro a schede da due riquadri ancorabili.  
  
 È possibile impostare le informazioni sulla classe di runtime chiamando il [CDockablePane::SetTabbedPaneRTC](#settabbedpanertc) metodo.  
  
##  <a name="a-namehasautohidemodea--cdockablepanehasautohidemode"></a><a name="hasautohidemode"></a>CDockablePane::HasAutoHideMode  
 Specifica se è possibile passare alla modalità Nascondi automaticamente un riquadro ancorato.  
  
```  
virtual BOOL HasAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato è possibile passare alla modalità Nascondi automaticamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata per disabilitare la modalità Nascondi automaticamente per un riquadro ancorata.  
  
##  <a name="a-namehittesta--cdockablepanehittest"></a><a name="hittest"></a>CDockablePane::HitTest  
 Specifica il percorso in un riquadro in cui l'utente fa clic del mouse.  
  
```  
virtual int HitTest(
    CPoint point,  
    BOOL bDetectCaption = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Specifica il punto da verificare.  
  
 [in] `bDetectCaption`  
 `TRUE`Se `HTCAPTION` deve essere restituito se il punto è sul titolo del riquadro; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
- `HTNOWHERE`Se `point` non è presente nel riquadro ancorato.  
  
- `HTCLIENT`Se `point` è nell'area client del riquadro ancorato.  
  
- `HTCAPTION`Se `point` è nell'area della didascalia del riquadro ancorato.  
  
- `AFX_HTCLOSE`Se `point` è attivato il pulsante chiude.  
  
- `HTMAXBUTTON`Se `point` è attivato il pulsante pin.  
  
##  <a name="a-nameisautohideallenableda--cdockablepaneisautohideallenabled"></a><a name="isautohideallenabled"></a>CDockablePane::IsAutohideAllEnabled  
 Indica se il riquadro ancorato e tutti gli altri riquadri nel contenitore possono essere attivati in modalità Nascondi automaticamente.  
  
```  
virtual BOOL IsAutohideAllEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato e tutti gli altri riquadri nel contenitore, è possono passare alla modalità Nascondi automaticamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Un utente attiva la modalità Nascondi automaticamente fare clic sul pulsante pin ancoraggio tenendo premuto il tasto di **Ctrl** chiave  
  
 Per abilitare o disabilitare questo comportamento, chiamare il [CDockablePane::EnableAutohideAll](#enableautohideall) metodo.  
  
##  <a name="a-nameisautohidemodea--cdockablepaneisautohidemode"></a><a name="isautohidemode"></a>CDockablePane::IsAutoHideMode  
 Determina se un riquadro è in modalità Nascondi automaticamente.  
  
```  
virtual BOOL IsAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato è in modalità Nascondi automaticamente. in caso contrario, `FALSE`.  
  
##  <a name="a-nameisdockeda--cdockablepaneisdocked"></a><a name="isdocked"></a>CDockablePane::IsDocked  
 Determina se il riquadro corrente è ancorato.  
  
```  
virtual BOOL IsDocked() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato non appartiene a una finestra mini o se è mobile all'interno una finestra con un altro riquadro. `FALSE`Se il riquadro è un figlio di una finestra mini e sono non disponibili altri riquadri che appartengono alla finestra mini.  
  
### <a name="remarks"></a>Note  
 Per determinare se il riquadro viene ancorato alla finestra cornice principale, chiamare [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider). Se il metodo restituisce un puntatore diverso da NULL, il riquadro è ancorato alla finestra cornice principale.  
  
##  <a name="a-nameishideinautohidemodea--cdockablepaneishideinautohidemode"></a><a name="ishideinautohidemode"></a>CDockablePane::IsHideInAutoHideMode  
 Determina il comportamento di un riquadro che è in modalità Nascondi automaticamente se viene visualizzato (o nascosto) chiamando [CDockablePane::ShowPane](#showpane).  
  
```  
virtual BOOL IsHideInAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato deve essere nascosto quando in modalità Nascondi automaticamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro ancorato è in modalità Nascondi automaticamente, si comporta in modo diverso quando si chiama `ShowPane` per mostrare o nascondere il riquadro. Questo comportamento è controllato da un membro statico [CDockablePane::m_bHideInAutoHideMode](#m_bhideinautohidemode). Se questo membro è `TRUE`, nel riquadro ancorato e la barra degli strumenti correlati Nascondi automaticamente o pulsante Nascondi automaticamente viene visualizzata o nascosta quando si chiama `ShowPane`. In caso contrario, il riquadro ancorato è attivato o disattivato e la barra degli strumenti Nascondi automaticamente correlati o un pulsante Nascondi automaticamente è sempre visibile.  
  
 L'override del metodo in una classe derivata per modificare il comportamento predefinito per i singoli riquadri.  
  
 Il valore predefinito per la proprietà `m_bHideInAutoHideMode` è `FALSE`.  
  
##  <a name="a-nameisinfloatingmultipaneframewnda--cdockablepaneisinfloatingmultipaneframewnd"></a><a name="isinfloatingmultipaneframewnd"></a>CDockablePane::IsInFloatingMultiPaneFrameWnd  
 Specifica se il riquadro è in una finestra cornice a più riquadri ( [CMultiPaneFrameWnd classe](../../mfc/reference/cmultipaneframewnd-class.md)).  
  
```  
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro in una finestra cornice a più riquadri. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisresizablea--cdockablepaneisresizable"></a><a name="isresizable"></a>CDockablePane::IsResizable  
 Specifica se il riquadro è ridimensionabile.  
  
```  
virtual BOOL IsResizable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è ridimensionabile. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i riquadri ancorabili sono ridimensionabili. Per evitare il ridimensionamento, l'override del metodo in una classe derivata e restituire `FALSE`. Si noti che un `FALSE` valore comporta un errore `ASSERT` in [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane). Utilizzare [CDockingManager::AddPane](../../mfc/reference/cdockingmanager-class.md#addpane) invece per ancorare un riquadro all'interno di un frame principale.  
  
 Non è possibile che non possono essere ridimensionati float né attivare la modalità Nascondi automaticamente e sono sempre posizionati all'esterno del frame padre.  
  
##  <a name="a-nameistablocationbottoma--cdockablepaneistablocationbottom"></a><a name="istablocationbottom"></a>CDockablePane::IsTabLocationBottom  
 Specifica se le schede si trovano all'inizio o alla parte inferiore del riquadro.  
  
```  
virtual BOOL IsTabLocationBottom() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se le schede nella parte inferiore del riquadro. `FALSE` se le schede nella parte superiore del riquadro.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [CTabbedPane::IsTabLocationBottom](../../mfc/reference/ctabbedpane-class.md#istablocationbottom).  
  
##  <a name="a-nameistrackeda--cdockablepaneistracked"></a><a name="istracked"></a>CDockablePane::IsTracked  
 Specifica se un riquadro viene spostato dall'utente.  
  
```  
BOOL IsTracked() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro di spostamento; in caso contrario, `FALSE`.  
  
##  <a name="a-nameisvisiblea--cdockablepaneisvisible"></a><a name="isvisible"></a>CDockablePane::IsVisible  
 Determina se il riquadro corrente è visibile.  
  
```  
virtual BOOL IsVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro ancorato è visibile; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare se un riquadro ancorato è visibile. È possibile utilizzare questo metodo anziché chiamare [CWnd::IsWindowVisible](../../mfc/reference/cwnd-class.md#iswindowvisible) o di test per il `WS_VISIBLE` stile. Lo stato di visibilità restituito dipende dal se modalità Nascondi automaticamente è abilitata o disabilitata e il valore di [CDockablePane::IsHideInAutoHideMode](#ishideinautohidemode) proprietà.  
  
 Se il riquadro ancorato è in modalità Nascondi automaticamente e `IsHideInAutoHideMode` restituisce `FALSE` lo stato di visibilità è sempre `FALSE`.  
  
 Se il riquadro ancorato è in modalità Nascondi automaticamente e `IsHideInAutoHideMode` restituisce `TRUE` lo stato di visibilità dipende lo stato di visibilità della barra degli strumenti correlati Nascondi automaticamente.  
  
 Se il riquadro ancorato non è in modalità Nascondi automaticamente, lo stato di visibilità è determinato dal [CBasePane::IsVisible](../../mfc/reference/cbasepane-class.md#isvisible) metodo.  
  
##  <a name="a-namembdisableanimationa--cdockablepanembdisableanimation"></a><a name="m_bdisableanimation"></a>CDockablePane::m_bDisableAnimation  
 Specifica se l'animazione Nascondi del riquadro ancorato è disabilitato.  
  
```  
AFX_IMPORT_DATA static BOOL m_bDisableAnimation;  
```  
  
##  <a name="a-namembhideinautohidemodea--cdockablepanembhideinautohidemode"></a><a name="m_bhideinautohidemode"></a>CDockablePane::m_bHideInAutoHideMode  
 Determina il comportamento del riquadro quando il riquadro è in modalità Nascondi automaticamente.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHideInAutoHideMode;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore influisce su tutti i riquadri ancorati nell'applicazione.  
  
 Se questo membro è impostato su `TRUE`, riquadri ancorabili sono nascosti o visualizzati con i pulsanti e barre degli strumenti correlati Nascondi automaticamente quando si chiama [CDockablePane::ShowPane](#showpane).  
  
 Se questo membro è impostato su `FALSE`, riquadri ancorabili sono attivati o disattivati quando si chiama [CDockablePane::ShowPane](#showpane).  
  
##  <a name="a-namemnslidestepsa--cdockablepanemnslidesteps"></a><a name="m_nslidesteps"></a>CDockablePane::m_nSlideSteps  
 Specifica la velocità dell'animazione del riquadro quando è in modalità Nascondi automaticamente.  
  
```  
AFX_IMPORT_DATA static int m_nSlideSteps;  
```  
  
### <a name="remarks"></a>Note  
 Per un effetto animazione più veloce, ridurre questo valore. Per un effetto animazione più lento, aumentare questo valore.  
  
##  <a name="a-nameonafterchangeparenta--cdockablepaneonafterchangeparent"></a><a name="onafterchangeparent"></a>CDockablePane::OnAfterChangeParent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndOldParent`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonafterdockfromminiframea--cdockablepaneonafterdockfromminiframe"></a><a name="onafterdockfromminiframe"></a>CDockablePane::OnAfterDockFromMiniFrame  
 Chiamato dal framework quando una barra ancorabile a virgola mobile viene ancorato in una finestra cornice.  
  
```  
virtual void OnAfterDockFromMiniFrame();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo non esegue alcuna operazione.  
  
##  <a name="a-nameonbeforechangeparenta--cdockablepaneonbeforechangeparent"></a><a name="onbeforechangeparent"></a>CDockablePane::OnBeforeChangeParent  
 Il framework chiama questo metodo prima di modificare l'elemento padre del riquadro.  
  
```  
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,  
    BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndNewParent`  
 Un puntatore a una nuova finestra padre.  
  
 [in] `bDelay`  
 `BOOL`che specifica se vuoi ritardare il ricalcolo del layout di ancoraggio se il riquadro è ancorato. Per ulteriori informazioni, vedere [CDockablePane::UndockPane](#undockpane).  
  
### <a name="remarks"></a>Note  
 Se il riquadro ancorato e il nuovo elemento padre non consente l'ancoraggio, questo metodo ancorate nel riquadro.  
  
 Se il riquadro viene convertito in un documento a schede, questo metodo archivia la posizione di ancoraggio recenti. Il framework utilizza la posizione di ancoraggio recenti per ripristinare la posizione del riquadro quando viene convertito nuovamente in alloggiamento.  
  
##  <a name="a-nameonbeforefloata--cdockablepaneonbeforefloat"></a><a name="onbeforefloat"></a>CDockablePane::OnBeforeFloat  
 Il framework chiama questo metodo prima di un riquadro transizioni a uno stato a virgola mobile.  
  
```  
virtual BOOL OnBeforeFloat(
    CRect& rectFloat,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectFloat`  
 Specifica la posizione e le dimensioni del riquadro quando è in uno stato a virgola mobile.  
  
 [in] `dockMethod`  
 Specifica il metodo di ancoraggio. Vedere [CPane::DockPane](../../mfc/reference/cpane-class.md#dockpane) per un elenco di valori possibili.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro può essere spostato; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un riquadro è float. È possibile eseguire l'override di questo metodo in una classe derivata se si desidera eseguire l'elaborazione prima che il riquadro mobile.  
  
##  <a name="a-nameonpressbuttonsa--cdockablepaneonpressbuttons"></a><a name="onpressbuttons"></a>CDockablePane::OnPressButtons  
 Chiamato quando l'utente preme un pulsante della didascalia oltre il `AFX_HTCLOSE` e `AFX_HTMAXBUTTON` pulsanti.  
  
```  
virtual void OnPressButtons(UINT nHit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nHit`  
 Questo parametro non viene usato.  
  
### <a name="remarks"></a>Note  
 Se si aggiunge un pulsante personalizzato per la didascalia di un riquadro ancorata, eseguire l'override di questo metodo per ricevere notifiche quando un utente preme il pulsante.  
  
##  <a name="a-nameonslidea--cdockablepaneonslide"></a><a name="onslide"></a>CDockablePane::OnSlide  
 Chiamato dal framework per animare il riquadro quando è in modalità Nascondi automaticamente.  
  
```  
virtual void OnSlide(BOOL bSlideOut);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSlideOut`  
 `TRUE`Per visualizzare il riquadro attività. `FALSE` per nascondere il riquadro.  
  
### <a name="remarks"></a>Note  
 L'override del metodo in una classe derivata per implementare gli effetti personalizzati Nascondi automaticamente.  
  
##  <a name="a-nameremovefromdefaultpanedividiera--cdockablepaneremovefromdefaultpanedividier"></a><a name="removefromdefaultpanedividier"></a>CDockablePane::RemoveFromDefaultPaneDividier  
 Il framework chiama questo metodo quando un riquadro è viene disinserito.  
  
```  
void RemoveFromDefaultPaneDividier();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta il divisore di riquadro predefinito `NULL` e rimuove il riquadro del contenitore.  
  
##  <a name="a-namereplacepanea--cdockablepanereplacepane"></a><a name="replacepane"></a>CDockablePane::ReplacePane  
 Sostituisce il riquadro con un riquadro specificato.  
  
```  
BOOL ReplacePane(
    CDockablePane* pBarToReplaceWith,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bRegisterWithFrame = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarToReplaceWith`  
 Un puntatore a un riquadro ancorato.  
  
 [in] `dockMethod`  
 Non usato.  
  
 [in] `bRegisterWithFrame`  
 Se `TRUE`, il nuovo riquadro viene registrato nel gestore di ancoraggio dell'elemento padre del riquadro precedente. Il nuovo riquadro viene inserito in corrispondenza dell'indice del riquadro precedente nell'elenco dei riquadri gestito dal gestore di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la sostituzione ha esito positivo; in caso contrario, `FALSE`.  
  
##  <a name="a-namerestoredefaultpanedividera--cdockablepanerestoredefaultpanedivider"></a><a name="restoredefaultpanedivider"></a>CDockablePane::RestoreDefaultPaneDivider  
 Quando un riquadro viene deserializzato, il framework chiama questo metodo per ripristinare il divisore di riquadro predefinito.  
  
```  
void RestoreDefaultPaneDivider();
```  
  
### <a name="remarks"></a>Note  
 Il divisore di riquadro predefinito ripristinato sostituisce il divisore di riquadro predefinito corrente, se presente.  
  
##  <a name="a-namesetautohidemodea--cdockablepanesetautohidemode"></a><a name="setautohidemode"></a>CDockablePane::SetAutoHideMode  
 Attiva o disattiva il riquadro ancorato tra visibile e modalità Nascondi automaticamente.  
  
```  
virtual CMFCAutoHideBar* SetAutoHideMode(
    BOOL bMode,  
    DWORD dwAlignment,  
    CMFCAutoHideBar* pCurrAutoHideBar = NULL,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMode`  
 `TRUE`Per attivare la modalità Nascondi automaticamente; `FALSE` per abilitare la modalità di ancoraggio regolari.  
  
 [in] `dwAlignment`  
 Specifica l'allineamento del riquadro Nascondi automaticamente per creare.  
  
 [in] [out]`pCurrAutoHideBar`  
 Un puntatore a barra degli strumenti corrente Nascondi automaticamente. Può essere `NULL`.  
  
 [in] `bUseTimer`  
 Specifica se utilizzare l'effetto Nascondi automaticamente quando l'utente attiva il riquadro di modalità Nascondi automaticamente o per nascondere il riquadro immediatamente.  
  
### <a name="return-value"></a>Valore restituito  
 Nascondi barra degli strumenti che è stato creato come risultato di passare alla modalità Nascondi automaticamente, o `NULL`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un utente fa clic sul pulsante pin per passare il riquadro ancorato alla modalità Nascondi automaticamente o alla modalità di ancoraggio normale.  
  
 Chiamare questo metodo per passare a livello di codice in modalità Nascondi automaticamente un riquadro ancorato. Il riquadro deve essere ancorato nella finestra cornice principale ( [CDockablePane::GetDefaultPaneDivider](#getdefaultpanedivider) deve restituire un puntatore valido per il [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).  
  
##  <a name="a-namesetautohideparentsa--cdockablepanesetautohideparents"></a><a name="setautohideparents"></a>CDockablePane::SetAutoHideParents  
 Imposta il pulsante Nascondi automaticamente e Nascondi barra degli strumenti del riquadro.  
  
```  
void SetAutoHideParents(
    CMFCAutoHideBar* pToolBar,  
    CMFCAutoHideButton* pBtn);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pToolBar`  
 Puntatore a una barra degli strumenti Nascondi automaticamente.  
  
 [in] `pBtn`  
 Puntatore a un pulsante Nascondi automaticamente.  
  
##  <a name="a-namesetlastpercentinpanecontainera--cdockablepanesetlastpercentinpanecontainer"></a><a name="setlastpercentinpanecontainer"></a>CDockablePane::SetLastPercentInPaneContainer  
 Imposta la percentuale di spazio che occupa un riquadro relativo contenitore.  
  
```  
void SetLastPercentInPaneContainer(int n);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `n`  
 Un `int` che specifica la percentuale di spazio occupata dal riquadro relativo contenitore.  
  
### <a name="remarks"></a>Note  
 Il framework consente di regolare il riquadro per utilizzare il nuovo valore quando il layout viene ricalcolato.  
  
##  <a name="a-namesetrestoreddefaultpanedividera--cdockablepanesetrestoreddefaultpanedivider"></a><a name="setrestoreddefaultpanedivider"></a>CDockablePane::SetRestoredDefaultPaneDivider  
 Imposta il divisore di riquadro predefinito ripristinato.  
  
```  
void SetRestoredDefaultPaneDivider(HWND hRestoredSlider);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hRestoredSlider`  
 Handle per un divisore di riquadro (cursore).  
  
### <a name="remarks"></a>Note  
 Viene ottenuto un divisore di riquadro predefinito ripristinato quando viene deserializzato un riquadro. Per ulteriori informazioni, vedere [CDockablePane::RestoreDefaultPaneDivider](#restoredefaultpanedivider).  
  
##  <a name="a-namesettabbedpanertca--cdockablepanesettabbedpanertc"></a><a name="settabbedpanertc"></a>CDockablePane::SetTabbedPaneRTC  
 Imposta le informazioni sulla classe di runtime per una finestra a schede che viene creata quando due riquadri ancorare insieme.  
  
```  
void SetTabbedPaneRTC(CRuntimeClass* pRTC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pRTC`  
 Le informazioni sulla classe di runtime per il riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare le informazioni sulla classe di runtime per i riquadri a schede che vengono creati dinamicamente. Ciò può verificarsi quando un utente trascina un riquadro per la didascalia di un altro riquadro, o se si chiama il [CDockablePane::AttachToTabWnd](#attachtotabwnd) creare a livello di codice in un riquadro a schede da due riquadri ancorabili.  
  
 La classe di runtime predefinita è impostata in base al `dwTabbedStyle` parametro di [CDockablePane::Create](#create) e [CDockablePane::CreateEx](#createex). Per personalizzare le nuove schede, derivare la classe da una delle seguenti classi:  
  
- [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
- [Classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md)  
  
- [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Quindi, chiamare questo metodo con il puntatore per le informazioni sulle classi di runtime.  
  
##  <a name="a-nameshowpanea--cdockablepaneshowpane"></a><a name="showpane"></a>CDockablePane::ShowPane  
 Mostra o nasconde un riquadro.  
  
```  
virtual void ShowPane(
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 `TRUE`Per visualizzare il riquadro attività. `FALSE` per nascondere il riquadro.  
  
 [in] `bDelay`  
 `TRUE`Per ritardare modificando il layout di ancoraggio; `FALSE` per modificare il layout di ancoraggio immediatamente.  
  
 [in] `bActivate`  
 `TRUE`Per attivare il riquadro quando viene visualizzata; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo anziché il [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) quando mostrare o nascondere i riquadri ancorabili.  
  
##  <a name="a-nameslidea--cdockablepaneslide"></a><a name="slide"></a>CDockablePane::Slide  
 Aggiunge un'animazione a un riquadro che si trova in modalità Nascondi automaticamente.  
  
```  
virtual void Slide(
    BOOL bSlideOut,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSlideOut`  
 `TRUE`Per visualizzare il riquadro attività. `FALSE` per nascondere il riquadro.  
  
 [in] `bUseTimer`  
 `TRUE`Per visualizzare o nascondere il riquadro con effetto Nascondi automaticamente. `FALSE` per mostrare o nascondere il riquadro immediatamente.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per aggiungere un'animazione a un riquadro che si trova in modalità Nascondi automaticamente.  
  
 Questo metodo utilizza il `CDockablePane::m_nSlideDefaultTimeOut` valore per determinare il valore di timeout per l'effetto diapositiva. Il valore predefinito per il valore di timeout è 1. Se si personalizza l'algoritmo Nascondi automaticamente, è possibile modificare questo membro per modificare il valore di timeout.  
  
##  <a name="a-nametoggleautohidea--cdockablepanetoggleautohide"></a><a name="toggleautohide"></a>CDockablePane::ToggleAutoHide  
 Attiva o disattiva il riquadro tra sempre visibile e la modalità Nascondi automaticamente.  
  
```  
virtual void ToggleAutoHide();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo disattiva la modalità Nascondi automaticamente per il riquadro chiamando [CDockablePane::SetAutoHideMode](#setautohidemode).  
  
##  <a name="a-nameundockpanea--cdockablepaneundockpane"></a><a name="undockpane"></a>CDockablePane::UndockPane  
 Cornice un riquadro da un contenitore di finestra mini o finestra cornice principale.  
  
```  
virtual void UndockPane(BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDelay`  
 `TRUE`Per ritardare il calcolo del layout di ancoraggio; `FALSE` per ricalcolare il layout di ancoraggio immediatamente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per rilasciare un riquadro nella finestra cornice principale o da un contenitore di finestra multi-mini (un riquadro mobile all'unica finestra con gli altri riquadri).  
  
 È necessario annullare l'ancoraggio un riquadro prima di eseguire qualsiasi operazione esterna che non viene eseguita dal [CDockingManager](../../mfc/reference/cdockingmanager-class.md). Ad esempio, è necessario disancorare un riquadro per spostarlo a livello di codice da una posizione a altra.  
  
 Il framework ancorate automaticamente riquadri prima vengono eliminati.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)

