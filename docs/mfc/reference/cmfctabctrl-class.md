---
title: "CMFCTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTabCtrl class"
  - "CMFCTabCtrl constructor"
  - "CMFCTabCtrl::GetTabFromPoint method"
  - "CMFCTabCtrl::IsPtInTabArea method"
  - "CMFCTabCtrl::MoveTab method"
  - "CMFCTabCtrl::PreTranslateMessage method"
  - "CMFCTabCtrl::RecalcLayout method"
  - "CMFCTabCtrl::SwapTabs method"
ms.assetid: d441385d-2c72-4203-96fa-deae2273da35
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CMFCTabCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCTabCtrl` fornisce la funzionalità per un controllo tab.  Il controllo scheda visualizzare una finestra ancorabile con le schede piane o tridimensionali al relativo alto o in basso.  Le schede possono visualizzare testo e un'immagine e possono modificare il colore quando attivo.  
  
## Sintassi  
  
```  
class CMFCTabCtrl : public CMFCBaseTabCtrl  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCTabCtrl::CMFCTabCtrl`|Costruttore predefinito.|  
|`CMFCTabCtrl::~CMFCTabCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTabCtrl::ActivateMDITab](../Topic/CMFCTabCtrl::ActivateMDITab.md)|Visualizzare la scheda specificata di controllo tab corrente e imposta lo stato attivo sulla scheda.|  
|[CMFCTabCtrl::AllowDestroyEmptyTabbedPane](../Topic/CMFCTabCtrl::AllowDestroyEmptyTabbedPane.md)||  
|[CMFCTabCtrl::AutoSizeWindow](../Topic/CMFCTabCtrl::AutoSizeWindow.md)|Specifica se il framework è di ridimensionare l'area client di tutte le finestre di controllo tab quando un elemento dell'interfaccia utente di controllo tab.|  
|[CMFCTabCtrl::CalcRectEdit](../Topic/CMFCTabCtrl::CalcRectEdit.md)|Sgonfia la dimensione dell'area specificata la scheda.  \(Override `CMFCBaseTabCtrl::CalcRectEdit`\).|  
|[CMFCTabCtrl::Create](../Topic/CMFCTabCtrl::Create.md)|Crea il controllo Struttura a schede e lo aggiunge all'oggetto `CMFCTabCtrl`.|  
|`CMFCTabCtrl::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCTabCtrl::EnableActiveTabCloseButton](../Topic/CMFCTabCtrl::EnableActiveTabCloseButton.md)|Mostra o nasconde un pulsante chiudi \(**x**\) nella scheda attiva.|  
|[CMFCTabCtrl::EnableInPlaceEdit](../Topic/CMFCTabCtrl::EnableInPlaceEdit.md)|Abilita o disabilita le etichette modificabili della scheda.  \(Override [CMFCBaseTabCtrl::EnableInPlaceEdit](../Topic/CMFCBaseTabCtrl::EnableInPlaceEdit.md)\).|  
|[CMFCTabCtrl::EnableTabDocumentsMenu](../Topic/CMFCTabCtrl::EnableTabDocumentsMenu.md)|Sostituisce due pulsanti che scorrono le schede della finestra con un pulsante che consente di aprire un menu delle finestre a schede.|  
|[CMFCTabCtrl::EnsureVisible](../Topic/CMFCTabCtrl::EnsureVisible.md)|Verifica che la scheda sia visibile.|  
|[CMFCTabCtrl::GetDocumentIcon](../Topic/CMFCTabCtrl::GetDocumentIcon.md)|Recupera il simbolo associato a una scheda in un menu di scelta rapida delle finestre a schede.|  
|[CMFCTabCtrl::GetFirstVisibleTabNum](../Topic/CMFCTabCtrl::GetFirstVisibleTabNum.md)|Recupera l'indice della prima scheda che è visibile nel controllo Struttura a schede corrente.|  
|[CMFCTabCtrl::GetResizeMode](../Topic/CMFCTabCtrl::GetResizeMode.md)|Recupera un valore che specifica come il controllo scheda corrente può essere ridimensionato.|  
|[CMFCTabCtrl::GetScrollBar](../Topic/CMFCTabCtrl::GetScrollBar.md)|Recupera un puntatore all'oggetto della barra di scorrimento associato al controllo Struttura a schede.|  
|[CMFCTabCtrl::GetTabArea](../Topic/CMFCTabCtrl::GetTabArea.md)|Recupera il rettangolo di delimitazione dell'area dell'etichetta della scheda nella parte superiore o inferiore di controllo tab.  \(Override [CMFCBaseTabCtrl::GetTabArea](../Topic/CMFCBaseTabCtrl::GetTabArea.md)\).|  
|`CMFCTabCtrl::GetTabFromPoint`|Recupera la scheda contenente un punto specificato.  \(Override [CMFCBaseTabCtrl::GetTabFromPoint](../Topic/CMFCBaseTabCtrl::GetTabFromPoint.md)\).|  
|[CMFCTabCtrl::GetTabMaxWidth](../Topic/CMFCTabCtrl::GetTabMaxWidth.md)|Recupera la larghezza massima di una scheda.|  
|[CMFCTabCtrl::GetTabsHeight](../Topic/CMFCTabCtrl::GetTabsHeight.md)|Recupera l'altezza dell'area della scheda di controllo tab corrente.|  
|[CMFCTabCtrl::GetTabsRect](../Topic/CMFCTabCtrl::GetTabsRect.md)|Recupera un rettangolo che limita l'area della scheda di controllo tab corrente.  \(Override [CMFCBaseTabCtrl::GetTabsRect](../Topic/CMFCBaseTabCtrl::GetTabsRect.md)\).|  
|`CMFCTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCTabCtrl::GetWndArea](../Topic/CMFCTabCtrl::GetWndArea.md)|Recupera il limite dell'area client del controllo Struttura a schede corrente.|  
|[CMFCTabCtrl::HideActiveWindowHorzScrollBar](../Topic/CMFCTabCtrl::HideActiveWindowHorzScrollBar.md)|Nasconde la barra di scorrimento orizzontale, se presente, la finestra attiva.|  
|[CMFCTabCtrl::HideInactiveWindow](../Topic/CMFCTabCtrl::HideInactiveWindow.md)|Specifica se il framework viene utilizzato per visualizzare le finestre di controllo tab inattive.|  
|[CMFCTabCtrl::HideNoTabs](../Topic/CMFCTabCtrl::HideNoTabs.md)|Abilita o disabilita disegnare l'area della scheda se non sono visibili schede.|  
|[CMFCTabCtrl::HideSingleTab](../Topic/CMFCTabCtrl::HideSingleTab.md)|Abilita o disabilita disegnare una scheda quando esiste una sola finestra a schede.  \(Override [CMFCBaseTabCtrl::HideSingleTab](../Topic/CMFCBaseTabCtrl::HideSingleTab.md)\).|  
|[CMFCTabCtrl::IsActiveInMDITabGroup](../Topic/CMFCTabCtrl::IsActiveInMDITabGroup.md)|Indica se la scheda corrente di un controllo scheda è la scheda attiva in un gruppo della scheda dell'interfaccia a documenti multipli.|  
|[CMFCTabCtrl::IsActiveTabBoldFont](../Topic/CMFCTabCtrl::IsActiveTabBoldFont.md)|Indica se il testo della scheda attiva visualizzati utilizzando grassetto.|  
|[CMFCTabCtrl::IsActiveTabCloseButton](../Topic/CMFCTabCtrl::IsActiveTabCloseButton.md)|Indica se il pulsante in \(**x**\) visualizzato in una scheda attiva o nell'angolo superiore destro dell'area della scheda.|  
|[CMFCTabCtrl::IsDrawFrame](../Topic/CMFCTabCtrl::IsDrawFrame.md)|Indica se la finestra a schede disegnare un rettangolo frame intorno ai riquadri incorporati.|  
|[CMFCTabCtrl::IsFlatFrame](../Topic/CMFCTabCtrl::IsFlatFrame.md)|Indica se il frame intorno all'area della scheda è piano o tridimensionale.|  
|[CMFCTabCtrl::IsFlatTab](../Topic/CMFCTabCtrl::IsFlatTab.md)|Indica se l'aspetto delle schede nel controllo Struttura a schede corrente è piano o meno.|  
|[CMFCTabCtrl::IsLeftRightRounded](../Topic/CMFCTabCtrl::IsLeftRightRounded.md)|Indica se l'aspetto del lato sinistro e destro di una scheda nel controllo Struttura a schede corrente viene arrotondato.|  
|[CMFCTabCtrl::IsMDITabGroup](../Topic/CMFCTabCtrl::IsMDITabGroup.md)|Indica se il controllo Struttura a schede corrente è contenuto nell'area client di una finestra dell'interfaccia a documenti multipli.|  
|[CMFCTabCtrl::IsOneNoteStyle](../Topic/CMFCTabCtrl::IsOneNoteStyle.md)|Indica se il controllo Struttura a schede corrente viene visualizzato in stile OneNote Microsoft.|  
|`CMFCTabCtrl::IsPtInTabArea`|Determina se un punto si trova all'area della scheda.  \(Override [CMFCBaseTabCtrl::IsPtInTabArea](../Topic/CMFCBaseTabCtrl::IsPtInTabArea.md)\).|  
|[CMFCTabCtrl::IsSharedScroll](../Topic/CMFCTabCtrl::IsSharedScroll.md)|Indica se il controllo Struttura a schede corrente include una barra di scorrimento che può scorrere le tabulazioni come gruppo.|  
|[CMFCTabCtrl::IsTabDocumentsMenu](../Topic/CMFCTabCtrl::IsTabDocumentsMenu.md)|Indica se il controllo Struttura a schede video i pulsanti di scorrimento o un pulsante che consente di visualizzare un menu delle finestre a schede.|  
|[CMFCTabCtrl::IsVS2005Style](../Topic/CMFCTabCtrl::IsVS2005Style.md)|Indica se le schede video nello stile di Visual Studio .NET 2005.|  
|[CMFCTabCtrl::ModifyTabStyle](../Topic/CMFCTabCtrl::ModifyTabStyle.md)|Specifica l'aspetto delle schede nel controllo Struttura a schede corrente.|  
|`CMFCTabCtrl::MoveTab`|Sposta una scheda in un'altra posizione di scheda.  \(Override [CMFCBaseTabCtrl::MoveTab](../Topic/CMFCBaseTabCtrl::MoveTab.md)\).|  
|[CMFCTabCtrl::OnDragEnter](../Topic/CMFCTabCtrl::OnDragEnter.md)|Chiamato dal framework quando il cursore viene trascinato nella finestra di controllo tab.|  
|[CMFCTabCtrl::OnDragOver](../Topic/CMFCTabCtrl::OnDragOver.md)|Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato sulla finestra di destinazione di rilascio.  \(Override [CMFCBaseTabCtrl::OnDragOver](../Topic/CMFCBaseTabCtrl::OnDragOver.md)\).|  
|[CMFCTabCtrl::OnShowTabDocumentsMenu](../Topic/CMFCTabCtrl::OnShowTabDocumentsMenu.md)|Visualizzare un menu di scelta rapida delle finestre a schede, attende che l'utente non selezionare una scheda e effettuato la scheda selezionata la scheda attiva.|  
|`CMFCTabCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CMFCBaseTabCtrl::PreTranslateMessage](../Topic/CMFCBaseTabCtrl::PreTranslateMessage.md)\).|  
|`CMFCTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo Struttura a schede.  \(Override [CMFCBaseTabCtrl::RecalcLayout](../Topic/CMFCBaseTabCtrl::RecalcLayout.md)\).|  
|[CMFCTabCtrl::SetActiveInMDITabGroup](../Topic/CMFCTabCtrl::SetActiveInMDITabGroup.md)|Posiziona la scheda corrente di un controllo Struttura a schede della scheda attiva in un gruppo della scheda dell'interfaccia a documenti multipli.|  
|[CMFCTabCtrl::SetActiveTab](../Topic/CMFCTabCtrl::SetActiveTab.md)|Attiva la scheda.  \(Override [CMFCBaseTabCtrl::SetActiveTab](../Topic/CMFCBaseTabCtrl::SetActiveTab.md)\).|  
|[CMFCTabCtrl::SetActiveTabBoldFont](../Topic/CMFCTabCtrl::SetActiveTabBoldFont.md)|Abilita o disabilita l'utilizzo di grassetto le schede attive.|  
|[CMFCTabCtrl::SetDrawFrame](../Topic/CMFCTabCtrl::SetDrawFrame.md)|Abilita o disabilita il rettangolo frame di drawinga intorno a una barra incorporata.|  
|[CMFCTabCtrl::SetFlatFrame](../Topic/CMFCTabCtrl::SetFlatFrame.md)|Specifica se creare un piano o un frame 3D nell'area della scheda.|  
|[CMFCTabCtrl::SetImageList](../Topic/CMFCTabCtrl::SetImageList.md)|Specifica un elenco.  \(Override [CMFCBaseTabCtrl::SetImageList](../Topic/CMFCBaseTabCtrl::SetImageList.md)\).|  
|[CMFCTabCtrl::SetResizeMode](../Topic/CMFCTabCtrl::SetResizeMode.md)|Specifica come il controllo scheda corrente può essere ridimensionato e visualizzare il controllo.|  
|[CMFCTabCtrl::SetTabMaxWidth](../Topic/CMFCTabCtrl::SetTabMaxWidth.md)|Specifica la larghezza massima della scheda in una finestra a schede.|  
|[CMFCTabCtrl::StopResize](../Topic/CMFCTabCtrl::StopResize.md)|Termina la corrente vengono ridimensionate l'operazione sul controllo Struttura a schede.|  
|`CMFCTabCtrl::SwapTabs`|Scambia una coppia delle schede.  \(Override [CMFCBaseTabCtrl::SwapTabs](../Topic/CMFCBaseTabCtrl::SwapTabs.md)\).|  
|[CMFCTabCtrl::SynchronizeScrollBar](../Topic/CMFCTabCtrl::SynchronizeScrollBar.md)|Estrae una barra di scorrimento orizzontale in un controllo Struttura a schede tale schede piane le visualizzazioni.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTabCtrl::m\_bEnableActivate](../Topic/CMFCTabCtrl::m_bEnableActivate.md)|Evita la visualizzazione attiva lo stato attivo perdita quando una nuova scheda viene inviata e attivata.|  
  
## Note  
 Supporta la classe `CMFCTabCtrl` :  
  
-   Stili del controllo Struttura a schede che includono tridimensionale, piano e pianamente con una barra di scorrimento orizzontale condivisa.  
  
-   Schede individuate nella parte superiore o inferiore della finestra.  
  
-   Schede che visualizza il testo, immagini, o testo e immagini.  
  
-   Schede che modificano il colore quando la scheda è attiva.  
  
-   Modifiche di dimensione del bordo per le schede regolabili.  
  
-   Finestre a schede staccabili.  
  
 La classe `CMFCTabCtrl` può essere utilizzata con una finestra di dialogo, ma è progettata per le applicazioni che utilizzano ancorare le barre di controllo come [!INCLUDE[ofprexcel](../../mfc/reference/includes/ofprexcel_md.md)] e [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  Per ulteriori informazioni, vedere [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
 Seguire questi passaggi per aggiungere un ridimensionabile, ancoraggio il controllo Struttura a schede nell'applicazione:  
  
1.  Creare un'istanza dell'oggetto [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).  
  
2.  Chiamare il metodo [CDockablePane::Create](../Topic/CDockablePane::Create.md).  
  
3.  Utilizzare [CBaseTabbedPane::AddTab](../Topic/CBaseTabbedPane::AddTab.md) o [CMFCBaseTabCtrl::InsertTab](../Topic/CMFCBaseTabCtrl::InsertTab.md) per aggiungere nuove schede.  
  
4.  Chiamare [CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md) in modo da poter essere ancorata il controllo scheda corrente di ancoraggio la finestra cornice principale.  
  
5.  Chiamare [CFrameWndEx::DockPane](../Topic/CFrameWndEx::DockPane.md) per ancorare la finestra a schede nella cornice principale.  
  
 Per un esempio di come creare una finestra a schede come barra di controllo di ancoraggio, vedere [CTabbedPane Class](../../mfc/reference/ctabbedpane-class.md).  Per utilizzare `CMFCTabCtrl` come controllo non di ancoraggio, creare un oggetto `CMFCTabCtrl` quindi chiamare [CMFCTabCtrl::Create](../Topic/CMFCTabCtrl::Create.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md)  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCTabCtrl` per configurare un oggetto `CMFCTabCtrl`.  Nell'esempio viene illustrato come aggiungere una scheda, mostrare il pulsante nella scheda attiva, abilitare le etichette modificabili della scheda e visualizzare un menu di scelta rapida di etichette di finestra a schede.  Questo esempio fa parte [esempio di raccolta di stato](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/CPP/cmfctabctrl-class_1.h)]  
[!code-cpp[NVC_MFC_StateCollection#3](../../mfc/reference/codesnippet/CPP/cmfctabctrl-class_2.cpp)]  
  
## Requisiti  
 **intestazione:** afxtabctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)