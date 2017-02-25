---
title: "CDockablePane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockablePane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockablePane class"
ms.assetid: e2495f4c-765f-48f9-a2e2-e45e47608d91
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CDockablePane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un riquadro che può essere ancorato in un sito di ancoraggio o essere incluso nel riquadro a schede.  
  
## Sintassi  
  
```  
class CDockablePane : public CPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::CDockablePane](../Topic/CDockablePane::CDockablePane.md)|Costrutti e inizializza un oggetto `CDockablePane`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md)|Associa un riquadro a un altro riquadro.  Verrà creato un riquadro a schede.|  
|[CDockablePane::CalcFixedLayout](../Topic/CDockablePane::CalcFixedLayout.md)|Restituisce le dimensioni del rettangolo del riquadro.|  
|[CDockablePane::CanAcceptMiniFrame](../Topic/CDockablePane::CanAcceptMiniFrame.md)|Determina se il frame specificato mini può essere ancorato al riquadro.|  
|[CDockablePane::CanAcceptPane](../Topic/CDockablePane::CanAcceptPane.md)|Determina se un altro riquadro può essere ancorato al riquadro corrente.|  
|[CDockablePane::CanAutoHide](../Topic/CDockablePane::CanAutoHide.md)|Determina se il riquadro supporta la modalità nascondi automaticamente.  \(Override [CBasePane::CanAutoHide](../Topic/CBasePane::CanAutoHide.md)\).|  
|[CDockablePane::CanBeAttached](../Topic/CDockablePane::CanBeAttached.md)|Determina se il riquadro corrente può essere ancorata a un altro riquadro.|  
|[CDockablePane::ConvertToTabbedDocument](../Topic/CDockablePane::ConvertToTabbedDocument.md)|Converte una o più riquadri ancorabili a documenti a schede MDI.|  
|[CDockablePane::CopyState](../Topic/CDockablePane::CopyState.md)|Copiare lo stato di un riquadro ancorabile.|  
|[CDockablePane::Create](../Topic/CDockablePane::Create.md)|Crea il controllo Windows e lo aggiunge all'oggetto `CDockablePane`.|  
|[CDockablePane::CreateDefaultPaneDivider](../Topic/CDockablePane::CreateDefaultPaneDivider.md)|Crea un separatore predefinito del riquadro di un ancoraggio in una finestra cornice.|  
|[CDockablePane::CreateEx](../Topic/CDockablePane::CreateEx.md)|Crea il controllo Windows e lo aggiunge all'oggetto `CDockablePane`.|  
|[CDockablePane::CreateTabbedPane](../Topic/CDockablePane::CreateTabbedPane.md)|Crea un riquadro a schede nel riquadro corrente.|  
|[CDockablePane::DockPaneContainer](../Topic/CDockablePane::DockPaneContainer.md)|Un contenitore al riquadro.|  
|[CDockablePane::DockPaneStandard](../Topic/CDockablePane::DockPaneStandard.md)|Un riquadro utilizzando l'ancoraggio della struttura \(standard\).|  
|`CDockablePane::DockToFrameWindow`|Per uso interno.  Per ancorare un riquadro, utilizzare [CPane::DockPane](../Topic/CPane::DockPane.md) o [CDockablePane::DockToWindow](../Topic/CDockablePane::DockToWindow.md).|  
|[CDockablePane::DockToRecentPos](../Topic/CDockablePane::DockToRecentPos.md)|Un riquadro nella posizione memorizzata recente di ancoraggio.|  
|[CDockablePane::DockToWindow](../Topic/CDockablePane::DockToWindow.md)|Ancoraggio un riquadro ancorato a un altro riquadro ancorato.|  
|[CDockablePane::EnableAutohideAll](../Topic/CDockablePane::EnableAutohideAll.md)|Abilita o disabilita la modalità nascondi automaticamente per questo riquadro con altri riquadri nel contenitore.|  
|[CDockablePane::EnableGripper](../Topic/CDockablePane::EnableGripper.md)|Consente di visualizzare o nascondere la barra del titolo \(pinza di rimozione\).|  
|[CDockablePane::GetAHRestoredRect](../Topic/CDockablePane::GetAHRestoredRect.md)|Specifica la posizione del riquadro una volta visibile in modalità nascondi automaticamente.|  
|[CDockablePane::GetAHSlideMode](../Topic/CDockablePane::GetAHSlideMode.md)|Recupera la modalità automatica della diapositiva nascondi per il riquadro.|  
|`CDockablePane::GetAutoHideButton`|Per uso interno.|  
|`CDockablePane::GetAutoHideToolBar`|Per uso interno.|  
|[CDockablePane::GetCaptionHeight](../Topic/CDockablePane::GetCaptionHeight.md)|Restituisce l'altezza della didascalia corrente.|  
|[CDockablePane::GetDefaultPaneDivider](../Topic/CDockablePane::GetDefaultPaneDivider.md)|Restituisce il separatore predefinito del riquadro per il contenitore del riquadro.|  
|[CDockablePane::GetDockingStatus](../Topic/CDockablePane::GetDockingStatus.md)|Determina la capacità di un riquadro di essere ancorata in base alla posizione specificata del puntatore.|  
|[CDockablePane::GetDragSensitivity](../Topic/CDockablePane::GetDragSensitivity.md)|Restituisce la sensibilità del trascinamento di un riquadro ancorato.|  
|[CDockablePane::GetLastPercentInPaneContainer](../Topic/CDockablePane::GetLastPercentInPaneContainer.md)|Recupera la percentuale di spazio che un riquadro occupa nel relativo contenitore.|  
|[CDockablePane::GetTabArea](../Topic/CDockablePane::GetTabArea.md)|Recupera l'area della scheda del riquadro.|  
|[CDockablePane::GetTabbedPaneRTC](../Topic/CDockablePane::GetTabbedPaneRTC.md)|Restituisce informazioni di runtime su una finestra a schede creata a un altro riquadro è ancora nel riquadro corrente.|  
|[CDockablePane::HasAutoHideMode](../Topic/CDockablePane::HasAutoHideMode.md)|Specifica se un riquadro ancorato può essere modificato in modalità nascondi automaticamente.|  
|[CDockablePane::HitTest](../Topic/CDockablePane::HitTest.md)|Specifica la posizione specifica nel riquadro in cui l'utente fa clic su un mouse.|  
|`CDockablePane::IsAccessibilityCompatible`|Per uso interno.|  
|[CDockablePane::IsAutohideAllEnabled](../Topic/CDockablePane::IsAutohideAllEnabled.md)|Indica se il riquadro ancorato e tutti gli altri riquadri nel contenitore possono essere inseriti in modalità nascondi automaticamente.|  
|[CDockablePane::IsAutoHideMode](../Topic/CDockablePane::IsAutoHideMode.md)|Determina se un riquadro è in modalità nascondi automaticamente.|  
|`CDockablePane::IsChangeState`|Per uso interno.|  
|[CDockablePane::IsDocked](../Topic/CDockablePane::IsDocked.md)|Determina se il riquadro corrente è ancorato.|  
|[CDockablePane::IsHideInAutoHideMode](../Topic/CDockablePane::IsHideInAutoHideMode.md)|Determina il comportamento di un riquadro in modalità nascondi automaticamente se viene visualizzato o nascosto\) chiamando `ShowPane`.|  
|[CDockablePane::IsInFloatingMultiPaneFrameWnd](../Topic/CDockablePane::IsInFloatingMultiPaneFrameWnd.md)|Specifica se il riquadro è in una finestra cornice a più riquadri.|  
|[CDockablePane::IsResizable](../Topic/CDockablePane::IsResizable.md)|Specifica se il riquadro è ridimensionabile.|  
|[CDockablePane::IsTabLocationBottom](../Topic/CDockablePane::IsTabLocationBottom.md)|Specifica se le schede risiedono nella parte superiore o inferiore del riquadro.|  
|[CDockablePane::IsTracked](../Topic/CDockablePane::IsTracked.md)|Specifica se un riquadro sta trascinando dall'utente.|  
|[CDockablePane::IsVisible](../Topic/CDockablePane::IsVisible.md)|Determina se il riquadro corrente è visibile.|  
|[CDockablePane::LoadState](http://msdn.microsoft.com/it-it/96110136-4f46-4764-8a76-3b4abaf77917)|Per uso interno.|  
|[CDockablePane::OnAfterChangeParent](../Topic/CDockablePane::OnAfterChangeParent.md)|Chiamato dal framework quando il padre di un riquadro di modifica.  \(Override [CPane::OnAfterChangeParent](../Topic/CPane::OnAfterChangeParent.md)\).|  
|[CDockablePane::OnAfterDockFromMiniFrame](../Topic/CDockablePane::OnAfterDockFromMiniFrame.md)|Chiamato dal framework quando ancorato mobili di una barra di ancoraggio in una finestra cornice.|  
|[CDockablePane::OnBeforeChangeParent](../Topic/CDockablePane::OnBeforeChangeParent.md)|Chiamato dal framework quando il padre del riquadro sta la modifica.  \(Override [CPane::OnBeforeChangeParent](../Topic/CPane::OnBeforeChangeParent.md)\).|  
|[CDockablePane::OnBeforeFloat](../Topic/CDockablePane::OnBeforeFloat.md)|Chiamato dal framework quando un riquadro sta in float.  \(Override [CPane::OnBeforeFloat](../Topic/CPane::OnBeforeFloat.md)\).|  
|[CDockablePane::RemoveFromDefaultPaneDividier](../Topic/CDockablePane::RemoveFromDefaultPaneDividier.md)|Il framework chiama questo metodo quando un riquadro è disinserendo come espansione.|  
|[CDockablePane::ReplacePane](../Topic/CDockablePane::ReplacePane.md)|Sostituisce il riquadro con un riquadro specificato.|  
|[CDockablePane::RestoreDefaultPaneDivider](../Topic/CDockablePane::RestoreDefaultPaneDivider.md)|Il framework chiama questo metodo quando un riquadro viene deserializzato per ripristinare il separatore predefinito del riquadro.|  
|`CDockablePane::SaveState`|Per uso interno.|  
|`CDockablePane::Serialize`|Serializza il riquadro.  \(Override `CBasePane::Serialize`\).|  
|[CDockablePane::SetAutoHideMode](../Topic/CDockablePane::SetAutoHideMode.md)|Scorre il riquadro ancorato tra la modalità nascondi automaticamente e visibile.|  
|[CDockablePane::SetAutoHideParents](../Topic/CDockablePane::SetAutoHideParents.md)|Imposta il pulsante Nascondi automaticamente e la barra degli strumenti nascondi automaticamente per il riquadro.|  
|`CDockablePane::SetDefaultPaneDivider`|Per uso interno.|  
|[CDockablePane::SetLastPercentInPaneContainer](../Topic/CDockablePane::SetLastPercentInPaneContainer.md)|Imposta la percentuale di spazio che un riquadro occupa nel relativo contenitore.|  
|`CDockablePane::SetResizeMode`|Per uso interno.|  
|[CDockablePane::SetRestoredDefaultPaneDivider](../Topic/CDockablePane::SetRestoredDefaultPaneDivider.md)|Imposta il separatore predefinito ripristinato il riquadro.|  
|[CDockablePane::SetTabbedPaneRTC](../Topic/CDockablePane::SetTabbedPaneRTC.md)|Imposta le informazioni sulla classe di runtime per una finestra a schede creata quando due riquadri si ancorano raccolta.|  
|[CDockablePane::ShowPane](../Topic/CDockablePane::ShowPane.md)|Mostra o nasconde il riquadro.|  
|[CDockablePane::Slide](../Topic/CDockablePane::Slide.md)|Mostra o nasconde un riquadro con un'animazione scorrere le visualizzazioni solo quando il riquadro è in modalità nascondi automaticamente.|  
|[CDockablePane::ToggleAutoHide](../Topic/CDockablePane::ToggleAutoHide.md)|Modalità nascondi automaticamente di consente di passare.  \(Override [CPane::ToggleAutoHide](../Topic/CPane::ToggleAutoHide.md) \).|  
|[CDockablePane::UndockPane](../Topic/CDockablePane::UndockPane.md)|Disinserisce come espansione un riquadro della finestra cornice principale o da un contenitore della finestra cornice.|  
|`CDockablePane::UnSetAutoHideMode`|Per uso interno.  Per impostare la modalità nascondi automaticamente, utilizzare [CDockablePane::SetAutoHideMode](../Topic/CDockablePane::SetAutoHideMode.md)|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::CheckAutoHideCondition](../Topic/CDockablePane::CheckAutoHideCondition.md)|Determina se il riquadro ancorato viene nascosto \(in modalità nascondi automaticamente\).|  
|[CDockablePane::CheckStopSlideCondition](../Topic/CDockablePane::CheckStopSlideCondition.md)|Determina se un riquadro ancorato nascondi automaticamente dovrebbe smettere di scorrimento.|  
|[CDockablePane::DrawCaption](../Topic/CDockablePane::DrawCaption.md)|Estrae la barra del titolo del riquadro ancorato \(pinza di rimozione\).|  
|[CDockablePane::OnPressButtons](../Topic/CDockablePane::OnPressButtons.md)|Chiamato quando l'utente preme un pulsante della barra del titolo diversi dai pulsanti `AFX_HTMAXBUTTON` e `AFX_HTCLOSE`.|  
|[CDockablePane::OnSlide](../Topic/CDockablePane::OnSlide.md)|Chiamato dal framework per eseguire il rendering dell'effetto della diapositiva nascondi automaticamente quando il riquadro è visualizzato o nascosto.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockablePane::m\_bDisableAnimation](../Topic/CDockablePane::m_bDisableAnimation.md)|Specifica se l'animazione nascondi automaticamente il riquadro ancorabile è disabilitata.|  
|[CDockablePane::m\_bHideInAutoHideMode](../Topic/CDockablePane::m_bHideInAutoHideMode.md)|Determina il comportamento del riquadro quando il riquadro è in modalità nascondi automaticamente.|  
|[CDockablePane::m\_nSlideSteps](../Topic/CDockablePane::m_nSlideSteps.md)|Specifica la velocità di animazione del riquadro quando viene indicanda o nascondere in modalità nascondi automaticamente.|  
  
## Note  
 `CDockablePane` implementa la funzionalità seguenti:  
  
-   Ancoraggio di un riquadro in una finestra cornice principale.  
  
-   Passare una modalità nascondi automaticamente il riquadro.  
  
-   Aggiungere un riquadro a una finestra a schede.  
  
-   Fare e un riquadro in una finestra di cornice.  
  
-   Ancoraggio di un riquadro a un altro riquadro che è mobile in una finestra di cornice.  
  
-   Ridimensionare un riquadro.  
  
-   Stato di salvataggio e caricamento di un riquadro ancorato.  
  
    > [!NOTE]
    >  Le informazioni sullo stato vengono salvate a Windows Registro di sistema.  
  
-   Creare un riquadro con o senza una didascalia.  La barra del titolo sia un'etichetta di testo e può essere soddisfatta di colore sfumato.  
  
-   Trascinare un riquadro e visualizzare il contenuto del riquadro  
  
-   Trascinare un riquadro e visualizzare un rettangolo di trascinamento.  
  
 Per utilizzare un riquadro ancorato nell'applicazione, derivare la classe del riquadro dalla classe `CDockablePane`.  Importare l'oggetto derivato nell'oggetto finestra cornice principale o in un oggetto window controlli che l'istanza del riquadro.  Chiamare il metodo [CDockablePane::Create](../Topic/CDockablePane::Create.md) o il metodo [CDockablePane::CreateEx](../Topic/CDockablePane::CreateEx.md) quando si sviluppa il messaggio `WM_CREATE` la finestra cornice principale.  Infine, impostare l'oggetto del riquadro chiamando [CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md), [CBasePane::DockPane](../Topic/CBasePane::DockPane.md), o [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md).  
  
## Suggerimenti di personalizzazione  
 I seguenti suggerimenti relativi a `CDockablePane` oggetti:  
  
-   Se si chiama [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md) per due non a schede, i riquadri ancorabili, un puntatore a una finestra a schede vengono restituiti nel parametro `ppTabbedControlBar`.  È possibile continuare ad aggiungere le schede nella finestra a schede mediante questo parametro.  
  
-   Il tipo di riquadro a schede creato da [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md) è determinato dall'oggetto `CDockablePane` nel parametro `pTabControlBarAttachTo`.  È possibile chiamare [CDockablePane::SetTabbedPaneRTC](../Topic/CDockablePane::SetTabbedPaneRTC.md) per impostare il tipo di riquadro a schede che `CDockablePane` creerà.  Il tipo predefinito è determinato da `dwTabbedStyle`[CDockablePane::Create](../Topic/CDockablePane::Create.md) quando si crea `CDockablePane`.  Se `dwTabbedStyle` è AFX\_CBRS\_OUTLOOK\_TABS il tipo predefinito è [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md); se `dwTabbedStyle` è AFX\_CBRS\_REGULAR\_TABS il tipo predefinito è [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).  
  
-   Se si desidera ancorare un riquadro ancorabile a un altro, chiamare il metodo [CDockablePane::DockToWindow](../Topic/CDockablePane::DockToWindow.md).  Il riquadro originale deve essere ancorato posizionato prima di chiamare questo metodo.  
  
-   I controlli [CDockablePane::m\_bHideInAutoHideMode](../Topic/CDockablePane::m_bHideInAutoHideMode.md) variabile membro come i riquadri ancorabili si comportano in modo automatico nascosto quando si chiama [CDockablePane::ShowPane](../Topic/CDockablePane::ShowPane.md).  Se questa variabile membro è impostato su `TRUE`, i riquadri ancorabili e i relativi pulsanti automatici nascondi verranno nascosti.  In caso contrario, scorreranno in e out.  
  
-   È possibile disabilitare l'animazione nascondi automaticamente impostando la variabile membro [CDockablePane::m\_bDisableAnimation](../Topic/CDockablePane::m_bDisableAnimation.md) a `TRUE`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come configurare un oggetto `CDockablePane` utilizzando i diversi metodi nella classe `CDockablePane`.  Nell'esempio viene illustrato come abilitare il automatica nascondere tutte le funzionalità del riquadro ancorabile, attivare la barra del titolo o la pinza di controllo, attivare la modalità nascondi automaticamente, visualizzare il riquadro e animarsi un riquadro in modalità nascondi automaticamente.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#27](../../mfc/codesnippet/CPP/cdockablepane-class_1.cpp)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#28](../../mfc/codesnippet/CPP/cdockablepane-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
## Requisiti  
 **intestazione:** afxDockablePane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)