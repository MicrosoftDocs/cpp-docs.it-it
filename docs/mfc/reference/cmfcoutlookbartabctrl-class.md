---
title: "CMFCOutlookBarTabCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCOutlookBarTabCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCOutlookBarTabCtrl class"
ms.assetid: b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b
caps.latest.revision: 26
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCOutlookBarTabCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un controllo Struttura a schede che ha l'aspetto visivo **Riquadro di navigazione** in Microsoft Outlook.  
  
## Sintassi  
  
```  
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Costruttore predefinito.|  
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarTabCtrl::AddControl](../Topic/CMFCOutlookBarTabCtrl::AddControl.md)|Aggiunge un controllo Windows come nuova scheda nella barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Chiamato dal framework per determinare le dimensioni della casella di modifica che viene visualizzato quando un utente rinomina una scheda.  \(Override `CMFCBaseTabCtrl::CalcRectEdit`\).|  
|[CMFCOutlookBarTabCtrl::CanShowFewerPageButtons](../Topic/CMFCOutlookBarTabCtrl::CanShowFewerPageButtons.md)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se meno pulsanti della scheda della barra di Outlook è possibile visualizzare attualmente visibile.|  
|[CMFCOutlookBarTabCtrl::CanShowMorePageButtons](../Topic/CMFCOutlookBarTabCtrl::CanShowMorePageButtons.md)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se più pulsanti della scheda della barra di Outlook è possibile visualizzare attualmente visibile.|  
|[CMFCOutlookBarTabCtrl::Create](../Topic/CMFCOutlookBarTabCtrl::Create.md)|Crea il controllo Struttura a schede della barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCOutlookBarTabCtrl::EnableAnimation](../Topic/CMFCOutlookBarTabCtrl::EnableAnimation.md)|Specifica se l'animazione che si verifica durante passare tra le schede attive è abilitata.|  
|[CMFCOutlookBarTabCtrl::EnableInPlaceEdit](../Topic/CMFCOutlookBarTabCtrl::EnableInPlaceEdit.md)|Specifica se l'utente può modificare le etichette di testo nei pulsanti della scheda della barra di Outlook.  \(Override [CMFCBaseTabCtrl::EnableInPlaceEdit](../Topic/CMFCBaseTabCtrl::EnableInPlaceEdit.md)\).|  
|[CMFCOutlookBarTabCtrl::EnableScrollButtons](../Topic/CMFCOutlookBarTabCtrl::EnableScrollButtons.md)|Chiamato dal framework per abilitare i pulsanti che consentono all'utente per lo spostamento tra i pulsanti nel riquadro della barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifica il riquadro contenente un punto specificato.  \(Override [CMFCBaseTabCtrl::FindTargetWnd](../Topic/CMFCBaseTabCtrl::FindTargetWnd.md)\).|  
|[CMFCOutlookBarTabCtrl::GetBorderSize](../Topic/CMFCOutlookBarTabCtrl::GetBorderSize.md)|Restituisce la dimensione del bordo del controllo scheda di Outlook.|  
|`CMFCOutlookBarTabCtrl::GetTabArea`|Recupera la dimensione e la posizione dell'area della scheda di controllo tab.  \(Override [CMFCBaseTabCtrl::GetTabArea](../Topic/CMFCBaseTabCtrl::GetTabArea.md)\).|  
|`CMFCOutlookBarTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCOutlookBarTabCtrl::GetVisiblePageButtons](../Topic/CMFCOutlookBarTabCtrl::GetVisiblePageButtons.md)||  
|[CMFCOutlookBarTabCtrl::IsAnimation](../Topic/CMFCOutlookBarTabCtrl::IsAnimation.md)|Determina se l'animazione che si verifica durante passare tra le schede attive è abilitata.|  
|[CMFCOutlookBarTabCtrl::IsMode2003](../Topic/CMFCOutlookBarTabCtrl::IsMode2003.md)|Determina se il controllo Struttura a schede della barra di Outlook è in modo che emula Microsoft Outlook 2003.|  
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determina se un punto si trova all'area della scheda.  \(Override [CMFCBaseTabCtrl::IsPtInTabArea](../Topic/CMFCBaseTabCtrl::IsPtInTabArea.md)\).|  
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determina se una scheda è staccabile.  \(Override [CMFCBaseTabCtrl::IsTabDetachable](../Topic/CMFCBaseTabCtrl::IsTabDetachable.md)\).|  
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Chiamato dal framework quando una scheda viene inserita o rimossa.  \(Override `CMFCBaseTabCtrl::OnChangeTabs`\).|  
|[CMFCOutlookBarTabCtrl::OnShowFewerPageButtons](../Topic/CMFCOutlookBarTabCtrl::OnShowFewerPageButtons.md)|Chiamato dal framework per ridurre il numero di pulsanti della scheda visibili.|  
|[CMFCOutlookBarTabCtrl::OnShowMorePageButtons](../Topic/CMFCOutlookBarTabCtrl::OnShowMorePageButtons.md)|Chiamato dal framework per aumentare il numero di pulsanti della scheda visibili.|  
|[CMFCOutlookBarTabCtrl::OnShowOptions](../Topic/CMFCOutlookBarTabCtrl::OnShowOptions.md)|Visualizzare la finestra di dialogo **Opzioni riquadro di navigazione**.|  
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo Struttura a schede.  \(Override [CMFCBaseTabCtrl::RecalcLayout](../Topic/CMFCBaseTabCtrl::RecalcLayout.md)\).|  
|[CMFCOutlookBarTabCtrl::SetActiveTab](../Topic/CMFCOutlookBarTabCtrl::SetActiveTab.md)|Posiziona la scheda attiva.  \(Override [CMFCBaseTabCtrl::SetActiveTab](../Topic/CMFCBaseTabCtrl::SetActiveTab.md)\).|  
|[CMFCOutlookBarTabCtrl::SetBorderSize](../Topic/CMFCOutlookBarTabCtrl::SetBorderSize.md)|Imposta la dimensione del bordo del controllo scheda di Outlook.|  
|[CMFCOutlookBarTabCtrl::SetPageButtonTextAlign](../Topic/CMFCOutlookBarTabCtrl::SetPageButtonTextAlign.md)|Impostato l'allineamento delle etichette di testo nei pulsanti della scheda della barra di Outlook.|  
|[CMFCOutlookBarTabCtrl::SetToolbarImageList](../Topic/CMFCOutlookBarTabCtrl::SetToolbarImageList.md)|Imposta la bitmap contenente le icone visualizzate nella parte inferiore della barra di Outlook in modalità di Outlook 2003 \(vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)\).|  
|[CMFCOutlookBarTabCtrl::SetVisiblePageButtons](../Topic/CMFCOutlookBarTabCtrl::SetVisiblePageButtons.md)||  
  
## Note  
 Per creare un Outlook escludere che supporti di ancoraggio, utilizzare un oggetto `CMFCOutlookBar` per ospitare il controllo Struttura a schede della barra di Outlook.  Per ulteriori informazioni, vedere [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un oggetto `CMFCOutlookBarTabCtrl` e utilizzare i vari metodi in `CMFCOutlookBarTabCtrl` classe.  L'esempio mostra come attivare la modifica sul postoetichetta di testo sui pulsanti della scheda della barra di Outlook, supportano l'animazione, abilitare il quadratino di spostamento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook, impostare la dimensione del bordo del controllo scheda di Outlook e impostare l'allineamento delle etichette di testo nei pulsanti della scheda della barra di Outlook.  Questo frammento di codice fa parte [Esempio demo di Outlook](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo#1](../../mfc/reference/codesnippet/CPP/cmfcoutlookbartabctrl-class_1.cpp)]  
[!code-cpp[NVC_MFC_OutlookDemo#2](../../mfc/reference/codesnippet/CPP/cmfcoutlookbartabctrl-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxoutlookbartabctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCBaseTabCtrl Class](../../mfc/reference/cmfcbasetabctrl-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md)