---
title: "Classe CMFCOutlookBar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCOutlookBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCOutlookBar (classe)"
ms.assetid: 2b335f71-ce99-4efd-b103-e65ba43ffc36
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 36
---
# Classe CMFCOutlookBar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nel riquadro a schede con l'aspetto **Riquadro di spostamento** in Microsoft Outlook 2000 o in Outlook 2003.  L'oggetto di `CMFCOutlookBar` contiene un oggetto di [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md) e una serie di schede.  Le schede possono essere oggetti di [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) o `CWnd`oggetti derivati da.  All'utente, la barra di Outlook viene visualizzato come una serie di pulsanti e di visualizzazione.  Quando l'utente fa clic su un pulsante, il riquadro del pulsante o il controllo corrispondente.  
  
## Sintassi  
  
```  
class CMFCOutlookBar : public CBaseTabbedPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCOutlookBar::CMFCOutlookBar`|Costruttore predefinito.|  
|`CMFCOutlookBar::~CMFCOutlookBar`|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](../Topic/CMFCOutlookBar::AllowDestroyEmptyTabbedPane.md)|Specifica se il riquadro a schede vuoto può eliminato.  \(Override [CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../Topic/CBaseTabbedPane::AllowDestroyEmptyTabbedPane.md)\).|  
|[CMFCOutlookBar::CanAcceptPane](../Topic/CMFCOutlookBar::CanAcceptPane.md)|Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook.  \(Override CDockablePane::CanAcceptPane\).|  
|[CMFCOutlookBar::CanSetCaptionTextToTabName](../Topic/CMFCOutlookBar::CanSetCaptionTextToTabName.md)|Determina se la barra del titolo del riquadro a schede video lo stesso testo della scheda attiva.  \(Override [CBaseTabbedPane::CanSetCaptionTextToTabName](../Topic/CBaseTabbedPane::CanSetCaptionTextToTabName.md)\).|  
|[CMFCOutlookBar::Create](../Topic/CMFCOutlookBar::Create.md)|Crea il controllo barra di Outlook.|  
|[CMFCOutlookBar::CreateCustomPage](../Topic/CMFCOutlookBar::CreateCustomPage.md)|Crea una scheda della barra di Outlook personalizzato.|  
|`CMFCOutlookBar::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCOutlookBar::DoesAllowDynInsertBefore](../Topic/CMFCOutlookBar::DoesAllowDynInsertBefore.md)|Determina se un utente può ancorare una barra di controllo al bordo esterno della barra di Outlook.|  
|[CMFCOutlookBar::FloatTab](../Topic/CMFCOutlookBar::FloatTab.md)|Esegue e un riquadro, ma solo se il riquadro attualmente si trova in una scheda staccabile.  \(Override [CBaseTabbedPane::FloatTab](../Topic/CBaseTabbedPane::FloatTab.md)\).|  
|[CMFCOutlookBar::GetButtonsFont](../Topic/CMFCOutlookBar::GetButtonsFont.md)|Restituisce il carattere del testo ai pulsanti della barra di Outlook.|  
|[CMFCOutlookBar::GetTabArea](../Topic/CMFCOutlookBar::GetTabArea.md)|Restituisce le dimensioni e la posizione delle aree della scheda sulla barra di Outlook.  \(Override [CBaseTabbedPane::GetTabArea](../Topic/CBaseTabbedPane::GetTabArea.md)\).|  
|`CMFCOutlookBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto di [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCOutlookBar::IsMode2003](../Topic/CMFCOutlookBar::IsMode2003.md)|Determina se il comportamento di riprodurre la barra di Outlook che Microsoft Office Outlook 2003 \(vedere le note\).|  
|[CMFCOutlookBar::OnAfterAnimation](../Topic/CMFCOutlookBar::OnAfterAnimation.md)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../Topic/CMFCOutlookBarTabCtrl::SetActiveTab.md) dopo la scheda attiva è stato impostato utilizzo dell'animazione.|  
|[CMFCOutlookBar::OnBeforeAnimation](../Topic/CMFCOutlookBar::OnBeforeAnimation.md)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../Topic/CMFCOutlookBarTabCtrl::SetActiveTab.md) prima che una scheda venga impostata come la scheda attiva utilizzo dell'animazione.|  
|[CMFCOutlookBar::OnScroll](../Topic/CMFCOutlookBar::OnScroll.md)|Chiamato dal framework se la barra di Outlook è scorrendo verso l'alto o verso il basso.|  
|[CMFCOutlookBar::RemoveCustomPage](../Topic/CMFCOutlookBar::RemoveCustomPage.md)|Rimuove una scheda della barra di Outlook personalizzato.|  
|[CMFCOutlookBar::SetButtonsFont](../Topic/CMFCOutlookBar::SetButtonsFont.md)|Imposta il tipo di carattere del testo ai pulsanti della barra di Outlook.|  
|[CMFCOutlookBar::SetMode2003](../Topic/CMFCOutlookBar::SetMode2003.md)|Specifica se il comportamento di riprodurre la barra di Outlook che Outlook 2003 \(vedere le note\).|  
  
## Note  
 Per un esempio di una barra di Outlook, vedere [Esempio OutlookDemo: Applicazione di OutlookDemo MFC](../../top/visual-cpp-samples.md).  
  
## Implementare la barra di Outlook  
 Per utilizzare `CMFCOutlookBar` controlli nell'applicazione, seguire questi passaggi:  
  
1.  Importare un oggetto di `CMFCOutlookBar` nella classe della finestra cornice principale.  
  
    ```  
    class CMainFrame : public CMDIFrameWnd  
     { ...  
         CMFCOutlookBar         m_wndOutlookBar;  
         CMFCOutlookBarPane     m_wndOutlookPane;  
    ... };  
    ```  
  
2.  Nell'elaborare il messaggio di `WM_CREATE` nella cornice principale, chiamare il metodo di [CMFCOutlookBar::Create](../Topic/CMFCOutlookBar::Create.md) per creare il controllo Struttura a schede della barra di Outlook.  
  
    ```  
    m_wndOutlookBar.Create (_T("Shortcuts"), this, CRect (0, 0, 100, 100), ID_VIEW_OUTLOOKBAR, WS_CHILD | WS_VISIBLE | CBRS_LEFT);  
    ```  
  
3.  Ottenere un puntatore a `CMFCOutlookBarTabCtrl` sottostante utilizzando [CBaseTabbedPane::GetUnderlyingWindow](../Topic/CBaseTabbedPane::GetUnderlyingWindow.md).  
  
    ```  
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();  
    ```  
  
4.  Creare un oggetto di [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) per ogni scheda contenente i pulsanti.  
  
    ```  
    m_wndOutlookPane.Create (&m_wndOutlookBar, AFX_DEFAULT_TOOLBAR_STYLE, ID_OUTLOOK_PANE_GENERAL, AFX_CBRS_FLOAT | AFX_CBRS_RESIZE);  
    // make the Outlook pane detachable (enable docking)  
    m_wndOutlookPane.EnableDocking (CBRS_ALIGN_ANY);  
    // add buttons  
    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_MAINFRAME), "About", ID_APP_ABOUT);  
    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_CUSTOM_OPEN_ICON), "Open", ID_FILE_OPEN);  
    ```  
  
5.  Chiamare [CMFCBaseTabCtrl::AddTab](../Topic/CMFCBaseTabCtrl::AddTab.md) per aggiungere ogni nuova scheda.  Impostare il parametro di `bDetachable` a `FALSE` per rendere una pagina non staccabile.  In alternativa, utilizzare [CMFCOutlookBarTabCtrl::AddControl](../Topic/CMFCOutlookBarTabCtrl::AddControl.md) aggiungere pagine staccabili.  
  
    ```  
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1, TRUE);   
    ```  
  
6.  Per aggiungere `CWnd`\- il controllo derivato \(ad esempio, [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)\) come scheda, crea il controllo e la chiamata [CMFCBaseTabCtrl::AddTab](../Topic/CMFCBaseTabCtrl::AddTab.md) per aggiungerlo alla barra di Outlook.  
  
> [!NOTE]
>  Utilizzare il controllo ID univoco per ogni oggetto di [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) e per ogni `CWnd`oggetto derivato da.  
  
 Per aggiungere o rimuovere dinamicamente le nuove pagine di runtime, utilizzare [CMFCOutlookBar::CreateCustomPage](../Topic/CMFCOutlookBar::CreateCustomPage.md) e [CMFCOutlookBar::RemoveCustomPage](../Topic/CMFCOutlookBar::RemoveCustomPage.md).  
  
## Modalità di Outlook 2003  
 In modalità di Outlook 2003, i pulsanti della scheda sono posizionati nella parte inferiore del riquadro della barra di Outlook.  Quando non esiste spazio sufficiente per visualizzare i pulsanti, come icone in un'area del tipo di barra degli strumenti lungo il bordo inferiore del riquadro.  
  
 Utilizzo [CMFCOutlookBar::SetMode2003](../Topic/CMFCOutlookBar::SetMode2003.md) attivare la modalità di Outlook 2003.  Utilizzare [CMFCOutlookBarTabCtrl::SetToolbarImageList](../Topic/CMFCOutlookBarTabCtrl::SetToolbarImageList.md) per impostare la bitmap contenente le icone visualizzate nella parte inferiore della barra di Outlook.  Le icone nella bitmap devono essere ordinate dall'indice di tabulazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
 [CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)  
  
## Requisiti  
 **Intestazione:** afxoutlookbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)   
 [CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)   
 [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md)